/* Generated from batch-driver.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: batch-driver.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -no-lambda-info -emit-import-library chicken.compiler.batch-driver -output-file batch-driver.c
   unit: batch-driver
   uses: user-pass c-backend c-platform lfa2 scrutinizer optimizer compiler compiler-syntax support port expand data-structures posix pathname eval internal extras file library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_user_2dpass_toplevel)
C_extern void C_ccall C_user_2dpass_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dbackend_toplevel)
C_extern void C_ccall C_c_2dbackend_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dplatform_toplevel)
C_extern void C_ccall C_c_2dplatform_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_extern void C_ccall C_lfa2_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scrutinizer_toplevel)
C_extern void C_ccall C_scrutinizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_extern void C_ccall C_optimizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_extern void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_extern void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_extern void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_extern void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_extern void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_extern void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_extern void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[499];
static double C_possibly_force_alignment;


C_noret_decl(f8837)
static void C_ccall f8837(C_word c,C_word *av) C_noret;
C_noret_decl(f9493)
static void C_ccall f9493(C_word c,C_word *av) C_noret;
C_noret_decl(f9499)
static void C_ccall f9499(C_word c,C_word *av) C_noret;
C_noret_decl(f9505)
static void C_ccall f9505(C_word c,C_word *av) C_noret;
C_noret_decl(f9511)
static void C_ccall f9511(C_word c,C_word *av) C_noret;
C_noret_decl(f9519)
static void C_ccall f9519(C_word c,C_word *av) C_noret;
C_noret_decl(f9525)
static void C_ccall f9525(C_word c,C_word *av) C_noret;
C_noret_decl(f9537)
static void C_ccall f9537(C_word c,C_word *av) C_noret;
C_noret_decl(f9545)
static void C_ccall f9545(C_word c,C_word *av) C_noret;
C_noret_decl(f9555)
static void C_ccall f9555(C_word c,C_word *av) C_noret;
C_noret_decl(f9575)
static void C_ccall f9575(C_word c,C_word *av) C_noret;
C_noret_decl(f9581)
static void C_ccall f9581(C_word c,C_word *av) C_noret;
C_noret_decl(f9595)
static void C_ccall f9595(C_word c,C_word *av) C_noret;
C_noret_decl(f9601)
static void C_ccall f9601(C_word c,C_word *av) C_noret;
C_noret_decl(f9607)
static void C_ccall f9607(C_word c,C_word *av) C_noret;
C_noret_decl(f9613)
static void C_ccall f9613(C_word c,C_word *av) C_noret;
C_noret_decl(f9619)
static void C_ccall f9619(C_word c,C_word *av) C_noret;
C_noret_decl(f9641)
static void C_ccall f9641(C_word c,C_word *av) C_noret;
C_noret_decl(f9657)
static void C_ccall f9657(C_word c,C_word *av) C_noret;
C_noret_decl(f9663)
static void C_ccall f9663(C_word c,C_word *av) C_noret;
C_noret_decl(f9669)
static void C_ccall f9669(C_word c,C_word *av) C_noret;
C_noret_decl(f9675)
static void C_ccall f9675(C_word c,C_word *av) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word *av) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word *av) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word *av) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word *av) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word *av) C_noret;
C_noret_decl(f_2753)
static void C_ccall f_2753(C_word c,C_word *av) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word *av) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word *av) C_noret;
C_noret_decl(f_2762)
static void C_ccall f_2762(C_word c,C_word *av) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word *av) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word *av) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word *av) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word *av) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word *av) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word *av) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word *av) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word *av) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word *av) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word *av) C_noret;
C_noret_decl(f_2993)
static void f_2993(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3008)
static void f_3008(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3016)
static void f_3016(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word *av) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word *av) C_noret;
C_noret_decl(f_3048)
static void f_3048(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word *av) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word *av) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word *av) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3080)
static void f_3080(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word *av) C_noret;
C_noret_decl(f_3129)
static void f_3129(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3197)
static void f_3197(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3203)
static void f_3203(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word *av) C_noret;
C_noret_decl(f_3289)
static void f_3289(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word *av) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word *av) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word *av) C_noret;
C_noret_decl(f_3736)
static void f_3736(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3763)
static void f_3763(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word *av) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word *av) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word *av) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word *av) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word *av) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word *av) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word *av) C_noret;
C_noret_decl(f_4106)
static void C_ccall f_4106(C_word c,C_word *av) C_noret;
C_noret_decl(f_4109)
static void C_ccall f_4109(C_word c,C_word *av) C_noret;
C_noret_decl(f_4115)
static void C_ccall f_4115(C_word c,C_word *av) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word *av) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word *av) C_noret;
C_noret_decl(f_4127)
static void C_ccall f_4127(C_word c,C_word *av) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word *av) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133(C_word c,C_word *av) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word *av) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word *av) C_noret;
C_noret_decl(f_4145)
static void C_ccall f_4145(C_word c,C_word *av) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word *av) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word *av) C_noret;
C_noret_decl(f_4157)
static void C_ccall f_4157(C_word c,C_word *av) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word *av) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word *av) C_noret;
C_noret_decl(f_4171)
static void f_4171(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word *av) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word *av) C_noret;
C_noret_decl(f_4198)
static void C_ccall f_4198(C_word c,C_word *av) C_noret;
C_noret_decl(f_4211)
static void f_4211(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word *av) C_noret;
C_noret_decl(f_4234)
static void f_4234(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word *av) C_noret;
C_noret_decl(f_4257)
static void f_4257(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word *av) C_noret;
C_noret_decl(f_4280)
static void f_4280(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4284)
static void f_4284(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word *av) C_noret;
C_noret_decl(f_4299)
static void C_ccall f_4299(C_word c,C_word *av) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word *av) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word *av) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word *av) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word *av) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word *av) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word *av) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word *av) C_noret;
C_noret_decl(f_4342)
static void C_ccall f_4342(C_word c,C_word *av) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346(C_word c,C_word *av) C_noret;
C_noret_decl(f_4354)
static void f_4354(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4364)
static void C_ccall f_4364(C_word c,C_word *av) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word *av) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word *av) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word *av) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word *av) C_noret;
C_noret_decl(f_4422)
static void C_ccall f_4422(C_word c,C_word *av) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word *av) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word *av) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word *av) C_noret;
C_noret_decl(f_4481)
static void C_ccall f_4481(C_word c,C_word *av) C_noret;
C_noret_decl(f_4490)
static void f_4490(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word *av) C_noret;
C_noret_decl(f_4514)
static void f_4514(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4520)
static void C_ccall f_4520(C_word c,C_word *av) C_noret;
C_noret_decl(f_4593)
static void f_4593(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4599)
static void C_ccall f_4599(C_word c,C_word *av) C_noret;
C_noret_decl(f_4602)
static void C_ccall f_4602(C_word c,C_word *av) C_noret;
C_noret_decl(f_4605)
static void C_ccall f_4605(C_word c,C_word *av) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word *av) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word *av) C_noret;
C_noret_decl(f_4952)
static void f_4952(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4983)
static void C_ccall f_4983(C_word c,C_word *av) C_noret;
C_noret_decl(f_4992)
static void f_4992(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4995)
static void f_4995(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word *av) C_noret;
C_noret_decl(f_5008)
static void f_5008(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5013)
static void C_ccall f_5013(C_word c,C_word *av) C_noret;
C_noret_decl(f_5016)
static void C_ccall f_5016(C_word c,C_word *av) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word *av) C_noret;
C_noret_decl(f_5024)
static void f_5024(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5047)
static void C_ccall f_5047(C_word c,C_word *av) C_noret;
C_noret_decl(f_5065)
static void f_5065(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word *av) C_noret;
C_noret_decl(f_5081)
static void C_ccall f_5081(C_word c,C_word *av) C_noret;
C_noret_decl(f_5084)
static void C_ccall f_5084(C_word c,C_word *av) C_noret;
C_noret_decl(f_5087)
static void C_ccall f_5087(C_word c,C_word *av) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090(C_word c,C_word *av) C_noret;
C_noret_decl(f_5092)
static void f_5092(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word *av) C_noret;
C_noret_decl(f_5112)
static void C_ccall f_5112(C_word c,C_word *av) C_noret;
C_noret_decl(f_5114)
static void f_5114(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5121)
static void C_ccall f_5121(C_word c,C_word *av) C_noret;
C_noret_decl(f_5127)
static void C_ccall f_5127(C_word c,C_word *av) C_noret;
C_noret_decl(f_5130)
static void C_ccall f_5130(C_word c,C_word *av) C_noret;
C_noret_decl(f_5133)
static void C_ccall f_5133(C_word c,C_word *av) C_noret;
C_noret_decl(f_5136)
static void C_ccall f_5136(C_word c,C_word *av) C_noret;
C_noret_decl(f_5141)
static void f_5141(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word *av) C_noret;
C_noret_decl(f_5153)
static void C_ccall f_5153(C_word c,C_word *av) C_noret;
C_noret_decl(f_5164)
static void f_5164(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word *av) C_noret;
C_noret_decl(f_5197)
static void f_5197(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5245)
static void C_ccall f_5245(C_word c,C_word *av) C_noret;
C_noret_decl(f_5254)
static void C_ccall f_5254(C_word c,C_word *av) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word *av) C_noret;
C_noret_decl(f_5265)
static void C_ccall f_5265(C_word c,C_word *av) C_noret;
C_noret_decl(f_5271)
static void C_ccall f_5271(C_word c,C_word *av) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word *av) C_noret;
C_noret_decl(f_5283)
static void C_ccall f_5283(C_word c,C_word *av) C_noret;
C_noret_decl(f_5289)
static void C_ccall f_5289(C_word c,C_word *av) C_noret;
C_noret_decl(f_5295)
static void C_ccall f_5295(C_word c,C_word *av) C_noret;
C_noret_decl(f_5312)
static void f_5312(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5321)
static void C_ccall f_5321(C_word c,C_word *av) C_noret;
C_noret_decl(f_5352)
static void C_ccall f_5352(C_word c,C_word *av) C_noret;
C_noret_decl(f_5356)
static void C_ccall f_5356(C_word c,C_word *av) C_noret;
C_noret_decl(f_5372)
static void C_ccall f_5372(C_word c,C_word *av) C_noret;
C_noret_decl(f_5376)
static void C_ccall f_5376(C_word c,C_word *av) C_noret;
C_noret_decl(f_5397)
static void f_5397(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5403)
static void f_5403(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5411)
static void f_5411(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5419)
static void C_ccall f_5419(C_word c,C_word *av) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423(C_word c,C_word *av) C_noret;
C_noret_decl(f_5432)
static void f_5432(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5440)
static void C_ccall f_5440(C_word c,C_word *av) C_noret;
C_noret_decl(f_5442)
static void f_5442(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5452)
static void C_ccall f_5452(C_word c,C_word *av) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word *av) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word *av) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word *av) C_noret;
C_noret_decl(f_5468)
static void C_ccall f_5468(C_word c,C_word *av) C_noret;
C_noret_decl(f_5472)
static void C_ccall f_5472(C_word c,C_word *av) C_noret;
C_noret_decl(f_5480)
static void C_ccall f_5480(C_word c,C_word *av) C_noret;
C_noret_decl(f_5482)
static void f_5482(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5484)
static void f_5484(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word *av) C_noret;
C_noret_decl(f_5491)
static void C_ccall f_5491(C_word c,C_word *av) C_noret;
C_noret_decl(f_5496)
static void C_ccall f_5496(C_word c,C_word *av) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502(C_word c,C_word *av) C_noret;
C_noret_decl(f_5507)
static void f_5507(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5512)
static void f_5512(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5571)
static void f_5571(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5574)
static void f_5574(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5577)
static void C_ccall f_5577(C_word c,C_word *av) C_noret;
C_noret_decl(f_5584)
static void C_ccall f_5584(C_word c,C_word *av) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word *av) C_noret;
C_noret_decl(f_5604)
static void C_ccall f_5604(C_word c,C_word *av) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word *av) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word *av) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word *av) C_noret;
C_noret_decl(f_5622)
static void f_5622(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5625)
static void f_5625(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5628)
static void C_ccall f_5628(C_word c,C_word *av) C_noret;
C_noret_decl(f_5631)
static void f_5631(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5634)
static void f_5634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5637)
static void f_5637(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5640)
static void f_5640(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5643)
static void f_5643(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5646)
static void f_5646(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5649)
static void f_5649(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5652)
static void f_5652(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5655)
static void f_5655(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5658)
static void f_5658(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5661)
static void f_5661(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5664)
static void f_5664(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5667)
static void f_5667(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5670)
static void f_5670(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5673)
static void f_5673(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5676)
static void f_5676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5679)
static void f_5679(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5682)
static void f_5682(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5685)
static void f_5685(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5688)
static void f_5688(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5693)
static void f_5693(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5698)
static void f_5698(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5703)
static void f_5703(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5708)
static void f_5708(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5713)
static void f_5713(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word *av) C_noret;
C_noret_decl(f_5719)
static void C_ccall f_5719(C_word c,C_word *av) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word *av) C_noret;
C_noret_decl(f_5725)
static void C_ccall f_5725(C_word c,C_word *av) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word *av) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word *av) C_noret;
C_noret_decl(f_5736)
static void f_5736(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5739)
static void f_5739(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5742)
static void f_5742(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5745)
static void f_5745(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5748)
static void f_5748(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word *av) C_noret;
C_noret_decl(f_5754)
static void C_ccall f_5754(C_word c,C_word *av) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word *av) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word *av) C_noret;
C_noret_decl(f_5766)
static void C_ccall f_5766(C_word c,C_word *av) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word *av) C_noret;
C_noret_decl(f_5779)
static void C_ccall f_5779(C_word c,C_word *av) C_noret;
C_noret_decl(f_5782)
static void C_ccall f_5782(C_word c,C_word *av) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word *av) C_noret;
C_noret_decl(f_5790)
static void C_ccall f_5790(C_word c,C_word *av) C_noret;
C_noret_decl(f_5805)
static void C_ccall f_5805(C_word c,C_word *av) C_noret;
C_noret_decl(f_5809)
static void C_ccall f_5809(C_word c,C_word *av) C_noret;
C_noret_decl(f_5817)
static void C_ccall f_5817(C_word c,C_word *av) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word *av) C_noret;
C_noret_decl(f_5823)
static void f_5823(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5826)
static void C_ccall f_5826(C_word c,C_word *av) C_noret;
C_noret_decl(f_5830)
static void C_ccall f_5830(C_word c,C_word *av) C_noret;
C_noret_decl(f_5834)
static void C_ccall f_5834(C_word c,C_word *av) C_noret;
C_noret_decl(f_5837)
static void f_5837(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5841)
static void C_ccall f_5841(C_word c,C_word *av) C_noret;
C_noret_decl(f_5845)
static void C_ccall f_5845(C_word c,C_word *av) C_noret;
C_noret_decl(f_5856)
static void C_ccall f_5856(C_word c,C_word *av) C_noret;
C_noret_decl(f_5859)
static void C_ccall f_5859(C_word c,C_word *av) C_noret;
C_noret_decl(f_5862)
static void f_5862(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5865)
static void C_ccall f_5865(C_word c,C_word *av) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word *av) C_noret;
C_noret_decl(f_5871)
static void C_ccall f_5871(C_word c,C_word *av) C_noret;
C_noret_decl(f_5879)
static void C_ccall f_5879(C_word c,C_word *av) C_noret;
C_noret_decl(f_5890)
static void f_5890(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5901)
static void C_ccall f_5901(C_word c,C_word *av) C_noret;
C_noret_decl(f_5908)
static void C_ccall f_5908(C_word c,C_word *av) C_noret;
C_noret_decl(f_5917)
static void C_ccall f_5917(C_word c,C_word *av) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word *av) C_noret;
C_noret_decl(f_5923)
static void C_ccall f_5923(C_word c,C_word *av) C_noret;
C_noret_decl(f_5929)
static void C_ccall f_5929(C_word c,C_word *av) C_noret;
C_noret_decl(f_5932)
static void C_ccall f_5932(C_word c,C_word *av) C_noret;
C_noret_decl(f_5935)
static void C_ccall f_5935(C_word c,C_word *av) C_noret;
C_noret_decl(f_5938)
static void C_ccall f_5938(C_word c,C_word *av) C_noret;
C_noret_decl(f_5941)
static void C_ccall f_5941(C_word c,C_word *av) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word *av) C_noret;
C_noret_decl(f_5949)
static void C_ccall f_5949(C_word c,C_word *av) C_noret;
C_noret_decl(f_5952)
static void C_ccall f_5952(C_word c,C_word *av) C_noret;
C_noret_decl(f_5955)
static void C_ccall f_5955(C_word c,C_word *av) C_noret;
C_noret_decl(f_5958)
static void C_ccall f_5958(C_word c,C_word *av) C_noret;
C_noret_decl(f_5961)
static void C_ccall f_5961(C_word c,C_word *av) C_noret;
C_noret_decl(f_5964)
static void C_ccall f_5964(C_word c,C_word *av) C_noret;
C_noret_decl(f_5967)
static void C_ccall f_5967(C_word c,C_word *av) C_noret;
C_noret_decl(f_5970)
static void f_5970(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5973)
static void C_ccall f_5973(C_word c,C_word *av) C_noret;
C_noret_decl(f_5976)
static void C_ccall f_5976(C_word c,C_word *av) C_noret;
C_noret_decl(f_5985)
static void C_ccall f_5985(C_word c,C_word *av) C_noret;
C_noret_decl(f_5989)
static void f_5989(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word *av) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word *av) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006(C_word c,C_word *av) C_noret;
C_noret_decl(f_6012)
static void C_ccall f_6012(C_word c,C_word *av) C_noret;
C_noret_decl(f_6015)
static void f_6015(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6021)
static void C_ccall f_6021(C_word c,C_word *av) C_noret;
C_noret_decl(f_6036)
static void C_ccall f_6036(C_word c,C_word *av) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word *av) C_noret;
C_noret_decl(f_6045)
static void C_ccall f_6045(C_word c,C_word *av) C_noret;
C_noret_decl(f_6048)
static void C_ccall f_6048(C_word c,C_word *av) C_noret;
C_noret_decl(f_6051)
static void C_ccall f_6051(C_word c,C_word *av) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word *av) C_noret;
C_noret_decl(f_6057)
static void C_ccall f_6057(C_word c,C_word *av) C_noret;
C_noret_decl(f_6062)
static void C_ccall f_6062(C_word c,C_word *av) C_noret;
C_noret_decl(f_6065)
static void C_ccall f_6065(C_word c,C_word *av) C_noret;
C_noret_decl(f_6068)
static void C_ccall f_6068(C_word c,C_word *av) C_noret;
C_noret_decl(f_6071)
static void C_ccall f_6071(C_word c,C_word *av) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word *av) C_noret;
C_noret_decl(f_6077)
static void C_ccall f_6077(C_word c,C_word *av) C_noret;
C_noret_decl(f_6080)
static void C_ccall f_6080(C_word c,C_word *av) C_noret;
C_noret_decl(f_6083)
static void C_ccall f_6083(C_word c,C_word *av) C_noret;
C_noret_decl(f_6086)
static void C_ccall f_6086(C_word c,C_word *av) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089(C_word c,C_word *av) C_noret;
C_noret_decl(f_6092)
static void C_ccall f_6092(C_word c,C_word *av) C_noret;
C_noret_decl(f_6095)
static void f_6095(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6101)
static void C_ccall f_6101(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_6107)
static void C_ccall f_6107(C_word c,C_word *av) C_noret;
C_noret_decl(f_6110)
static void C_ccall f_6110(C_word c,C_word *av) C_noret;
C_noret_decl(f_6113)
static void C_ccall f_6113(C_word c,C_word *av) C_noret;
C_noret_decl(f_6118)
static void f_6118(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6122)
static void C_ccall f_6122(C_word c,C_word *av) C_noret;
C_noret_decl(f_6125)
static void C_ccall f_6125(C_word c,C_word *av) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word *av) C_noret;
C_noret_decl(f_6132)
static void C_ccall f_6132(C_word c,C_word *av) C_noret;
C_noret_decl(f_6135)
static void C_ccall f_6135(C_word c,C_word *av) C_noret;
C_noret_decl(f_6138)
static void C_ccall f_6138(C_word c,C_word *av) C_noret;
C_noret_decl(f_6144)
static void C_ccall f_6144(C_word c,C_word *av) C_noret;
C_noret_decl(f_6147)
static void C_ccall f_6147(C_word c,C_word *av) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word *av) C_noret;
C_noret_decl(f_6158)
static void C_ccall f_6158(C_word c,C_word *av) C_noret;
C_noret_decl(f_6162)
static void C_ccall f_6162(C_word c,C_word *av) C_noret;
C_noret_decl(f_6165)
static void C_ccall f_6165(C_word c,C_word *av) C_noret;
C_noret_decl(f_6182)
static void C_ccall f_6182(C_word c,C_word *av) C_noret;
C_noret_decl(f_6194)
static void C_ccall f_6194(C_word c,C_word *av) C_noret;
C_noret_decl(f_6197)
static void C_ccall f_6197(C_word c,C_word *av) C_noret;
C_noret_decl(f_6200)
static void C_ccall f_6200(C_word c,C_word *av) C_noret;
C_noret_decl(f_6203)
static void C_ccall f_6203(C_word c,C_word *av) C_noret;
C_noret_decl(f_6206)
static void C_ccall f_6206(C_word c,C_word *av) C_noret;
C_noret_decl(f_6209)
static void C_ccall f_6209(C_word c,C_word *av) C_noret;
C_noret_decl(f_6222)
static void C_ccall f_6222(C_word c,C_word *av) C_noret;
C_noret_decl(f_6225)
static void C_ccall f_6225(C_word c,C_word *av) C_noret;
C_noret_decl(f_6228)
static void C_ccall f_6228(C_word c,C_word *av) C_noret;
C_noret_decl(f_6231)
static void C_ccall f_6231(C_word c,C_word *av) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235(C_word c,C_word *av) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word *av) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word *av) C_noret;
C_noret_decl(f_6244)
static void C_ccall f_6244(C_word c,C_word *av) C_noret;
C_noret_decl(f_6247)
static void C_ccall f_6247(C_word c,C_word *av) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word *av) C_noret;
C_noret_decl(f_6253)
static void C_ccall f_6253(C_word c,C_word *av) C_noret;
C_noret_decl(f_6258)
static void C_ccall f_6258(C_word c,C_word *av) C_noret;
C_noret_decl(f_6264)
static void C_ccall f_6264(C_word c,C_word *av) C_noret;
C_noret_decl(f_6268)
static void C_ccall f_6268(C_word c,C_word *av) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word *av) C_noret;
C_noret_decl(f_6274)
static void C_ccall f_6274(C_word c,C_word *av) C_noret;
C_noret_decl(f_6277)
static void C_ccall f_6277(C_word c,C_word *av) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280(C_word c,C_word *av) C_noret;
C_noret_decl(f_6283)
static void C_ccall f_6283(C_word c,C_word *av) C_noret;
C_noret_decl(f_6286)
static void C_ccall f_6286(C_word c,C_word *av) C_noret;
C_noret_decl(f_6289)
static void C_ccall f_6289(C_word c,C_word *av) C_noret;
C_noret_decl(f_6292)
static void C_ccall f_6292(C_word c,C_word *av) C_noret;
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word *av) C_noret;
C_noret_decl(f_6308)
static void C_ccall f_6308(C_word c,C_word *av) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word *av) C_noret;
C_noret_decl(f_6323)
static void C_ccall f_6323(C_word c,C_word *av) C_noret;
C_noret_decl(f_6328)
static void C_ccall f_6328(C_word c,C_word *av) C_noret;
C_noret_decl(f_6352)
static void C_ccall f_6352(C_word c,C_word *av) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word *av) C_noret;
C_noret_decl(f_6371)
static void C_ccall f_6371(C_word c,C_word *av) C_noret;
C_noret_decl(f_6373)
static void f_6373(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6398)
static void C_ccall f_6398(C_word c,C_word *av) C_noret;
C_noret_decl(f_6408)
static void C_ccall f_6408(C_word c,C_word *av) C_noret;
C_noret_decl(f_6411)
static void C_ccall f_6411(C_word c,C_word *av) C_noret;
C_noret_decl(f_6414)
static void C_ccall f_6414(C_word c,C_word *av) C_noret;
C_noret_decl(f_6417)
static void C_ccall f_6417(C_word c,C_word *av) C_noret;
C_noret_decl(f_6429)
static void C_ccall f_6429(C_word c,C_word *av) C_noret;
C_noret_decl(f_6432)
static void C_ccall f_6432(C_word c,C_word *av) C_noret;
C_noret_decl(f_6436)
static void C_ccall f_6436(C_word c,C_word *av) C_noret;
C_noret_decl(f_6445)
static void C_ccall f_6445(C_word c,C_word *av) C_noret;
C_noret_decl(f_6448)
static void C_ccall f_6448(C_word c,C_word *av) C_noret;
C_noret_decl(f_6451)
static void C_ccall f_6451(C_word c,C_word *av) C_noret;
C_noret_decl(f_6454)
static void C_ccall f_6454(C_word c,C_word *av) C_noret;
C_noret_decl(f_6457)
static void f_6457(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6463)
static void C_ccall f_6463(C_word c,C_word *av) C_noret;
C_noret_decl(f_6507)
static void C_ccall f_6507(C_word c,C_word *av) C_noret;
C_noret_decl(f_6513)
static void C_ccall f_6513(C_word c,C_word *av) C_noret;
C_noret_decl(f_6518)
static void C_ccall f_6518(C_word c,C_word *av) C_noret;
C_noret_decl(f_6527)
static void C_ccall f_6527(C_word c,C_word *av) C_noret;
C_noret_decl(f_6533)
static void C_ccall f_6533(C_word c,C_word *av) C_noret;
C_noret_decl(f_6542)
static void C_ccall f_6542(C_word c,C_word *av) C_noret;
C_noret_decl(f_6546)
static void C_ccall f_6546(C_word c,C_word *av) C_noret;
C_noret_decl(f_6552)
static void C_ccall f_6552(C_word c,C_word *av) C_noret;
C_noret_decl(f_6555)
static void C_ccall f_6555(C_word c,C_word *av) C_noret;
C_noret_decl(f_6560)
static void C_ccall f_6560(C_word c,C_word *av) C_noret;
C_noret_decl(f_6563)
static void C_ccall f_6563(C_word c,C_word *av) C_noret;
C_noret_decl(f_6566)
static void C_ccall f_6566(C_word c,C_word *av) C_noret;
C_noret_decl(f_6569)
static void C_ccall f_6569(C_word c,C_word *av) C_noret;
C_noret_decl(f_6572)
static void C_ccall f_6572(C_word c,C_word *av) C_noret;
C_noret_decl(f_6575)
static void C_ccall f_6575(C_word c,C_word *av) C_noret;
C_noret_decl(f_6578)
static void C_ccall f_6578(C_word c,C_word *av) C_noret;
C_noret_decl(f_6581)
static void C_ccall f_6581(C_word c,C_word *av) C_noret;
C_noret_decl(f_6587)
static void f_6587(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6597)
static void C_ccall f_6597(C_word c,C_word *av) C_noret;
C_noret_decl(f_6610)
static void f_6610(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6620)
static void C_ccall f_6620(C_word c,C_word *av) C_noret;
C_noret_decl(f_6639)
static void C_ccall f_6639(C_word c,C_word *av) C_noret;
C_noret_decl(f_6651)
static void C_ccall f_6651(C_word c,C_word *av) C_noret;
C_noret_decl(f_6662)
static void f_6662(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6672)
static void C_ccall f_6672(C_word c,C_word *av) C_noret;
C_noret_decl(f_6688)
static void C_ccall f_6688(C_word c,C_word *av) C_noret;
C_noret_decl(f_6694)
static void C_ccall f_6694(C_word c,C_word *av) C_noret;
C_noret_decl(f_6701)
static void C_ccall f_6701(C_word c,C_word *av) C_noret;
C_noret_decl(f_6709)
static void f_6709(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6719)
static void C_ccall f_6719(C_word c,C_word *av) C_noret;
C_noret_decl(f_6734)
static void C_ccall f_6734(C_word c,C_word *av) C_noret;
C_noret_decl(f_6738)
static void C_ccall f_6738(C_word c,C_word *av) C_noret;
C_noret_decl(f_6741)
static void C_ccall f_6741(C_word c,C_word *av) C_noret;
C_noret_decl(f_6744)
static void C_ccall f_6744(C_word c,C_word *av) C_noret;
C_noret_decl(f_6754)
static void C_ccall f_6754(C_word c,C_word *av) C_noret;
C_noret_decl(f_6759)
static void f_6759(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6784)
static void C_ccall f_6784(C_word c,C_word *av) C_noret;
C_noret_decl(f_6799)
static void C_ccall f_6799(C_word c,C_word *av) C_noret;
C_noret_decl(f_6805)
static void C_ccall f_6805(C_word c,C_word *av) C_noret;
C_noret_decl(f_6816)
static void C_ccall f_6816(C_word c,C_word *av) C_noret;
C_noret_decl(f_6820)
static void C_ccall f_6820(C_word c,C_word *av) C_noret;
C_noret_decl(f_6828)
static void C_ccall f_6828(C_word c,C_word *av) C_noret;
C_noret_decl(f_6831)
static void C_ccall f_6831(C_word c,C_word *av) C_noret;
C_noret_decl(f_6834)
static void C_ccall f_6834(C_word c,C_word *av) C_noret;
C_noret_decl(f_6837)
static void C_ccall f_6837(C_word c,C_word *av) C_noret;
C_noret_decl(f_6854)
static void f_6854(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6864)
static void C_ccall f_6864(C_word c,C_word *av) C_noret;
C_noret_decl(f_6885)
static void C_ccall f_6885(C_word c,C_word *av) C_noret;
C_noret_decl(f_6904)
static void C_ccall f_6904(C_word c,C_word *av) C_noret;
C_noret_decl(f_6906)
static void f_6906(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6931)
static void C_ccall f_6931(C_word c,C_word *av) C_noret;
C_noret_decl(f_6963)
static void C_ccall f_6963(C_word c,C_word *av) C_noret;
C_noret_decl(f_6967)
static void f_6967(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6971)
static void C_ccall f_6971(C_word c,C_word *av) C_noret;
C_noret_decl(f_6997)
static void f_6997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7031)
static void f_7031(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7056)
static void C_ccall f_7056(C_word c,C_word *av) C_noret;
C_noret_decl(f_7065)
static void f_7065(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7090)
static void C_ccall f_7090(C_word c,C_word *av) C_noret;
C_noret_decl(f_7115)
static void C_ccall f_7115(C_word c,C_word *av) C_noret;
C_noret_decl(f_7121)
static void f_7121(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7146)
static void C_ccall f_7146(C_word c,C_word *av) C_noret;
C_noret_decl(f_7156)
static void C_ccall f_7156(C_word c,C_word *av) C_noret;
C_noret_decl(f_7166)
static void C_ccall f_7166(C_word c,C_word *av) C_noret;
C_noret_decl(f_7168)
static void f_7168(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7193)
static void C_ccall f_7193(C_word c,C_word *av) C_noret;
C_noret_decl(f_7203)
static void C_ccall f_7203(C_word c,C_word *av) C_noret;
C_noret_decl(f_7207)
static void C_ccall f_7207(C_word c,C_word *av) C_noret;
C_noret_decl(f_7212)
static void f_7212(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7223)
static void C_ccall f_7223(C_word c,C_word *av) C_noret;
C_noret_decl(f_7233)
static void C_ccall f_7233(C_word c,C_word *av) C_noret;
C_noret_decl(f_7237)
static void C_ccall f_7237(C_word c,C_word *av) C_noret;
C_noret_decl(f_7247)
static void C_ccall f_7247(C_word c,C_word *av) C_noret;
C_noret_decl(f_7249)
static void f_7249(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7274)
static void C_ccall f_7274(C_word c,C_word *av) C_noret;
C_noret_decl(f_7283)
static void f_7283(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7308)
static void C_ccall f_7308(C_word c,C_word *av) C_noret;
C_noret_decl(f_7321)
static void C_ccall f_7321(C_word c,C_word *av) C_noret;
C_noret_decl(f_7324)
static void C_ccall f_7324(C_word c,C_word *av) C_noret;
C_noret_decl(f_7331)
static void C_ccall f_7331(C_word c,C_word *av) C_noret;
C_noret_decl(f_7336)
static void C_ccall f_7336(C_word c,C_word *av) C_noret;
C_noret_decl(f_7342)
static void f_7342(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7346)
static void C_ccall f_7346(C_word c,C_word *av) C_noret;
C_noret_decl(f_7364)
static void C_ccall f_7364(C_word c,C_word *av) C_noret;
C_noret_decl(f_7371)
static void C_ccall f_7371(C_word c,C_word *av) C_noret;
C_noret_decl(f_7379)
static void C_ccall f_7379(C_word c,C_word *av) C_noret;
C_noret_decl(f_7397)
static void C_ccall f_7397(C_word c,C_word *av) C_noret;
C_noret_decl(f_7403)
static void C_ccall f_7403(C_word c,C_word *av) C_noret;
C_noret_decl(f_7452)
static void C_ccall f_7452(C_word c,C_word *av) C_noret;
C_noret_decl(f_7459)
static void C_ccall f_7459(C_word c,C_word *av) C_noret;
C_noret_decl(f_7475)
static void C_ccall f_7475(C_word c,C_word *av) C_noret;
C_noret_decl(f_7478)
static void C_ccall f_7478(C_word c,C_word *av) C_noret;
C_noret_decl(f_7484)
static void C_ccall f_7484(C_word c,C_word *av) C_noret;
C_noret_decl(f_7486)
static void f_7486(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7520)
static void C_ccall f_7520(C_word c,C_word *av) C_noret;
C_noret_decl(f_7527)
static void C_ccall f_7527(C_word c,C_word *av) C_noret;
C_noret_decl(f_7532)
static void f_7532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7557)
static void C_ccall f_7557(C_word c,C_word *av) C_noret;
C_noret_decl(f_7568)
static void C_ccall f_7568(C_word c,C_word *av) C_noret;
C_noret_decl(f_7575)
static void C_ccall f_7575(C_word c,C_word *av) C_noret;
C_noret_decl(f_7589)
static void C_ccall f_7589(C_word c,C_word *av) C_noret;
C_noret_decl(f_7596)
static void C_ccall f_7596(C_word c,C_word *av) C_noret;
C_noret_decl(f_7601)
static void f_7601(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7626)
static void C_ccall f_7626(C_word c,C_word *av) C_noret;
C_noret_decl(f_7637)
static void C_ccall f_7637(C_word c,C_word *av) C_noret;
C_noret_decl(f_7639)
static void f_7639(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7649)
static void C_ccall f_7649(C_word c,C_word *av) C_noret;
C_noret_decl(f_7662)
static void f_7662(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7672)
static void C_ccall f_7672(C_word c,C_word *av) C_noret;
C_noret_decl(f_7685)
static void C_ccall f_7685(C_word c,C_word *av) C_noret;
C_noret_decl(f_7693)
static void C_ccall f_7693(C_word c,C_word *av) C_noret;
C_noret_decl(f_7695)
static void f_7695(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7705)
static void C_ccall f_7705(C_word c,C_word *av) C_noret;
C_noret_decl(f_7718)
static void C_ccall f_7718(C_word c,C_word *av) C_noret;
C_noret_decl(f_7726)
static void C_ccall f_7726(C_word c,C_word *av) C_noret;
C_noret_decl(f_7739)
static void C_ccall f_7739(C_word c,C_word *av) C_noret;
C_noret_decl(f_7748)
static void C_ccall f_7748(C_word c,C_word *av) C_noret;
C_noret_decl(f_7753)
static void C_ccall f_7753(C_word c,C_word *av) C_noret;
C_noret_decl(f_7764)
static void f_7764(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7774)
static void C_ccall f_7774(C_word c,C_word *av) C_noret;
C_noret_decl(f_7787)
static void f_7787(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7797)
static void C_ccall f_7797(C_word c,C_word *av) C_noret;
C_noret_decl(f_7841)
static void C_ccall f_7841(C_word c,C_word *av) C_noret;
C_noret_decl(f_7847)
static void C_ccall f_7847(C_word c,C_word *av) C_noret;
C_noret_decl(f_7849)
static void f_7849(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7859)
static void f_7859(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7874)
static void C_ccall f_7874(C_word c,C_word *av) C_noret;
C_noret_decl(f_7886)
static void C_ccall f_7886(C_word c,C_word *av) C_noret;
C_noret_decl(f_7889)
static void C_ccall f_7889(C_word c,C_word *av) C_noret;
C_noret_decl(f_7892)
static void C_ccall f_7892(C_word c,C_word *av) C_noret;
C_noret_decl(f_7900)
static void C_ccall f_7900(C_word c,C_word *av) C_noret;
C_noret_decl(f_7906)
static void C_ccall f_7906(C_word c,C_word *av) C_noret;
C_noret_decl(f_7938)
static void C_ccall f_7938(C_word c,C_word *av) C_noret;
C_noret_decl(f_7941)
static void C_ccall f_7941(C_word c,C_word *av) C_noret;
C_noret_decl(f_7948)
static void C_ccall f_7948(C_word c,C_word *av) C_noret;
C_noret_decl(f_7951)
static void C_ccall f_7951(C_word c,C_word *av) C_noret;
C_noret_decl(f_7954)
static void C_ccall f_7954(C_word c,C_word *av) C_noret;
C_noret_decl(f_7961)
static void C_ccall f_7961(C_word c,C_word *av) C_noret;
C_noret_decl(f_7964)
static void C_ccall f_7964(C_word c,C_word *av) C_noret;
C_noret_decl(f_7967)
static void C_ccall f_7967(C_word c,C_word *av) C_noret;
C_noret_decl(f_7974)
static void C_ccall f_7974(C_word c,C_word *av) C_noret;
C_noret_decl(f_7980)
static void C_ccall f_7980(C_word c,C_word *av) C_noret;
C_noret_decl(f_7984)
static void C_ccall f_7984(C_word c,C_word *av) C_noret;
C_noret_decl(f_8016)
static void C_ccall f_8016(C_word c,C_word *av) C_noret;
C_noret_decl(f_8073)
static void f_8073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8111)
static void C_ccall f_8111(C_word c,C_word *av) C_noret;
C_noret_decl(f_8116)
static void C_ccall f_8116(C_word c,C_word *av) C_noret;
C_noret_decl(f_8132)
static void C_ccall f_8132(C_word c,C_word *av) C_noret;
C_noret_decl(f_8137)
static void f_8137(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8162)
static void C_ccall f_8162(C_word c,C_word *av) C_noret;
C_noret_decl(f_8173)
static void C_ccall f_8173(C_word c,C_word *av) C_noret;
C_noret_decl(f_8187)
static void C_ccall f_8187(C_word c,C_word *av) C_noret;
C_noret_decl(f_8191)
static void C_ccall f_8191(C_word c,C_word *av) C_noret;
C_noret_decl(f_8213)
static void C_ccall f_8213(C_word c,C_word *av) C_noret;
C_noret_decl(f_8217)
static void C_ccall f_8217(C_word c,C_word *av) C_noret;
C_noret_decl(f_8218)
static void f_8218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8222)
static void C_ccall f_8222(C_word c,C_word *av) C_noret;
C_noret_decl(f_8246)
static void C_ccall f_8246(C_word c,C_word *av) C_noret;
C_noret_decl(f_8272)
static void C_ccall f_8272(C_word c,C_word *av) C_noret;
C_noret_decl(f_8280)
static void f_8280(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8287)
static void f_8287(C_word t0,C_word t1) C_noret;
C_noret_decl(C_batch_2ddriver_toplevel)
C_extern void C_ccall C_batch_2ddriver_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2993)
static void C_ccall trf_2993(C_word c,C_word *av) C_noret;
static void C_ccall trf_2993(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2993(t0,t1,t2,t3);}

C_noret_decl(trf_3008)
static void C_ccall trf_3008(C_word c,C_word *av) C_noret;
static void C_ccall trf_3008(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3008(t0,t1,t2);}

C_noret_decl(trf_3016)
static void C_ccall trf_3016(C_word c,C_word *av) C_noret;
static void C_ccall trf_3016(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3016(t0,t1,t2,t3);}

C_noret_decl(trf_3048)
static void C_ccall trf_3048(C_word c,C_word *av) C_noret;
static void C_ccall trf_3048(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3048(t0,t1,t2);}

C_noret_decl(trf_3080)
static void C_ccall trf_3080(C_word c,C_word *av) C_noret;
static void C_ccall trf_3080(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3080(t0,t1,t2);}

C_noret_decl(trf_3129)
static void C_ccall trf_3129(C_word c,C_word *av) C_noret;
static void C_ccall trf_3129(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3129(t0,t1,t2);}

C_noret_decl(trf_3197)
static void C_ccall trf_3197(C_word c,C_word *av) C_noret;
static void C_ccall trf_3197(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3197(t0,t1,t2);}

C_noret_decl(trf_3203)
static void C_ccall trf_3203(C_word c,C_word *av) C_noret;
static void C_ccall trf_3203(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3203(t0,t1,t2);}

C_noret_decl(trf_3289)
static void C_ccall trf_3289(C_word c,C_word *av) C_noret;
static void C_ccall trf_3289(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3289(t0,t1,t2);}

C_noret_decl(trf_3736)
static void C_ccall trf_3736(C_word c,C_word *av) C_noret;
static void C_ccall trf_3736(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3736(t0,t1,t2,t3);}

C_noret_decl(trf_3763)
static void C_ccall trf_3763(C_word c,C_word *av) C_noret;
static void C_ccall trf_3763(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3763(t0,t1,t2,t3);}

C_noret_decl(trf_4171)
static void C_ccall trf_4171(C_word c,C_word *av) C_noret;
static void C_ccall trf_4171(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4171(t0,t1);}

C_noret_decl(trf_4211)
static void C_ccall trf_4211(C_word c,C_word *av) C_noret;
static void C_ccall trf_4211(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4211(t0,t1,t2);}

C_noret_decl(trf_4234)
static void C_ccall trf_4234(C_word c,C_word *av) C_noret;
static void C_ccall trf_4234(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4234(t0,t1,t2);}

C_noret_decl(trf_4257)
static void C_ccall trf_4257(C_word c,C_word *av) C_noret;
static void C_ccall trf_4257(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4257(t0,t1,t2);}

C_noret_decl(trf_4280)
static void C_ccall trf_4280(C_word c,C_word *av) C_noret;
static void C_ccall trf_4280(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4280(t0,t1,t2);}

C_noret_decl(trf_4284)
static void C_ccall trf_4284(C_word c,C_word *av) C_noret;
static void C_ccall trf_4284(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4284(t0,t1);}

C_noret_decl(trf_4354)
static void C_ccall trf_4354(C_word c,C_word *av) C_noret;
static void C_ccall trf_4354(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4354(t0,t1,t2);}

C_noret_decl(trf_4490)
static void C_ccall trf_4490(C_word c,C_word *av) C_noret;
static void C_ccall trf_4490(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4490(t0,t1,t2);}

C_noret_decl(trf_4514)
static void C_ccall trf_4514(C_word c,C_word *av) C_noret;
static void C_ccall trf_4514(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4514(t0,t1);}

C_noret_decl(trf_4593)
static void C_ccall trf_4593(C_word c,C_word *av) C_noret;
static void C_ccall trf_4593(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4593(t0,t1);}

C_noret_decl(trf_4952)
static void C_ccall trf_4952(C_word c,C_word *av) C_noret;
static void C_ccall trf_4952(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4952(t0,t1);}

C_noret_decl(trf_4992)
static void C_ccall trf_4992(C_word c,C_word *av) C_noret;
static void C_ccall trf_4992(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4992(t0,t1);}

C_noret_decl(trf_4995)
static void C_ccall trf_4995(C_word c,C_word *av) C_noret;
static void C_ccall trf_4995(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4995(t0,t1);}

C_noret_decl(trf_5008)
static void C_ccall trf_5008(C_word c,C_word *av) C_noret;
static void C_ccall trf_5008(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5008(t0,t1);}

C_noret_decl(trf_5024)
static void C_ccall trf_5024(C_word c,C_word *av) C_noret;
static void C_ccall trf_5024(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5024(t0,t1);}

C_noret_decl(trf_5065)
static void C_ccall trf_5065(C_word c,C_word *av) C_noret;
static void C_ccall trf_5065(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5065(t0,t1,t2);}

C_noret_decl(trf_5092)
static void C_ccall trf_5092(C_word c,C_word *av) C_noret;
static void C_ccall trf_5092(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5092(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5114)
static void C_ccall trf_5114(C_word c,C_word *av) C_noret;
static void C_ccall trf_5114(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_5114(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5141)
static void C_ccall trf_5141(C_word c,C_word *av) C_noret;
static void C_ccall trf_5141(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5141(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5164)
static void C_ccall trf_5164(C_word c,C_word *av) C_noret;
static void C_ccall trf_5164(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5164(t0,t1,t2);}

C_noret_decl(trf_5197)
static void C_ccall trf_5197(C_word c,C_word *av) C_noret;
static void C_ccall trf_5197(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5197(t0,t1,t2,t3);}

C_noret_decl(trf_5312)
static void C_ccall trf_5312(C_word c,C_word *av) C_noret;
static void C_ccall trf_5312(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5312(t0,t1);}

C_noret_decl(trf_5397)
static void C_ccall trf_5397(C_word c,C_word *av) C_noret;
static void C_ccall trf_5397(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5397(t0,t1,t2);}

C_noret_decl(trf_5403)
static void C_ccall trf_5403(C_word c,C_word *av) C_noret;
static void C_ccall trf_5403(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5403(t0,t1,t2);}

C_noret_decl(trf_5411)
static void C_ccall trf_5411(C_word c,C_word *av) C_noret;
static void C_ccall trf_5411(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5411(t0,t1,t2);}

C_noret_decl(trf_5432)
static void C_ccall trf_5432(C_word c,C_word *av) C_noret;
static void C_ccall trf_5432(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5432(t0,t1);}

C_noret_decl(trf_5442)
static void C_ccall trf_5442(C_word c,C_word *av) C_noret;
static void C_ccall trf_5442(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5442(t0,t1,t2);}

C_noret_decl(trf_5482)
static void C_ccall trf_5482(C_word c,C_word *av) C_noret;
static void C_ccall trf_5482(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5482(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5484)
static void C_ccall trf_5484(C_word c,C_word *av) C_noret;
static void C_ccall trf_5484(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5484(t0,t1,t2,t3);}

C_noret_decl(trf_5507)
static void C_ccall trf_5507(C_word c,C_word *av) C_noret;
static void C_ccall trf_5507(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5507(t0,t1,t2);}

C_noret_decl(trf_5512)
static void C_ccall trf_5512(C_word c,C_word *av) C_noret;
static void C_ccall trf_5512(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5512(t0,t1);}

C_noret_decl(trf_5571)
static void C_ccall trf_5571(C_word c,C_word *av) C_noret;
static void C_ccall trf_5571(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5571(t0,t1);}

C_noret_decl(trf_5574)
static void C_ccall trf_5574(C_word c,C_word *av) C_noret;
static void C_ccall trf_5574(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5574(t0,t1);}

C_noret_decl(trf_5622)
static void C_ccall trf_5622(C_word c,C_word *av) C_noret;
static void C_ccall trf_5622(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5622(t0,t1);}

C_noret_decl(trf_5625)
static void C_ccall trf_5625(C_word c,C_word *av) C_noret;
static void C_ccall trf_5625(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5625(t0,t1);}

C_noret_decl(trf_5631)
static void C_ccall trf_5631(C_word c,C_word *av) C_noret;
static void C_ccall trf_5631(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5631(t0,t1);}

C_noret_decl(trf_5634)
static void C_ccall trf_5634(C_word c,C_word *av) C_noret;
static void C_ccall trf_5634(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5634(t0,t1);}

C_noret_decl(trf_5637)
static void C_ccall trf_5637(C_word c,C_word *av) C_noret;
static void C_ccall trf_5637(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5637(t0,t1);}

C_noret_decl(trf_5640)
static void C_ccall trf_5640(C_word c,C_word *av) C_noret;
static void C_ccall trf_5640(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5640(t0,t1);}

C_noret_decl(trf_5643)
static void C_ccall trf_5643(C_word c,C_word *av) C_noret;
static void C_ccall trf_5643(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5643(t0,t1);}

C_noret_decl(trf_5646)
static void C_ccall trf_5646(C_word c,C_word *av) C_noret;
static void C_ccall trf_5646(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5646(t0,t1);}

C_noret_decl(trf_5649)
static void C_ccall trf_5649(C_word c,C_word *av) C_noret;
static void C_ccall trf_5649(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5649(t0,t1);}

C_noret_decl(trf_5652)
static void C_ccall trf_5652(C_word c,C_word *av) C_noret;
static void C_ccall trf_5652(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5652(t0,t1);}

C_noret_decl(trf_5655)
static void C_ccall trf_5655(C_word c,C_word *av) C_noret;
static void C_ccall trf_5655(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5655(t0,t1);}

C_noret_decl(trf_5658)
static void C_ccall trf_5658(C_word c,C_word *av) C_noret;
static void C_ccall trf_5658(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5658(t0,t1);}

C_noret_decl(trf_5661)
static void C_ccall trf_5661(C_word c,C_word *av) C_noret;
static void C_ccall trf_5661(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5661(t0,t1);}

C_noret_decl(trf_5664)
static void C_ccall trf_5664(C_word c,C_word *av) C_noret;
static void C_ccall trf_5664(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5664(t0,t1);}

C_noret_decl(trf_5667)
static void C_ccall trf_5667(C_word c,C_word *av) C_noret;
static void C_ccall trf_5667(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5667(t0,t1);}

C_noret_decl(trf_5670)
static void C_ccall trf_5670(C_word c,C_word *av) C_noret;
static void C_ccall trf_5670(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5670(t0,t1);}

C_noret_decl(trf_5673)
static void C_ccall trf_5673(C_word c,C_word *av) C_noret;
static void C_ccall trf_5673(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5673(t0,t1);}

C_noret_decl(trf_5676)
static void C_ccall trf_5676(C_word c,C_word *av) C_noret;
static void C_ccall trf_5676(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5676(t0,t1);}

C_noret_decl(trf_5679)
static void C_ccall trf_5679(C_word c,C_word *av) C_noret;
static void C_ccall trf_5679(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5679(t0,t1);}

C_noret_decl(trf_5682)
static void C_ccall trf_5682(C_word c,C_word *av) C_noret;
static void C_ccall trf_5682(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5682(t0,t1);}

C_noret_decl(trf_5685)
static void C_ccall trf_5685(C_word c,C_word *av) C_noret;
static void C_ccall trf_5685(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5685(t0,t1);}

C_noret_decl(trf_5688)
static void C_ccall trf_5688(C_word c,C_word *av) C_noret;
static void C_ccall trf_5688(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5688(t0,t1);}

C_noret_decl(trf_5693)
static void C_ccall trf_5693(C_word c,C_word *av) C_noret;
static void C_ccall trf_5693(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5693(t0,t1);}

C_noret_decl(trf_5698)
static void C_ccall trf_5698(C_word c,C_word *av) C_noret;
static void C_ccall trf_5698(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5698(t0,t1);}

C_noret_decl(trf_5703)
static void C_ccall trf_5703(C_word c,C_word *av) C_noret;
static void C_ccall trf_5703(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5703(t0,t1);}

C_noret_decl(trf_5708)
static void C_ccall trf_5708(C_word c,C_word *av) C_noret;
static void C_ccall trf_5708(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5708(t0,t1);}

C_noret_decl(trf_5713)
static void C_ccall trf_5713(C_word c,C_word *av) C_noret;
static void C_ccall trf_5713(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5713(t0,t1);}

C_noret_decl(trf_5736)
static void C_ccall trf_5736(C_word c,C_word *av) C_noret;
static void C_ccall trf_5736(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5736(t0,t1);}

C_noret_decl(trf_5739)
static void C_ccall trf_5739(C_word c,C_word *av) C_noret;
static void C_ccall trf_5739(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5739(t0,t1);}

C_noret_decl(trf_5742)
static void C_ccall trf_5742(C_word c,C_word *av) C_noret;
static void C_ccall trf_5742(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5742(t0,t1);}

C_noret_decl(trf_5745)
static void C_ccall trf_5745(C_word c,C_word *av) C_noret;
static void C_ccall trf_5745(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5745(t0,t1);}

C_noret_decl(trf_5748)
static void C_ccall trf_5748(C_word c,C_word *av) C_noret;
static void C_ccall trf_5748(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5748(t0,t1);}

C_noret_decl(trf_5823)
static void C_ccall trf_5823(C_word c,C_word *av) C_noret;
static void C_ccall trf_5823(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5823(t0,t1);}

C_noret_decl(trf_5837)
static void C_ccall trf_5837(C_word c,C_word *av) C_noret;
static void C_ccall trf_5837(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5837(t0,t1);}

C_noret_decl(trf_5862)
static void C_ccall trf_5862(C_word c,C_word *av) C_noret;
static void C_ccall trf_5862(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5862(t0,t1);}

C_noret_decl(trf_5890)
static void C_ccall trf_5890(C_word c,C_word *av) C_noret;
static void C_ccall trf_5890(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5890(t0,t1);}

C_noret_decl(trf_5970)
static void C_ccall trf_5970(C_word c,C_word *av) C_noret;
static void C_ccall trf_5970(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5970(t0,t1);}

C_noret_decl(trf_5989)
static void C_ccall trf_5989(C_word c,C_word *av) C_noret;
static void C_ccall trf_5989(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5989(t0,t1,t2);}

C_noret_decl(trf_6015)
static void C_ccall trf_6015(C_word c,C_word *av) C_noret;
static void C_ccall trf_6015(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6015(t0,t1);}

C_noret_decl(trf_6095)
static void C_ccall trf_6095(C_word c,C_word *av) C_noret;
static void C_ccall trf_6095(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6095(t0,t1);}

C_noret_decl(trf_6118)
static void C_ccall trf_6118(C_word c,C_word *av) C_noret;
static void C_ccall trf_6118(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6118(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6373)
static void C_ccall trf_6373(C_word c,C_word *av) C_noret;
static void C_ccall trf_6373(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6373(t0,t1,t2);}

C_noret_decl(trf_6457)
static void C_ccall trf_6457(C_word c,C_word *av) C_noret;
static void C_ccall trf_6457(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6457(t0,t1);}

C_noret_decl(trf_6587)
static void C_ccall trf_6587(C_word c,C_word *av) C_noret;
static void C_ccall trf_6587(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6587(t0,t1,t2);}

C_noret_decl(trf_6610)
static void C_ccall trf_6610(C_word c,C_word *av) C_noret;
static void C_ccall trf_6610(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6610(t0,t1,t2);}

C_noret_decl(trf_6662)
static void C_ccall trf_6662(C_word c,C_word *av) C_noret;
static void C_ccall trf_6662(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6662(t0,t1,t2);}

C_noret_decl(trf_6709)
static void C_ccall trf_6709(C_word c,C_word *av) C_noret;
static void C_ccall trf_6709(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6709(t0,t1,t2);}

C_noret_decl(trf_6759)
static void C_ccall trf_6759(C_word c,C_word *av) C_noret;
static void C_ccall trf_6759(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6759(t0,t1,t2);}

C_noret_decl(trf_6854)
static void C_ccall trf_6854(C_word c,C_word *av) C_noret;
static void C_ccall trf_6854(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6854(t0,t1,t2);}

C_noret_decl(trf_6906)
static void C_ccall trf_6906(C_word c,C_word *av) C_noret;
static void C_ccall trf_6906(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6906(t0,t1,t2);}

C_noret_decl(trf_6967)
static void C_ccall trf_6967(C_word c,C_word *av) C_noret;
static void C_ccall trf_6967(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6967(t0,t1);}

C_noret_decl(trf_6997)
static void C_ccall trf_6997(C_word c,C_word *av) C_noret;
static void C_ccall trf_6997(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6997(t0,t1,t2);}

C_noret_decl(trf_7031)
static void C_ccall trf_7031(C_word c,C_word *av) C_noret;
static void C_ccall trf_7031(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7031(t0,t1,t2);}

C_noret_decl(trf_7065)
static void C_ccall trf_7065(C_word c,C_word *av) C_noret;
static void C_ccall trf_7065(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7065(t0,t1,t2);}

C_noret_decl(trf_7121)
static void C_ccall trf_7121(C_word c,C_word *av) C_noret;
static void C_ccall trf_7121(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7121(t0,t1,t2);}

C_noret_decl(trf_7168)
static void C_ccall trf_7168(C_word c,C_word *av) C_noret;
static void C_ccall trf_7168(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7168(t0,t1,t2);}

C_noret_decl(trf_7212)
static void C_ccall trf_7212(C_word c,C_word *av) C_noret;
static void C_ccall trf_7212(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7212(t0,t1,t2);}

C_noret_decl(trf_7249)
static void C_ccall trf_7249(C_word c,C_word *av) C_noret;
static void C_ccall trf_7249(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7249(t0,t1,t2);}

C_noret_decl(trf_7283)
static void C_ccall trf_7283(C_word c,C_word *av) C_noret;
static void C_ccall trf_7283(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7283(t0,t1,t2);}

C_noret_decl(trf_7342)
static void C_ccall trf_7342(C_word c,C_word *av) C_noret;
static void C_ccall trf_7342(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7342(t0,t1);}

C_noret_decl(trf_7486)
static void C_ccall trf_7486(C_word c,C_word *av) C_noret;
static void C_ccall trf_7486(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7486(t0,t1,t2);}

C_noret_decl(trf_7532)
static void C_ccall trf_7532(C_word c,C_word *av) C_noret;
static void C_ccall trf_7532(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7532(t0,t1,t2);}

C_noret_decl(trf_7601)
static void C_ccall trf_7601(C_word c,C_word *av) C_noret;
static void C_ccall trf_7601(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7601(t0,t1,t2);}

C_noret_decl(trf_7639)
static void C_ccall trf_7639(C_word c,C_word *av) C_noret;
static void C_ccall trf_7639(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7639(t0,t1,t2);}

C_noret_decl(trf_7662)
static void C_ccall trf_7662(C_word c,C_word *av) C_noret;
static void C_ccall trf_7662(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7662(t0,t1,t2);}

C_noret_decl(trf_7695)
static void C_ccall trf_7695(C_word c,C_word *av) C_noret;
static void C_ccall trf_7695(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7695(t0,t1,t2);}

C_noret_decl(trf_7764)
static void C_ccall trf_7764(C_word c,C_word *av) C_noret;
static void C_ccall trf_7764(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7764(t0,t1,t2);}

C_noret_decl(trf_7787)
static void C_ccall trf_7787(C_word c,C_word *av) C_noret;
static void C_ccall trf_7787(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7787(t0,t1,t2);}

C_noret_decl(trf_7849)
static void C_ccall trf_7849(C_word c,C_word *av) C_noret;
static void C_ccall trf_7849(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7849(t0,t1,t2);}

C_noret_decl(trf_7859)
static void C_ccall trf_7859(C_word c,C_word *av) C_noret;
static void C_ccall trf_7859(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7859(t0,t1);}

C_noret_decl(trf_8073)
static void C_ccall trf_8073(C_word c,C_word *av) C_noret;
static void C_ccall trf_8073(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8073(t0,t1,t2);}

C_noret_decl(trf_8137)
static void C_ccall trf_8137(C_word c,C_word *av) C_noret;
static void C_ccall trf_8137(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8137(t0,t1,t2);}

C_noret_decl(trf_8218)
static void C_ccall trf_8218(C_word c,C_word *av) C_noret;
static void C_ccall trf_8218(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8218(t0,t1,t2);}

C_noret_decl(trf_8280)
static void C_ccall trf_8280(C_word c,C_word *av) C_noret;
static void C_ccall trf_8280(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8280(t0,t1);}

C_noret_decl(trf_8287)
static void C_ccall trf_8287(C_word c,C_word *av) C_noret;
static void C_ccall trf_8287(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8287(t0,t1);}

/* f8837 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in ... */
static void C_ccall f8837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f8837,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9499,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[185];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* f9493 in k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in ... */
static void C_ccall f9493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9493,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9499 */
static void C_ccall f9499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9499,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9505 in k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in ... */
static void C_ccall f9505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9505,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9511 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in ... */
static void C_ccall f9511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9511,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9519 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in ... */
static void C_ccall f9519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9519,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9525 in k6455 in k6452 in k6449 in k6446 in k6443 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in ... */
static void C_ccall f9525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9525,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9537 in for-each-loop2044 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in ... */
static void C_ccall f9537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9537,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9545 in k6686 in for-each-loop2022 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in ... */
static void C_ccall f9545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9545,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9555 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in ... */
static void C_ccall f9555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9555,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9575 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in ... */
static void C_ccall f9575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9575,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9581 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in ... */
static void C_ccall f9581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9581,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9595 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in ... */
static void C_ccall f9595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9595,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9601 in k7401 in k7395 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in ... */
static void C_ccall f9601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9601,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9607 in k7401 in k7395 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in ... */
static void C_ccall f9607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9607,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9613 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in ... */
static void C_ccall f9613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9613,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9619 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in ... */
static void C_ccall f9619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9619,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9641 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in ... */
static void C_ccall f9641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9641,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9657 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in ... */
static void C_ccall f9657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9657,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9663 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in ... */
static void C_ccall f9663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9663,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9669 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in ... */
static void C_ccall f9669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9669,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* f9675 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in ... */
static void C_ccall f9675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9675,c,av);}
C_trace(C_text("batch-driver.scm:266: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[107];
av2[3]=t1;
tp(4,av2);}}

/* k2736 */
static void C_ccall f_2738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2738,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2741,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2739 in k2736 */
static void C_ccall f_2741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2741,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2744,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2742 in k2739 in k2736 */
static void C_ccall f_2744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2744,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2747,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2750,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2753,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2753,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2756,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_2dsyntax_toplevel(2,av2);}}

/* k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2759,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2762,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_toplevel(2,av2);}}

/* k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2762,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2765,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_optimizer_toplevel(2,av2);}}

/* k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2765,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2768,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2768,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2771,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scrutinizer_toplevel(2,av2);}}

/* k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
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
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2774,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lfa2_toplevel(2,av2);}}

/* k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2774,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2777,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_c_2dplatform_toplevel(2,av2);}}

/* k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2777,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2780,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_c_2dbackend_toplevel(2,av2);}}

/* k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2780,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2783,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_user_2dpass_toplevel(2,av2);}}

/* k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2783(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2783,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2786,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_file_toplevel(2,av2);}}

/* k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2786,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2789,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2789,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_2792(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2792,c,av);}
a=C_alloc(16);
t2=C_mutate(&lf[2] /* (set! chicken.compiler.batch-driver#append-map ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2993,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[6] /* (set! chicken.compiler.batch-driver#any ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3197,tmp=(C_word)a,a+=2,tmp));
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_mutate(&lf[8] /* (set! chicken.compiler.batch-driver#initialize-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4171,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_mutate(&lf[18] /* (set! chicken.compiler.batch-driver#display-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4280,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[83]+1 /* (set! chicken.compiler.batch-driver#compile-source-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4949,tmp=(C_word)a,a+=2,tmp));
t11=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void f_2993(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_2993,4,t1,t2,t3,t4);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t4))){
t5=C_i_check_list_2(t3,lf[3]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3008,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3008(t9,t1,t3);}
else{
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3048,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3048(t9,t1,t5);}}

/* foldr304 in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void f_3008(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3008,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3016,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3035,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g309 in foldr304 in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in ... */
static void f_3016(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3016,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3024,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:72: proc"));
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k3022 in g309 in foldr304 in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in ... */
static void C_ccall f_3024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3024,c,av);}
C_trace(C_text("mini-srfi-1.scm:72: scheme#append"));
t2=*((C_word*)lf[4]+1);{
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

/* k3033 in foldr304 in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in ... */
static void C_ccall f_3035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3035,c,av);}
C_trace(C_text("mini-srfi-1.scm:72: g309"));
t2=((C_word*)t0)[2];
f_3016(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void f_3048(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3048,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3055,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("mini-srfi-1.scm:74: any"));
f_3197(t3,*((C_word*)lf[7]+1),t2);}

/* k3053 in loop in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in ... */
static void C_ccall f_3055(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3055,c,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[5]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3127,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3129,a[2]=t5,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3129(t12,t8,((C_word*)t0)[4]);}}

/* k3060 in k3053 in loop in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in ... */
static void C_ccall f_3062(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3062,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3066,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3078,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3080,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3080(t11,t7,((C_word*)t0)[4]);}

/* k3064 in k3060 in k3053 in loop in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in ... */
static void C_ccall f_3066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3066,c,av);}
C_trace(C_text("mini-srfi-1.scm:76: scheme#append"));
t2=*((C_word*)lf[4]+1);{
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

/* k3076 in k3060 in k3053 in loop in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in ... */
static void C_ccall f_3078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3078,c,av);}
C_trace(C_text("mini-srfi-1.scm:77: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3048(t2,((C_word*)t0)[3],t1);}

/* map-loop346 in k3060 in k3053 in loop in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in ... */
static void f_3080(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3080,3,t0,t1,t2);}
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

/* k3125 in k3053 in loop in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in ... */
static void C_ccall f_3127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3127,c,av);}{
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

/* map-loop319 in k3053 in loop in chicken.compiler.batch-driver#append-map in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in ... */
static void f_3129(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3129,3,t0,t1,t2);}
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

/* chicken.compiler.batch-driver#any in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void f_3197(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3197,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3203,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3203(t7,t1,t3);}

/* loop in chicken.compiler.batch-driver#any in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void f_3203(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3203,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3213,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("mini-srfi-1.scm:88: pred"));
t4=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k3211 in loop in chicken.compiler.batch-driver#any in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in ... */
static void C_ccall f_3213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3213,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("mini-srfi-1.scm:89: loop"));
t2=((C_word*)((C_word*)t0)[3])[1];
f_3203(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[4]));}}

/* loop in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void f_3289(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3289,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_eqp(lf[137],t3);
if(C_truep(t4)){
C_trace(C_text("mini-srfi-1.scm:107: loop"));
t8=t1;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}
else{
t5=C_u_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3316,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:109: loop"));
t8=t6;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}}

/* k3314 in loop in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_3316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3316,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3717 in foldl592 in foldl580 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_3719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3719,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[2])[1];
f_3736(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)((C_word*)t0)[2])[1];
f_3736(t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}}

/* a3723 in foldl592 in foldl580 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_3724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3724,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_eqp(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* foldl592 in foldl580 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in ... */
static void f_3736(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_3736,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3719,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3724,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("mini-srfi-1.scm:175: any"));
f_3197(t6,t7,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* foldl580 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void f_3763(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_3763,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3781,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=C_i_check_list_2(t6,lf[380]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3736,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=((C_word*)t9)[1];
f_3736(t11,t5,t6,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3779 in foldl580 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_3781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3781,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3763(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a4077 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in ... */
static void C_ccall f_4078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4078,c,av);}
C_trace(C_text("batch-driver.scm:75: chicken.compiler.core#compute-database-statistics"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[224]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[224]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in ... */
static void C_ccall f_4084(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4084,c,av);}
a=C_alloc(11);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4091,a[2]=t1,a[3]=t8,a[4]=t7,a[5]=t6,a[6]=t5,a[7]=t4,a[8]=C_SCHEME_UNDEFINED,a[9]=t3,a[10]=t2,tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("batch-driver.scm:76: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2=av;
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t9;
av2[2]=lf[223];
av2[3]=lf[232];
tp(4,av2);}}

/* k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in ... */
static void C_ccall f_4091(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4091,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=C_mutate(((C_word *)t0)+8,t2);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4097,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:77: ##sys#print"));
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[231];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in ... */
static void C_ccall f_4097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4097,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4100,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("batch-driver.scm:77: ##sys#print"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[10];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t2)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in ... */
static void C_ccall f_4100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4100,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4103,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:77: ##sys#print"));
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[230];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in ... */
static void C_ccall f_4103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4103,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4106,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("batch-driver.scm:77: ##sys#print"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[9];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t2)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in ... */
static void C_ccall f_4106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4106,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=C_SCHEME_UNDEFINED,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("batch-driver.scm:77: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[8];
tp(4,av2);}}

/* k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in ... */
static void C_ccall f_4109(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4109,c,av);}
a=C_alloc(3);
t2=*((C_word*)lf[20]+1);
t3=C_mutate(((C_word *)t0)+7,t2);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4115,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:78: ##sys#print"));
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[229];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in ... */
static void C_ccall f_4115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4115,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4118,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("batch-driver.scm:78: ##sys#print"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[8];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t2)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in ... */
static void C_ccall f_4118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4118,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=C_SCHEME_UNDEFINED,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("batch-driver.scm:78: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}

/* k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in ... */
static void C_ccall f_4121(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4121,c,av);}
a=C_alloc(3);
t2=*((C_word*)lf[20]+1);
t3=C_mutate(((C_word *)t0)+6,t2);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4127,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:79: ##sys#print"));
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[228];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k4125 in k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in ... */
static void C_ccall f_4127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4127,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4130,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:79: ##sys#print"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t2)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4128 in k4125 in k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in ... */
static void C_ccall f_4130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4130,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:79: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}

/* k4131 in k4128 in k4125 in k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in ... */
static void C_ccall f_4133(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4133,c,av);}
a=C_alloc(3);
t2=*((C_word*)lf[20]+1);
t3=C_mutate(((C_word *)t0)+5,t2);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4139,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:80: ##sys#print"));
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[227];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k4137 in k4131 in k4128 in k4125 in k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in ... */
static void C_ccall f_4139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4139,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4142,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:80: ##sys#print"));
t4=*((C_word*)lf[22]+1);{
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
av2[4]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4140 in k4137 in k4131 in k4128 in k4125 in k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in ... */
static void C_ccall f_4142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4142,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:80: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}

/* k4143 in k4140 in k4137 in k4131 in k4128 in k4125 in k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in ... */
static void C_ccall f_4145(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4145,c,av);}
a=C_alloc(3);
t2=*((C_word*)lf[20]+1);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4151,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:81: ##sys#print"));
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[226];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k4149 in k4143 in k4140 in k4137 in k4131 in k4128 in k4125 in k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in k6120 in ... */
static void C_ccall f_4151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4151,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4154,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:81: ##sys#print"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4152 in k4149 in k4143 in k4140 in k4137 in k4131 in k4128 in k4125 in k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in k6123 in ... */
static void C_ccall f_4154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4154,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4157,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:81: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k4155 in k4152 in k4149 in k4143 in k4140 in k4137 in k4131 in k4128 in k4125 in k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in k6126 in ... */
static void C_ccall f_4157(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4157,c,av);}
a=C_alloc(3);
t2=*((C_word*)lf[20]+1);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4163,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:82: ##sys#print"));
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[225];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k4161 in k4155 in k4152 in k4149 in k4143 in k4140 in k4137 in k4131 in k4128 in k4125 in k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in k6130 in ... */
static void C_ccall f_4163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4163,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4166,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:82: ##sys#print"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4164 in k4161 in k4155 in k4152 in k4149 in k4143 in k4140 in k4137 in k4131 in k4128 in k4125 in k4119 in k4116 in k4113 in k4107 in k4104 in k4101 in k4098 in k4095 in k4089 in a4083 in k6133 in ... */
static void C_ccall f_4166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4166,c,av);}
C_trace(C_text("batch-driver.scm:82: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* chicken.compiler.batch-driver#initialize-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void f_4171(C_word t0,C_word t1){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_4171,2,t0,t1);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4175,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_fast_retrieve(lf[9]);
t4=C_i_check_list_2(C_fast_retrieve(lf[9]),lf[10]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4187,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4257,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_4257(t9,t5,C_fast_retrieve(lf[9]));}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4173 in chicken.compiler.batch-driver#initialize-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_4175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4175,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4185 in chicken.compiler.batch-driver#initialize-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_4187(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4187,c,av);}
a=C_alloc(8);
t2=C_fast_retrieve(lf[11]);
t3=C_i_check_list_2(C_fast_retrieve(lf[11]),lf[10]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4198,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4234,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4234(t8,t4,C_fast_retrieve(lf[11]));}

/* k4196 in k4185 in chicken.compiler.batch-driver#initialize-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in ... */
static void C_ccall f_4198(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4198,c,av);}
a=C_alloc(5);
t2=C_fast_retrieve(lf[12]);
t3=C_i_check_list_2(C_fast_retrieve(lf[12]),lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4211,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4211(t7,((C_word*)t0)[2],C_fast_retrieve(lf[12]));}

/* for-each-loop837 in k4196 in k4185 in chicken.compiler.batch-driver#initialize-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in ... */
static void f_4211(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4211,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4221,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:104: chicken.compiler.support#mark-variable"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word av2[5];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[14];
av2[4]=lf[15];
tp(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4219 in for-each-loop837 in k4196 in k4185 in chicken.compiler.batch-driver#initialize-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in ... */
static void C_ccall f_4221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4221,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4211(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop819 in k4185 in chicken.compiler.batch-driver#initialize-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in ... */
static void f_4234(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4234,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4244,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:100: chicken.compiler.support#mark-variable"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word av2[5];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[14];
av2[4]=lf[16];
tp(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4242 in for-each-loop819 in k4185 in chicken.compiler.batch-driver#initialize-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in ... */
static void C_ccall f_4244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4244,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4234(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop801 in chicken.compiler.batch-driver#initialize-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void f_4257(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_4257,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4267,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:96: chicken.compiler.support#mark-variable"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word av2[5];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[14];
av2[4]=lf[17];
tp(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4265 in for-each-loop801 in chicken.compiler.batch-driver#initialize-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in ... */
static void C_ccall f_4267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4267,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4257(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void f_4280(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4280,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4284,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_4284(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4947,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:126: scheme#append"));
t5=*((C_word*)lf[4]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fast_retrieve(lf[81]);
av2[3]=C_fast_retrieve(lf[82]);
av2[4]=C_fast_retrieve(lf[12]);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void f_4284(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4284,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:129: chicken.internal#hash-table-for-each"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[80]);
C_word av2[4];
av2[0]=*((C_word*)lf[80]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in ... */
static void C_ccall f_4289(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_4289,c,av);}
a=C_alloc(22);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_END_OF_LIST;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t16=C_SCHEME_UNDEFINED;
t17=t1;{
C_word *av2=av;
av2[0]=t17;
av2[1]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}
else{
t16=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4299,a[2]=t1,a[3]=t9,a[4]=t5,a[5]=t7,a[6]=t11,a[7]=t15,a[8]=t13,a[9]=t3,tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("batch-driver.scm:138: scheme#write"));
t17=*((C_word*)lf[79]+1);{
C_word *av2=av;
av2[0]=t17;
av2[1]=t16;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}}

/* k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in ... */
static void C_ccall f_4299(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_4299,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4490,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_4490(t6,t2,((C_word*)t0)[9]);}

/* k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in ... */
static void C_ccall f_4302(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4302,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[8])[1]))){
t3=*((C_word*)lf[20]+1);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4481,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:168: ##sys#print"));
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[31];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4305(2,av2);}}}

/* k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in ... */
static void C_ccall f_4305(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4305,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[7])[1]))){
t3=*((C_word*)lf[20]+1);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4465,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:169: ##sys#print"));
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[30];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4308(2,av2);}}}

/* k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in ... */
static void C_ccall f_4308(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4308,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[6])[1]))){
t3=*((C_word*)lf[20]+1);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4449,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:170: ##sys#print"));
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[29];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4311(2,av2);}}}

/* k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in ... */
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4311,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(((C_word*)((C_word*)t0)[4])[1])?C_i_not(C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[26])):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=*((C_word*)lf[20]+1);
t5=*((C_word*)lf[20]+1);
t6=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4384,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:172: ##sys#print"));
t8=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[27];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t4=(C_truep(((C_word*)((C_word*)t0)[5])[1])?C_i_not(C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[26])):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=*((C_word*)lf[20]+1);
t6=*((C_word*)lf[20]+1);
t7=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4411,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:174: ##sys#print"));
t9=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[28];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
f_4314(2,av2);}}}}

/* k4312 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in ... */
static void C_ccall f_4314(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4314,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4317,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4354,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4354(t8,t2,t3);}
else{
C_trace(C_text("batch-driver.scm:180: scheme#newline"));
t3=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4315 in k4312 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in ... */
static void C_ccall f_4317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4317,c,av);}
C_trace(C_text("batch-driver.scm:180: scheme#newline"));
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4329 in for-each-loop1035 in k4312 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in ... */
static void C_ccall f_4331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4331,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4342,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:178: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[24]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k4340 in k4329 in for-each-loop1035 in k4312 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in ... */
static void C_ccall f_4342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4342,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4346,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:178: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
tp(3,av2);}}

/* k4344 in k4340 in k4329 in for-each-loop1035 in k4312 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void C_ccall f_4346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4346,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("batch-driver.scm:178: ##sys#print"));
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop1035 in k4312 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in ... */
static void f_4354(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4354,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4364,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[20]+1);
t6=*((C_word*)lf[20]+1);
t7=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4331,a[2]=t3,a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:178: ##sys#print"));
t9=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[25];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4362 in for-each-loop1035 in k4312 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in ... */
static void C_ccall f_4364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4364,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4354(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4382 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in ... */
static void C_ccall f_4384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4384,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4395,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:172: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[24]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}

/* k4393 in k4382 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in ... */
static void C_ccall f_4395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4395,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4399,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:172: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[4])[1];
tp(3,av2);}}

/* k4397 in k4393 in k4382 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in ... */
static void C_ccall f_4399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4399,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("batch-driver.scm:172: ##sys#print"));
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4409 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in ... */
static void C_ccall f_4411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4411,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4422,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:174: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[24]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}

/* k4420 in k4409 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in ... */
static void C_ccall f_4422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4422,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4426,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:174: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[4])[1];
tp(3,av2);}}

/* k4424 in k4420 in k4409 in k4309 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in ... */
static void C_ccall f_4426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4426,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("batch-driver.scm:174: ##sys#print"));
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4447 in k4306 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in ... */
static void C_ccall f_4449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4449,c,av);}
C_trace(C_text("batch-driver.scm:170: ##sys#print"));
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_length(((C_word*)((C_word*)t0)[3])[1]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4463 in k4303 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in ... */
static void C_ccall f_4465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4465,c,av);}
C_trace(C_text("batch-driver.scm:169: ##sys#print"));
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_length(((C_word*)((C_word*)t0)[3])[1]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4479 in k4300 in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in ... */
static void C_ccall f_4481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4481,c,av);}
C_trace(C_text("batch-driver.scm:168: ##sys#print"));
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_length(((C_word*)((C_word*)t0)[3])[1]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* loop in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in ... */
static void f_4490(C_word t0,C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_4490,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=C_i_caar(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4503,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[32]);
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4514,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t5)){
t7=t6;
f_4514(t7,t5);}
else{
t7=C_eqp(t3,lf[57]);
if(C_truep(t7)){
t8=t6;
f_4514(t8,t7);}
else{
t8=C_eqp(t3,lf[58]);
if(C_truep(t8)){
t9=t6;
f_4514(t9,t8);}
else{
t9=C_eqp(t3,lf[59]);
if(C_truep(t9)){
t10=t6;
f_4514(t10,t9);}
else{
t10=C_eqp(t3,lf[60]);
if(C_truep(t10)){
t11=t6;
f_4514(t11,t10);}
else{
t11=C_eqp(t3,lf[61]);
if(C_truep(t11)){
t12=t6;
f_4514(t12,t11);}
else{
t12=C_eqp(t3,lf[62]);
if(C_truep(t12)){
t13=t6;
f_4514(t13,t12);}
else{
t13=C_eqp(t3,lf[63]);
if(C_truep(t13)){
t14=t6;
f_4514(t14,t13);}
else{
t14=C_eqp(t3,lf[64]);
if(C_truep(t14)){
t15=t6;
f_4514(t15,t14);}
else{
t15=C_eqp(t3,lf[65]);
if(C_truep(t15)){
t16=t6;
f_4514(t16,t15);}
else{
t16=C_eqp(t3,lf[66]);
if(C_truep(t16)){
t17=t6;
f_4514(t17,t16);}
else{
t17=C_eqp(t3,lf[67]);
if(C_truep(t17)){
t18=t6;
f_4514(t18,t17);}
else{
t18=C_eqp(t3,lf[68]);
if(C_truep(t18)){
t19=t6;
f_4514(t19,t18);}
else{
t19=C_eqp(t3,lf[69]);
if(C_truep(t19)){
t20=t6;
f_4514(t20,t19);}
else{
t20=C_eqp(t3,lf[70]);
if(C_truep(t20)){
t21=t6;
f_4514(t21,t20);}
else{
t21=C_eqp(t3,lf[71]);
if(C_truep(t21)){
t22=t6;
f_4514(t22,t21);}
else{
t22=C_eqp(t3,lf[72]);
if(C_truep(t22)){
t23=t6;
f_4514(t23,t22);}
else{
t23=C_eqp(t3,lf[73]);
if(C_truep(t23)){
t24=t6;
f_4514(t24,t23);}
else{
t24=C_eqp(t3,lf[74]);
if(C_truep(t24)){
t25=t6;
f_4514(t25,t24);}
else{
t25=C_eqp(t3,lf[75]);
if(C_truep(t25)){
t26=t6;
f_4514(t26,t25);}
else{
t26=C_eqp(t3,lf[76]);
if(C_truep(t26)){
t27=t6;
f_4514(t27,t26);}
else{
t27=C_eqp(t3,lf[77]);
t28=t6;
f_4514(t28,(C_truep(t27)?t27:C_eqp(t3,lf[78])));}}}}}}}}}}}}}}}}}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4501 in loop in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in ... */
static void C_ccall f_4503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4503,c,av);}
C_trace(C_text("batch-driver.scm:167: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_4490(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k4512 in loop in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in ... */
static void f_4514(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_4514,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:147: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[4];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t5;
av2[2]=C_make_character(9);
av2[3]=*((C_word*)lf[20]+1);
tp(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[26]);
if(C_truep(t2)){
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,lf[26]);
C_trace(C_text("batch-driver.scm:167: loop"));
t4=((C_word*)((C_word*)t0)[6])[1];
f_4490(t4,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}
else{
t3=C_eqp(((C_word*)t0)[4],lf[35]);
if(C_truep(t3)){
t4=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[26]);
if(C_truep(t4)){
C_trace(C_text("batch-driver.scm:167: loop"));
t5=((C_word*)((C_word*)t0)[6])[1];
f_4490(t5,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}
else{
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,t5);
C_trace(C_text("batch-driver.scm:167: loop"));
t7=((C_word*)((C_word*)t0)[6])[1];
f_4490(t7,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[36]);
if(C_truep(t4)){
t5=C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[26]);
if(C_truep(t5)){
C_trace(C_text("batch-driver.scm:167: loop"));
t6=((C_word*)((C_word*)t0)[6])[1];
f_4490(t6,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}
else{
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate(((C_word *)((C_word*)t0)[8])+1,t6);
C_trace(C_text("batch-driver.scm:167: loop"));
t8=((C_word*)((C_word*)t0)[6])[1];
f_4490(t8,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}}
else{
t5=C_eqp(((C_word*)t0)[4],lf[37]);
if(C_truep(t5)){
t6=C_i_cdar(((C_word*)t0)[2]);
t7=C_mutate(((C_word *)((C_word*)t0)[9])+1,t6);
C_trace(C_text("batch-driver.scm:167: loop"));
t8=((C_word*)((C_word*)t0)[6])[1];
f_4490(t8,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[2]));}
else{
t6=C_eqp(((C_word*)t0)[4],lf[38]);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4593,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t6)){
t8=t7;
f_4593(t8,t6);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[44]);
if(C_truep(t8)){
t9=t7;
f_4593(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[45]);
if(C_truep(t9)){
t10=t7;
f_4593(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[46]);
if(C_truep(t10)){
t11=t7;
f_4593(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[47]);
if(C_truep(t11)){
t12=t7;
f_4593(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[48]);
if(C_truep(t12)){
t13=t7;
f_4593(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[49]);
if(C_truep(t13)){
t14=t7;
f_4593(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[50]);
if(C_truep(t14)){
t15=t7;
f_4593(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[51]);
if(C_truep(t15)){
t16=t7;
f_4593(t16,t15);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[52]);
if(C_truep(t16)){
t17=t7;
f_4593(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[53]);
if(C_truep(t17)){
t18=t7;
f_4593(t18,t17);}
else{
t18=C_eqp(((C_word*)t0)[4],lf[54]);
if(C_truep(t18)){
t19=t7;
f_4593(t19,t18);}
else{
t19=C_eqp(((C_word*)t0)[4],lf[55]);
t20=t7;
f_4593(t20,(C_truep(t19)?t19:C_eqp(((C_word*)t0)[4],lf[56])));}}}}}}}}}}}}}}}}}}

/* k4518 in k4512 in loop in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in ... */
static void C_ccall f_4520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4520,c,av);}
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_assq(t2,lf[33]);
C_trace(C_text("batch-driver.scm:147: ##sys#print"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=C_i_cdr(t3);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4591 in k4512 in loop in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in ... */
static void f_4593(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4593,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:159: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[4];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t5;
av2[2]=C_make_character(9);
av2[3]=*((C_word*)lf[20]+1);
tp(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[39]);
if(C_truep(t2)){
t3=C_i_cdar(((C_word*)t0)[3]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
C_trace(C_text("batch-driver.scm:167: loop"));
t5=((C_word*)((C_word*)t0)[6])[1];
f_4490(t5,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[3]));}
else{
t3=C_eqp(((C_word*)t0)[4],lf[40]);
if(C_truep(t3)){
t4=C_i_cdar(((C_word*)t0)[3]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,t4);
C_trace(C_text("batch-driver.scm:167: loop"));
t6=((C_word*)((C_word*)t0)[6])[1];
f_4490(t6,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[3]));}
else{
t4=C_eqp(((C_word*)t0)[4],lf[41]);
if(C_truep(t4)){
t5=C_i_cdar(((C_word*)t0)[3]);
t6=C_mutate(((C_word *)((C_word*)t0)[9])+1,t5);
C_trace(C_text("batch-driver.scm:167: loop"));
t7=((C_word*)((C_word*)t0)[6])[1];
f_4490(t7,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[3]));}
else{
C_trace(C_text("batch-driver.scm:166: chicken.compiler.support#bomb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[42]);
C_word av2[4];
av2[0]=*((C_word*)lf[42]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
av2[3]=C_u_i_car(((C_word*)t0)[3]);
tp(4,av2);}}}}}}

/* k4597 in k4591 in k4512 in loop in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in ... */
static void C_ccall f_4599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4599,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4602,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:159: ##sys#print"));
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_caar(((C_word*)t0)[3]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4600 in k4597 in k4591 in k4512 in loop in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in ... */
static void C_ccall f_4602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4602,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4605,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:159: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=C_make_character(61);
av2[3]=((C_word*)t2)[4];
tp(4,av2);}}

/* k4603 in k4600 in k4597 in k4591 in k4512 in loop in k4297 in a4288 in k4282 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in ... */
static void C_ccall f_4605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4605,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("batch-driver.scm:159: ##sys#print"));
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=C_i_cdar(((C_word*)t2)[3]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4945 in chicken.compiler.batch-driver#display-analysis-database in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_4947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4947,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4284(t3,t2);}

/* chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_4949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_4949,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+9);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4952,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4983,a[2]=t4,a[3]=t5,a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:193: chicken.compiler.core#initialize-compiler"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[498]);
C_word *av2=av;
av2[0]=*((C_word*)lf[498]+1);
av2[1]=t6;
tp(2,av2);}}

/* option-arg in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void f_4952(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4952,2,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_nullp(t3))){
C_trace(C_text("batch-driver.scm:188: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word av2[4];
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t1;
av2[2]=lf[85];
av2[3]=C_u_i_car(t2);
tp(4,av2);}}
else{
t4=C_i_cadr(t2);
if(C_truep(C_i_symbolp(t4))){
C_trace(C_text("batch-driver.scm:191: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word av2[4];
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t1;
av2[2]=lf[86];
av2[3]=t4;
tp(4,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 */
static void C_ccall f_4983(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4983,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[87]+1 /* (set! chicken.compiler.core#explicit-use-flag ...) */,C_u_i_memq(lf[88],((C_word*)t0)[2]));
t3=C_mutate((C_word*)lf[89]+1 /* (set! chicken.compiler.core#emit-debug-info ...) */,C_u_i_memq(lf[90],((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4992,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[497],((C_word*)t0)[2]))){
t5=C_mutate((C_word*)lf[490]+1 /* (set! chicken.compiler.core#compile-module-registration ...) */,lf[491]);
t6=t4;
f_4992(t6,t5);}
else{
t5=t4;
f_4992(t5,C_SCHEME_UNDEFINED);}}

/* k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in k2736 in ... */
static void f_4992(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4992,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4995,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[495],((C_word*)t2)[2]))){
t4=C_mutate((C_word*)lf[490]+1 /* (set! chicken.compiler.core#compile-module-registration ...) */,lf[496]);
t5=t3;
f_4995(t5,t4);}
else{
t4=t3;
f_4995(t4,C_SCHEME_UNDEFINED);}}

/* k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2739 in ... */
static void f_4995(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4995,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4998,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[493],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[489] /* chicken.compiler.core#static-extensions */,0,C_SCHEME_TRUE);
C_trace(C_text("batch-driver.scm:202: chicken.platform#register-feature!"));
t5=C_fast_retrieve(lf[135]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[494];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4998(2,av2);}}}

/* k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in ... */
static void C_ccall f_4998(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_4998,c,av);}
a=C_alloc(22);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[91],((C_word*)t2)[2]);
t4=C_u_i_memq(lf[92],((C_word*)t2)[2]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8272,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=C_SCHEME_UNDEFINED,a[7]=((C_word*)t2)[6],a[8]=t3,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
t6=(C_truep(C_fast_retrieve(lf[89]))?lf[486]:C_SCHEME_END_OF_LIST);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8280,a[2]=t5,a[3]=t6,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fast_retrieve(lf[87]))){
t8=t7;
f_8280(t8,C_SCHEME_END_OF_LIST);}
else{
t8=C_a_i_cons(&a,2,lf[384],C_fast_retrieve(lf[492]));
t9=t7;
f_8280(t9,C_a_i_list(&a,1,t8));}}

/* k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in ... */
static void f_5008(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,0,4)))){
C_save_and_reclaim_args((void *)trf_5008,2,t0,t1);}
a=C_alloc(19);
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=lf[94];
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_u_i_memq(lf[95],((C_word*)t2)[2]);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5013,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t4,a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],a[10]=t6,a[11]=((C_word*)t2)[9],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t7)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8218,a[2]=((C_word*)t2)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:227: g1104"));
t10=t9;
f_8218(t10,t8,t7);}
else{
if(C_truep(C_u_i_memq(lf[478],((C_word*)t2)[2]))){
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
f_5013(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8246,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t2)[5])){
C_trace(C_text("batch-driver.scm:234: chicken.pathname#pathname-file"));
t10=C_fast_retrieve(lf[480]);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
C_trace(C_text("batch-driver.scm:234: chicken.pathname#make-pathname"));
t10=C_fast_retrieve(lf[266]);{
C_word av2[5];
av2[0]=t10;
av2[1]=t8;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[481];
av2[4]=lf[479];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}}}

/* k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in ... */
static void C_ccall f_5013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_5013,c,av);}
a=C_alloc(34);
t2=(*a=C_CLOSURE_TYPE|28,a[1]=(C_word)f_5016,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=C_SCHEME_UNDEFINED,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=C_SCHEME_UNDEFINED,a[12]=((C_word*)t0)[7],a[13]=C_SCHEME_UNDEFINED,a[14]=t1,a[15]=((C_word*)t0)[8],a[16]=((C_word*)t0)[9],a[17]=C_SCHEME_UNDEFINED,a[18]=C_SCHEME_UNDEFINED,a[19]=C_SCHEME_UNDEFINED,a[20]=C_SCHEME_UNDEFINED,a[21]=((C_word*)t0)[10],a[22]=C_SCHEME_UNDEFINED,a[23]=C_SCHEME_UNDEFINED,a[24]=C_SCHEME_UNDEFINED,a[25]=C_SCHEME_UNDEFINED,a[26]=C_SCHEME_UNDEFINED,a[27]=C_SCHEME_UNDEFINED,a[28]=((C_word*)t0)[11],tmp=(C_word)a,a+=29,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8213,a[2]=t2,a[3]=t1,a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:239: chicken.process-context.posix#current-process-id"));
t4=C_fast_retrieve(lf[477]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5016(2,av2);}}}

/* k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in ... */
static void C_ccall f_5016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5016,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+13,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5019,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:240: chicken.compiler.optimizer#default-optimization-passes"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[473]);
C_word *av2=av;
av2[0]=*((C_word*)lf[473]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in ... */
static void C_ccall f_5019(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5019,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_mutate(((C_word *)t2)+6,t4);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_mutate(((C_word *)t2)+5,t7);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_mutate(((C_word *)t2)+23,t10);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_mutate(((C_word *)t2)+18,t13);
t15=C_u_i_memq(lf[96],((C_word*)t2)[4]);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5024,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t15)){
t17=t16;
f_5024(t17,t15);}
else{
t17=C_u_i_memq(lf[352],((C_word*)t2)[4]);
t18=t16;
f_5024(t18,(C_truep(t17)?t17:C_u_i_memq(lf[97],((C_word*)t2)[4])));}}

/* k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in ... */
static void f_5024(C_word t0,C_word t1){
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
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_5024,2,t0,t1);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+24,t1);
t4=C_u_i_memq(lf[97],((C_word*)t2)[4]);
t5=(C_truep(t4)?C_i_cadr(t4):C_SCHEME_FALSE);
t6=C_mutate(((C_word *)t2)+22,t5);
t7=C_u_i_memq(lf[98],((C_word*)t2)[4]);
t8=C_mutate(((C_word *)t2)+26,t7);
t9=C_u_i_memq(lf[99],((C_word*)t2)[4]);
t10=C_mutate(((C_word *)t2)+27,t9);
t11=C_u_i_memq(lf[100],((C_word*)t2)[4]);
t12=C_mutate(((C_word *)t2)+17,t11);
t13=C_SCHEME_TRUE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_mutate(((C_word *)t2)+20,t14);
t16=C_u_i_memq(lf[101],((C_word*)t2)[4]);
t17=C_mutate(((C_word *)t2)+19,t16);
t18=C_SCHEME_FALSE;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_mutate(((C_word *)t2)+2,t19);
t21=C_SCHEME_FALSE;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_mutate(((C_word *)t2)+11,t22);
t24=C_SCHEME_FALSE;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_mutate(((C_word *)t2)+7,t25);
t27=C_u_i_memq(lf[102],((C_word*)t2)[4]);
t28=(C_truep(t27)?t27:C_u_i_memq(lf[103],((C_word*)t2)[4]));
t29=C_mutate(((C_word *)t2)+25,t28);
t30=C_u_i_memq(lf[104],((C_word*)t2)[4]);
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5047,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t30)){
C_trace(C_text("batch-driver.scm:261: option-arg"));
f_4952(t31,t30);}
else{
t32=t31;{
C_word av2[2];
av2[0]=t32;
av2[1]=C_SCHEME_FALSE;
f_5047(2,av2);}}}

/* k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in ... */
static void C_ccall f_5047(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(89,c,6)))){
C_save_and_reclaim((void *)f_5047,c,av);}
a=C_alloc(89);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
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
t21=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5065,tmp=(C_word)a,a+=2,tmp));
t22=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5092,a[2]=((C_word*)t2)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t23=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5114,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t24=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5141,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t25=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5312,tmp=(C_word)a,a+=2,tmp));
t26=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5397,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp));
t27=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5432,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[6],tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5442,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[6],tmp=(C_word)a,a+=4,tmp));
t29=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5482,a[2]=((C_word*)t2)[7],tmp=(C_word)a,a+=3,tmp));
t30=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5571,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[7],a[5]=((C_word*)t2)[8],a[6]=((C_word*)t2)[9],a[7]=((C_word*)t2)[10],a[8]=((C_word*)t2)[11],a[9]=((C_word*)t2)[12],a[10]=t18,a[11]=t16,a[12]=t20,a[13]=t6,a[14]=((C_word*)t2)[13],a[15]=((C_word*)t2)[14],a[16]=((C_word*)t2)[15],a[17]=((C_word*)t2)[16],a[18]=((C_word*)t2)[17],a[19]=t8,a[20]=((C_word*)t2)[18],a[21]=((C_word*)t2)[19],a[22]=((C_word*)t2)[20],a[23]=t14,a[24]=t10,a[25]=((C_word*)t2)[21],a[26]=((C_word*)t2)[22],a[27]=t1,a[28]=((C_word*)t2)[23],a[29]=((C_word*)t2)[24],a[30]=((C_word*)t2)[25],a[31]=t12,a[32]=((C_word*)t2)[3],a[33]=((C_word*)t2)[26],a[34]=((C_word*)t2)[27],a[35]=((C_word*)t2)[5],tmp=(C_word)a,a+=36,tmp);
if(C_truep(((C_word*)t2)[28])){
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8187,a[2]=t30,tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8191,a[2]=t31,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:356: option-arg"));
f_4952(t32,((C_word*)t2)[28]);}
else{
t31=t30;
f_5571(t31,C_SCHEME_UNDEFINED);}}

/* print-header in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void f_5065(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_5065,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5069,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:269: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word av2[5];
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t4;
av2[2]=lf[107];
av2[3]=lf[108];
av2[4]=t2;
tp(5,av2);}}

/* k5067 in print-header in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_5069(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5069,c,av);}
a=C_alloc(5);
if(C_truep(C_i_memq(((C_word*)t0)[2],C_fast_retrieve(lf[105])))){
t2=*((C_word*)lf[20]+1);
t3=*((C_word*)lf[20]+1);
t4=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5081,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:272: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t5;
av2[2]=C_make_character(91);
av2[3]=*((C_word*)lf[20]+1);
tp(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5079 in k5067 in print-header in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in ... */
static void C_ccall f_5081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5081,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:272: ##sys#print"));
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5082 in k5079 in k5067 in print-header in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_5084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5084,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5087,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:272: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t2;
av2[2]=C_make_character(93);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k5085 in k5082 in k5079 in k5067 in print-header in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in ... */
static void C_ccall f_5087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5087,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5090,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:272: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t2)[3];
tp(4,av2);}}

/* k5088 in k5085 in k5082 in k5079 in k5067 in print-header in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in ... */
static void C_ccall f_5090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5090,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* print-node in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void f_5092(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5092,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5099,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:276: print-header"));
f_5065(t5,t2,t3);}

/* k5097 in print-node in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_5099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5099,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
C_trace(C_text("batch-driver.scm:278: chicken.compiler.support#dump-nodes"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[109]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5112,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:279: chicken.compiler.support#build-expression-tree"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[111]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[111]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5110 in k5097 in print-node in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in ... */
static void C_ccall f_5112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5112,c,av);}
C_trace(C_text("batch-driver.scm:279: chicken.pretty-print#pretty-print"));
t2=C_fast_retrieve(lf[110]);{
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

/* print-db in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void f_5114(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5114,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(6);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5121,a[2]=t1,a[3]=t4,a[4]=C_SCHEME_UNDEFINED,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:282: print-header"));
f_5065(t6,t2,t3);}

/* k5119 in print-db in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_5121(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5121,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=*((C_word*)lf[20]+1);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5127,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:283: ##sys#print"));
t7=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[112];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5125 in k5119 in print-db in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in ... */
static void C_ccall f_5127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5127,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5130,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:283: ##sys#print"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k5128 in k5125 in k5119 in print-db in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_5130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5130,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5133,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:283: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k5131 in k5128 in k5125 in k5119 in print-db in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in ... */
static void C_ccall f_5133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5133,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5136,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:283: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t2)[4];
tp(4,av2);}}

/* k5134 in k5131 in k5128 in k5125 in k5119 in print-db in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in ... */
static void C_ccall f_5136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5136,c,av);}
C_trace(C_text("batch-driver.scm:284: display-analysis-database"));
t2=lf[18];
f_4280(t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* print-expr in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void f_5141(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5141,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5148,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:287: print-header"));
f_5065(t5,t2,t3);}

/* k5146 in print-expr in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_5148(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5148,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_check_list_2(((C_word*)t0)[2],lf[10]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5164,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_5164(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5151 in for-each-loop1218 in k5146 in print-expr in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_5153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5153,c,av);}
C_trace(C_text("batch-driver.scm:291: scheme#newline"));
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop1218 in k5146 in print-expr in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in ... */
static void f_5164(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5164,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5153,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:290: chicken.pretty-print#pretty-print"));
t6=C_fast_retrieve(lf[110]);{
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

/* k5172 in for-each-loop1218 in k5146 in print-expr in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_5174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5174,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_5164(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* loop in map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in ... */
static void f_5197(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,0,4)))){
C_save_and_reclaim_args((void *)trf_5197,4,t0,t1,t2,t3);}
a=C_alloc(58);
if(C_truep(C_i_nequalp(t2,t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[378];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_string_ref(((C_word*)t0)[2],t2);
if(C_truep(C_u_i_char_whitespacep(t4))){
t5=C_a_i_fixnum_plus(&a,2,t2,C_fix(1));
C_trace(C_text("batch-driver.scm:299: loop"));
t9=t1;
t10=t5;
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t5=C_s_a_i_minus(&a,2,t3,C_fix(1));
t6=C_i_string_ref(((C_word*)t0)[2],t5);
if(C_truep(C_u_i_char_whitespacep(t6))){
t7=C_s_a_i_minus(&a,2,t3,C_fix(1));
C_trace(C_text("batch-driver.scm:301: loop"));
t9=t1;
t10=t2;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
C_trace(C_text("batch-driver.scm:302: scheme#substring"));
t7=*((C_word*)lf[115]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}}}

/* k5243 in map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in ... */
static void C_ccall f_5245(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5245,c,av);}
a=C_alloc(6);
t2=C_i_string_length(t1);
t3=(C_truep(C_i_fixnum_positivep(t2))?C_u_i_char_equalp(C_make_character(40),C_i_string_ref(t1,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5254,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5259,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:308: scheme#call-with-current-continuation"));
t6=*((C_word*)lf[377]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
C_trace(C_text("batch-driver.scm:311: scheme#string->symbol"));
t4=*((C_word*)lf[323]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k5252 in k5243 in map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in ... */
static void C_ccall f_5254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5254,c,av);}
C_trace(C_text("batch-driver.scm:308: g1250"));
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a5258 in k5243 in map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in ... */
static void C_ccall f_5259(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5259,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5265,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5277,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:308: chicken.condition#with-exception-handler"));
t5=C_fast_retrieve(lf[376]);{
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

/* a5264 in a5258 in k5243 in map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in ... */
static void C_ccall f_5265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5265,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:308: k1247"));
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a5270 in a5264 in a5258 in k5243 in map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in ... */
static void C_ccall f_5271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5271,c,av);}
C_trace(C_text("batch-driver.scm:309: ##sys#error"));
t2=*((C_word*)lf[372]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[373];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a5276 in a5258 in k5243 in map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in ... */
static void C_ccall f_5277(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5277,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5289,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:308: ##sys#call-with-values"));{
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

/* a5282 in a5276 in a5258 in k5243 in map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in ... */
static void C_ccall f_5283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5283,c,av);}
C_trace(C_text("batch-driver.scm:310: chicken.port#with-input-from-string"));
t2=C_fast_retrieve(lf[374]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=*((C_word*)lf[375]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a5288 in a5276 in a5258 in k5243 in map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in ... */
static void C_ccall f_5289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_5289,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5295,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:308: k1247"));
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

/* a5294 in a5288 in a5276 in a5258 in k5243 in map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in ... */
static void C_ccall f_5295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5295,c,av);}{
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

/* arg-val in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void f_5312(C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,4)))){
C_save_and_reclaim_args((void *)trf_5312,2,t1,t2);}
a=C_alloc(16);
t3=C_i_string_length(t2);
t4=C_a_i_fixnum_difference(&a,2,t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5321,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t3,C_fix(2)))){
C_trace(C_text("batch-driver.scm:317: scheme#string->number"));
t6=*((C_word*)lf[114]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_i_string_ref(t2,t4);
t7=C_eqp(t6,C_make_character(109));
t8=(C_truep(t7)?t7:C_eqp(t6,C_make_character(77)));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5352,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5356,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:319: scheme#substring"));
t11=*((C_word*)lf[115]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t10;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t9=C_eqp(t6,C_make_character(107));
t10=(C_truep(t9)?t9:C_eqp(t6,C_make_character(75)));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5372,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5376,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:320: scheme#substring"));
t13=*((C_word*)lf[115]+1);{
C_word av2[5];
av2[0]=t13;
av2[1]=t12;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}
else{
C_trace(C_text("batch-driver.scm:321: scheme#string->number"));
t11=*((C_word*)lf[114]+1);{
C_word av2[3];
av2[0]=t11;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}}}}

/* k5319 in arg-val in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_5321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5321,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("batch-driver.scm:322: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[113];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}}

/* k5350 in arg-val in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_5352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_5352,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(1048576));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
C_trace(C_text("batch-driver.scm:322: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[113];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}}

/* k5354 in arg-val in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_5356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5356,c,av);}
C_trace(C_text("batch-driver.scm:319: scheme#string->number"));
t2=*((C_word*)lf[114]+1);{
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

/* k5370 in arg-val in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_5372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_5372,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(1024));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
C_trace(C_text("batch-driver.scm:322: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[113];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}}

/* k5374 in arg-val in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_5376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5376,c,av);}
C_trace(C_text("batch-driver.scm:320: scheme#string->number"));
t2=*((C_word*)lf[114]+1);{
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

/* collect-options in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void f_5397(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_5397,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5403,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5403(t6,t1,((C_word*)t0)[3]);}

/* loop in collect-options in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void f_5403(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5403,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_memq(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5411,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:326: g1282"));
t5=t4;
f_5411(t5,t1,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g1282 in loop in collect-options in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in ... */
static void f_5411(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5411,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5419,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:326: option-arg"));
f_4952(t3,t2);}

/* k5417 in g1282 in loop in collect-options in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_5419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5419,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5423,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:326: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5403(t3,t2,C_i_cddr(((C_word*)t0)[4]));}

/* k5421 in k5417 in g1282 in loop in collect-options in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in ... */
static void C_ccall f_5423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5423,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* begin-time in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void f_5432(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5432,2,t0,t1);}
a=C_alloc(4);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5440,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:263: chicken.time#current-process-milliseconds"));
t3=C_fast_retrieve(lf[116]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5438 in begin-time in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_5440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5440,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* end-time in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void f_5442(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5442,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=*((C_word*)lf[20]+1);
t4=*((C_word*)lf[20]+1);
t5=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5452,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:334: ##sys#print"));
t7=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[120];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5450 in end-time in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void C_ccall f_5452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5452,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:334: ##sys#print"));
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5453 in k5450 in end-time in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in ... */
static void C_ccall f_5455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5455,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5458,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:334: ##sys#print"));
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[119];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5456 in k5453 in k5450 in end-time in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_5458(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_5458,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5461,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5468,a[2]=t3,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5472,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5480,a[2]=((C_word*)t2)[4],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:263: chicken.time#current-process-milliseconds"));
t7=C_fast_retrieve(lf[116]);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k5459 in k5456 in k5453 in k5450 in end-time in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in ... */
static void C_ccall f_5461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5461,c,av);}
C_trace(C_text("batch-driver.scm:334: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k5466 in k5456 in k5453 in k5450 in end-time in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in ... */
static void C_ccall f_5468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5468,c,av);}
C_trace(C_text("batch-driver.scm:334: ##sys#print"));
t2=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5470 in k5456 in k5453 in k5450 in end-time in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in ... */
static void C_ccall f_5472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5472,c,av);}
C_trace(C_text("batch-driver.scm:336: scheme#inexact->exact"));
t2=*((C_word*)lf[117]+1);{
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

/* k5478 in k5456 in k5453 in k5450 in end-time in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in ... */
static void C_ccall f_5480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_5480,c,av);}
a=C_alloc(29);
t2=C_s_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("batch-driver.scm:336: scheme#round"));
t3=*((C_word*)lf[118]+1);{
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

/* analyze in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void f_5482(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_5482,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5484,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5507,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5512,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t4))){
C_trace(C_text("batch-driver.scm:339: def-no1303"));
t8=t7;
f_5512(t8,t1);}
else{
t8=C_i_car(t4);
t9=C_u_i_cdr(t4);
if(C_truep(C_i_nullp(t9))){
C_trace(C_text("batch-driver.scm:339: def-contf1304"));
t10=t6;
f_5507(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_u_i_cdr(t9);
C_trace(C_text("batch-driver.scm:339: body1301"));
t12=t5;
f_5484(t12,t1,t8,t10);}}}

/* body1301 in analyze in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void f_5484(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5484,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5488,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("batch-driver.scm:340: chicken.compiler.core#analyze-expression"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[123]);
C_word av2[3];
av2[0]=*((C_word*)lf[123]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k5486 in body1301 in analyze in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in ... */
static void C_ccall f_5488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,8)))){
C_save_and_reclaim((void *)f_5488,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5491,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5496,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5502,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:342: upap"));
t5=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=((C_word*)t0)[5];
av2[5]=t3;
av2[6]=t4;
av2[7]=((C_word*)t0)[6];
av2[8]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t5))(9,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5489 in k5486 in body1301 in analyze in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_5491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5491,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5495 in k5486 in body1301 in analyze in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_5496(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5496,c,av);}
t4=C_fast_retrieve(lf[121]);
C_trace(C_text("batch-driver.scm:343: g1323"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[121]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[121]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* a5501 in k5486 in body1301 in analyze in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_5502(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5502,c,av);}
t5=C_fast_retrieve(lf[122]);
C_trace(C_text("batch-driver.scm:344: g1337"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[122]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[122]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
av2[5]=t4;
tp(6,av2);}}

/* def-contf1304 in analyze in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void f_5507(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_5507,3,t0,t1,t2);}
C_trace(C_text("batch-driver.scm:339: body1301"));
t3=((C_word*)t0)[2];
f_5484(t3,t1,t2,C_SCHEME_TRUE);}

/* def-no1303 in analyze in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void f_5512(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_5512,2,t0,t1);}
C_trace(C_text("batch-driver.scm:339: def-contf1304"));
t2=((C_word*)t0)[2];
f_5507(t2,t1,C_fix(0));}

/* k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void f_5571(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5571,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5574,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_fast_retrieve(lf[314]);
if(C_truep(C_fast_retrieve(lf[314]))){
t4=C_fast_retrieve(lf[314]);
if(C_truep(C_fast_retrieve(lf[314]))){
t5=C_set_block_item(lf[311] /* chicken.compiler.core#standalone-executable */,0,C_SCHEME_FALSE);
t6=t2;
f_5574(t6,t5);}
else{
t5=t2;
f_5574(t5,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(((C_word*)t0)[17])){
t4=C_set_block_item(lf[311] /* chicken.compiler.core#standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_5574(t5,t4);}
else{
t4=t2;
f_5574(t4,C_SCHEME_UNDEFINED);}}}

/* k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in ... */
static void f_5574(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5574,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5577,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[271],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[471] /* ##sys#dload-disabled */,0,C_SCHEME_TRUE);
C_trace(C_text("batch-driver.scm:361: chicken.platform#repository-path"));
t5=C_fast_retrieve(lf[472]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5577(2,av2);}}}

/* k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in ... */
static void C_ccall f_5577(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,3)))){
C_save_and_reclaim((void *)f_5577,c,av);}
a=C_alloc(42);
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[124]+1 /* (set! chicken.compiler.core#enable-specialization ...) */,C_u_i_memq(lf[125],((C_word*)t2)[2]));
t4=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_5584,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],a[27]=((C_word*)t2)[27],a[28]=((C_word*)t2)[28],a[29]=((C_word*)t2)[29],a[30]=((C_word*)t2)[30],a[31]=((C_word*)t2)[31],a[32]=((C_word*)t2)[32],a[33]=((C_word*)t2)[33],a[34]=((C_word*)t2)[34],a[35]=((C_word*)t2)[35],tmp=(C_word)a,a+=36,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8116,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8173,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:368: collect-options"));
t7=((C_word*)((C_word*)t2)[23])[1];
f_5397(t7,t6,lf[470]);}

/* k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_5584(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5584,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[105]+1 /* (set! chicken.compiler.support#debugging-chicken ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5587,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(lf[348],C_fast_retrieve(lf[105])))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8111,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:370: chicken.compiler.support#print-debug-options"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[468]);
C_word *av2=av;
av2[0]=*((C_word*)lf[468]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5587(2,av2);}}}

/* k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in ... */
static void C_ccall f_5587(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,2)))){
C_save_and_reclaim((void *)f_5587,c,av);}
a=C_alloc(42);
t2=((C_word*)t0)[2];
t3=C_i_memq(lf[126],C_fast_retrieve(lf[105]));
t4=C_mutate(((C_word *)((C_word*)t2)[2])+1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_5613,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=((C_word*)t2)[13],a[13]=((C_word*)t2)[14],a[14]=((C_word*)t2)[15],a[15]=((C_word*)t2)[16],a[16]=((C_word*)t2)[17],a[17]=((C_word*)t2)[18],a[18]=((C_word*)t2)[19],a[19]=((C_word*)t2)[20],a[20]=((C_word*)t2)[21],a[21]=((C_word*)t2)[22],a[22]=((C_word*)t2)[23],a[23]=((C_word*)t2)[24],a[24]=((C_word*)t2)[25],a[25]=((C_word*)t2)[26],a[26]=((C_word*)t2)[27],a[27]=((C_word*)t2)[28],a[28]=((C_word*)t2)[29],a[29]=((C_word*)t2)[30],a[30]=((C_word*)t2)[31],a[31]=((C_word*)t2)[32],a[32]=((C_word*)t2)[33],a[33]=((C_word*)t2)[34],a[34]=((C_word*)t2)[35],a[35]=t7,a[36]=t8,tmp=(C_word)a,a+=37,tmp);
C_trace(C_text("batch-driver.scm:377: collect-options"));
t10=((C_word*)((C_word*)t2)[23])[1];
f_5397(t10,t9,lf[467]);}

/* k5602 in map-loop1385 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in ... */
static void C_ccall f_5604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5604,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5608,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[465]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[465]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[466];
tp(4,av2);}}

/* k5606 in k5602 in map-loop1385 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in ... */
static void C_ccall f_5608(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5608,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=((C_word*)((C_word*)t0)[4])[1];
f_8073(t6,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}

/* k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in ... */
static void C_ccall f_5613(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,3)))){
C_save_and_reclaim((void *)f_5613,c,av);}
a=C_alloc(42);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_5619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8073,a[2]=((C_word*)t0)[35],a[3]=t5,a[4]=((C_word*)t0)[36],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8073(t7,t3,t1);}

/* k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in ... */
static void C_ccall f_5619(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5619,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[127]+1 /* (set! chicken.compiler.core#import-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5622,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[463],((C_word*)t0)[2]))){
if(C_truep(C_i_not(((C_word*)t0)[17]))){
t4=C_set_block_item(lf[464] /* chicken.compiler.core#all-import-libraries */,0,C_SCHEME_TRUE);
t5=t3;
f_5622(t5,t4);}
else{
t4=t3;
f_5622(t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_5622(t4,C_SCHEME_UNDEFINED);}}

/* k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in ... */
static void f_5622(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5622,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5625,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fast_retrieve(lf[124]))){
t4=C_set_block_item(((C_word*)t2)[21],0,C_SCHEME_TRUE);
t5=t3;
f_5625(t5,t4);}
else{
t4=t3;
f_5625(t4,C_SCHEME_UNDEFINED);}}

/* k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in ... */
static void f_5625(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5625,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5628,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(lf[187],C_fast_retrieve(lf[105])))){
C_trace(C_text("batch-driver.scm:383: ##sys#start-timer"));
t4=*((C_word*)lf[462]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5628(2,av2);}}}

/* k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in ... */
static void C_ccall f_5628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_5628,c,av);}
a=C_alloc(34);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5631,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],a[27]=((C_word*)t2)[27],a[28]=((C_word*)t2)[28],a[29]=((C_word*)t2)[29],a[30]=((C_word*)t2)[30],a[31]=((C_word*)t2)[31],a[32]=((C_word*)t2)[32],a[33]=((C_word*)t2)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(C_i_memq(lf[461],C_fast_retrieve(lf[105])))){
t4=C_set_block_item(((C_word*)t2)[34],0,C_SCHEME_TRUE);
t5=t3;
f_5631(t5,t4);}
else{
t4=t3;
f_5631(t4,C_SCHEME_UNDEFINED);}}

/* k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in ... */
static void f_5631(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_5631,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5634,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[460],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[87] /* chicken.compiler.core#explicit-use-flag */,0,C_SCHEME_TRUE);
t4=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_END_OF_LIST);
t5=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_END_OF_LIST);
t6=C_set_block_item(((C_word*)t0)[24],0,C_SCHEME_END_OF_LIST);
t7=t2;
f_5634(t7,t6);}
else{
t3=t2;
f_5634(t3,C_SCHEME_UNDEFINED);}}

/* k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in ... */
static void f_5634(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5634,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5637,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[458],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[459] /* chicken.compiler.core#emit-closure-info */,0,C_SCHEME_FALSE);
t5=t3;
f_5637(t5,t4);}
else{
t4=t3;
f_5637(t4,C_SCHEME_UNDEFINED);}}

/* k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in ... */
static void f_5637(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5637,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5640,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[456],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[457] /* chicken.compiler.core#compiler-syntax-enabled */,0,C_SCHEME_FALSE);
t5=t3;
f_5640(t5,t4);}
else{
t4=t3;
f_5640(t4,C_SCHEME_UNDEFINED);}}

/* k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in ... */
static void f_5640(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5640,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5643,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[455],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[429] /* chicken.compiler.core#local-definitions */,0,C_SCHEME_TRUE);
t5=t3;
f_5643(t5,t4);}
else{
t4=t3;
f_5643(t4,C_SCHEME_UNDEFINED);}}

/* k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in ... */
static void f_5643(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5643,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5646,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[454],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[277] /* chicken.compiler.core#enable-inline-files */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[169] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t6=t3;
f_5646(t6,t5);}
else{
t4=t3;
f_5646(t4,C_SCHEME_UNDEFINED);}}

/* k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in ... */
static void f_5646(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5646,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5649,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[451],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[452] /* chicken.compiler.core#verbose-mode */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[453] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t6=t3;
f_5649(t6,t5);}
else{
t4=t3;
f_5649(t4,C_SCHEME_UNDEFINED);}}

/* k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in ... */
static void f_5649(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5649,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5652,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[450],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[259] /* chicken.compiler.core#strict-variable-types */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[124] /* chicken.compiler.core#enable-specialization */,0,C_SCHEME_TRUE);
t6=t3;
f_5652(t6,t5);}
else{
t4=t3;
f_5652(t4,C_SCHEME_UNDEFINED);}}

/* k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in ... */
static void f_5652(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5652,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5655,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[448],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[449] /* chicken.compiler.core#merge-reusable-closures */,0,C_SCHEME_TRUE);
t5=t3;
f_5655(t5,t4);}
else{
t4=t3;
f_5655(t4,C_SCHEME_UNDEFINED);}}

/* k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in ... */
static void f_5655(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5655,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5658,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[446],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[447] /* chicken.compiler.core#merge-shareable-closures */,0,C_SCHEME_TRUE);
t5=t3;
f_5658(t5,t4);}
else{
t4=t3;
f_5658(t4,C_SCHEME_UNDEFINED);}}

/* k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in ... */
static void f_5658(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(41,0,4)))){
C_save_and_reclaim_args((void *)trf_5658,2,t0,t1);}
a=C_alloc(41);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5661,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],a[27]=((C_word*)t2)[27],a[28]=((C_word*)t2)[28],a[29]=((C_word*)t2)[29],a[30]=((C_word*)t2)[30],a[31]=((C_word*)t2)[31],a[32]=((C_word*)t2)[32],a[33]=((C_word*)t2)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(C_u_i_memq(lf[444],((C_word*)t2)[2]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8016,a[2]=((C_word*)t2)[21],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9675,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[445];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t3;
f_5661(t4,C_SCHEME_UNDEFINED);}}

/* k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in ... */
static void f_5661(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5661,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5664,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[443],((C_word*)t0)[2]))){
t3=C_set_block_item(lf[174] /* chicken.compiler.core#optimize-leaf-routines */,0,C_SCHEME_TRUE);
t4=t2;
f_5664(t4,t3);}
else{
t3=t2;
f_5664(t3,C_SCHEME_UNDEFINED);}}

/* k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in ... */
static void f_5664(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5664,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5667,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[442],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[252] /* chicken.compiler.support#unsafe */,0,C_SCHEME_TRUE);
t5=t3;
f_5667(t5,t4);}
else{
t4=t3;
f_5667(t4,C_SCHEME_UNDEFINED);}}

/* k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in ... */
static void f_5667(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5667,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5670,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[440],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[441] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t5=t3;
f_5670(t5,t4);}
else{
t4=t3;
f_5670(t4,C_SCHEME_UNDEFINED);}}

/* k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in ... */
static void f_5670(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5670,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5673,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[438],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[439] /* chicken.compiler.core#preserve-unchanged-import-libraries */,0,C_SCHEME_FALSE);
t5=t3;
f_5673(t5,t4);}
else{
t4=t3;
f_5673(t4,C_SCHEME_UNDEFINED);}}

/* k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in ... */
static void f_5673(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5673,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5676,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[437],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[210] /* chicken.compiler.core#insert-timer-checks */,0,C_SCHEME_FALSE);
t5=t3;
f_5676(t5,t4);}
else{
t4=t3;
f_5676(t4,C_SCHEME_UNDEFINED);}}

/* k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in ... */
static void f_5676(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5676,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5679,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[434],((C_word*)t2)[2]))){
t4=C_mutate((C_word*)lf[435]+1 /* (set! chicken.compiler.support#number-type ...) */,lf[436]);
t5=t3;
f_5679(t5,t4);}
else{
t4=t3;
f_5679(t4,C_SCHEME_UNDEFINED);}}

/* k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in ... */
static void f_5679(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5679,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5682,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[433],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[168] /* chicken.compiler.core#block-compilation */,0,C_SCHEME_TRUE);
t5=t3;
f_5682(t5,t4);}
else{
t4=t3;
f_5682(t4,C_SCHEME_UNDEFINED);}}

/* k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in ... */
static void f_5682(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5682,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5685,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[431],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[432] /* chicken.compiler.core#external-protos-first */,0,C_SCHEME_TRUE);
t5=t3;
f_5685(t5,t4);}
else{
t4=t3;
f_5685(t4,C_SCHEME_UNDEFINED);}}

/* k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in ... */
static void f_5685(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5685,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5688,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[430],((C_word*)t2)[2]))){
t4=C_set_block_item(lf[169] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t5=t3;
f_5688(t5,t4);}
else{
t4=t3;
f_5688(t4,C_SCHEME_UNDEFINED);}}

/* k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in ... */
static void f_5688(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(37,0,2)))){
C_save_and_reclaim_args((void *)trf_5688,2,t0,t1);}
a=C_alloc(37);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[128],((C_word*)t2)[2]);
t4=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5693,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],a[27]=((C_word*)t2)[27],a[28]=((C_word*)t2)[28],a[29]=((C_word*)t2)[29],a[30]=((C_word*)t2)[30],a[31]=((C_word*)t2)[31],a[32]=((C_word*)t2)[32],a[33]=((C_word*)t2)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7984,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:427: option-arg"));
f_4952(t5,t3);}
else{
t5=t4;
f_5693(t5,C_SCHEME_FALSE);}}

/* k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in ... */
static void f_5693(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_5693,2,t0,t1);}
a=C_alloc(7);
t2=C_u_i_memq(lf[129],((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5698,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=C_set_block_item(lf[169] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[429] /* chicken.compiler.core#local-definitions */,0,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7980,a[2]=((C_word*)t0)[19],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:431: option-arg"));
f_4952(t6,t2);}
else{
t4=t3;
f_5698(t4,C_SCHEME_FALSE);}}

/* k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in ... */
static void f_5698(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5698,2,t0,t1);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[130],((C_word*)t2)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5703,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7974,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:433: option-arg"));
f_4952(t5,t3);}
else{
t5=t4;
f_5703(t5,C_SCHEME_FALSE);}}

/* k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in ... */
static void f_5703(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_5703,2,t0,t1);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[131],((C_word*)t2)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5708,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7961,a[2]=t4,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:436: option-arg"));
f_4952(t5,t3);}
else{
t5=t4;
f_5708(t5,C_SCHEME_FALSE);}}

/* k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in ... */
static void f_5708(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_5708,2,t0,t1);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(lf[132],((C_word*)t2)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5713,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7948,a[2]=t4,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:442: option-arg"));
f_4952(t5,t3);}
else{
t5=t4;
f_5713(t5,C_SCHEME_FALSE);}}

/* k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in ... */
static void f_5713(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_5713,2,t0,t1);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5716,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[425],((C_word*)t2)[2]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7938,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9669,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[426];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5716(2,av2);}}}

/* k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in ... */
static void C_ccall f_5716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_5716,c,av);}
a=C_alloc(36);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5719,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],a[27]=((C_word*)t2)[27],a[28]=((C_word*)t2)[28],a[29]=((C_word*)t2)[29],a[30]=((C_word*)t2)[30],a[31]=((C_word*)t2)[31],a[32]=((C_word*)t2)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(((C_word*)t2)[33])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7906,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:451: option-arg"));
f_4952(t4,((C_word*)t2)[33]);}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5719(2,av2);}}}

/* k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in ... */
static void C_ccall f_5719(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5719,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5722,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[417],((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7900,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9663,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[418];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5722(2,av2);}}}

/* k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in ... */
static void C_ccall f_5722(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5722,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5725,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[411],((C_word*)t2)[4]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7886,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9657,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[416];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5725(2,av2);}}}

/* k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in ... */
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
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_5725,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=C_set_block_item(lf[133] /* ##sys#read-error-with-line-number */,0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5730,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7841,a[2]=t4,a[3]=t7,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:467: collect-options"));
t10=((C_word*)((C_word*)t2)[22])[1];
f_5397(t10,t9,lf[410]);}

/* k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in ... */
static void C_ccall f_5730(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5730,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[134]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5733,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t2)[14])){
if(C_truep(((C_word*)t2)[6])){
if(C_truep(C_i_string_equal_p(((C_word*)t2)[14],((C_word*)t2)[6]))){
C_trace(C_text("batch-driver.scm:470: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t4;
av2[2]=lf[409];
tp(3,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5733(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5733(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5733(2,av2);}}}

/* k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in ... */
static void C_ccall f_5733(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5733,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5736,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[407],((C_word*)t2)[4]))){
t4=C_set_block_item(lf[408] /* chicken.compiler.core#undefine-shadowed-macros */,0,C_SCHEME_FALSE);
t5=t3;
f_5736(t5,t4);}
else{
t4=t3;
f_5736(t4,C_SCHEME_UNDEFINED);}}

/* k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in ... */
static void f_5736(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5736,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5739,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[405],((C_word*)t2)[4]))){
t4=C_set_block_item(lf[406] /* chicken.compiler.core#no-argc-checks */,0,C_SCHEME_TRUE);
t5=t3;
f_5739(t5,t4);}
else{
t4=t3;
f_5739(t4,C_SCHEME_UNDEFINED);}}

/* k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in ... */
static void f_5739(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5739,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5742,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[403],((C_word*)t2)[4]))){
t4=C_set_block_item(lf[404] /* chicken.compiler.core#no-bound-checks */,0,C_SCHEME_TRUE);
t5=t3;
f_5742(t5,t4);}
else{
t4=t3;
f_5742(t4,C_SCHEME_UNDEFINED);}}

/* k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in ... */
static void f_5742(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5742,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5745,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[401],((C_word*)t2)[4]))){
t4=C_set_block_item(lf[402] /* chicken.compiler.core#no-procedure-checks */,0,C_SCHEME_TRUE);
t5=t3;
f_5745(t5,t4);}
else{
t4=t3;
f_5745(t4,C_SCHEME_UNDEFINED);}}

/* k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in ... */
static void f_5745(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5745,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5748,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[399],((C_word*)t2)[4]))){
t4=C_set_block_item(lf[400] /* chicken.compiler.core#no-global-procedure-checks */,0,C_SCHEME_TRUE);
t5=t3;
f_5748(t5,t4);}
else{
t4=t3;
f_5748(t4,C_SCHEME_UNDEFINED);}}

/* k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in ... */
static void f_5748(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,0,3)))){
C_save_and_reclaim_args((void *)trf_5748,2,t0,t1);}
a=C_alloc(41);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5751,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],a[27]=((C_word*)t2)[27],a[28]=((C_word*)t2)[28],a[29]=((C_word*)t2)[29],a[30]=((C_word*)t2)[30],a[31]=((C_word*)t2)[31],a[32]=((C_word*)t2)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(C_u_i_memq(lf[396],((C_word*)t2)[4]))){
t4=C_fast_retrieve(lf[81]);
t5=C_i_check_list_2(C_fast_retrieve(lf[81]),lf[10]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7748,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7787,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];
f_7787(t10,t6,C_fast_retrieve(lf[81]));}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5751(2,av2);}}}

/* k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in ... */
static void C_ccall f_5751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5751,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5754,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(lf[107],C_fast_retrieve(lf[105])))){
C_trace(C_text("batch-driver.scm:492: chicken.load#load-verbose"));
t3=C_fast_retrieve(lf[395]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5754(2,av2);}}}

/* k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in ... */
static void C_ccall f_5754(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(40,c,3)))){
C_save_and_reclaim((void *)f_5754,c,av);}
a=C_alloc(40);
t2=((C_word*)t0)[2];
t3=C_fast_retrieve(lf[135]);
t4=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5757,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],a[27]=((C_word*)t2)[27],a[28]=((C_word*)t2)[28],a[29]=((C_word*)t2)[29],a[30]=((C_word*)t2)[30],a[31]=((C_word*)t2)[31],a[32]=((C_word*)t2)[32],a[33]=t3,tmp=(C_word)a,a+=34,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7718,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7726,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:497: collect-options"));
t7=((C_word*)((C_word*)t2)[22])[1];
f_5397(t7,t6,lf[394]);}

/* k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in ... */
static void C_ccall f_5757(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_5757,c,av);}
a=C_alloc(39);
t2=C_i_check_list_2(t1,lf[10]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7695,a[2]=t5,a[3]=((C_word*)t0)[33],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7695(t7,t3,t1);}

/* k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in ... */
static void C_ccall f_5763(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(40,c,3)))){
C_save_and_reclaim((void *)f_5763,c,av);}
a=C_alloc(40);
t2=C_fast_retrieve(lf[136]);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=t2,tmp=(C_word)a,a+=34,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7685,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7693,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:500: collect-options"));
t6=((C_word*)((C_word*)t0)[22])[1];
f_5397(t6,t5,lf[392]);}

/* k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in ... */
static void C_ccall f_5766(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_5766,c,av);}
a=C_alloc(39);
t2=C_i_check_list_2(t1,lf[10]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7662,a[2]=t5,a[3]=((C_word*)t0)[33],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7662(t7,t3,t1);}

/* k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in ... */
static void C_ccall f_5772(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5772,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[137],C_fast_retrieve(lf[138]));
t3=C_mutate((C_word*)lf[138]+1 /* (set! ##sys#features ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5779,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:504: collect-options"));
t5=((C_word*)((C_word*)t0)[22])[1];
f_5397(t5,t4,lf[390]);}

/* k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in ... */
static void C_ccall f_5779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(37,c,4)))){
C_save_and_reclaim((void *)f_5779,c,av);}
a=C_alloc(37);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_5782,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],a[10]=((C_word*)t2)[9],a[11]=((C_word*)t2)[10],a[12]=((C_word*)t2)[11],a[13]=((C_word*)t2)[12],a[14]=((C_word*)t2)[13],a[15]=((C_word*)t2)[14],a[16]=((C_word*)t2)[15],a[17]=((C_word*)t2)[16],a[18]=((C_word*)t2)[17],a[19]=((C_word*)t2)[18],a[20]=((C_word*)t2)[19],a[21]=((C_word*)t2)[20],a[22]=((C_word*)t2)[21],a[23]=((C_word*)t2)[22],a[24]=((C_word*)t2)[23],a[25]=((C_word*)t2)[24],a[26]=((C_word*)t2)[25],a[27]=((C_word*)t2)[26],a[28]=((C_word*)t2)[27],a[29]=((C_word*)t2)[28],a[30]=((C_word*)t2)[29],a[31]=((C_word*)t2)[30],a[32]=((C_word*)t2)[31],a[33]=((C_word*)t2)[32],tmp=(C_word)a,a+=34,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9641,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[389];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in ... */
static void C_ccall f_5782(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(38,c,3)))){
C_save_and_reclaim((void *)f_5782,c,av);}
a=C_alloc(38);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[10]);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_5805,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],tmp=(C_word)a,a+=33,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7639,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7639(t7,t3,((C_word*)t0)[2]);}

/* k5785 in for-each-loop1550 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_5787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5787,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5790,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(t1))){
C_trace(C_text("batch-driver.scm:509: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t2;
av2[2]=lf[388];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
C_trace(C_text("batch-driver.scm:510: scheme#load"));
t3=*((C_word*)lf[387]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k5788 in k5785 in for-each-loop1550 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_5790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5790,c,av);}
C_trace(C_text("batch-driver.scm:510: scheme#load"));
t2=*((C_word*)lf[387]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in ... */
static void C_ccall f_5805(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5805,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5809,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_fast_retrieve(lf[138]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3289,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3289(t7,t2,C_fast_retrieve(lf[138]));}

/* k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_5809(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5809,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[138]+1 /* (set! ##sys#features ...) */,t1);
t4=C_a_i_cons(&a,2,lf[139],C_fast_retrieve(lf[138]));
t5=C_mutate((C_word*)lf[138]+1 /* (set! ##sys#features ...) */,t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5817,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:514: chicken.compiler.user-pass#user-post-analysis-pass"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[386]);
C_word *av2=av;
av2[0]=*((C_word*)lf[386]+1);
av2[1]=t6;
tp(2,av2);}}

/* k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_5817(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(38,c,3)))){
C_save_and_reclaim((void *)f_5817,c,av);}
a=C_alloc(38);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_5820,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=((C_word*)t2)[13],a[13]=((C_word*)t2)[14],a[14]=((C_word*)t2)[15],a[15]=((C_word*)t2)[16],a[16]=((C_word*)t2)[17],a[17]=((C_word*)t2)[18],a[18]=((C_word*)t2)[19],a[19]=((C_word*)t2)[20],a[20]=((C_word*)t2)[21],a[21]=((C_word*)t2)[22],a[22]=((C_word*)t2)[23],a[23]=((C_word*)t2)[24],a[24]=((C_word*)t2)[25],a[25]=((C_word*)t2)[26],a[26]=((C_word*)t2)[27],a[27]=((C_word*)t2)[28],a[28]=((C_word*)t2)[29],a[29]=((C_word*)t2)[30],a[30]=((C_word*)t2)[31],a[31]=((C_word*)t2)[32],tmp=(C_word)a,a+=32,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7589,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7637,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:519: collect-options"));
t7=((C_word*)((C_word*)t2)[22])[1];
f_5397(t7,t6,lf[384]);}

/* k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_5820(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_5820,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5823,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t1))){
t3=t2;
f_5823(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7575,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,lf[384],t1);
t5=C_a_i_list(&a,2,lf[93],t4);
t6=C_a_i_list(&a,1,t5);
C_trace(C_text("batch-driver.scm:522: scheme#append"));
t7=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in ... */
static void f_5823(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_5823,2,t0,t1);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5826,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7520,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7568,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:527: collect-options"));
t6=((C_word*)((C_word*)t2)[21])[1];
f_5397(t6,t5,lf[383]);}

/* k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in ... */
static void C_ccall f_5826(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5826,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5830,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_fast_retrieve(lf[140]);
t5=C_a_i_list(&a,1,t1);
t6=C_fast_retrieve(lf[140]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3763,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];
f_3763(t10,t3,t5,C_fast_retrieve(lf[140]));}

/* k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_5830(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5830,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[140]+1 /* (set! chicken.compiler.core#linked-libraries ...) */,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5834,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7478,a[2]=t4,a[3]=((C_word*)t2)[2],a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:535: collect-options"));
t10=((C_word*)((C_word*)t2)[21])[1];
f_5397(t10,t9,lf[379]);}

/* k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_5834(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5834,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5837,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[369],((C_word*)t2)[3]))){
t5=C_set_block_item(lf[370] /* ##sys#enable-runtime-macros */,0,C_SCHEME_TRUE);
t6=t4;
f_5837(t6,t5);}
else{
t5=t4;
f_5837(t5,C_SCHEME_UNDEFINED);}}

/* k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in ... */
static void f_5837(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,2)))){
C_save_and_reclaim_args((void *)trf_5837,2,t0,t1);}
a=C_alloc(35);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_5841,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=((C_word*)t2)[13],a[13]=((C_word*)t2)[14],a[14]=((C_word*)t2)[15],a[15]=((C_word*)t2)[16],a[16]=((C_word*)t2)[17],a[17]=((C_word*)t2)[18],a[18]=((C_word*)t2)[19],a[19]=((C_word*)t2)[20],a[20]=((C_word*)t2)[21],a[21]=((C_word*)t2)[22],a[22]=((C_word*)t2)[23],a[23]=((C_word*)t2)[24],a[24]=((C_word*)t2)[25],a[25]=((C_word*)t2)[2],a[26]=((C_word*)t2)[26],a[27]=((C_word*)t2)[27],a[28]=((C_word*)t2)[28],a[29]=((C_word*)t2)[29],a[30]=((C_word*)t2)[30],tmp=(C_word)a,a+=31,tmp);
if(C_truep(((C_word*)t2)[31])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7459,a[2]=((C_word*)t2)[29],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:541: option-arg"));
f_4952(t4,((C_word*)t2)[31]);}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5841(2,av2);}}}

/* k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in ... */
static void C_ccall f_5841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_5841,c,av);}
a=C_alloc(32);
t2=C_mutate((C_word*)lf[141]+1 /* (set! chicken.compiler.core#target-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5845,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(((C_word*)t0)[28])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7452,a[2]=((C_word*)t0)[29],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:544: option-arg"));
f_4952(t4,((C_word*)t0)[28]);}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5845(2,av2);}}}

/* k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in ... */
static void C_ccall f_5845(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5845,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[142]+1 /* (set! chicken.compiler.core#target-stack-size ...) */,t1);
t3=C_i_not(C_u_i_memq(lf[143],((C_word*)t0)[2]));
t4=C_set_block_item(lf[144] /* chicken.compiler.core#emit-trace-info */,0,t3);
t5=C_mutate((C_word*)lf[145]+1 /* (set! chicken.compiler.core#disable-stack-overflow-checking ...) */,C_u_i_memq(lf[146],((C_word*)t0)[2]));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5856,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:547: chicken.platform#feature?"));
t7=C_fast_retrieve(lf[367]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[368];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in ... */
static void C_ccall f_5856(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5856,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_set_block_item(lf[147] /* chicken.compiler.core#bootstrap-mode */,0,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5859,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(lf[365],C_fast_retrieve(lf[105])))){
C_trace(C_text("batch-driver.scm:548: chicken.gc#set-gc-report!"));
t5=C_fast_retrieve(lf[366]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_5859(2,av2);}}}

/* k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in ... */
static void C_ccall f_5859(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5859,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5862,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[364],((C_word*)t2)[2]))){
t4=C_set_block_item(((C_word*)t2)[19],0,C_SCHEME_FALSE);
t5=t3;
f_5862(t5,t4);}
else{
t4=C_mutate((C_word*)lf[9]+1 /* (set! chicken.compiler.core#standard-bindings ...) */,C_fast_retrieve(lf[81]));
t5=C_mutate((C_word*)lf[11]+1 /* (set! chicken.compiler.core#extended-bindings ...) */,C_fast_retrieve(lf[82]));
t6=t3;
f_5862(t6,t5);}}

/* k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in ... */
static void f_5862(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,4)))){
C_save_and_reclaim_args((void *)trf_5862,2,t0,t1);}
a=C_alloc(34);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5865,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],a[27]=((C_word*)t2)[27],tmp=(C_word)a,a+=28,tmp);
if(C_truep(C_fast_retrieve(lf[144]))){
t4=C_a_i_list(&a,1,lf[361]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9613,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[362];
av2[4]=t4;
C_apply(5,av2);}}
else{
t4=C_a_i_list(&a,1,lf[363]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9619,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[362];
av2[4]=t4;
C_apply(5,av2);}}}

/* k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in ... */
static void C_ccall f_5865(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,2)))){
C_save_and_reclaim((void *)f_5865,c,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(((C_word*)t0)[27])){
t3=C_i_car(((C_word*)t0)[27]);
t4=C_eqp(lf[352],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7397,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
if(C_truep(C_i_not(((C_word*)t0)[23]))){
C_trace(C_text("batch-driver.scm:561: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t5;
av2[2]=lf[360];
tp(3,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_7397(2,av2);}}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_7397(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5868(2,av2);}}}

/* k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in ... */
static void C_ccall f_5868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5868,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5871,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:575: chicken.compiler.support#load-identifier-database"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[350]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[350]+1);
av2[1]=t2;
av2[2]=lf[351];
tp(3,av2);}}

/* k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in ... */
static void C_ccall f_5871(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_5871,c,av);}
a=C_alloc(27);
t2=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(lf[148],((C_word*)t2)[2]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5879,a[2]=((C_word*)t2)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:578: chicken.compiler.support#print-version"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[149]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
tp(3,av2);}}
else{
t3=C_u_i_memq(lf[150],((C_word*)t2)[2]);
t4=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5890,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t3)){
t5=t4;
f_5890(t5,t3);}
else{
t5=C_u_i_memq(lf[347],((C_word*)t2)[2]);
if(C_truep(t5)){
t6=t4;
f_5890(t6,t5);}
else{
t6=C_u_i_memq(lf[348],((C_word*)t2)[2]);
t7=t4;
f_5890(t7,(C_truep(t6)?t6:C_u_i_memq(lf[349],((C_word*)t2)[2])));}}}}

/* k5877 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in ... */
static void C_ccall f_5879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5879,c,av);}
C_trace(C_text("batch-driver.scm:579: scheme#newline"));
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in ... */
static void f_5890(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,4)))){
C_save_and_reclaim_args((void *)trf_5890,2,t0,t1);}
a=C_alloc(34);
if(C_truep(t1)){
C_trace(C_text("batch-driver.scm:581: chicken.compiler.support#print-usage"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word av2[2];
av2[0]=*((C_word*)lf[151]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}
else{
if(C_truep(C_u_i_memq(lf[152],((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5901,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5908,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:583: chicken.platform#chicken-version"));
t4=C_fast_retrieve(lf[154]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_not(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5917,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:586: chicken.compiler.support#print-version"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[149]);
C_word av2[3];
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t2;
av2[2]=C_SCHEME_TRUE;
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_5929,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[5],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[2],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[3],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=28,tmp);
t3=C_a_i_list(&a,1,((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9595,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[346];
av2[4]=t3;
C_apply(5,av2);}}}}}

/* k5899 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in ... */
static void C_ccall f_5901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5901,c,av);}
C_trace(C_text("batch-driver.scm:584: scheme#newline"));
t2=*((C_word*)lf[19]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5906 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in ... */
static void C_ccall f_5908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5908,c,av);}
C_trace(C_text("batch-driver.scm:583: scheme#display"));
t2=*((C_word*)lf[153]+1);{
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

/* k5915 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in ... */
static void C_ccall f_5917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5917,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5920,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:587: scheme#display"));
t3=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[157];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5918 in k5915 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in ... */
static void C_ccall f_5920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5920,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5923,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:588: scheme#display"));
t3=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[156];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5921 in k5918 in k5915 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in ... */
static void C_ccall f_5923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5923,c,av);}
C_trace(C_text("batch-driver.scm:589: scheme#display"));
t2=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[155];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in ... */
static void C_ccall f_5929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5929,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5932,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:594: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t2;
av2[2]=lf[341];
av2[3]=lf[345];
av2[4]=((C_word*)t0)[20];
tp(5,av2);}}

/* k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in ... */
static void C_ccall f_5932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5932,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5935,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:595: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t3;
av2[2]=lf[341];
av2[3]=lf[344];
av2[4]=C_fast_retrieve(lf[105]);
tp(5,av2);}}

/* k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in ... */
static void C_ccall f_5935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5935,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5938,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:596: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t3;
av2[2]=lf[341];
av2[3]=lf[343];
av2[4]=C_fast_retrieve(lf[141]);
tp(5,av2);}}

/* k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in ... */
static void C_ccall f_5938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5938,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5941,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:597: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t3;
av2[2]=lf[341];
av2[3]=lf[342];
av2[4]=C_fast_retrieve(lf[142]);
tp(5,av2);}}

/* k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in ... */
static void C_ccall f_5941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5941,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5945,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:263: chicken.time#current-process-milliseconds"));
t4=C_fast_retrieve(lf[116]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in ... */
static void C_ccall f_5945(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5945,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[13])+1,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5949,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:601: scheme#make-vector"));
t5=*((C_word*)lf[339]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fast_retrieve(lf[340]);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in ... */
static void C_ccall f_5949(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5949,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[158]+1 /* (set! ##sys#line-number-database ...) */,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5952,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:602: collect-options"));
t5=((C_word*)((C_word*)t2)[19])[1];
f_5397(t5,t4,lf[338]);}

/* k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in ... */
static void C_ccall f_5952(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5952,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+27,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5955,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:603: collect-options"));
t5=((C_word*)((C_word*)t2)[19])[1];
f_5397(t5,t4,lf[337]);}

/* k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in ... */
static void C_ccall f_5955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(35,c,2)))){
C_save_and_reclaim((void *)f_5955,c,av);}
a=C_alloc(35);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_5958,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],a[27]=((C_word*)t2)[27],a[28]=C_SCHEME_UNDEFINED,a[29]=t1,tmp=(C_word)a,a+=30,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7371,a[2]=((C_word*)t2)[3],a[3]=t3,a[4]=((C_word*)t2)[19],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:605: collect-options"));
t5=((C_word*)((C_word*)t2)[19])[1];
f_5397(t5,t4,lf[336]);}

/* k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in ... */
static void C_ccall f_5958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5958,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+28,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5961,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:609: chicken.compiler.user-pass#user-read-pass"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[334]);
C_word *av2=av;
av2[0]=*((C_word*)lf[334]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in ... */
static void C_ccall f_5961(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(38,c,4)))){
C_save_and_reclaim((void *)f_5961,c,av);}
a=C_alloc(38);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5964,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t1)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7203,a[2]=((C_word*)t2)[26],a[3]=t3,a[4]=t1,a[5]=((C_word*)t2)[27],a[6]=((C_word*)t2)[28],a[7]=((C_word*)t2)[29],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9581,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[328];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7212,a[2]=((C_word*)t2)[26],a[3]=((C_word*)t2)[27],a[4]=((C_word*)t2)[29],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7212(t7,t3,((C_word*)t2)[28]);}}

/* k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in ... */
static void C_ccall f_5964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5964,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5967,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:633: chicken.compiler.user-pass#user-preprocessor-pass"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[327]);
C_word *av2=av;
av2[0]=*((C_word*)lf[327]+1);
av2[1]=t2;
tp(2,av2);}}

/* k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in ... */
static void C_ccall f_5967(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_5967,c,av);}
a=C_alloc(35);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5970,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],a[25]=((C_word*)t2)[25],a[26]=((C_word*)t2)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(t1)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7156,a[2]=((C_word*)t2)[26],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9575,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[326];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t3;
f_5970(t4,C_SCHEME_UNDEFINED);}}

/* k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in ... */
static void f_5970(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_5970,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5973,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:638: print-expr"));
t3=((C_word*)((C_word*)t0)[21])[1];
f_5141(t3,t2,lf[324],lf[325],((C_word*)((C_word*)t0)[26])[1]);}

/* k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in ... */
static void C_ccall f_5973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5973,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5976,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:639: begin-time"));
t4=((C_word*)((C_word*)t2)[5])[1];
f_5432(t4,t3);}

/* k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in ... */
static void C_ccall f_5976(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_5976,c,av);}
a=C_alloc(39);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[159]);
t8=((C_word*)((C_word*)t2)[2])[1];
t9=C_i_check_list_2(t8,lf[5]);
t10=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_5985,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=((C_word*)t2)[13],a[13]=((C_word*)t2)[14],a[14]=((C_word*)t2)[15],a[15]=((C_word*)t2)[16],a[16]=((C_word*)t2)[17],a[17]=((C_word*)t2)[18],a[18]=((C_word*)t2)[19],a[19]=((C_word*)t2)[20],a[20]=((C_word*)t2)[21],a[21]=((C_word*)t2)[22],a[22]=((C_word*)t2)[23],a[23]=((C_word*)t2)[24],a[24]=((C_word*)t2)[25],a[25]=((C_word*)t2)[26],tmp=(C_word)a,a+=26,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7121,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7121(t14,t10,t8);}

/* k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in ... */
static void C_ccall f_5985(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,3)))){
C_save_and_reclaim((void *)f_5985,c,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5989,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_6012,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=t1,a[23]=((C_word*)t0)[22],a[24]=t4,a[25]=t6,a[26]=t5,a[27]=((C_word*)t0)[23],tmp=(C_word)a,a+=28,tmp);
C_trace(C_text("batch-driver.scm:645: scheme#append"));
t8=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)((C_word*)t0)[24])[1];
av2[3]=((C_word*)((C_word*)t0)[25])[1];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* g1830 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in ... */
static void f_5989(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_5989,3,t0,t1,t2);}
a=C_alloc(15);
t3=((C_word*)t0)[2];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5995,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6000,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6006,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:643: ##sys#dynamic-wind"));
t10=*((C_word*)lf[161]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t1;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* a5994 in g1830 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in ... */
static void C_ccall f_5995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5995,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[160]));
t3=C_mutate((C_word*)lf[160]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a5999 in g1830 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in ... */
static void C_ccall f_6000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6000,c,av);}
C_trace(C_text("batch-driver.scm:644: chicken.compiler.core#canonicalize-expression"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[159]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[159]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* a6005 in g1830 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in ... */
static void C_ccall f_6006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6006,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[160]));
t3=C_mutate((C_word*)lf[160]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in ... */
static void C_ccall f_6012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_6012,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_6015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],tmp=(C_word)a,a+=27,tmp);
if(C_truep(C_i_not(((C_word*)t0)[27]))){
t3=t2;
f_6015(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7115,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:649: scheme#string->symbol"));
t4=*((C_word*)lf[323]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[27];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in ... */
static void f_6015(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(35,0,3)))){
C_save_and_reclaim_args((void *)trf_6015,2,t0,t1);}
a=C_alloc(35);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_6021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=C_SCHEME_UNDEFINED,a[24]=((C_word*)t0)[23],a[25]=C_SCHEME_UNDEFINED,a[26]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=27,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7065,a[2]=((C_word*)t0)[24],a[3]=t5,a[4]=((C_word*)t0)[25],a[5]=((C_word*)t0)[26],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7065(t7,t3,t1);}

/* k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in ... */
static void C_ccall f_6021(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6021,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+23,t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_mutate(((C_word *)t0)+25,t5);
t7=((C_word*)((C_word*)t0)[25])[1];
t8=C_mutate(((C_word *)t0)+26,t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6036,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:653: ##sys#fast-reverse"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[320]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[320]+1);
av2[1]=t9;
av2[2]=C_fast_retrieve(lf[321]);
tp(3,av2);}}

/* k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in ... */
static void C_ccall f_6036(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_6036,c,av);}
a=C_alloc(32);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t1,lf[5]);
t4=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6042,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],a[23]=((C_word*)t2)[23],a[24]=((C_word*)t2)[24],tmp=(C_word)a,a+=25,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7031,a[2]=((C_word*)t2)[25],a[3]=t6,a[4]=((C_word*)t2)[26],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7031(t8,t4,t1);}

/* k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in ... */
static void C_ccall f_6042(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,3)))){
C_save_and_reclaim((void *)f_6042,c,av);}
a=C_alloc(42);
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_6045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[310]);
t8=C_i_check_list_2(C_fast_retrieve(lf[310]),lf[5]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6963,a[2]=((C_word*)t0)[21],a[3]=t2,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[22],a[6]=t1,a[7]=((C_word*)t0)[23],a[8]=((C_word*)t0)[24],tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6997,a[2]=t5,a[3]=t11,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_6997(t13,t9,C_fast_retrieve(lf[310]));}

/* k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in ... */
static void C_ccall f_6045(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,3)))){
C_save_and_reclaim((void *)f_6045,c,av);}
a=C_alloc(42);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_6048,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=t3,a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
if(C_truep(C_i_nullp(C_fast_retrieve(lf[127])))){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6048(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6885,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_fast_retrieve(lf[127]);
t11=C_i_check_list_2(C_fast_retrieve(lf[127]),lf[5]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6904,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6906,a[2]=t8,a[3]=t14,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t16=((C_word*)t14)[1];
f_6906(t16,t12,C_fast_retrieve(lf[127]));}}

/* k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in ... */
static void C_ccall f_6048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6048,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6051,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(C_fast_retrieve(lf[299])))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6816,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("batch-driver.scm:677: chicken.compiler.support#with-debugging-output"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[304]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[304]+1);
av2[1]=t2;
av2[2]=lf[305];
av2[3]=t3;
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6051(2,av2);}}}

/* k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in ... */
static void C_ccall f_6051(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6051,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6054,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6805,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:684: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t4;
av2[2]=lf[297];
av2[3]=lf[298];
tp(4,av2);}}

/* k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in ... */
static void C_ccall f_6054(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6054,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6057,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6799,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:686: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t4;
av2[2]=lf[294];
av2[3]=lf[295];
tp(4,av2);}}

/* k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in ... */
static void C_ccall f_6057(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6057,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[158]+1 /* (set! ##sys#line-number-database ...) */,C_fast_retrieve(lf[162]));
t4=C_set_block_item(lf[162] /* chicken.compiler.core#line-number-database-2 */,0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6062,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:692: end-time"));
t6=((C_word*)((C_word*)t2)[2])[1];
f_5442(t6,t5,lf[292]);}

/* k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in ... */
static void C_ccall f_6062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_6062,c,av);}
a=C_alloc(21);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_6065,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],tmp=(C_word)a,a+=21,tmp);
C_trace(C_text("batch-driver.scm:693: print-expr"));
t4=((C_word*)((C_word*)t2)[21])[1];
f_5141(t4,t3,lf[290],lf[291],((C_word*)((C_word*)t2)[20])[1]);}

/* k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in ... */
static void C_ccall f_6065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6065,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6068,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_memq(lf[289],((C_word*)t0)[19]))){
C_trace(C_text("batch-driver.scm:695: chicken.base#exit"));
t3=C_fast_retrieve(lf[201]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6068(2,av2);}}}

/* k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in ... */
static void C_ccall f_6068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6068,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6071,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:698: chicken.compiler.user-pass#user-pass"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[288]);
C_word *av2=av;
av2[0]=*((C_word*)lf[288]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in ... */
static void C_ccall f_6071(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_6071,c,av);}
a=C_alloc(31);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_6074,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],tmp=(C_word)a,a+=21,tmp);
if(C_truep(t1)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6741,a[2]=((C_word*)t2)[20],a[3]=((C_word*)t2)[2],a[4]=t3,a[5]=t1,a[6]=((C_word*)t2)[3],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9555,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[287];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6074(2,av2);}}}

/* k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in ... */
static void C_ccall f_6074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_6074,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_6077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=C_SCHEME_UNDEFINED,a[18]=((C_word*)t0)[17],a[19]=C_SCHEME_UNDEFINED,a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],tmp=(C_word)a,a+=22,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6734,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6738,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:708: chicken.compiler.support#canonicalize-begin-body"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[285]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[285]+1);
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[20])[1];
tp(3,av2);}}

/* k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in ... */
static void C_ccall f_6077(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6077,c,av);}
a=C_alloc(5);
t2=C_mutate(((C_word *)t0)+17,t1);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_mutate(((C_word *)t0)+19,t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6080,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:710: print-node"));
t7=((C_word*)((C_word*)t0)[5])[1];
f_5092(t7,t6,lf[281],lf[282],((C_word*)t0)[17]);}

/* k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in ... */
static void C_ccall f_6080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6080,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6083,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:711: initialize-analysis-database"));
t4=lf[8];
f_4171(t4,t3);}

/* k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in ... */
static void C_ccall f_6083(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_6083,c,av);}
a=C_alloc(28);
t2=((C_word*)t0)[2];
t3=C_fast_retrieve(lf[163]);
t4=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6086,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=t3,a[20]=((C_word*)t2)[19],a[21]=((C_word*)t2)[20],a[22]=((C_word*)t2)[21],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_fast_retrieve(lf[277]))){
t5=C_fast_retrieve(lf[163]);
t6=C_i_check_list_2(C_fast_retrieve(lf[163]),lf[10]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6709,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];
f_6709(t10,t4,C_fast_retrieve(lf[163]));}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6086(2,av2);}}}

/* k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in ... */
static void C_ccall f_6086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6086,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6089,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:723: collect-options"));
t3=((C_word*)((C_word*)t0)[21])[1];
f_5397(t3,t2,lf[276]);}

/* k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in ... */
static void C_ccall f_6089(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_6089,c,av);}
a=C_alloc(28);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6092,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],a[22]=((C_word*)t2)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_i_nullp(t1))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6092(2,av2);}}
else{
t4=C_set_block_item(lf[169] /* chicken.compiler.core#inline-locally */,0,C_SCHEME_TRUE);
t5=C_i_check_list_2(t1,lf[10]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6662,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_6662(t9,t3,t1);}}

/* k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in ... */
static void C_ccall f_6092(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_6092,c,av);}
a=C_alloc(34);
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_6095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=((C_word*)((C_word*)t0)[18])[1];
t4=(C_truep(t3)?t3:C_fast_retrieve(lf[124]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6513,a[2]=((C_word*)t0)[19],a[3]=((C_word*)t0)[20],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[17],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[18],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[4],a[12]=((C_word*)t0)[21],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_u_i_memq(lf[271],((C_word*)t0)[22]))){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_6513(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6639,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:735: chicken.compiler.scrutinizer#load-type-database"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[265]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[265]+1);
av2[1]=t6;
av2[2]=lf[273];
av2[3]=C_fast_retrieve(lf[124]);
tp(4,av2);}}}
else{
t5=t2;
f_6095(t5,C_SCHEME_UNDEFINED);}}

/* k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in ... */
static void f_6095(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6095,2,t0,t1);}
a=C_alloc(6);
t2=C_set_block_item(lf[158] /* ##sys#line-number-database */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[164] /* chicken.compiler.core#constant-table */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[165] /* chicken.compiler.core#inline-table */,0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6101,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fast_retrieve(lf[252]))){
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_6101(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6507,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:771: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[254]);
C_word av2[3];
av2[0]=*((C_word*)lf[254]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[17];
tp(3,av2);}}}

/* k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in ... */
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
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6104,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:773: begin-time"));
t4=((C_word*)((C_word*)t2)[3])[1];
f_5432(t4,t3);}

/* k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in ... */
static void C_ccall f_6104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_6104,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_6107,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=18,tmp);
C_trace(C_text("batch-driver.scm:775: chicken.compiler.core#perform-cps-conversion"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[251]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[251]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[17];
tp(3,av2);}}

/* k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in ... */
static void C_ccall f_6107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6107,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+17,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6110,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:776: end-time"));
t4=((C_word*)((C_word*)t0)[2])[1];
f_5442(t4,t3,lf[250]);}

/* k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in ... */
static void C_ccall f_6110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6110,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6113,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:777: print-node"));
t4=((C_word*)((C_word*)t2)[5])[1];
f_5092(t4,t3,lf[248],lf[249],((C_word*)t2)[17]);}

/* k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in ... */
static void C_ccall f_6113(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6113,c,av);}
a=C_alloc(19);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6118,a[2]=t4,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],a[10]=((C_word*)t2)[9],a[11]=((C_word*)t2)[10],a[12]=((C_word*)t2)[11],a[13]=((C_word*)t2)[12],a[14]=((C_word*)t2)[13],a[15]=((C_word*)t2)[14],a[16]=((C_word*)t2)[15],tmp=(C_word)a,a+=17,tmp));
t6=((C_word*)t4)[1];
f_6118(t6,((C_word*)t2)[16],C_fix(1),((C_word*)t2)[17],C_SCHEME_TRUE);}

/* loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in ... */
static void f_6118(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,2)))){
C_save_and_reclaim_args((void *)trf_6118,5,t0,t1,t2,t3,t4);}
a=C_alloc(23);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_6122,a[2]=t4,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=t1,a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],a[17]=((C_word*)t0)[13],a[18]=((C_word*)t0)[14],a[19]=((C_word*)t0)[15],a[20]=((C_word*)t0)[16],tmp=(C_word)a,a+=21,tmp);
C_trace(C_text("batch-driver.scm:783: begin-time"));
t7=((C_word*)((C_word*)t0)[4])[1];
f_5432(t7,t6);}

/* k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in ... */
static void C_ccall f_6122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6122,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6125,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:785: analyze"));
t3=((C_word*)((C_word*)t0)[8])[1];
f_5482(t3,t2,lf[247],((C_word*)((C_word*)t0)[3])[1],C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[2]));}

/* k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in ... */
static void C_ccall f_6125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,2)))){
C_save_and_reclaim((void *)f_6125,c,av);}
a=C_alloc(27);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_6128,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],a[10]=((C_word*)t2)[9],a[11]=((C_word*)t2)[10],a[12]=((C_word*)t2)[11],a[13]=((C_word*)t2)[12],a[14]=((C_word*)t2)[13],a[15]=((C_word*)t2)[14],a[16]=((C_word*)t2)[15],a[17]=((C_word*)t2)[16],a[18]=((C_word*)t2)[17],a[19]=((C_word*)t2)[18],a[20]=((C_word*)t2)[19],a[21]=((C_word*)t2)[20],tmp=(C_word)a,a+=22,tmp);
if(C_truep(C_fast_retrieve(lf[166]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6445,a[2]=t3,a[3]=((C_word*)t2)[13],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_memq(lf[245],C_fast_retrieve(lf[105])))){
C_trace(C_text("batch-driver.scm:788: chicken.compiler.support#dump-undefined-globals"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[246]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[246]+1);
av2[1]=t4;
av2[2]=t1;
tp(3,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6445(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6128(2,av2);}}}

/* k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in ... */
static void C_ccall f_6128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6128,c,av);}
a=C_alloc(3);
t2=C_set_block_item(lf[166] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6132,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:801: end-time"));
t4=((C_word*)((C_word*)t0)[7])[1];
f_5442(t4,t3,lf[235]);}

/* k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in ... */
static void C_ccall f_6132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6132,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6135,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:802: print-db"));
t4=((C_word*)((C_word*)t2)[19])[1];
f_5114(t4,t3,lf[233],lf[234],((C_word*)t2)[4],((C_word*)t2)[5]);}

/* k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in ... */
static void C_ccall f_6135(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,9)))){
C_save_and_reclaim((void *)f_6135,c,av);}
a=C_alloc(27);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_6138,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],a[17]=((C_word*)t2)[17],a[18]=((C_word*)t2)[18],a[19]=((C_word*)t2)[19],a[20]=((C_word*)t2)[20],a[21]=((C_word*)t2)[21],tmp=(C_word)a,a+=22,tmp);
if(C_truep(C_i_memq(lf[223],C_fast_retrieve(lf[105])))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4078,a[2]=((C_word*)t2)[4],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4084,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("batch-driver.scm:74: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6138(2,av2);}}}

/* k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in ... */
static void C_ccall f_6138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_6138,c,av);}
a=C_alloc(25);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6144,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("batch-driver.scm:809: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t2;
av2[2]=lf[107];
av2[3]=lf[182];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_6222,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[15],a[9]=((C_word*)t0)[16],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[17],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[18],a[15]=((C_word*)t0)[19],a[16]=((C_word*)t0)[5],a[17]=((C_word*)t0)[20],tmp=(C_word)a,a+=18,tmp);
if(C_truep(((C_word*)t0)[21])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6408,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:842: begin-time"));
t4=((C_word*)((C_word*)t0)[8])[1];
f_5432(t4,t3);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6222(2,av2);}}}}

/* k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in ... */
static void C_ccall f_6144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6144,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6147,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:810: begin-time"));
t3=((C_word*)((C_word*)t0)[7])[1];
f_5432(t3,t2);}

/* k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in ... */
static void C_ccall f_6147(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6147,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6152,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6158,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[6],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[9],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("batch-driver.scm:811: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t2)[10];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a6151 in k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in ... */
static void C_ccall f_6152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_6152,c,av);}
C_trace(C_text("batch-driver.scm:812: chicken.compiler.optimizer#perform-high-level-optimizations"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[167]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[167]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[3];
av2[4]=C_fast_retrieve(lf[168]);
av2[5]=C_fast_retrieve(lf[169]);
av2[6]=C_fast_retrieve(lf[170]);
av2[7]=C_fast_retrieve(lf[171]);
av2[8]=C_fast_retrieve(lf[172]);
tp(9,av2);}}

/* a6157 in k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in ... */
static void C_ccall f_6158(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6158,c,av);}
a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6162,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("batch-driver.scm:817: end-time"));
t5=((C_word*)((C_word*)t0)[4])[1];
f_5442(t5,t4,lf[181]);}

/* k6160 in a6157 in k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in ... */
static void C_ccall f_6162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6162,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("batch-driver.scm:818: print-node"));
t3=((C_word*)((C_word*)t0)[10])[1];
f_5092(t3,t2,lf[179],lf[180],((C_word*)t0)[6]);}

/* k6163 in k6160 in a6157 in k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in ... */
static void C_ccall f_6165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_6165,c,av);}
a=C_alloc(29);
if(C_truep(((C_word*)t0)[2])){
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
C_trace(C_text("batch-driver.scm:820: loop"));
t3=((C_word*)((C_word*)t0)[4])[1];
f_6118(t3,((C_word*)t0)[5],t2,((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
if(C_truep(C_i_not(C_fast_retrieve(lf[172])))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6182,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:822: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t2;
av2[2]=lf[107];
av2[3]=lf[173];
tp(4,av2);}}
else{
if(C_truep(C_fast_retrieve(lf[174]))){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6194,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("batch-driver.scm:826: begin-time"));
t3=((C_word*)((C_word*)t0)[8])[1];
f_5432(t3,t2);}
else{
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
C_trace(C_text("batch-driver.scm:837: loop"));
t3=((C_word*)((C_word*)t0)[4])[1];
f_6118(t3,((C_word*)t0)[5],t2,((C_word*)t0)[6],C_SCHEME_FALSE);}}}}

/* k6180 in k6163 in k6160 in a6157 in k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in ... */
static void C_ccall f_6182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_6182,c,av);}
a=C_alloc(29);
t2=C_set_block_item(lf[172] /* chicken.compiler.core#inline-substitutions-enabled */,0,C_SCHEME_TRUE);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
C_trace(C_text("batch-driver.scm:824: loop"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_6118(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_TRUE);}

/* k6192 in k6163 in k6160 in a6157 in k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in ... */
static void C_ccall f_6194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6194,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=C_SCHEME_UNDEFINED,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("batch-driver.scm:827: analyze"));
t3=((C_word*)((C_word*)t0)[8])[1];
f_5482(t3,t2,lf[178],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k6195 in k6192 in k6163 in k6160 in a6157 in k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in ... */
static void C_ccall f_6197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6197,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+7,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6200,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:828: end-time"));
t4=((C_word*)((C_word*)t0)[6])[1];
f_5442(t4,t3,lf[177]);}

/* k6198 in k6195 in k6192 in k6163 in k6160 in a6157 in k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in ... */
static void C_ccall f_6200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6200,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6203,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("batch-driver.scm:829: begin-time"));
t4=((C_word*)((C_word*)t2)[8])[1];
f_5432(t4,t3);}

/* k6201 in k6198 in k6195 in k6192 in k6163 in k6160 in a6157 in k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in ... */
static void C_ccall f_6203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6203,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6206,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:831: chicken.compiler.optimizer#transform-direct-lambdas!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[176]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[176]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}

/* k6204 in k6201 in k6198 in k6195 in k6192 in k6163 in k6160 in a6157 in k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in ... */
static void C_ccall f_6206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6206,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:832: end-time"));
t3=((C_word*)((C_word*)t0)[6])[1];
f_5442(t3,t2,lf[175]);}

/* k6207 in k6204 in k6201 in k6198 in k6195 in k6192 in k6163 in k6160 in a6157 in k6145 in k6142 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in ... */
static void C_ccall f_6209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_6209,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
C_trace(C_text("batch-driver.scm:833: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6118(t3,((C_word*)t0)[4],t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in ... */
static void C_ccall f_6222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6222,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6225,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:851: print-node"));
t3=((C_word*)((C_word*)t0)[13])[1];
f_5092(t3,t2,lf[215],lf[216],((C_word*)((C_word*)t0)[2])[1]);}

/* k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in ... */
static void C_ccall f_6225(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_6225,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6228,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],tmp=(C_word)a,a+=17,tmp);
t4=(C_truep(((C_word*)((C_word*)t2)[17])[1])?C_fast_retrieve(lf[210]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=((C_word*)((C_word*)t2)[17])[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6358,a[2]=t3,a[3]=((C_word*)t2)[7],a[4]=t5,a[5]=((C_word*)t2)[3],tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_list(&a,1,t5);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9519,a[2]=t6,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t8;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[214];
av2[4]=t7;
C_apply(5,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6228(2,av2);}}}

/* k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in ... */
static void C_ccall f_6228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6228,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6231,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:861: begin-time"));
t3=((C_word*)((C_word*)t0)[10])[1];
f_5432(t3,t2);}

/* k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in ... */
static void C_ccall f_6231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6231,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6235,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:863: chicken.compiler.core#perform-closure-conversion"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[209]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[209]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[2])[1];
av2[3]=((C_word*)t2)[3];
tp(4,av2);}}

/* k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in ... */
static void C_ccall f_6235(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6235,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6238,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:864: end-time"));
t5=((C_word*)((C_word*)t2)[4])[1];
f_5442(t5,t4,lf[208]);}

/* k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in ... */
static void C_ccall f_6238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_6238,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6241,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],tmp=(C_word)a,a+=15,tmp);
C_trace(C_text("batch-driver.scm:865: print-db"));
t4=((C_word*)((C_word*)t2)[15])[1];
f_5114(t4,t3,lf[206],lf[207],((C_word*)t2)[3],((C_word*)t2)[16]);}

/* k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in ... */
static void C_ccall f_6241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_6241,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_fast_retrieve(lf[204]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6352,a[2]=((C_word*)t0)[14],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:263: chicken.time#current-process-milliseconds"));
t4=C_fast_retrieve(lf[116]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6244(2,av2);}}}

/* k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in ... */
static void C_ccall f_6244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6244,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("batch-driver.scm:869: print-node"));
t3=((C_word*)((C_word*)t0)[13])[1];
f_5092(t3,t2,lf[202],lf[203],((C_word*)((C_word*)t0)[2])[1]);}

/* k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in ... */
static void C_ccall f_6247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6247,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[12])){
C_trace(C_text("batch-driver.scm:870: chicken.base#exit"));
t3=C_fast_retrieve(lf[201]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6250(2,av2);}}}

/* k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in ... */
static void C_ccall f_6250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6250,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6253,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:871: begin-time"));
t3=((C_word*)((C_word*)t0)[10])[1];
f_5432(t3,t2);}

/* k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in ... */
static void C_ccall f_6253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,7)))){
C_save_and_reclaim((void *)f_6253,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6258,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6264,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[6],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[9],a[8]=((C_word*)t2)[3],a[9]=((C_word*)t2)[10],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("batch-driver.scm:873: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t2)[11];
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a6257 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in ... */
static void C_ccall f_6258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6258,c,av);}
C_trace(C_text("batch-driver.scm:874: chicken.compiler.core#prepare-for-code-generation"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[183]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[183]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in ... */
static void C_ccall f_6264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7;
C_word t8;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6264,c,av);}
a=C_alloc(15);
t7=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6268,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t4,a[8]=t5,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=t6,a[14]=((C_word*)t0)[9],tmp=(C_word)a,a+=15,tmp);
C_trace(C_text("batch-driver.scm:875: end-time"));
t8=((C_word*)((C_word*)t0)[2])[1];
f_5442(t8,t7,lf[200]);}

/* k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in ... */
static void C_ccall f_6268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6268,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
C_trace(C_text("batch-driver.scm:876: begin-time"));
t3=((C_word*)((C_word*)t0)[14])[1];
f_5432(t3,t2);}

/* k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in ... */
static void C_ccall f_6271(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6271,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6274,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fast_retrieve(lf[196]))){
t3=C_fast_retrieve(lf[163]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6323,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_list(&a,1,C_fast_retrieve(lf[196]));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9511,a[2]=t4,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t6;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[199];
av2[4]=t5;
C_apply(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6274(2,av2);}}}

/* k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in ... */
static void C_ccall f_6274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6274,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6277,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t2)[4])){
C_trace(C_text("batch-driver.scm:886: scheme#open-output-file"));
t4=*((C_word*)lf[195]+1);{
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
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=*((C_word*)lf[20]+1);
f_6277(2,av2);}}}

/* k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in ... */
static void C_ccall f_6277(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_6277,c,av);}
a=C_alloc(21);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6280,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=t1,a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],a[10]=((C_word*)t2)[9],a[11]=((C_word*)t2)[10],a[12]=((C_word*)t2)[11],a[13]=((C_word*)t2)[12],a[14]=((C_word*)t2)[13],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)t2)[4])){
t4=C_a_i_list(&a,1,((C_word*)t2)[4]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9505,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[194];
av2[4]=t4;
C_apply(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6280(2,av2);}}}

/* k6278 in k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in ... */
static void C_ccall f_6280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,10)))){
C_save_and_reclaim((void *)f_6280,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:890: chicken.compiler.c-backend#generate-code"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[193]);
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
}
av2[0]=*((C_word*)lf[193]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[9];
av2[5]=((C_word*)t0)[6];
av2[6]=((C_word*)t0)[10];
av2[7]=((C_word*)t0)[11];
av2[8]=((C_word*)t0)[12];
av2[9]=((C_word*)t0)[13];
av2[10]=((C_word*)t0)[14];
tp(11,av2);}}

/* k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in ... */
static void C_ccall f_6283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6283,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6286,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6311,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:893: scheme#close-output-port"));
t4=*((C_word*)lf[192]+1);{
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
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6286(2,av2);}}}

/* k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in ... */
static void C_ccall f_6286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6286,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:895: end-time"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5442(t3,t2,lf[190]);}

/* k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in ... */
static void C_ccall f_6289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6289,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6292,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(lf[187],C_fast_retrieve(lf[105])))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6308,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:897: ##sys#stop-timer"));
t4=*((C_word*)lf[189]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8837,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:898: chicken.compiler.support#compiler-cleanup-hook"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[186]);
C_word *av2=av;
av2[0]=*((C_word*)lf[186]+1);
av2[1]=t3;
tp(2,av2);}}}

/* k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in ... */
static void C_ccall f_6292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6292,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6295,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:898: chicken.compiler.support#compiler-cleanup-hook"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[186]);
C_word *av2=av;
av2[0]=*((C_word*)lf[186]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6293 in k6290 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in ... */
static void C_ccall f_6295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6295,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9493,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t2;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[185];
av2[4]=C_SCHEME_END_OF_LIST;
C_apply(5,av2);}}

/* k6306 in k6287 in k6284 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in ... */
static void C_ccall f_6308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6308,c,av);}
C_trace(C_text("batch-driver.scm:897: ##sys#display-times"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[188]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[188]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6309 in k6281 in k6278 in k6275 in k6272 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in ... */
static void C_ccall f_6311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6311,c,av);}
C_trace(C_text("batch-driver.scm:894: chicken.file#rename-file"));
t2=C_fast_retrieve(lf[191]);{
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
av2[4]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6321 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in ... */
static void C_ccall f_6323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6323,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6328,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:882: scheme#with-output-to-file"));
t3=C_fast_retrieve(lf[198]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=C_fast_retrieve(lf[196]);
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a6327 in k6321 in k6269 in k6266 in a6263 in k6251 in k6248 in k6245 in k6242 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in ... */
static void C_ccall f_6328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6328,c,av);}
t2=C_fast_retrieve(lf[197]);
C_trace(C_text("batch-driver.scm:882: g2203"));
t3=C_fast_retrieve(lf[197]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6350 in k6239 in k6236 in k6233 in k6229 in k6226 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in ... */
static void C_ccall f_6352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_6352,c,av);}
a=C_alloc(29);
t2=C_s_a_i_minus(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_i_greaterp(t2,C_fix(60000)))){
C_trace(C_text("batch-driver.scm:868: scheme#display"));
t3=*((C_word*)lf[153]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[205];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6244(2,av2);}}}

/* k6356 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in ... */
static void C_ccall f_6358(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_6358,c,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_fast_retrieve(lf[211]);
t7=C_fast_retrieve(lf[212]);
t8=C_i_check_list_2(C_fast_retrieve(lf[212]),lf[5]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6371,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6373,a[2]=t4,a[3]=t11,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6373(t13,t9,C_fast_retrieve(lf[212]));}

/* k6369 in k6356 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in ... */
static void C_ccall f_6371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6371,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("batch-driver.scm:857: chicken.compiler.support#emit-global-inline-file"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[213]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=((C_word*)t2)[4];
av2[4]=((C_word*)t2)[5];
av2[5]=C_fast_retrieve(lf[168]);
av2[6]=C_fast_retrieve(lf[170]);
av2[7]=t1;
tp(8,av2);}}

/* map-loop2168 in k6356 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in ... */
static void f_6373(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6373,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:860: g2174"));
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

/* k6396 in map-loop2168 in k6356 in k6223 in k6220 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in ... */
static void C_ccall f_6398(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6398,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6373(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6406 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in ... */
static void C_ccall f_6408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6408,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6411,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:843: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t2;
av2[2]=lf[107];
av2[3]=lf[222];
tp(4,av2);}}

/* k6409 in k6406 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in ... */
static void C_ccall f_6411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6411,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6414,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:844: chicken.compiler.lfa2#perform-secondary-flow-analysis"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[221]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[221]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[4])[1];
av2[3]=((C_word*)t2)[6];
tp(4,av2);}}

/* k6412 in k6409 in k6406 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in ... */
static void C_ccall f_6414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6414,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6417,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:845: end-time"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_5442(t4,t3,lf[220]);}

/* k6415 in k6412 in k6409 in k6406 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in ... */
static void C_ccall f_6417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6417,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(C_i_nullp(((C_word*)t2)[2]))){
C_trace(C_text("batch-driver.scm:850: end-time"));
t3=((C_word*)((C_word*)t2)[3])[1];
f_5442(t3,((C_word*)t2)[4],lf[217]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6429,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[2],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:847: begin-time"));
t4=((C_word*)((C_word*)t2)[6])[1];
f_5432(t4,t3);}}

/* k6427 in k6415 in k6412 in k6409 in k6406 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in ... */
static void C_ccall f_6429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6429,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6432,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:848: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t2;
av2[2]=lf[107];
av2[3]=lf[219];
tp(4,av2);}}

/* k6430 in k6427 in k6415 in k6412 in k6409 in k6406 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in ... */
static void C_ccall f_6432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6432,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6436,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:849: chicken.compiler.lfa2#perform-unboxing"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[218]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[2])[1];
av2[3]=((C_word*)t2)[5];
tp(4,av2);}}

/* k6434 in k6430 in k6427 in k6415 in k6412 in k6409 in k6406 in k6136 in k6133 in k6130 in k6126 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in ... */
static void C_ccall f_6436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6436,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("batch-driver.scm:850: end-time"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5442(t3,((C_word*)t0)[4],lf[217]);}

/* k6443 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in ... */
static void C_ccall f_6445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6445,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6448,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(lf[243],C_fast_retrieve(lf[105])))){
C_trace(C_text("batch-driver.scm:790: chicken.compiler.support#dump-defined-globals"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[244]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[244]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6448(2,av2);}}}

/* k6446 in k6443 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in ... */
static void C_ccall f_6448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6448,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6451,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_memq(lf[241],C_fast_retrieve(lf[105])))){
C_trace(C_text("batch-driver.scm:792: chicken.compiler.support#dump-global-refs"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[242]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[242]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
tp(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6451(2,av2);}}}

/* k6449 in k6446 in k6443 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in ... */
static void C_ccall f_6451(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6451,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6454,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_eqp(C_fast_retrieve(lf[238]),C_SCHEME_TRUE);
if(C_truep(t4)){
C_trace(C_text("batch-driver.scm:795: chicken.pathname#pathname-replace-extension"));
t5=C_fast_retrieve(lf[239]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
av2[3]=lf[240];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_6454(2,av2);}}}

/* k6452 in k6449 in k6446 in k6443 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in ... */
static void C_ccall f_6454(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6454,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6457,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=t3;
f_6457(t4,t1);}
else{
if(C_truep(C_i_stringp(C_fast_retrieve(lf[238])))){
t4=C_fast_retrieve(lf[238]);
t5=t3;
f_6457(t5,C_fast_retrieve(lf[238]));}
else{
t4=t3;
f_6457(t4,C_SCHEME_FALSE);}}}

/* k6455 in k6452 in k6449 in k6446 in k6443 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in ... */
static void f_6457(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_6457,2,t0,t1);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6463,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,a[5]=((C_word*)t2)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_list(&a,1,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9525,a[2]=t3,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[237];
av2[4]=t4;
C_apply(5,av2);}}
else{
t3=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_6128(2,av2);}}}

/* k6461 in k6455 in k6452 in k6449 in k6446 in k6443 in k6123 in k6120 in loop in k6111 in k6108 in k6105 in k6102 in k6099 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in ... */
static void C_ccall f_6463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6463,c,av);}
C_trace(C_text("batch-driver.scm:799: chicken.compiler.scrutinizer#emit-types-file"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=C_fast_retrieve(lf[168]);
tp(6,av2);}}

/* k6505 in k6093 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in ... */
static void C_ccall f_6507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6507,c,av);}
C_trace(C_text("batch-driver.scm:771: chicken.compiler.optimizer#scan-toplevel-assignments"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[253]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[253]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_car(t1);
tp(3,av2);}}

/* k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in ... */
static void C_ccall f_6513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6513,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("batch-driver.scm:743: collect-options"));
t3=((C_word*)((C_word*)t0)[12])[1];
f_5397(t3,t2,lf[270]);}

/* k6516 in for-each-loop2067 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in ... */
static void C_ccall f_6518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6518,c,av);}
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[2])[1];
f_6610(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}
else{
C_trace(C_text("batch-driver.scm:742: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=lf[269];
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}

/* k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in ... */
static void C_ccall f_6527(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6527,c,av);}
a=C_alloc(8);
t2=C_i_check_list_2(t1,lf[10]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6533,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6610,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6610(t7,t3,t1);}

/* k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in ... */
static void C_ccall f_6533(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_6533,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(((C_word*)t2)[2],lf[10]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6552,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6587,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_6587(t8,t4,((C_word*)t2)[2]);}

/* k6540 in for-each-loop2088 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in ... */
static void C_ccall f_6542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6542,c,av);}
C_trace(C_text("batch-driver.scm:746: chicken.compiler.scrutinizer#load-type-database"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[265]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[265]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fast_retrieve(lf[124]);
tp(4,av2);}}

/* k6544 in for-each-loop2088 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in ... */
static void C_ccall f_6546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6546,c,av);}
C_trace(C_text("batch-driver.scm:747: chicken.pathname#make-pathname"));
t2=C_fast_retrieve(lf[266]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[267];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6550 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in ... */
static void C_ccall f_6552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6552,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6555,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:750: begin-time"));
t3=((C_word*)((C_word*)t0)[8])[1];
f_5432(t3,t2);}

/* k6553 in k6550 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in ... */
static void C_ccall f_6555(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6555,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_set_block_item(lf[166] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6560,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("batch-driver.scm:752: analyze"));
t5=((C_word*)((C_word*)t2)[10])[1];
f_5482(t5,t4,lf[264],((C_word*)t2)[5],C_SCHEME_END_OF_LIST);}

/* k6558 in k6553 in k6550 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in ... */
static void C_ccall f_6560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_6560,c,av);}
a=C_alloc(9);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6563,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("batch-driver.scm:753: print-db"));
t4=((C_word*)((C_word*)t0)[9])[1];
f_5114(t4,t3,lf[262],lf[263],((C_word*)((C_word*)t0)[2])[1],C_fix(0));}

/* k6561 in k6558 in k6553 in k6550 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in ... */
static void C_ccall f_6563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6563,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6566,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:754: end-time"));
t3=((C_word*)((C_word*)t0)[5])[1];
f_5442(t3,t2,lf[261]);}

/* k6564 in k6561 in k6558 in k6553 in k6550 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in ... */
static void C_ccall f_6566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6566,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6569,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("batch-driver.scm:755: begin-time"));
t4=((C_word*)((C_word*)t2)[8])[1];
f_5432(t4,t3);}

/* k6567 in k6564 in k6561 in k6558 in k6553 in k6550 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in ... */
static void C_ccall f_6569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6569,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6572,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:756: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t2;
av2[2]=lf[107];
av2[3]=lf[260];
tp(4,av2);}}

/* k6570 in k6567 in k6564 in k6561 in k6558 in k6553 in k6550 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in ... */
static void C_ccall f_6572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_6572,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6575,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:757: chicken.compiler.scrutinizer#scrutinize"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[258]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[258]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
av2[3]=((C_word*)((C_word*)t2)[6])[1];
av2[4]=((C_word*)((C_word*)t2)[7])[1];
av2[5]=C_fast_retrieve(lf[124]);
av2[6]=C_fast_retrieve(lf[259]);
av2[7]=C_fast_retrieve(lf[168]);
tp(8,av2);}}

/* k6573 in k6570 in k6567 in k6564 in k6561 in k6558 in k6553 in k6550 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in ... */
static void C_ccall f_6575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6575,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6578,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:760: end-time"));
t3=((C_word*)((C_word*)t0)[5])[1];
f_5442(t3,t2,lf[257]);}

/* k6576 in k6573 in k6570 in k6567 in k6564 in k6561 in k6558 in k6553 in k6550 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in ... */
static void C_ccall f_6578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6578,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6581,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fast_retrieve(lf[124]))){
C_trace(C_text("batch-driver.scm:762: print-node"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5092(t3,t2,lf[255],lf[256],((C_word*)t0)[4]);}
else{
t3=C_set_block_item(lf[166] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_TRUE);
t4=((C_word*)t0)[2];
f_6095(t4,t3);}}

/* k6579 in k6576 in k6573 in k6570 in k6567 in k6564 in k6561 in k6558 in k6553 in k6550 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in ... */
static void C_ccall f_6581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6581,c,av);}
t2=C_set_block_item(lf[166] /* chicken.compiler.core#first-analysis */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_6095(t3,t2);}

/* for-each-loop2088 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in ... */
static void f_6587(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_6587,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6597,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6542,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6546,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:747: scheme#symbol->string"));
t7=*((C_word*)lf[268]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6595 in for-each-loop2088 in k6531 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in ... */
static void C_ccall f_6597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6597,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6587(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2067 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in ... */
static void f_6610(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_6610,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6620,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6518,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:741: chicken.compiler.scrutinizer#load-type-database"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[265]);
C_word av2[5];
av2[0]=*((C_word*)lf[265]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=C_fast_retrieve(lf[124]);
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6618 in for-each-loop2067 in k6525 in k6511 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in ... */
static void C_ccall f_6620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6620,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6610(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6637 in k6090 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in ... */
static void C_ccall f_6639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6639,c,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_6513(2,av2);}}
else{
C_trace(C_text("batch-driver.scm:737: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[272];
tp(3,av2);}}}

/* k6649 in for-each-loop2044 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in ... */
static void C_ccall f_6651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6651,c,av);}
C_trace(C_text("batch-driver.scm:729: chicken.compiler.support#load-inline-file"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[274]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[274]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* for-each-loop2044 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in ... */
static void f_6662(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_6662,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6672,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6651,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_list(&a,1,t4);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9537,a[2]=t5,tmp=(C_word)a,a+=3,tmp);{
C_word av2[5];
av2[0]=0;
av2[1]=t7;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[275];
av2[4]=t6;
C_apply(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6670 in for-each-loop2044 in k6087 in k6084 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in ... */
static void C_ccall f_6672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6672,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6662(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6686 in for-each-loop2022 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in ... */
static void C_ccall f_6688(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6688,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6694,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_list(&a,1,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9545,a[2]=t2,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[278];
av2[4]=t3;
C_apply(5,av2);}}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
f_6709(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}}

/* k6692 in k6686 in for-each-loop2022 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in ... */
static void C_ccall f_6694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6694,c,av);}
C_trace(C_text("batch-driver.scm:721: chicken.compiler.support#load-inline-file"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[274]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[274]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k6699 in for-each-loop2022 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in ... */
static void C_ccall f_6701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6701,c,av);}
C_trace(C_text("batch-driver.scm:718: ##sys#resolve-include-filename"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[279]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[279]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[280];
av2[4]=C_SCHEME_TRUE;
av2[5]=C_SCHEME_FALSE;
tp(6,av2);}}

/* for-each-loop2022 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in ... */
static void f_6709(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_6709,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6719,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6688,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6701,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:719: scheme#symbol->string"));
t7=*((C_word*)lf[268]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6717 in for-each-loop2022 in k6081 in k6078 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in ... */
static void C_ccall f_6719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6719,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6709(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6732 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in ... */
static void C_ccall f_6734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6734,c,av);}
C_trace(C_text("batch-driver.scm:706: chicken.compiler.core#build-toplevel-procedure"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[283]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[283]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6736 in k6072 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in ... */
static void C_ccall f_6738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6738,c,av);}
C_trace(C_text("batch-driver.scm:707: chicken.compiler.support#build-node-graph"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[284]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[284]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6739 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in ... */
static void C_ccall f_6741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6741,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:701: begin-time"));
t3=((C_word*)((C_word*)t0)[6])[1];
f_5432(t3,t2);}

/* k6742 in k6739 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in ... */
static void C_ccall f_6744(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_6744,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(t6,lf[5]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6759,a[2]=t4,a[3]=t10,a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6759(t12,t8,t6);}

/* k6752 in k6742 in k6739 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in ... */
static void C_ccall f_6754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6754,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("batch-driver.scm:703: end-time"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5442(t3,((C_word*)t0)[4],lf[286]);}

/* map-loop1990 in k6742 in k6739 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in ... */
static void f_6759(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6759,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6784,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:702: g1996"));
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

/* k6782 in map-loop1990 in k6742 in k6739 in k6069 in k6066 in k6063 in k6060 in k6055 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in ... */
static void C_ccall f_6784(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6784,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6759(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6797 in k6052 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in ... */
static void C_ccall f_6799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6799,c,av);}
if(C_truep(t1)){
C_trace(C_text("batch-driver.scm:687: ##sys#display-line-number-database"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[293]);
C_word *av2=av;
av2[0]=*((C_word*)lf[293]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6057(2,av2);}}}

/* k6803 in k6049 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in ... */
static void C_ccall f_6805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6805,c,av);}
if(C_truep(t1)){
C_trace(C_text("batch-driver.scm:685: chicken.compiler.support#display-real-name-table"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[296]);
C_word *av2=av;
av2[0]=*((C_word*)lf[296]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6054(2,av2);}}}

/* a6815 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in ... */
static void C_ccall f_6816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6816,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6820,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:680: chicken.base#print"));
t3=*((C_word*)lf[302]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[303];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6818 in a6815 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in ... */
static void C_ccall f_6820(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6820,c,av);}
a=C_alloc(5);
t2=C_fast_retrieve(lf[299]);
t3=C_i_check_list_2(C_fast_retrieve(lf[299]),lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6854,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6854(t7,((C_word*)t0)[2],C_fast_retrieve(lf[299]));}

/* k6826 in for-each-loop1961 in k6818 in a6815 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in ... */
static void C_ccall f_6828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6828,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6831,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:682: ##sys#print"));
t3=*((C_word*)lf[22]+1);{
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

/* k6829 in k6826 in for-each-loop1961 in k6818 in a6815 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in ... */
static void C_ccall f_6831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6831,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6834,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:682: ##sys#print"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[300];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6832 in k6829 in k6826 in for-each-loop1961 in k6818 in a6815 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in ... */
static void C_ccall f_6834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6834,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6837,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:682: ##sys#print"));
t4=*((C_word*)lf[22]+1);{
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

/* k6835 in k6832 in k6829 in k6826 in for-each-loop1961 in k6818 in a6815 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in ... */
static void C_ccall f_6837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6837,c,av);}
C_trace(C_text("batch-driver.scm:682: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* for-each-loop1961 in k6818 in a6815 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in ... */
static void f_6854(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6854,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6864,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[20]+1);
t6=*((C_word*)lf[20]+1);
t7=C_i_check_port_2(*((C_word*)lf[20]+1),C_fix(2),C_SCHEME_TRUE,lf[21]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6828,a[2]=t3,a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:682: ##sys#print"));
t9=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[301];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[20]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6862 in for-each-loop1961 in k6818 in a6815 in k6046 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in ... */
static void C_ccall f_6864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6864,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6854(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6883 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in ... */
static void C_ccall f_6885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6885,c,av);}
C_trace(C_text("batch-driver.scm:669: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[306];
av2[3]=t1;
tp(4,av2);}}

/* k6902 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in ... */
static void C_ccall f_6904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6904,c,av);}
C_trace(C_text("batch-driver.scm:672: chicken.string#string-intersperse"));
t2=C_fast_retrieve(lf[307]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[308];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1934 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in ... */
static void f_6906(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6906,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
C_trace(C_text("batch-driver.scm:673: chicken.string#->string"));
t5=C_fast_retrieve(lf[309]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_i_car(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6929 in map-loop1934 in k6043 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in ... */
static void C_ccall f_6931(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6931,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6906(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6961 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in ... */
static void C_ccall f_6963(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6963,c,av);}
a=C_alloc(12);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6967,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fast_retrieve(lf[314]))){
t4=C_a_i_list(&a,2,lf[316],C_fast_retrieve(lf[314]));
t5=t3;
f_6967(t5,C_a_i_list(&a,1,t4));}
else{
t4=t3;
f_6967(t4,C_SCHEME_END_OF_LIST);}}

/* k6965 in k6961 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in ... */
static void f_6967(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6967,2,t0,t1);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6971,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=t1,a[8]=((C_word*)t2)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fast_retrieve(lf[313]))){
if(C_truep(C_i_not(C_fast_retrieve(lf[314])))){
if(C_truep(((C_word*)t2)[8])){
C_trace(C_text("batch-driver.scm:660: chicken.compiler.support#profiling-prelude-exps"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[315]);
C_word av2[3];
av2[0]=*((C_word*)lf[315]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[8];
tp(3,av2);}}
else{
C_trace(C_text("batch-driver.scm:660: chicken.compiler.support#profiling-prelude-exps"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[315]);
C_word av2[3];
av2[0]=*((C_word*)lf[315]+1);
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
tp(3,av2);}}}
else{
C_trace(C_text("batch-driver.scm:660: chicken.compiler.support#profiling-prelude-exps"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[315]);
C_word av2[3];
av2[0]=*((C_word*)lf[315]+1);
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
f_6971(2,av2);}}}

/* k6969 in k6965 in k6961 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in ... */
static void C_ccall f_6971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_6971,c,av);}
if(C_truep(C_fast_retrieve(lf[311]))){
t2=((C_word*)((C_word*)t0)[2])[1];
C_trace(C_text("batch-driver.scm:654: scheme#append"));
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[7];
av2[6]=t1;
av2[7]=((C_word*)t0)[8];
av2[8]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}
else{
C_trace(C_text("batch-driver.scm:654: scheme#append"));
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[7];
av2[6]=t1;
av2[7]=((C_word*)t0)[8];
av2[8]=lf[312];
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}}

/* map-loop1897 in k6040 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in ... */
static void f_6997(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_6997,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_u_i_car(t3);
t6=C_a_i_list(&a,2,lf[317],t5);
t7=C_a_i_list(&a,3,lf[318],t4,t6);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t8);
t10=C_mutate(((C_word *)((C_word*)t0)[2])+1,t8);
t12=t1;
t13=C_slot(t2,C_fix(1));
t1=t12;
t2=t13;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop1866 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in ... */
static void f_7031(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_7031,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_list(&a,2,lf[319],t4);
C_trace(C_text("batch-driver.scm:652: chicken.compiler.core#canonicalize-expression"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[159]);
C_word av2[3];
av2[0]=*((C_word*)lf[159]+1);
av2[1]=t3;
av2[2]=t5;
tp(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7054 in map-loop1866 in k6034 in k6019 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in ... */
static void C_ccall f_7056(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7056,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7031(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1824 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in ... */
static void f_7065(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7065,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:642: g1830"));
t4=((C_word*)t0)[4];
f_5989(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7088 in map-loop1824 in k6013 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in ... */
static void C_ccall f_7090(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7090,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7065(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7113 in k6010 in k5983 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in ... */
static void C_ccall f_7115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_7115,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,lf[322],t3);
t5=((C_word*)t0)[3];
f_6015(t5,C_a_i_list(&a,1,t4));}

/* map-loop1797 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in ... */
static void f_7121(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7121,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:641: g1803"));
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

/* k7144 in map-loop1797 in k5974 in k5971 in k5968 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in ... */
static void C_ccall f_7146(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7146,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7121(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7154 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in ... */
static void C_ccall f_7156(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_7156,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(t6,lf[5]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7168,a[2]=t4,a[3]=t10,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7168(t12,t8,t6);}

/* k7164 in k7154 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in ... */
static void C_ccall f_7166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7166,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5970(t3,t2);}

/* map-loop1769 in k7154 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in ... */
static void f_7168(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7168,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:636: g1775"));
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

/* k7191 in map-loop1769 in k7154 in k5965 in k5962 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in ... */
static void C_ccall f_7193(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7193,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7168(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7201 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in ... */
static void C_ccall f_7203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7203,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:612: proc"));
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k7205 in k7201 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in ... */
static void C_ccall f_7207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7207,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_5964(2,av2);}}

/* doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in ... */
static void f_7212(C_word t0,C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_7212,3,t0,t1,t2);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7223,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_fast_retrieve(lf[329]);
t9=C_i_check_list_2(((C_word*)t0)[3],lf[5]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7233,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7283,a[2]=t6,a[3]=t12,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7283(t14,t10,((C_word*)t0)[3]);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7321,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:621: chicken.compiler.support#check-and-open-input-file"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[333]);
C_word av2[3];
av2[0]=*((C_word*)lf[333]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}}

/* k7221 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in ... */
static void C_ccall f_7223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7223,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7231 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in ... */
static void C_ccall f_7233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7233,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:618: scheme#reverse"));
t3=*((C_word*)lf[330]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7235 in k7231 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in ... */
static void C_ccall f_7237(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7237,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_fast_retrieve(lf[329]);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[5]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7247,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7249,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7249(t12,t8,((C_word*)t0)[2]);}

/* k7245 in k7235 in k7231 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in ... */
static void C_ccall f_7247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7247,c,av);}
C_trace(C_text("batch-driver.scm:617: scheme#append"));
t2=*((C_word*)lf[4]+1);{
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

/* map-loop1720 in k7235 in k7231 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in ... */
static void f_7249(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7249,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:619: g1726"));
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

/* k7272 in map-loop1720 in k7235 in k7231 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in ... */
static void C_ccall f_7274(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7274,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7249(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1694 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in ... */
static void f_7283(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7283,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:617: g1700"));
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

/* k7306 in map-loop1694 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in ... */
static void C_ccall f_7308(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7308,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7283(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7319 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in ... */
static void C_ccall f_7321(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_7321,c,av);}
a=C_alloc(22);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7324,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7331,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7336,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7364,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:622: ##sys#dynamic-wind"));
t10=*((C_word*)lf[161]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k7322 in k7319 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in ... */
static void C_ccall f_7324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7324,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7212(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* a7330 in k7319 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in ... */
static void C_ccall f_7331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7331,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[160]));
t3=C_mutate((C_word*)lf[160]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7335 in k7319 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in ... */
static void C_ccall f_7336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7336,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7342(t5,t1);}

/* loop in a7335 in k7319 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in ... */
static void f_7342(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_7342,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7346,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:624: chicken.syntax#read-with-source-info"));
t3=C_fast_retrieve(lf[332]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7344 in loop in a7335 in k7319 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in ... */
static void C_ccall f_7346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7346,c,av);}
a=C_alloc(3);
if(C_truep(C_eofp(t1))){
C_trace(C_text("batch-driver.scm:627: chicken.compiler.support#close-checked-input-file"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[331]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[331]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
C_trace(C_text("batch-driver.scm:630: loop"));
t4=((C_word*)((C_word*)t0)[6])[1];
f_7342(t4,((C_word*)t0)[2]);}}

/* a7363 in k7319 in doloop1689 in k5959 in k5956 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in ... */
static void C_ccall f_7364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7364,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[160]));
t3=C_mutate((C_word*)lf[160]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7369 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in ... */
static void C_ccall f_7371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7371,c,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7379,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:607: collect-options"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5397(t4,t3,lf[335]);}

/* k7377 in k7369 in k5953 in k5950 in k5947 in k5943 in k5939 in k5936 in k5933 in k5930 in k5927 in k5888 in k5869 in k5866 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in ... */
static void C_ccall f_7379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7379,c,av);}
C_trace(C_text("batch-driver.scm:604: scheme#append"));
t2=*((C_word*)lf[4]+1);{
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

/* k7395 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in ... */
static void C_ccall f_7397(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7397,c,av);}
a=C_alloc(3);
t2=C_set_block_item(lf[313] /* chicken.compiler.core#emit-profile */,0,C_SCHEME_TRUE);
t3=C_mutate((C_word*)lf[353]+1 /* (set! chicken.compiler.core#profiled-procedures ...) */,lf[354]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7403,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace(C_text("batch-driver.scm:566: scheme#append"));
t5=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_fast_retrieve(lf[358]);
av2[4]=lf[359];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
C_trace(C_text("batch-driver.scm:566: scheme#append"));
t5=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_fast_retrieve(lf[358]);
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k7401 in k7395 in k5863 in k5860 in k5857 in k5854 in k5843 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in ... */
static void C_ccall f_7403(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7403,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
if(C_truep(((C_word*)t2)[3])){
t4=C_a_i_list(&a,1,lf[355]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9601,a[2]=((C_word*)t2)[4],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[356];
av2[4]=t4;
C_apply(5,av2);}}
else{
t4=C_a_i_list(&a,1,lf[357]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9607,a[2]=((C_word*)t2)[4],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[184]+1);
av2[3]=lf[356];
av2[4]=t4;
C_apply(5,av2);}}}

/* k7450 in k5839 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in ... */
static void C_ccall f_7452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7452,c,av);}
C_trace(C_text("batch-driver.scm:544: arg-val"));
f_5312(((C_word*)t0)[3],t1);}

/* k7457 in k5835 in k5832 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in ... */
static void C_ccall f_7459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7459,c,av);}
C_trace(C_text("batch-driver.scm:541: arg-val"));
f_5312(((C_word*)t0)[3],t1);}

/* k7473 in map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in ... */
static void C_ccall f_7475(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7475,c,av);}
a=C_alloc(9);
t2=C_a_i_list(&a,2,lf[371],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t6=((C_word*)((C_word*)t0)[3])[1];
f_7486(t6,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in ... */
static void C_ccall f_7478(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7478,c,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7484,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7486,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7486(t7,t3,t1);}

/* k7482 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_7484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7484,c,av);}
C_trace(C_text("batch-driver.scm:532: scheme#append"));
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1630 in k7476 in k5828 in k5824 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in ... */
static void f_7486(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_7486,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5245,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_string_length(t3);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5197,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_5197(t10,t5,C_fix(0),t6);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7519 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in ... */
static void C_ccall f_7520(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7520,c,av);}
a=C_alloc(10);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7527,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:526: chicken.string#string-split"));
t8=C_fast_retrieve(lf[381]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[382];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k7525 in a7519 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_7527(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7527,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7532,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7532(t5,((C_word*)t0)[4],t1);}

/* map-loop1604 in k7525 in a7519 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in ... */
static void f_7532(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7532,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:526: g1610"));
t4=*((C_word*)lf[323]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7555 in map-loop1604 in k7525 in a7519 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in ... */
static void C_ccall f_7557(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7557,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7532(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7566 in k5821 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in ... */
static void C_ccall f_7568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7568,c,av);}
C_trace(C_text("batch-driver.scm:525: append-map"));
f_2993(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k7573 in k5818 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in ... */
static void C_ccall f_7575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7575,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5823(t3,t2);}

/* a7588 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_7589(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7589,c,av);}
a=C_alloc(10);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7596,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:518: chicken.string#string-split"));
t8=C_fast_retrieve(lf[381]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[385];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k7594 in a7588 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in ... */
static void C_ccall f_7596(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7596,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7601,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7601(t5,((C_word*)t0)[4],t1);}

/* map-loop1573 in k7594 in a7588 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in ... */
static void f_7601(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7601,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7626,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("batch-driver.scm:518: g1579"));
t4=*((C_word*)lf[323]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7624 in map-loop1573 in k7594 in a7588 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in ... */
static void C_ccall f_7626(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7626,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7601(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7635 in k5815 in k5807 in k5803 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_7637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7637,c,av);}
C_trace(C_text("batch-driver.scm:517: append-map"));
f_2993(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* for-each-loop1550 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in ... */
static void f_7639(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_7639,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7649,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5787,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:508: ##sys#resolve-include-filename"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[279]);
C_word av2[6];
av2[0]=*((C_word*)lf[279]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=C_SCHEME_FALSE;
tp(6,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7647 in for-each-loop1550 in k5780 in k5777 in k5770 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_7649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7649,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7639(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1166 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in ... */
static void f_7662(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7662,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7672,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:498: g1167"));
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

/* k7670 in for-each-loop1166 in k5764 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in ... */
static void C_ccall f_7672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7672,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7662(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* a7684 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in ... */
static void C_ccall f_7685(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7685,c,av);}
t3=C_fast_retrieve(lf[381]);
C_trace(C_text("batch-driver.scm:500: g1540"));
t4=C_fast_retrieve(lf[381]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[391];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7691 in k5761 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in ... */
static void C_ccall f_7693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7693,c,av);}
C_trace(C_text("batch-driver.scm:500: append-map"));
f_2993(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* for-each-loop1156 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in ... */
static void f_7695(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7695,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7705,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("batch-driver.scm:495: g1157"));
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

/* k7703 in for-each-loop1156 in k5755 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in ... */
static void C_ccall f_7705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7705,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7695(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* a7717 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in ... */
static void C_ccall f_7718(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7718,c,av);}
t3=C_fast_retrieve(lf[381]);
C_trace(C_text("batch-driver.scm:497: g1525"));
t4=C_fast_retrieve(lf[381]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[393];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k7724 in k5752 in k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in ... */
static void C_ccall f_7726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7726,c,av);}
C_trace(C_text("batch-driver.scm:497: append-map"));
f_2993(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k7737 in for-each-loop1480 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in ... */
static void C_ccall f_7739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7739,c,av);}
C_trace(C_text("batch-driver.scm:485: chicken.compiler.support#mark-variable"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[397];
tp(4,av2);}}

/* k7746 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in ... */
static void C_ccall f_7748(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7748,c,av);}
a=C_alloc(5);
t2=C_fast_retrieve(lf[82]);
t3=C_i_check_list_2(C_fast_retrieve(lf[82]),lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7764,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7764(t7,((C_word*)t0)[2],C_fast_retrieve(lf[82]));}

/* k7751 in for-each-loop1499 in k7746 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in ... */
static void C_ccall f_7753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7753,c,av);}
C_trace(C_text("batch-driver.scm:490: chicken.compiler.support#mark-variable"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[397];
tp(4,av2);}}

/* for-each-loop1499 in k7746 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in ... */
static void f_7764(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7764,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7774,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7753,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:489: chicken.compiler.support#mark-variable"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[398];
tp(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7772 in for-each-loop1499 in k7746 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in ... */
static void C_ccall f_7774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7774,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7764(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1480 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in ... */
static void f_7787(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7787,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7797,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7739,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("batch-driver.scm:484: chicken.compiler.support#mark-variable"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word av2[4];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[398];
tp(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7795 in for-each-loop1480 in k5746 in k5743 in k5740 in k5737 in k5734 in k5731 in k5728 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in ... */
static void C_ccall f_7797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7797,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7787(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k7839 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in ... */
static void C_ccall f_7841(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7841,c,av);}
a=C_alloc(10);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7849,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7849(t7,t3,t1);}

/* k7845 in k7839 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in ... */
static void C_ccall f_7847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7847,c,av);}
C_trace(C_text("batch-driver.scm:467: scheme#append"));
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fast_retrieve(lf[134]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1452 in k7839 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in ... */
static void f_7849(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_7849,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7874,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
t6=C_i_string_length(t5);
t7=C_a_i_fixnum_difference(&a,2,t6,C_fix(1));
if(C_truep(C_i_integer_greaterp(t7,C_fix(0)))){
t8=C_i_string_ref(t5,t7);
if(C_truep((C_truep(C_eqp(t8,C_make_character(92)))?C_SCHEME_TRUE:(C_truep(C_eqp(t8,C_make_character(47)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
C_trace(C_text("batch-driver.scm:352: scheme#substring"));
t9=*((C_word*)lf[115]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t4;
av2[2]=t5;
av2[3]=C_fix(0);
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t9=t3;
f_7859(t9,C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST));}}
else{
t8=t3;
f_7859(t8,C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7857 in map-loop1452 in k7839 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in ... */
static void f_7859(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7859,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_7849(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7872 in map-loop1452 in k7839 in k5723 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in ... */
static void C_ccall f_7874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7874,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_7859(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* k7884 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in ... */
static void C_ccall f_7886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7886,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7889,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:462: chicken.base#case-sensitive"));
t3=C_fast_retrieve(lf[415]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7887 in k7884 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in ... */
static void C_ccall f_7889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7889,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7892,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:463: chicken.base#keyword-style"));
t3=C_fast_retrieve(lf[413]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[414];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7890 in k7887 in k7884 in k5720 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in ... */
static void C_ccall f_7892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7892,c,av);}
C_trace(C_text("batch-driver.scm:464: chicken.base#parentheses-synonyms"));
t2=C_fast_retrieve(lf[412]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7898 in k5717 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in ... */
static void C_ccall f_7900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7900,c,av);}
C_trace(C_text("batch-driver.scm:459: chicken.base#parentheses-synonyms"));
t2=C_fast_retrieve(lf[412]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7904 in k5714 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in ... */
static void C_ccall f_7906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7906,c,av);}
if(C_truep(C_i_string_equal_p(lf[419],t1))){
C_trace(C_text("batch-driver.scm:452: chicken.base#keyword-style"));
t2=C_fast_retrieve(lf[413]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[420];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
if(C_truep(C_i_string_equal_p(lf[421],t1))){
C_trace(C_text("batch-driver.scm:453: chicken.base#keyword-style"));
t2=C_fast_retrieve(lf[413]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[414];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
if(C_truep(C_i_string_equal_p(lf[422],t1))){
C_trace(C_text("batch-driver.scm:454: chicken.base#keyword-style"));
t2=C_fast_retrieve(lf[413]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[423];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
C_trace(C_text("batch-driver.scm:455: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[424];
tp(3,av2);}}}}}

/* k7936 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in ... */
static void C_ccall f_7938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7938,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7941,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:448: chicken.platform#register-feature!"));
t3=C_fast_retrieve(lf[135]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[425];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7939 in k7936 in k5711 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in ... */
static void C_ccall f_7941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7941,c,av);}
C_trace(C_text("batch-driver.scm:449: chicken.base#case-sensitive"));
t2=C_fast_retrieve(lf[415]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k7946 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in ... */
static void C_ccall f_7948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7948,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7951,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:443: scheme#string->number"));
t4=*((C_word*)lf[114]+1);{
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

/* k7949 in k7946 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in ... */
static void C_ccall f_7951(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7951,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7954,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=C_mutate((C_word*)lf[171]+1 /* (set! chicken.compiler.core#unroll-limit ...) */,t1);
t5=((C_word*)t2)[2];
f_5713(t5,t4);}
else{
C_trace(C_text("batch-driver.scm:444: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t3;
av2[2]=lf[427];
av2[3]=((C_word*)t2)[3];
tp(4,av2);}}}

/* k7952 in k7949 in k7946 in k5706 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in ... */
static void C_ccall f_7954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7954,c,av);}
t2=C_mutate((C_word*)lf[171]+1 /* (set! chicken.compiler.core#unroll-limit ...) */,t1);
t3=((C_word*)t0)[2];
f_5713(t3,t2);}

/* k7959 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in ... */
static void C_ccall f_7961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7961,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7964,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:437: scheme#string->number"));
t4=*((C_word*)lf[114]+1);{
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

/* k7962 in k7959 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in ... */
static void C_ccall f_7964(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7964,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7967,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=C_mutate((C_word*)lf[170]+1 /* (set! chicken.compiler.core#inline-max-size ...) */,t1);
t5=((C_word*)t2)[2];
f_5708(t5,t4);}
else{
C_trace(C_text("batch-driver.scm:438: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t3;
av2[2]=lf[428];
av2[3]=((C_word*)t2)[3];
tp(4,av2);}}}

/* k7965 in k7962 in k7959 in k5701 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in ... */
static void C_ccall f_7967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7967,c,av);}
t2=C_mutate((C_word*)lf[170]+1 /* (set! chicken.compiler.core#inline-max-size ...) */,t1);
t3=((C_word*)t0)[2];
f_5708(t3,t2);}

/* k7972 in k5696 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in ... */
static void C_ccall f_7974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7974,c,av);}
t2=C_mutate((C_word*)lf[238]+1 /* (set! chicken.compiler.core#types-output-file ...) */,t1);
t3=((C_word*)t0)[2];
f_5703(t3,t2);}

/* k7978 in k5691 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in ... */
static void C_ccall f_7980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7980,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_5698(t3,t2);}

/* k7982 in k5686 in k5683 in k5680 in k5677 in k5674 in k5671 in k5668 in k5665 in k5662 in k5659 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in ... */
static void C_ccall f_7984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7984,c,av);}
t2=C_mutate((C_word*)lf[196]+1 /* (set! chicken.compiler.core#emit-link-file ...) */,t1);
t3=((C_word*)t0)[2];
f_5693(t3,t2);}

/* k8014 in k5656 in k5653 in k5650 in k5647 in k5644 in k5641 in k5638 in k5635 in k5632 in k5629 in k5626 in k5623 in k5620 in k5617 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in ... */
static void C_ccall f_8016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8016,c,av);}
t2=C_set_block_item(lf[204] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
f_5661(t4,t3);}

/* map-loop1385 in k5611 in k5585 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in ... */
static void f_8073(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_8073,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("batch-driver.scm:375: scheme#string->symbol"));
t5=*((C_word*)lf[323]+1);{
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

/* k8109 in k5582 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in ... */
static void C_ccall f_8111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8111,c,av);}
C_trace(C_text("batch-driver.scm:371: chicken.base#exit"));
t2=C_fast_retrieve(lf[201]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8115 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_8116(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8116,c,av);}
a=C_alloc(10);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8132,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("##sys#string->list"));
t8=C_fast_retrieve(lf[469]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* k8130 in a8115 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in ... */
static void C_ccall f_8132(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8132,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8137,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_8137(t5,((C_word*)t0)[4],t1);}

/* map-loop1357 in k8130 in a8115 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in ... */
static void f_8137(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_8137,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
C_trace(C_text("batch-driver.scm:366: scheme#string->symbol"));
t6=*((C_word*)lf[323]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8160 in map-loop1357 in k8130 in a8115 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in ... */
static void C_ccall f_8162(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8162,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8137(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k8171 in k5575 in k5572 in k5569 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in ... */
static void C_ccall f_8173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8173,c,av);}
C_trace(C_text("batch-driver.scm:364: append-map"));
f_2993(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* k8185 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void C_ccall f_8187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8187,c,av);}
t2=C_mutate((C_word*)lf[314]+1 /* (set! chicken.compiler.core#unit-name ...) */,t1);
t3=((C_word*)t0)[2];
f_5571(t3,t2);}

/* k8189 in k5045 in k5022 in k5017 in k5014 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in ... */
static void C_ccall f_8191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8191,c,av);}
C_trace(C_text("batch-driver.scm:356: scheme#string->symbol"));
t2=*((C_word*)lf[323]+1);{
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

/* k8211 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in ... */
static void C_ccall f_8213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8213,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8217,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:239: chicken.time#current-seconds"));
t4=C_fast_retrieve(lf[476]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8215 in k8211 in k5011 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in ... */
static void C_ccall f_8217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8217,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("batch-driver.scm:239: chicken.string#conc"));
t3=C_fast_retrieve(lf[474]);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=lf[475];
av2[4]=((C_word*)t2)[4];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* g1104 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in ... */
static void f_8218(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8218,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8222,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("batch-driver.scm:229: option-arg"));
f_4952(t3,t2);}

/* k8220 in g1104 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in ... */
static void C_ccall f_8222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8222,c,av);}
if(C_truep(C_i_symbolp(t1))){
C_trace(C_text("batch-driver.scm:231: scheme#symbol->string"));
t2=*((C_word*)lf[268]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8244 in k5006 in k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in ... */
static void C_ccall f_8246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8246,c,av);}
C_trace(C_text("batch-driver.scm:234: chicken.pathname#make-pathname"));
t2=C_fast_retrieve(lf[266]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[479];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8270 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in ... */
static void C_ccall f_8272(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_8272,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,lf[93],t1);
t3=C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_mutate(((C_word *)t0)+6,t5);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5008,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_cons(&a,2,lf[482],C_fast_retrieve(lf[483]));
if(C_truep(C_fast_retrieve(lf[87]))){
t9=t7;
f_5008(t9,C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST));}
else{
t9=C_a_i_cons(&a,2,lf[484],C_fast_retrieve(lf[485]));
t10=C_a_i_list(&a,1,t9);
t11=t7;
f_5008(t11,C_a_i_cons(&a,2,t8,t10));}}

/* k8278 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in ... */
static void f_8280(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8280,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fast_retrieve(lf[489]))){
if(C_truep(C_i_not(((C_word*)t0)[4]))){
if(C_truep(C_i_not(((C_word*)t0)[5]))){
if(C_truep(C_i_not(C_fast_retrieve(lf[87])))){
t3=C_i_not(C_fast_retrieve(lf[490]));
t4=t2;
f_8287(t4,(C_truep(t3)?t3:C_eqp(C_fast_retrieve(lf[490]),lf[491])));}
else{
t3=t2;
f_8287(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_8287(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_8287(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_8287(t3,C_SCHEME_FALSE);}}

/* k8285 in k8278 in k4996 in k4993 in k4990 in k4981 in chicken.compiler.batch-driver#compile-source-file in k2790 in k2787 in k2784 in k2781 in k2778 in k2775 in k2772 in k2769 in k2766 in k2763 in k2760 in k2757 in k2754 in k2751 in k2748 in ... */
static void f_8287(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_8287,2,t0,t1);}
if(C_truep(t1)){
C_trace(C_text("batch-driver.scm:206: scheme#append"));
t2=*((C_word*)lf[4]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[487]);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[488];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
C_trace(C_text("batch-driver.scm:206: scheme#append"));
t2=*((C_word*)lf[4]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[487]);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_batch_2ddriver_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("batch-driver"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_batch_2ddriver_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(3242))){
C_save(t1);
C_rereclaim2(3242*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,499);
lf[0]=C_h_intern(&lf[0],12, C_text("batch-driver"));
lf[1]=C_h_intern(&lf[1],30, C_text("chicken.compiler.batch-driver#"));
lf[3]=C_h_intern(&lf[3],5, C_text("foldr"));
lf[4]=C_h_intern(&lf[4],13, C_text("scheme#append"));
lf[5]=C_h_intern(&lf[5],3, C_text("map"));
lf[7]=C_h_intern(&lf[7],12, C_text("scheme#null?"));
lf[9]=C_h_intern(&lf[9],39, C_text("chicken.compiler.core#standard-bindings"));
lf[10]=C_h_intern(&lf[10],8, C_text("for-each"));
lf[11]=C_h_intern(&lf[11],39, C_text("chicken.compiler.core#extended-bindings"));
lf[12]=C_h_intern(&lf[12],39, C_text("chicken.compiler.core#internal-bindings"));
lf[13]=C_h_intern(&lf[13],38, C_text("chicken.compiler.support#mark-variable"));
lf[14]=C_h_intern(&lf[14],20, C_text("##compiler#intrinsic"));
lf[15]=C_h_intern(&lf[15],8, C_text("internal"));
lf[16]=C_h_intern(&lf[16],8, C_text("extended"));
lf[17]=C_h_intern(&lf[17],8, C_text("standard"));
lf[19]=C_h_intern(&lf[19],14, C_text("scheme#newline"));
lf[20]=C_h_intern(&lf[20],21, C_text("##sys#standard-output"));
lf[21]=C_h_intern(&lf[21],6, C_text("printf"));
lf[22]=C_h_intern(&lf[22],11, C_text("##sys#print"));
lf[23]=C_h_intern(&lf[23],40, C_text("chicken.compiler.support#node-parameters"));
lf[24]=C_h_intern(&lf[24],35, C_text("chicken.compiler.support#node-class"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\011\160\166\141\154\075\000"));
lf[26]=C_h_intern(&lf[26],7, C_text("unknown"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\011\166\141\154\075\000"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\011\154\166\141\154\075\000"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\011\143\163\163\075\000"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\011\144\162\166\141\162\163\075\000"));
lf[31]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\011\162\145\146\163\075\000"));
lf[32]=C_h_intern(&lf[32],8, C_text("captured"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\141\160\164\165\162\145\144\376\001\000\000\003\001\143\160\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\141\163\163\151\147\156\145\144\376\001\000\000\003\001\163\145\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\142\157\170\145\144\376\001\000\000\003\001\142\157\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\147\154\157\142\141\154\376\001\000\000\003\001\147\154\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\141\163\163\151\147\156\145\144\055\154\157\143\141\154\154\171\376\001\000\000\003\001\163\164\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\143\157\156\164\162\141\143\164\141\142\154\145\376\001\000\000\003\001\143\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\164\141\156\144\141\162\144\055\142\151\156\144\151\156\147\376\001\000\000\003\001\163\164\142\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\151\155\160\154\145\376\001\000\000\003\001\163\151\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\151\156\154\151\156\141\142\154\145\376\001\000\000\003\001\151\156\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\157\154\154\141\160\163\141\142\154\145\376\001\000\000\003\001\143\157\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\155\157\166\141\142\154\145\376\001\000\000\003\001\162\145\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\157\156\163\164\141\156\164\376\001\000\000\003\001\143\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\151\156\154\151\156\145\055\164\141\162\147\145\164\376\001\000\000\003\001\151\154\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\151\156\154\151\156\145\055\164\162\141\156\163\151\145\156\164\376\001\000\000\003\001\151\164\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\156\144\145\146\151\156\145\144\376\001\000\000\003\001\165\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\160\154\141\143\151\156\147\376\001\000\000\003\001\162\160\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\165\156\165\163\145\144\376\001\000\000\003\001\165\165\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\145\170\164\145\156\144\145\144\055\142\151\156\144\151\156\147\376\001\000\000\003\001\170\164\142\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\151\156\154\151\156\145\055\145\170\160\157\162\164\376\001\000\000\003\001\151\154\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\150\151\144\144\145\156\055\162\145\146\163\376\001\000\000\003\001\150\162\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\166\141\154\165\145\055\162\145\146\376\001\000\000\003\001\166\166\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\143\165\163\164\157\155\151\172\141\142\154\145\376\001\000\000\003\001\143\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\150\141\163\055\165\156\165\163\145\144\055\160\141\162\141\155\145\164\145\162\163\376\001\000\000\003\001\150\165\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\142\157\170\145\144\055\162\145\163\164\376\001\000\000\003\001\142\170\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\163\150\141\162\145\141\142\154\145\055\143\157\156\164\141\151\156\145\162\376\001\000\000\003\001\163\150\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\150\141\162\145\141\142\154\145\055\165\163\145\162\376\001\000\000\003\001\163\150\165\376\377\016"));
lf[34]=C_h_intern(&lf[34],18, C_text("##sys#write-char-0"));
lf[35]=C_h_intern(&lf[35],5, C_text("value"));
lf[36]=C_h_intern(&lf[36],11, C_text("local-value"));
lf[37]=C_h_intern(&lf[37],16, C_text("potential-values"));
lf[38]=C_h_intern(&lf[38],10, C_text("replacable"));
lf[39]=C_h_intern(&lf[39],17, C_text("derived-rest-vars"));
lf[40]=C_h_intern(&lf[40],10, C_text("references"));
lf[41]=C_h_intern(&lf[41],10, C_text("call-sites"));
lf[42]=C_h_intern(&lf[42],29, C_text("chicken.compiler.support#bomb"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\111\154\154\145\147\141\154\040\160\162\157\160\145\162\164\171\000"));
lf[44]=C_h_intern(&lf[44],4, C_text("home"));
lf[45]=C_h_intern(&lf[45],8, C_text("contains"));
lf[46]=C_h_intern(&lf[46],12, C_text("contained-in"));
lf[47]=C_h_intern(&lf[47],8, C_text("use-expr"));
lf[48]=C_h_intern(&lf[48],12, C_text("closure-size"));
lf[49]=C_h_intern(&lf[49],14, C_text("rest-parameter"));
lf[50]=C_h_intern(&lf[50],18, C_text("captured-variables"));
lf[51]=C_h_intern(&lf[51],13, C_text("explicit-rest"));
lf[52]=C_h_intern(&lf[52],8, C_text("rest-cdr"));
lf[53]=C_h_intern(&lf[53],10, C_text("rest-null?"));
lf[54]=C_h_intern(&lf[54],15, C_text("consed-rest-arg"));
lf[55]=C_h_intern(&lf[55],14, C_text("shared-closure"));
lf[56]=C_h_intern(&lf[56],12, C_text("sharing-mode"));
lf[57]=C_h_intern(&lf[57],8, C_text("assigned"));
lf[58]=C_h_intern(&lf[58],5, C_text("boxed"));
lf[59]=C_h_intern(&lf[59],6, C_text("global"));
lf[60]=C_h_intern(&lf[60],12, C_text("contractable"));
lf[61]=C_h_intern(&lf[61],16, C_text("standard-binding"));
lf[62]=C_h_intern(&lf[62],16, C_text("assigned-locally"));
lf[63]=C_h_intern(&lf[63],11, C_text("collapsable"));
lf[64]=C_h_intern(&lf[64],9, C_text("removable"));
lf[65]=C_h_intern(&lf[65],9, C_text("undefined"));
lf[66]=C_h_intern(&lf[66],9, C_text("replacing"));
lf[67]=C_h_intern(&lf[67],6, C_text("unused"));
lf[68]=C_h_intern(&lf[68],6, C_text("simple"));
lf[69]=C_h_intern(&lf[69],9, C_text("inlinable"));
lf[70]=C_h_intern(&lf[70],13, C_text("inline-export"));
lf[71]=C_h_intern(&lf[71],21, C_text("has-unused-parameters"));
lf[72]=C_h_intern(&lf[72],16, C_text("extended-binding"));
lf[73]=C_h_intern(&lf[73],12, C_text("customizable"));
lf[74]=C_h_intern(&lf[74],8, C_text("constant"));
lf[75]=C_h_intern(&lf[75],10, C_text("boxed-rest"));
lf[76]=C_h_intern(&lf[76],11, C_text("hidden-refs"));
lf[77]=C_h_intern(&lf[77],19, C_text("shareable-container"));
lf[78]=C_h_intern(&lf[78],14, C_text("shareable-user"));
lf[79]=C_h_intern(&lf[79],12, C_text("scheme#write"));
lf[80]=C_h_intern(&lf[80],36, C_text("chicken.internal#hash-table-for-each"));
lf[81]=C_h_intern(&lf[81],47, C_text("chicken.compiler.core#default-standard-bindings"));
lf[82]=C_h_intern(&lf[82],47, C_text("chicken.compiler.core#default-extended-bindings"));
lf[83]=C_h_intern(&lf[83],49, C_text("chicken.compiler.batch-driver#compile-source-file"));
lf[84]=C_h_intern(&lf[84],39, C_text("chicken.compiler.support#quit-compiling"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\155\151\163\163\151\156\147\040\141\162\147\165\155\145\156\164\040\164\157\040\140\055\176\101\047\040\157\160\164\151\157\156\000"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\151\156\166\141\154\151\144\040\141\162\147\165\155\145\156\164\040\164\157\040\140\176\101\047\040\157\160\164\151\157\156\000"));
lf[87]=C_h_intern(&lf[87],39, C_text("chicken.compiler.core#explicit-use-flag"));
lf[88]=C_h_intern(&lf[88],12, C_text("explicit-use"));
lf[89]=C_h_intern(&lf[89],37, C_text("chicken.compiler.core#emit-debug-info"));
lf[90]=C_h_intern(&lf[90],10, C_text("debug-info"));
lf[91]=C_h_intern(&lf[91],7, C_text("dynamic"));
lf[92]=C_h_intern(&lf[92],4, C_text("unit"));
lf[93]=C_h_intern(&lf[93],14, C_text("##core#declare"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\155\160\154\151\143\151\164\055\145\170\151\164\055\150\141\156\144\154\145\162\376\377\016\376\377\016\376\377\016"));
lf[95]=C_h_intern(&lf[95],11, C_text("output-file"));
lf[96]=C_h_intern(&lf[96],7, C_text("profile"));
lf[97]=C_h_intern(&lf[97],12, C_text("profile-name"));
lf[98]=C_h_intern(&lf[98],9, C_text("heap-size"));
lf[99]=C_h_intern(&lf[99],13, C_text("keyword-style"));
lf[100]=C_h_intern(&lf[100],12, C_text("analyze-only"));
lf[101]=C_h_intern(&lf[101],4, C_text("lfa2"));
lf[102]=C_h_intern(&lf[102],7, C_text("nursery"));
lf[103]=C_h_intern(&lf[103],10, C_text("stack-size"));
lf[104]=C_h_intern(&lf[104],6, C_text("module"));
lf[105]=C_h_intern(&lf[105],42, C_text("chicken.compiler.support#debugging-chicken"));
lf[106]=C_h_intern(&lf[106],34, C_text("chicken.compiler.support#debugging"));
lf[107]=C_h_intern(&lf[107],1, C_text("p"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\160\141\163\163\000"));
lf[109]=C_h_intern(&lf[109],35, C_text("chicken.compiler.support#dump-nodes"));
lf[110]=C_h_intern(&lf[110],33, C_text("chicken.pretty-print#pretty-print"));
lf[111]=C_h_intern(&lf[111],46, C_text("chicken.compiler.support#build-expression-tree"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\050\151\164\145\162\141\164\151\157\156\040\000"));
lf[113]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\151\156\166\141\154\151\144\040\156\165\155\145\162\151\143\040\141\162\147\165\155\145\156\164\040\176\123\000"));
lf[114]=C_h_intern(&lf[114],21, C_text("scheme#string->number"));
lf[115]=C_h_intern(&lf[115],16, C_text("scheme#substring"));
lf[116]=C_h_intern(&lf[116],41, C_text("chicken.time#current-process-milliseconds"));
lf[117]=C_h_intern(&lf[117],21, C_text("scheme#inexact->exact"));
lf[118]=C_h_intern(&lf[118],12, C_text("scheme#round"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\072\040\011\000"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\155\151\154\154\151\163\145\143\157\156\144\163\040\156\145\145\144\145\144\040\146\157\162\040\000"));
lf[121]=C_h_intern(&lf[121],31, C_text("chicken.compiler.support#db-get"));
lf[122]=C_h_intern(&lf[122],32, C_text("chicken.compiler.support#db-put!"));
lf[123]=C_h_intern(&lf[123],40, C_text("chicken.compiler.core#analyze-expression"));
lf[124]=C_h_intern(&lf[124],43, C_text("chicken.compiler.core#enable-specialization"));
lf[125]=C_h_intern(&lf[125],10, C_text("specialize"));
lf[126]=C_h_intern(&lf[126],1, C_text("D"));
lf[127]=C_h_intern(&lf[127],38, C_text("chicken.compiler.core#import-libraries"));
lf[128]=C_h_intern(&lf[128],14, C_text("emit-link-file"));
lf[129]=C_h_intern(&lf[129],16, C_text("emit-inline-file"));
lf[130]=C_h_intern(&lf[130],15, C_text("emit-types-file"));
lf[131]=C_h_intern(&lf[131],12, C_text("inline-limit"));
lf[132]=C_h_intern(&lf[132],12, C_text("unroll-limit"));
lf[133]=C_h_intern(&lf[133],33, C_text("##sys#read-error-with-line-number"));
lf[134]=C_h_intern(&lf[134],23, C_text("##sys#include-pathnames"));
lf[135]=C_h_intern(&lf[135],34, C_text("chicken.platform#register-feature!"));
lf[136]=C_h_intern(&lf[136],36, C_text("chicken.platform#unregister-feature!"));
lf[137]=C_h_intern_kw(&lf[137],18, C_text("compiler-extension"));
lf[138]=C_h_intern(&lf[138],14, C_text("##sys#features"));
lf[139]=C_h_intern_kw(&lf[139],9, C_text("compiling"));
lf[140]=C_h_intern(&lf[140],38, C_text("chicken.compiler.core#linked-libraries"));
lf[141]=C_h_intern(&lf[141],38, C_text("chicken.compiler.core#target-heap-size"));
lf[142]=C_h_intern(&lf[142],39, C_text("chicken.compiler.core#target-stack-size"));
lf[143]=C_h_intern(&lf[143],8, C_text("no-trace"));
lf[144]=C_h_intern(&lf[144],37, C_text("chicken.compiler.core#emit-trace-info"));
lf[145]=C_h_intern(&lf[145],53, C_text("chicken.compiler.core#disable-stack-overflow-checking"));
lf[146]=C_h_intern(&lf[146],29, C_text("disable-stack-overflow-checks"));
lf[147]=C_h_intern(&lf[147],36, C_text("chicken.compiler.core#bootstrap-mode"));
lf[148]=C_h_intern(&lf[148],7, C_text("version"));
lf[149]=C_h_intern(&lf[149],38, C_text("chicken.compiler.support#print-version"));
lf[150]=C_h_intern(&lf[150],4, C_text("help"));
lf[151]=C_h_intern(&lf[151],36, C_text("chicken.compiler.support#print-usage"));
lf[152]=C_h_intern(&lf[152],7, C_text("release"));
lf[153]=C_h_intern(&lf[153],14, C_text("scheme#display"));
lf[154]=C_h_intern(&lf[154],32, C_text("chicken.platform#chicken-version"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\062\012\122\165\156\040\140\143\163\151\047\040\164\157\040\163\164\141\162\164\040\164\150\145\040\151\156\164\145\162\141\143\164\151\166\145\040\151\156\164\145\162\160\162\145\164\145\162\056\012\000"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\057\157\162\040\164\162\171\040\140\143\163\143\047\040\146\157\162\040\141\040\155\157\162\145\040\143\157\156\166\145\156\151\145\156\164\040\151\156\164\145\162\146\141\143\145\056\012\000"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\104\012\105\156\164\145\162\040\140\143\150\151\143\153\145\156\040\055\150\145\154\160\047\040\146\157\162\040\151\156\146\157\162\155\141\164\151\157\156\040\157\156\040\150\157\167\040\164\157\040\165\163\145\040\164\150\145\040\143\157\155\160\151\154\145\162\054\012\000"));
lf[158]=C_h_intern(&lf[158],26, C_text("##sys#line-number-database"));
lf[159]=C_h_intern(&lf[159],45, C_text("chicken.compiler.core#canonicalize-expression"));
lf[160]=C_h_intern(&lf[160],29, C_text("##sys#current-source-filename"));
lf[161]=C_h_intern(&lf[161],18, C_text("##sys#dynamic-wind"));
lf[162]=C_h_intern(&lf[162],44, C_text("chicken.compiler.core#line-number-database-2"));
lf[163]=C_h_intern(&lf[163],41, C_text("chicken.compiler.core#required-extensions"));
lf[164]=C_h_intern(&lf[164],36, C_text("chicken.compiler.core#constant-table"));
lf[165]=C_h_intern(&lf[165],34, C_text("chicken.compiler.core#inline-table"));
lf[166]=C_h_intern(&lf[166],36, C_text("chicken.compiler.core#first-analysis"));
lf[167]=C_h_intern(&lf[167],59, C_text("chicken.compiler.optimizer#perform-high-level-optimizations"));
lf[168]=C_h_intern(&lf[168],39, C_text("chicken.compiler.core#block-compilation"));
lf[169]=C_h_intern(&lf[169],36, C_text("chicken.compiler.core#inline-locally"));
lf[170]=C_h_intern(&lf[170],37, C_text("chicken.compiler.core#inline-max-size"));
lf[171]=C_h_intern(&lf[171],34, C_text("chicken.compiler.core#unroll-limit"));
lf[172]=C_h_intern(&lf[172],50, C_text("chicken.compiler.core#inline-substitutions-enabled"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\162\145\167\162\151\164\151\156\147\163\040\145\156\141\142\154\145\144\000"));
lf[174]=C_h_intern(&lf[174],44, C_text("chicken.compiler.core#optimize-leaf-routines"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\154\145\141\146\040\162\157\165\164\151\156\145\040\157\160\164\151\155\151\172\141\164\151\157\156\000"));
lf[176]=C_h_intern(&lf[176],52, C_text("chicken.compiler.optimizer#transform-direct-lambdas!"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\141\156\141\154\171\163\151\163\000"));
lf[178]=C_h_intern(&lf[178],4, C_text("leaf"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\157\160\164\151\155\151\172\145\144\055\151\164\145\162\141\164\151\157\156\000"));
lf[180]=C_h_intern(&lf[180],1, C_text("5"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\157\160\164\151\155\151\172\141\164\151\157\156\000"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\157\160\164\151\155\151\172\141\164\151\157\156\040\160\141\163\163\000"));
lf[183]=C_h_intern(&lf[183],49, C_text("chicken.compiler.core#prepare-for-code-generation"));
lf[184]=C_h_intern(&lf[184],22, C_text("chicken.format#sprintf"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\157\155\160\151\154\141\164\151\157\156\040\146\151\156\151\163\150\145\144\056\000"));
lf[186]=C_h_intern(&lf[186],46, C_text("chicken.compiler.support#compiler-cleanup-hook"));
lf[187]=C_h_intern(&lf[187],1, C_text("t"));
lf[188]=C_h_intern(&lf[188],19, C_text("##sys#display-times"));
lf[189]=C_h_intern(&lf[189],16, C_text("##sys#stop-timer"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\143\157\144\145\040\147\145\156\145\162\141\164\151\157\156\000"));
lf[191]=C_h_intern(&lf[191],24, C_text("chicken.file#rename-file"));
lf[192]=C_h_intern(&lf[192],24, C_text("scheme#close-output-port"));
lf[193]=C_h_intern(&lf[193],40, C_text("chicken.compiler.c-backend#generate-code"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\147\145\156\145\162\141\164\151\156\147\040\140\176\101\047\040\056\056\056\000"));
lf[195]=C_h_intern(&lf[195],23, C_text("scheme#open-output-file"));
lf[196]=C_h_intern(&lf[196],36, C_text("chicken.compiler.core#emit-link-file"));
lf[197]=C_h_intern(&lf[197],23, C_text("chicken.pretty-print#pp"));
lf[198]=C_h_intern(&lf[198],26, C_text("scheme#with-output-to-file"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\147\145\156\145\162\141\164\151\156\147\040\154\151\156\153\040\146\151\154\145\040\140\176\141\047\040\056\056\056\000"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\160\162\145\160\141\162\141\164\151\157\156\000"));
lf[201]=C_h_intern(&lf[201],17, C_text("chicken.base#exit"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\143\154\157\163\165\162\145\055\143\157\156\166\145\162\164\145\144\000"));
lf[203]=C_h_intern(&lf[203],1, C_text("9"));
lf[204]=C_h_intern(&lf[204],22, C_text("##sys#warnings-enabled"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\050\144\157\156\047\164\040\167\157\162\162\171\040\055\040\163\164\151\154\154\040\143\157\155\160\151\154\151\156\147\056\056\056\051\012\000"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\146\151\156\141\154\055\141\156\141\154\171\163\151\163\000"));
lf[207]=C_h_intern(&lf[207],1, C_text("8"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\143\154\157\163\165\162\145\040\143\157\156\166\145\162\163\151\157\156\000"));
lf[209]=C_h_intern(&lf[209],48, C_text("chicken.compiler.core#perform-closure-conversion"));
lf[210]=C_h_intern(&lf[210],41, C_text("chicken.compiler.core#insert-timer-checks"));
lf[211]=C_h_intern(&lf[211],37, C_text("chicken.compiler.core#foreign-stub-id"));
lf[212]=C_h_intern(&lf[212],42, C_text("chicken.compiler.core#foreign-lambda-stubs"));
lf[213]=C_h_intern(&lf[213],48, C_text("chicken.compiler.support#emit-global-inline-file"));
lf[214]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\047\147\145\156\145\162\141\164\151\156\147\040\147\154\157\142\141\154\040\151\156\154\151\156\145\040\146\151\154\145\040\140\176\141\047\040\056\056\056\000"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\157\160\164\151\155\151\172\145\144\000"));
lf[216]=C_h_intern(&lf[216],1, C_text("7"));
lf[217]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\165\156\142\157\170\151\156\147\000"));
lf[218]=C_h_intern(&lf[218],38, C_text("chicken.compiler.lfa2#perform-unboxing"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\144\157\151\156\147\040\165\156\142\157\170\151\156\147\000"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\163\145\143\157\156\144\141\162\171\040\146\154\157\167\040\141\156\141\154\171\163\151\163\000"));
lf[221]=C_h_intern(&lf[221],53, C_text("chicken.compiler.lfa2#perform-secondary-flow-analysis"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\144\157\151\156\147\040\154\146\141\062\000"));
lf[223]=C_h_intern(&lf[223],1, C_text("s"));
lf[224]=C_h_intern(&lf[224],49, C_text("chicken.compiler.core#compute-database-statistics"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\073\040\040\040\144\141\164\141\142\141\163\145\040\145\156\164\162\151\145\163\072\040\011\000"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\073\040\040\040\153\156\157\167\156\040\143\141\154\154\040\163\151\164\145\163\072\040\011\000"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\073\040\040\040\147\154\157\142\141\154\040\166\141\162\151\141\142\154\145\163\072\040\011\000"));
lf[228]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\073\040\040\040\153\156\157\167\156\040\160\162\157\143\145\144\165\162\145\163\072\040\011\000"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\073\040\040\040\166\141\162\151\141\142\154\145\163\040\167\151\164\150\040\153\156\157\167\156\040\166\141\154\165\145\163\072\040\011\000"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\040\011\157\162\151\147\151\156\141\154\040\160\162\157\147\162\141\155\040\163\151\172\145\072\040\011\000"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\073\040\040\040\160\162\157\147\162\141\155\040\163\151\172\145\072\040\011\000"));
lf[232]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\160\162\157\147\162\141\155\040\163\164\141\164\151\163\164\151\143\163\072\000"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\141\156\141\154\171\163\151\163\000"));
lf[234]=C_h_intern(&lf[234],1, C_text("4"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\141\156\141\154\171\163\151\163\000"));
lf[236]=C_h_intern(&lf[236],44, C_text("chicken.compiler.scrutinizer#emit-types-file"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\147\145\156\145\162\141\164\151\156\147\040\164\171\160\145\040\146\151\154\145\040\140\176\141\047\040\056\056\056\000"));
lf[238]=C_h_intern(&lf[238],39, C_text("chicken.compiler.core#types-output-file"));
lf[239]=C_h_intern(&lf[239],43, C_text("chicken.pathname#pathname-replace-extension"));
lf[240]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\164\171\160\145\163\000"));
lf[241]=C_h_intern(&lf[241],1, C_text("v"));
lf[242]=C_h_intern(&lf[242],41, C_text("chicken.compiler.support#dump-global-refs"));
lf[243]=C_h_intern(&lf[243],1, C_text("d"));
lf[244]=C_h_intern(&lf[244],45, C_text("chicken.compiler.support#dump-defined-globals"));
lf[245]=C_h_intern(&lf[245],1, C_text("u"));
lf[246]=C_h_intern(&lf[246],47, C_text("chicken.compiler.support#dump-undefined-globals"));
lf[247]=C_h_intern(&lf[247],3, C_text("opt"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\143\160\163\000"));
lf[249]=C_h_intern(&lf[249],1, C_text("3"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\143\160\163\040\143\157\156\166\145\162\163\151\157\156\000"));
lf[251]=C_h_intern(&lf[251],44, C_text("chicken.compiler.core#perform-cps-conversion"));
lf[252]=C_h_intern(&lf[252],31, C_text("chicken.compiler.support#unsafe"));
lf[253]=C_h_intern(&lf[253],52, C_text("chicken.compiler.optimizer#scan-toplevel-assignments"));
lf[254]=C_h_intern(&lf[254],44, C_text("chicken.compiler.support#node-subexpressions"));
lf[255]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\163\160\145\143\151\141\154\151\172\141\164\151\157\156\000"));
lf[256]=C_h_intern(&lf[256],1, C_text("P"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\163\143\162\165\164\151\156\171\000"));
lf[258]=C_h_intern(&lf[258],39, C_text("chicken.compiler.scrutinizer#scrutinize"));
lf[259]=C_h_intern(&lf[259],43, C_text("chicken.compiler.core#strict-variable-types"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\160\145\162\146\157\162\155\151\156\147\040\163\143\162\165\164\151\156\171\000"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\160\162\145\055\141\156\141\154\171\163\151\163\040\050\163\143\162\165\164\151\156\171\051\000"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\141\156\141\154\171\163\151\163\000"));
lf[263]=C_h_intern(&lf[263],1, C_text("0"));
lf[264]=C_h_intern(&lf[264],8, C_text("scrutiny"));
lf[265]=C_h_intern(&lf[265],47, C_text("chicken.compiler.scrutinizer#load-type-database"));
lf[266]=C_h_intern(&lf[266],30, C_text("chicken.pathname#make-pathname"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\164\171\160\145\163\000"));
lf[268]=C_h_intern(&lf[268],21, C_text("scheme#symbol->string"));
lf[269]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\164\171\160\145\055\144\141\164\141\142\141\163\145\040\140\176\141\047\040\156\157\164\040\146\157\165\156\144\000"));
lf[270]=C_h_intern(&lf[270],18, C_text("consult-types-file"));
lf[271]=C_h_intern(&lf[271],17, C_text("ignore-repository"));
lf[272]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\053\144\145\146\141\165\154\164\040\164\171\160\145\055\144\141\164\141\142\141\163\145\040\140\164\171\160\145\163\056\144\142\047\040\156\157\164\040\146\157\165\156\144\000"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\164\171\160\145\163\056\144\142\000"));
lf[274]=C_h_intern(&lf[274],41, C_text("chicken.compiler.support#load-inline-file"));
lf[275]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\114\157\141\144\151\156\147\040\151\156\154\151\156\145\040\146\151\154\145\040\176\141\040\056\056\056\000"));
lf[276]=C_h_intern(&lf[276],19, C_text("consult-inline-file"));
lf[277]=C_h_intern(&lf[277],41, C_text("chicken.compiler.core#enable-inline-files"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\114\157\141\144\151\156\147\040\151\156\154\151\156\145\040\146\151\154\145\040\176\141\040\056\056\056\000"));
lf[279]=C_h_intern(&lf[279],30, C_text("##sys#resolve-include-filename"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\010\056\151\156\154\151\156\145\000\376\377\016"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\151\156\151\164\151\141\154\040\156\157\144\145\040\164\162\145\145\000"));
lf[282]=C_h_intern(&lf[282],1, C_text("T"));
lf[283]=C_h_intern(&lf[283],46, C_text("chicken.compiler.core#build-toplevel-procedure"));
lf[284]=C_h_intern(&lf[284],41, C_text("chicken.compiler.support#build-node-graph"));
lf[285]=C_h_intern(&lf[285],48, C_text("chicken.compiler.support#canonicalize-begin-body"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\165\163\145\162\040\160\141\163\163\000"));
lf[287]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\125\163\145\162\040\160\141\163\163\056\056\056\000"));
lf[288]=C_h_intern(&lf[288],36, C_text("chicken.compiler.user-pass#user-pass"));
lf[289]=C_h_intern(&lf[289],12, C_text("check-syntax"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\143\141\156\157\156\151\143\141\154\151\172\145\144\000"));
lf[291]=C_h_intern(&lf[291],1, C_text("2"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\143\141\156\157\156\151\143\141\154\151\172\141\164\151\157\156\000"));
lf[293]=C_h_intern(&lf[293],34, C_text("##sys#display-line-number-database"));
lf[294]=C_h_intern(&lf[294],1, C_text("n"));
lf[295]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\154\151\156\145\040\156\165\155\142\145\162\040\144\141\164\141\142\141\163\145\072\000"));
lf[296]=C_h_intern(&lf[296],48, C_text("chicken.compiler.support#display-real-name-table"));
lf[297]=C_h_intern(&lf[297],1, C_text("N"));
lf[298]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\162\145\141\154\040\156\141\155\145\040\164\141\142\154\145\072\000"));
lf[299]=C_h_intern(&lf[299],59, C_text("chicken.compiler.compiler-syntax#compiler-syntax-statistics"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\011\011\000"));
lf[301]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\040\040\000"));
lf[302]=C_h_intern(&lf[302],18, C_text("chicken.base#print"));
lf[303]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\141\160\160\154\151\145\144\040\143\157\155\160\151\154\145\162\040\163\171\156\164\141\170\072\000"));
lf[304]=C_h_intern(&lf[304],46, C_text("chicken.compiler.support#with-debugging-output"));
lf[305]=C_h_intern(&lf[305],1, C_text("S"));
lf[306]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\074\116\157\040\155\157\144\165\154\145\040\144\145\146\151\156\151\164\151\157\156\040\146\157\165\156\144\040\146\157\162\040\151\155\160\157\162\164\040\154\151\142\162\141\162\151\145\163\040\164\157\040\145\155\151\164\072\040\176\101\000"));
lf[307]=C_h_intern(&lf[307],33, C_text("chicken.string#string-intersperse"));
lf[308]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\054\040\000"));
lf[309]=C_h_intern(&lf[309],23, C_text("chicken.string#->string"));
lf[310]=C_h_intern(&lf[310],41, C_text("chicken.compiler.core#immutable-constants"));
lf[311]=C_h_intern(&lf[311],43, C_text("chicken.compiler.core#standalone-executable"));
lf[312]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016\376\377\016"));
lf[313]=C_h_intern(&lf[313],34, C_text("chicken.compiler.core#emit-profile"));
lf[314]=C_h_intern(&lf[314],31, C_text("chicken.compiler.core#unit-name"));
lf[315]=C_h_intern(&lf[315],47, C_text("chicken.compiler.support#profiling-prelude-exps"));
lf[316]=C_h_intern(&lf[316],14, C_text("##core#provide"));
lf[317]=C_h_intern(&lf[317],5, C_text("quote"));
lf[318]=C_h_intern(&lf[318],4, C_text("set!"));
lf[319]=C_h_intern(&lf[319],14, C_text("##core#require"));
lf[320]=C_h_intern(&lf[320],18, C_text("##sys#fast-reverse"));
lf[321]=C_h_intern(&lf[321],36, C_text("chicken.compiler.core#used-libraries"));
lf[322]=C_h_intern(&lf[322],13, C_text("##core#module"));
lf[323]=C_h_intern(&lf[323],21, C_text("scheme#string->symbol"));
lf[324]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\163\157\165\162\143\145\000"));
lf[325]=C_h_intern(&lf[325],1, C_text("1"));
lf[326]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\125\163\145\162\040\160\162\145\160\162\157\143\145\163\163\151\156\147\040\160\141\163\163\056\056\056\000"));
lf[327]=C_h_intern(&lf[327],49, C_text("chicken.compiler.user-pass#user-preprocessor-pass"));
lf[328]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\125\163\145\162\040\162\145\141\144\040\160\141\163\163\056\056\056\000"));
lf[329]=C_h_intern(&lf[329],37, C_text("chicken.compiler.support#string->expr"));
lf[330]=C_h_intern(&lf[330],14, C_text("scheme#reverse"));
lf[331]=C_h_intern(&lf[331],49, C_text("chicken.compiler.support#close-checked-input-file"));
lf[332]=C_h_intern(&lf[332],36, C_text("chicken.syntax#read-with-source-info"));
lf[333]=C_h_intern(&lf[333],50, C_text("chicken.compiler.support#check-and-open-input-file"));
lf[334]=C_h_intern(&lf[334],41, C_text("chicken.compiler.user-pass#user-read-pass"));
lf[335]=C_h_intern(&lf[335],8, C_text("epilogue"));
lf[336]=C_h_intern(&lf[336],8, C_text("prologue"));
lf[337]=C_h_intern(&lf[337],8, C_text("postlude"));
lf[338]=C_h_intern(&lf[338],7, C_text("prelude"));
lf[339]=C_h_intern(&lf[339],18, C_text("scheme#make-vector"));
lf[340]=C_h_intern(&lf[340],47, C_text("chicken.compiler.core#line-number-database-size"));
lf[341]=C_h_intern(&lf[341],1, C_text("r"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\164\141\162\147\145\164\040\163\164\141\143\153\040\163\151\172\145\000"));
lf[343]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\164\141\162\147\145\164\040\150\145\141\160\040\163\151\172\145\000"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\144\145\142\165\147\147\151\156\147\040\157\160\164\151\157\156\163\000"));
lf[345]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\157\160\164\151\157\156\163\000"));
lf[346]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\143\157\155\160\151\154\151\156\147\040\140\176\141\047\040\056\056\056\000"));
lf[347]=C_h_intern(&lf[347],5, C_text("-help"));
lf[348]=C_h_intern(&lf[348],1, C_text("h"));
lf[349]=C_h_intern(&lf[349],2, C_text("-h"));
lf[350]=C_h_intern(&lf[350],49, C_text("chicken.compiler.support#load-identifier-database"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\155\157\144\165\154\145\163\056\144\142\000"));
lf[352]=C_h_intern(&lf[352],18, C_text("accumulate-profile"));
lf[353]=C_h_intern(&lf[353],41, C_text("chicken.compiler.core#profiled-procedures"));
lf[354]=C_h_intern(&lf[354],3, C_text("all"));
lf[355]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\141\143\143\165\155\165\154\141\164\151\166\145\040\000"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\147\145\156\145\162\141\164\151\156\147\040\176\141\160\162\157\146\151\154\145\144\040\143\157\144\145\000"));
lf[357]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[358]=C_h_intern(&lf[358],58, C_text("chicken.compiler.c-platform#default-profiling-declarations"));
lf[359]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\163\145\164\041\376\003\000\000\002\376\001\000\000\031\001\043\043\163\171\163\043\160\162\157\146\151\154\145\055\141\160\160\145\156\144\055\155\157\144\145\376\003\000\000\002\376\377\006\001\376\377\016\376\377\016"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\106\171\157\165\040\156\145\145\144\040\164\157\040\163\160\145\143\151\146\171\040\055\160\162\157\146\151\154\145\055\156\141\155\145\040\151\146\040\165\163\151\156\147\040\141\143\143\165\155\165\154\141\164\145\144\040\160\162\157\146\151\154\151\156\147\040\162\165\156\163\000"));
lf[361]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\143\141\154\154\164\162\141\143\145\000"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\144\145\142\165\147\147\151\156\147\040\151\156\146\157\072\040\176\101\000"));
lf[363]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\156\157\156\145\000"));
lf[364]=C_h_intern(&lf[364],21, C_text("no-usual-integrations"));
lf[365]=C_h_intern(&lf[365],1, C_text("m"));
lf[366]=C_h_intern(&lf[366],25, C_text("chicken.gc#set-gc-report!"));
lf[367]=C_h_intern(&lf[367],25, C_text("chicken.platform#feature?"));
lf[368]=C_h_intern_kw(&lf[368],17, C_text("chicken-bootstrap"));
lf[369]=C_h_intern(&lf[369],14, C_text("compile-syntax"));
lf[370]=C_h_intern(&lf[370],27, C_text("##sys#enable-runtime-macros"));
lf[371]=C_h_intern(&lf[371],6, C_text("import"));
lf[372]=C_h_intern(&lf[372],11, C_text("##sys#error"));
lf[373]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\151\156\166\141\154\151\144\040\151\155\160\157\162\164\040\163\160\145\143\151\146\151\143\141\164\151\157\156\000"));
lf[374]=C_h_intern(&lf[374],35, C_text("chicken.port#with-input-from-string"));
lf[375]=C_h_intern(&lf[375],11, C_text("scheme#read"));
lf[376]=C_h_intern(&lf[376],40, C_text("chicken.condition#with-exception-handler"));
lf[377]=C_h_intern(&lf[377],37, C_text("scheme#call-with-current-continuation"));
lf[378]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[379]=C_h_intern(&lf[379],17, C_text("require-extension"));
lf[380]=C_h_intern(&lf[380],5, C_text("foldl"));
lf[381]=C_h_intern(&lf[381],27, C_text("chicken.string#string-split"));
lf[382]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\054\040\000"));
lf[383]=C_h_intern(&lf[383],4, C_text("link"));
lf[384]=C_h_intern(&lf[384],4, C_text("uses"));
lf[385]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\054\040\000"));
lf[386]=C_h_intern(&lf[386],50, C_text("chicken.compiler.user-pass#user-post-analysis-pass"));
lf[387]=C_h_intern(&lf[387],11, C_text("scheme#load"));
lf[388]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\143\141\156\156\157\164\040\154\157\141\144\040\145\170\164\145\156\163\151\157\156\072\040\176\141\000"));
lf[389]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\114\157\141\144\151\156\147\040\143\157\155\160\151\154\145\162\040\145\170\164\145\156\163\151\157\156\163\056\056\056\000"));
lf[390]=C_h_intern(&lf[390],6, C_text("extend"));
lf[391]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\054\000"));
lf[392]=C_h_intern(&lf[392],10, C_text("no-feature"));
lf[393]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\054\040\000"));
lf[394]=C_h_intern(&lf[394],7, C_text("feature"));
lf[395]=C_h_intern(&lf[395],25, C_text("chicken.load#load-verbose"));
lf[396]=C_h_intern(&lf[396],38, C_text("no-procedure-checks-for-usual-bindings"));
lf[397]=C_h_intern(&lf[397],23, C_text("##compiler#always-bound"));
lf[398]=C_h_intern(&lf[398],36, C_text("##compiler#always-bound-to-procedure"));
lf[399]=C_h_intern(&lf[399],41, C_text("no-procedure-checks-for-toplevel-bindings"));
lf[400]=C_h_intern(&lf[400],48, C_text("chicken.compiler.core#no-global-procedure-checks"));
lf[401]=C_h_intern(&lf[401],19, C_text("no-procedure-checks"));
lf[402]=C_h_intern(&lf[402],41, C_text("chicken.compiler.core#no-procedure-checks"));
lf[403]=C_h_intern(&lf[403],15, C_text("no-bound-checks"));
lf[404]=C_h_intern(&lf[404],37, C_text("chicken.compiler.core#no-bound-checks"));
lf[405]=C_h_intern(&lf[405],14, C_text("no-argc-checks"));
lf[406]=C_h_intern(&lf[406],36, C_text("chicken.compiler.core#no-argc-checks"));
lf[407]=C_h_intern(&lf[407],20, C_text("keep-shadowed-macros"));
lf[408]=C_h_intern(&lf[408],46, C_text("chicken.compiler.core#undefine-shadowed-macros"));
lf[409]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\163\157\165\162\143\145\055\040\141\156\144\040\157\165\164\160\165\164\055\146\151\154\145\156\141\155\145\040\141\162\145\040\164\150\145\040\163\141\155\145\000"));
lf[410]=C_h_intern(&lf[410],12, C_text("include-path"));
lf[411]=C_h_intern(&lf[411],11, C_text("r7rs-syntax"));
lf[412]=C_h_intern(&lf[412],33, C_text("chicken.base#parentheses-synonyms"));
lf[413]=C_h_intern(&lf[413],26, C_text("chicken.base#keyword-style"));
lf[414]=C_h_intern_kw(&lf[414],4, C_text("none"));
lf[415]=C_h_intern(&lf[415],27, C_text("chicken.base#case-sensitive"));
lf[416]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\057\104\151\163\141\142\154\145\144\040\164\150\145\040\103\110\111\103\113\105\116\040\145\170\164\145\156\163\151\157\156\163\040\164\157\040\122\067\122\123\040\163\171\156\164\141\170\000"));
lf[417]=C_h_intern(&lf[417],23, C_text("no-parentheses-synonyms"));
lf[418]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\104\151\163\141\142\154\145\144\040\163\165\160\160\157\162\164\040\146\157\162\040\160\141\162\145\156\164\150\145\163\145\163\040\163\171\156\157\156\171\155\163\000"));
lf[419]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\160\162\145\146\151\170\000"));
lf[420]=C_h_intern_kw(&lf[420],6, C_text("prefix"));
lf[421]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\156\157\156\145\000"));
lf[422]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\163\165\146\146\151\170\000"));
lf[423]=C_h_intern_kw(&lf[423],6, C_text("suffix"));
lf[424]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\151\156\166\141\154\151\144\040\141\162\147\165\155\145\156\164\040\164\157\040\140\055\153\145\171\167\157\162\144\055\163\164\171\154\145\047\040\157\160\164\151\157\156\000"));
lf[425]=C_h_intern(&lf[425],16, C_text("case-insensitive"));
lf[426]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\055\111\144\145\156\164\151\146\151\145\162\163\040\141\156\144\040\163\171\155\142\157\154\163\040\141\162\145\040\143\141\163\145\040\151\156\163\145\156\163\151\164\151\166\145\000"));
lf[427]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\151\156\166\141\154\151\144\040\141\162\147\165\155\145\156\164\040\164\157\040\140\055\165\156\162\157\154\154\055\154\151\155\151\164\047\040\157\160\164\151\157\156\072\040\140\176\101\047\000"));
lf[428]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\151\156\166\141\154\151\144\040\141\162\147\165\155\145\156\164\040\164\157\040\140\055\151\156\154\151\156\145\055\154\151\155\151\164\047\040\157\160\164\151\157\156\072\040\140\176\101\047\000"));
lf[429]=C_h_intern(&lf[429],39, C_text("chicken.compiler.core#local-definitions"));
lf[430]=C_h_intern(&lf[430],6, C_text("inline"));
lf[431]=C_h_intern(&lf[431],30, C_text("emit-external-prototypes-first"));
lf[432]=C_h_intern(&lf[432],43, C_text("chicken.compiler.core#external-protos-first"));
lf[433]=C_h_intern(&lf[433],5, C_text("block"));
lf[434]=C_h_intern(&lf[434],17, C_text("fixnum-arithmetic"));
lf[435]=C_h_intern(&lf[435],36, C_text("chicken.compiler.support#number-type"));
lf[436]=C_h_intern(&lf[436],6, C_text("fixnum"));
lf[437]=C_h_intern(&lf[437],18, C_text("disable-interrupts"));
lf[438]=C_h_intern(&lf[438],27, C_text("regenerate-import-libraries"));
lf[439]=C_h_intern(&lf[439],57, C_text("chicken.compiler.core#preserve-unchanged-import-libraries"));
lf[440]=C_h_intern(&lf[440],10, C_text("setup-mode"));
lf[441]=C_h_intern(&lf[441],16, C_text("##sys#setup-mode"));
lf[442]=C_h_intern(&lf[442],6, C_text("unsafe"));
lf[443]=C_h_intern(&lf[443],22, C_text("optimize-leaf-routines"));
lf[444]=C_h_intern(&lf[444],11, C_text("no-warnings"));
lf[445]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\127\141\162\156\151\156\147\163\040\141\162\145\040\144\151\163\141\142\154\145\144\000"));
lf[446]=C_h_intern(&lf[446],24, C_text("merge-shareable-closures"));
lf[447]=C_h_intern(&lf[447],46, C_text("chicken.compiler.core#merge-shareable-closures"));
lf[448]=C_h_intern(&lf[448],23, C_text("merge-reusable-closures"));
lf[449]=C_h_intern(&lf[449],45, C_text("chicken.compiler.core#merge-reusable-closures"));
lf[450]=C_h_intern(&lf[450],12, C_text("strict-types"));
lf[451]=C_h_intern(&lf[451],7, C_text("verbose"));
lf[452]=C_h_intern(&lf[452],34, C_text("chicken.compiler.core#verbose-mode"));
lf[453]=C_h_intern(&lf[453],21, C_text("##sys#notices-enabled"));
lf[454]=C_h_intern(&lf[454],13, C_text("inline-global"));
lf[455]=C_h_intern(&lf[455],5, C_text("local"));
lf[456]=C_h_intern(&lf[456],18, C_text("no-compiler-syntax"));
lf[457]=C_h_intern(&lf[457],45, C_text("chicken.compiler.core#compiler-syntax-enabled"));
lf[458]=C_h_intern(&lf[458],14, C_text("no-lambda-info"));
lf[459]=C_h_intern(&lf[459],39, C_text("chicken.compiler.core#emit-closure-info"));
lf[460]=C_h_intern(&lf[460],3, C_text("raw"));
lf[461]=C_h_intern(&lf[461],1, C_text("b"));
lf[462]=C_h_intern(&lf[462],17, C_text("##sys#start-timer"));
lf[463]=C_h_intern(&lf[463],25, C_text("emit-all-import-libraries"));
lf[464]=C_h_intern(&lf[464],42, C_text("chicken.compiler.core#all-import-libraries"));
lf[465]=C_h_intern(&lf[465],19, C_text("##sys#string-append"));
lf[466]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\056\151\155\160\157\162\164\056\163\143\155\000"));
lf[467]=C_h_intern(&lf[467],19, C_text("emit-import-library"));
lf[468]=C_h_intern(&lf[468],44, C_text("chicken.compiler.support#print-debug-options"));
lf[469]=C_h_intern(&lf[469],18, C_text("##sys#string->list"));
lf[470]=C_h_intern(&lf[470],5, C_text("debug"));
lf[471]=C_h_intern(&lf[471],20, C_text("##sys#dload-disabled"));
lf[472]=C_h_intern(&lf[472],32, C_text("chicken.platform#repository-path"));
lf[473]=C_h_intern(&lf[473],54, C_text("chicken.compiler.optimizer#default-optimization-passes"));
lf[474]=C_h_intern(&lf[474],19, C_text("chicken.string#conc"));
lf[475]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\056\164\155\160\056\000"));
lf[476]=C_h_intern(&lf[476],28, C_text("chicken.time#current-seconds"));
lf[477]=C_h_intern(&lf[477],48, C_text("chicken.process-context.posix#current-process-id"));
lf[478]=C_h_intern(&lf[478],9, C_text("to-stdout"));
lf[479]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\143\000"));
lf[480]=C_h_intern(&lf[480],30, C_text("chicken.pathname#pathname-file"));
lf[481]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\157\165\164\000"));
lf[482]=C_h_intern(&lf[482],17, C_text("import-for-syntax"));
lf[483]=C_h_intern(&lf[483],39, C_text("chicken.internal#default-syntax-imports"));
lf[484]=C_h_intern(&lf[484],13, C_text("import-syntax"));
lf[485]=C_h_intern(&lf[485],32, C_text("chicken.internal#default-imports"));
lf[486]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\165\163\145\163\376\003\000\000\002\376\001\000\000\017\001\144\145\142\165\147\147\145\162\055\143\154\151\145\156\164\376\377\016\376\377\016"));
lf[487]=C_h_intern(&lf[487],48, C_text("chicken.compiler.c-platform#default-declarations"));
lf[488]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\165\163\145\163\376\003\000\000\002\376\001\000\000\014\001\145\166\141\154\055\155\157\144\165\154\145\163\376\377\016\376\377\016"));
lf[489]=C_h_intern(&lf[489],39, C_text("chicken.compiler.core#static-extensions"));
lf[490]=C_h_intern(&lf[490],49, C_text("chicken.compiler.core#compile-module-registration"));
lf[491]=C_h_intern(&lf[491],3, C_text("yes"));
lf[492]=C_h_intern(&lf[492],41, C_text("chicken.compiler.c-platform#default-units"));
lf[493]=C_h_intern(&lf[493],6, C_text("static"));
lf[494]=C_h_intern(&lf[494],22, C_text("chicken-compile-static"));
lf[495]=C_h_intern(&lf[495],22, C_text("no-module-registration"));
lf[496]=C_h_intern(&lf[496],2, C_text("no"));
lf[497]=C_h_intern(&lf[497],19, C_text("module-registration"));
lf[498]=C_h_intern(&lf[498],41, C_text("chicken.compiler.core#initialize-compiler"));
C_register_lf2(lf,499,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2738,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[558] = {
{C_text("f8837:batch_2ddriver_2escm"),(void*)f8837},
{C_text("f9493:batch_2ddriver_2escm"),(void*)f9493},
{C_text("f9499:batch_2ddriver_2escm"),(void*)f9499},
{C_text("f9505:batch_2ddriver_2escm"),(void*)f9505},
{C_text("f9511:batch_2ddriver_2escm"),(void*)f9511},
{C_text("f9519:batch_2ddriver_2escm"),(void*)f9519},
{C_text("f9525:batch_2ddriver_2escm"),(void*)f9525},
{C_text("f9537:batch_2ddriver_2escm"),(void*)f9537},
{C_text("f9545:batch_2ddriver_2escm"),(void*)f9545},
{C_text("f9555:batch_2ddriver_2escm"),(void*)f9555},
{C_text("f9575:batch_2ddriver_2escm"),(void*)f9575},
{C_text("f9581:batch_2ddriver_2escm"),(void*)f9581},
{C_text("f9595:batch_2ddriver_2escm"),(void*)f9595},
{C_text("f9601:batch_2ddriver_2escm"),(void*)f9601},
{C_text("f9607:batch_2ddriver_2escm"),(void*)f9607},
{C_text("f9613:batch_2ddriver_2escm"),(void*)f9613},
{C_text("f9619:batch_2ddriver_2escm"),(void*)f9619},
{C_text("f9641:batch_2ddriver_2escm"),(void*)f9641},
{C_text("f9657:batch_2ddriver_2escm"),(void*)f9657},
{C_text("f9663:batch_2ddriver_2escm"),(void*)f9663},
{C_text("f9669:batch_2ddriver_2escm"),(void*)f9669},
{C_text("f9675:batch_2ddriver_2escm"),(void*)f9675},
{C_text("f_2738:batch_2ddriver_2escm"),(void*)f_2738},
{C_text("f_2741:batch_2ddriver_2escm"),(void*)f_2741},
{C_text("f_2744:batch_2ddriver_2escm"),(void*)f_2744},
{C_text("f_2747:batch_2ddriver_2escm"),(void*)f_2747},
{C_text("f_2750:batch_2ddriver_2escm"),(void*)f_2750},
{C_text("f_2753:batch_2ddriver_2escm"),(void*)f_2753},
{C_text("f_2756:batch_2ddriver_2escm"),(void*)f_2756},
{C_text("f_2759:batch_2ddriver_2escm"),(void*)f_2759},
{C_text("f_2762:batch_2ddriver_2escm"),(void*)f_2762},
{C_text("f_2765:batch_2ddriver_2escm"),(void*)f_2765},
{C_text("f_2768:batch_2ddriver_2escm"),(void*)f_2768},
{C_text("f_2771:batch_2ddriver_2escm"),(void*)f_2771},
{C_text("f_2774:batch_2ddriver_2escm"),(void*)f_2774},
{C_text("f_2777:batch_2ddriver_2escm"),(void*)f_2777},
{C_text("f_2780:batch_2ddriver_2escm"),(void*)f_2780},
{C_text("f_2783:batch_2ddriver_2escm"),(void*)f_2783},
{C_text("f_2786:batch_2ddriver_2escm"),(void*)f_2786},
{C_text("f_2789:batch_2ddriver_2escm"),(void*)f_2789},
{C_text("f_2792:batch_2ddriver_2escm"),(void*)f_2792},
{C_text("f_2993:batch_2ddriver_2escm"),(void*)f_2993},
{C_text("f_3008:batch_2ddriver_2escm"),(void*)f_3008},
{C_text("f_3016:batch_2ddriver_2escm"),(void*)f_3016},
{C_text("f_3024:batch_2ddriver_2escm"),(void*)f_3024},
{C_text("f_3035:batch_2ddriver_2escm"),(void*)f_3035},
{C_text("f_3048:batch_2ddriver_2escm"),(void*)f_3048},
{C_text("f_3055:batch_2ddriver_2escm"),(void*)f_3055},
{C_text("f_3062:batch_2ddriver_2escm"),(void*)f_3062},
{C_text("f_3066:batch_2ddriver_2escm"),(void*)f_3066},
{C_text("f_3078:batch_2ddriver_2escm"),(void*)f_3078},
{C_text("f_3080:batch_2ddriver_2escm"),(void*)f_3080},
{C_text("f_3127:batch_2ddriver_2escm"),(void*)f_3127},
{C_text("f_3129:batch_2ddriver_2escm"),(void*)f_3129},
{C_text("f_3197:batch_2ddriver_2escm"),(void*)f_3197},
{C_text("f_3203:batch_2ddriver_2escm"),(void*)f_3203},
{C_text("f_3213:batch_2ddriver_2escm"),(void*)f_3213},
{C_text("f_3289:batch_2ddriver_2escm"),(void*)f_3289},
{C_text("f_3316:batch_2ddriver_2escm"),(void*)f_3316},
{C_text("f_3719:batch_2ddriver_2escm"),(void*)f_3719},
{C_text("f_3724:batch_2ddriver_2escm"),(void*)f_3724},
{C_text("f_3736:batch_2ddriver_2escm"),(void*)f_3736},
{C_text("f_3763:batch_2ddriver_2escm"),(void*)f_3763},
{C_text("f_3781:batch_2ddriver_2escm"),(void*)f_3781},
{C_text("f_4078:batch_2ddriver_2escm"),(void*)f_4078},
{C_text("f_4084:batch_2ddriver_2escm"),(void*)f_4084},
{C_text("f_4091:batch_2ddriver_2escm"),(void*)f_4091},
{C_text("f_4097:batch_2ddriver_2escm"),(void*)f_4097},
{C_text("f_4100:batch_2ddriver_2escm"),(void*)f_4100},
{C_text("f_4103:batch_2ddriver_2escm"),(void*)f_4103},
{C_text("f_4106:batch_2ddriver_2escm"),(void*)f_4106},
{C_text("f_4109:batch_2ddriver_2escm"),(void*)f_4109},
{C_text("f_4115:batch_2ddriver_2escm"),(void*)f_4115},
{C_text("f_4118:batch_2ddriver_2escm"),(void*)f_4118},
{C_text("f_4121:batch_2ddriver_2escm"),(void*)f_4121},
{C_text("f_4127:batch_2ddriver_2escm"),(void*)f_4127},
{C_text("f_4130:batch_2ddriver_2escm"),(void*)f_4130},
{C_text("f_4133:batch_2ddriver_2escm"),(void*)f_4133},
{C_text("f_4139:batch_2ddriver_2escm"),(void*)f_4139},
{C_text("f_4142:batch_2ddriver_2escm"),(void*)f_4142},
{C_text("f_4145:batch_2ddriver_2escm"),(void*)f_4145},
{C_text("f_4151:batch_2ddriver_2escm"),(void*)f_4151},
{C_text("f_4154:batch_2ddriver_2escm"),(void*)f_4154},
{C_text("f_4157:batch_2ddriver_2escm"),(void*)f_4157},
{C_text("f_4163:batch_2ddriver_2escm"),(void*)f_4163},
{C_text("f_4166:batch_2ddriver_2escm"),(void*)f_4166},
{C_text("f_4171:batch_2ddriver_2escm"),(void*)f_4171},
{C_text("f_4175:batch_2ddriver_2escm"),(void*)f_4175},
{C_text("f_4187:batch_2ddriver_2escm"),(void*)f_4187},
{C_text("f_4198:batch_2ddriver_2escm"),(void*)f_4198},
{C_text("f_4211:batch_2ddriver_2escm"),(void*)f_4211},
{C_text("f_4221:batch_2ddriver_2escm"),(void*)f_4221},
{C_text("f_4234:batch_2ddriver_2escm"),(void*)f_4234},
{C_text("f_4244:batch_2ddriver_2escm"),(void*)f_4244},
{C_text("f_4257:batch_2ddriver_2escm"),(void*)f_4257},
{C_text("f_4267:batch_2ddriver_2escm"),(void*)f_4267},
{C_text("f_4280:batch_2ddriver_2escm"),(void*)f_4280},
{C_text("f_4284:batch_2ddriver_2escm"),(void*)f_4284},
{C_text("f_4289:batch_2ddriver_2escm"),(void*)f_4289},
{C_text("f_4299:batch_2ddriver_2escm"),(void*)f_4299},
{C_text("f_4302:batch_2ddriver_2escm"),(void*)f_4302},
{C_text("f_4305:batch_2ddriver_2escm"),(void*)f_4305},
{C_text("f_4308:batch_2ddriver_2escm"),(void*)f_4308},
{C_text("f_4311:batch_2ddriver_2escm"),(void*)f_4311},
{C_text("f_4314:batch_2ddriver_2escm"),(void*)f_4314},
{C_text("f_4317:batch_2ddriver_2escm"),(void*)f_4317},
{C_text("f_4331:batch_2ddriver_2escm"),(void*)f_4331},
{C_text("f_4342:batch_2ddriver_2escm"),(void*)f_4342},
{C_text("f_4346:batch_2ddriver_2escm"),(void*)f_4346},
{C_text("f_4354:batch_2ddriver_2escm"),(void*)f_4354},
{C_text("f_4364:batch_2ddriver_2escm"),(void*)f_4364},
{C_text("f_4384:batch_2ddriver_2escm"),(void*)f_4384},
{C_text("f_4395:batch_2ddriver_2escm"),(void*)f_4395},
{C_text("f_4399:batch_2ddriver_2escm"),(void*)f_4399},
{C_text("f_4411:batch_2ddriver_2escm"),(void*)f_4411},
{C_text("f_4422:batch_2ddriver_2escm"),(void*)f_4422},
{C_text("f_4426:batch_2ddriver_2escm"),(void*)f_4426},
{C_text("f_4449:batch_2ddriver_2escm"),(void*)f_4449},
{C_text("f_4465:batch_2ddriver_2escm"),(void*)f_4465},
{C_text("f_4481:batch_2ddriver_2escm"),(void*)f_4481},
{C_text("f_4490:batch_2ddriver_2escm"),(void*)f_4490},
{C_text("f_4503:batch_2ddriver_2escm"),(void*)f_4503},
{C_text("f_4514:batch_2ddriver_2escm"),(void*)f_4514},
{C_text("f_4520:batch_2ddriver_2escm"),(void*)f_4520},
{C_text("f_4593:batch_2ddriver_2escm"),(void*)f_4593},
{C_text("f_4599:batch_2ddriver_2escm"),(void*)f_4599},
{C_text("f_4602:batch_2ddriver_2escm"),(void*)f_4602},
{C_text("f_4605:batch_2ddriver_2escm"),(void*)f_4605},
{C_text("f_4947:batch_2ddriver_2escm"),(void*)f_4947},
{C_text("f_4949:batch_2ddriver_2escm"),(void*)f_4949},
{C_text("f_4952:batch_2ddriver_2escm"),(void*)f_4952},
{C_text("f_4983:batch_2ddriver_2escm"),(void*)f_4983},
{C_text("f_4992:batch_2ddriver_2escm"),(void*)f_4992},
{C_text("f_4995:batch_2ddriver_2escm"),(void*)f_4995},
{C_text("f_4998:batch_2ddriver_2escm"),(void*)f_4998},
{C_text("f_5008:batch_2ddriver_2escm"),(void*)f_5008},
{C_text("f_5013:batch_2ddriver_2escm"),(void*)f_5013},
{C_text("f_5016:batch_2ddriver_2escm"),(void*)f_5016},
{C_text("f_5019:batch_2ddriver_2escm"),(void*)f_5019},
{C_text("f_5024:batch_2ddriver_2escm"),(void*)f_5024},
{C_text("f_5047:batch_2ddriver_2escm"),(void*)f_5047},
{C_text("f_5065:batch_2ddriver_2escm"),(void*)f_5065},
{C_text("f_5069:batch_2ddriver_2escm"),(void*)f_5069},
{C_text("f_5081:batch_2ddriver_2escm"),(void*)f_5081},
{C_text("f_5084:batch_2ddriver_2escm"),(void*)f_5084},
{C_text("f_5087:batch_2ddriver_2escm"),(void*)f_5087},
{C_text("f_5090:batch_2ddriver_2escm"),(void*)f_5090},
{C_text("f_5092:batch_2ddriver_2escm"),(void*)f_5092},
{C_text("f_5099:batch_2ddriver_2escm"),(void*)f_5099},
{C_text("f_5112:batch_2ddriver_2escm"),(void*)f_5112},
{C_text("f_5114:batch_2ddriver_2escm"),(void*)f_5114},
{C_text("f_5121:batch_2ddriver_2escm"),(void*)f_5121},
{C_text("f_5127:batch_2ddriver_2escm"),(void*)f_5127},
{C_text("f_5130:batch_2ddriver_2escm"),(void*)f_5130},
{C_text("f_5133:batch_2ddriver_2escm"),(void*)f_5133},
{C_text("f_5136:batch_2ddriver_2escm"),(void*)f_5136},
{C_text("f_5141:batch_2ddriver_2escm"),(void*)f_5141},
{C_text("f_5148:batch_2ddriver_2escm"),(void*)f_5148},
{C_text("f_5153:batch_2ddriver_2escm"),(void*)f_5153},
{C_text("f_5164:batch_2ddriver_2escm"),(void*)f_5164},
{C_text("f_5174:batch_2ddriver_2escm"),(void*)f_5174},
{C_text("f_5197:batch_2ddriver_2escm"),(void*)f_5197},
{C_text("f_5245:batch_2ddriver_2escm"),(void*)f_5245},
{C_text("f_5254:batch_2ddriver_2escm"),(void*)f_5254},
{C_text("f_5259:batch_2ddriver_2escm"),(void*)f_5259},
{C_text("f_5265:batch_2ddriver_2escm"),(void*)f_5265},
{C_text("f_5271:batch_2ddriver_2escm"),(void*)f_5271},
{C_text("f_5277:batch_2ddriver_2escm"),(void*)f_5277},
{C_text("f_5283:batch_2ddriver_2escm"),(void*)f_5283},
{C_text("f_5289:batch_2ddriver_2escm"),(void*)f_5289},
{C_text("f_5295:batch_2ddriver_2escm"),(void*)f_5295},
{C_text("f_5312:batch_2ddriver_2escm"),(void*)f_5312},
{C_text("f_5321:batch_2ddriver_2escm"),(void*)f_5321},
{C_text("f_5352:batch_2ddriver_2escm"),(void*)f_5352},
{C_text("f_5356:batch_2ddriver_2escm"),(void*)f_5356},
{C_text("f_5372:batch_2ddriver_2escm"),(void*)f_5372},
{C_text("f_5376:batch_2ddriver_2escm"),(void*)f_5376},
{C_text("f_5397:batch_2ddriver_2escm"),(void*)f_5397},
{C_text("f_5403:batch_2ddriver_2escm"),(void*)f_5403},
{C_text("f_5411:batch_2ddriver_2escm"),(void*)f_5411},
{C_text("f_5419:batch_2ddriver_2escm"),(void*)f_5419},
{C_text("f_5423:batch_2ddriver_2escm"),(void*)f_5423},
{C_text("f_5432:batch_2ddriver_2escm"),(void*)f_5432},
{C_text("f_5440:batch_2ddriver_2escm"),(void*)f_5440},
{C_text("f_5442:batch_2ddriver_2escm"),(void*)f_5442},
{C_text("f_5452:batch_2ddriver_2escm"),(void*)f_5452},
{C_text("f_5455:batch_2ddriver_2escm"),(void*)f_5455},
{C_text("f_5458:batch_2ddriver_2escm"),(void*)f_5458},
{C_text("f_5461:batch_2ddriver_2escm"),(void*)f_5461},
{C_text("f_5468:batch_2ddriver_2escm"),(void*)f_5468},
{C_text("f_5472:batch_2ddriver_2escm"),(void*)f_5472},
{C_text("f_5480:batch_2ddriver_2escm"),(void*)f_5480},
{C_text("f_5482:batch_2ddriver_2escm"),(void*)f_5482},
{C_text("f_5484:batch_2ddriver_2escm"),(void*)f_5484},
{C_text("f_5488:batch_2ddriver_2escm"),(void*)f_5488},
{C_text("f_5491:batch_2ddriver_2escm"),(void*)f_5491},
{C_text("f_5496:batch_2ddriver_2escm"),(void*)f_5496},
{C_text("f_5502:batch_2ddriver_2escm"),(void*)f_5502},
{C_text("f_5507:batch_2ddriver_2escm"),(void*)f_5507},
{C_text("f_5512:batch_2ddriver_2escm"),(void*)f_5512},
{C_text("f_5571:batch_2ddriver_2escm"),(void*)f_5571},
{C_text("f_5574:batch_2ddriver_2escm"),(void*)f_5574},
{C_text("f_5577:batch_2ddriver_2escm"),(void*)f_5577},
{C_text("f_5584:batch_2ddriver_2escm"),(void*)f_5584},
{C_text("f_5587:batch_2ddriver_2escm"),(void*)f_5587},
{C_text("f_5604:batch_2ddriver_2escm"),(void*)f_5604},
{C_text("f_5608:batch_2ddriver_2escm"),(void*)f_5608},
{C_text("f_5613:batch_2ddriver_2escm"),(void*)f_5613},
{C_text("f_5619:batch_2ddriver_2escm"),(void*)f_5619},
{C_text("f_5622:batch_2ddriver_2escm"),(void*)f_5622},
{C_text("f_5625:batch_2ddriver_2escm"),(void*)f_5625},
{C_text("f_5628:batch_2ddriver_2escm"),(void*)f_5628},
{C_text("f_5631:batch_2ddriver_2escm"),(void*)f_5631},
{C_text("f_5634:batch_2ddriver_2escm"),(void*)f_5634},
{C_text("f_5637:batch_2ddriver_2escm"),(void*)f_5637},
{C_text("f_5640:batch_2ddriver_2escm"),(void*)f_5640},
{C_text("f_5643:batch_2ddriver_2escm"),(void*)f_5643},
{C_text("f_5646:batch_2ddriver_2escm"),(void*)f_5646},
{C_text("f_5649:batch_2ddriver_2escm"),(void*)f_5649},
{C_text("f_5652:batch_2ddriver_2escm"),(void*)f_5652},
{C_text("f_5655:batch_2ddriver_2escm"),(void*)f_5655},
{C_text("f_5658:batch_2ddriver_2escm"),(void*)f_5658},
{C_text("f_5661:batch_2ddriver_2escm"),(void*)f_5661},
{C_text("f_5664:batch_2ddriver_2escm"),(void*)f_5664},
{C_text("f_5667:batch_2ddriver_2escm"),(void*)f_5667},
{C_text("f_5670:batch_2ddriver_2escm"),(void*)f_5670},
{C_text("f_5673:batch_2ddriver_2escm"),(void*)f_5673},
{C_text("f_5676:batch_2ddriver_2escm"),(void*)f_5676},
{C_text("f_5679:batch_2ddriver_2escm"),(void*)f_5679},
{C_text("f_5682:batch_2ddriver_2escm"),(void*)f_5682},
{C_text("f_5685:batch_2ddriver_2escm"),(void*)f_5685},
{C_text("f_5688:batch_2ddriver_2escm"),(void*)f_5688},
{C_text("f_5693:batch_2ddriver_2escm"),(void*)f_5693},
{C_text("f_5698:batch_2ddriver_2escm"),(void*)f_5698},
{C_text("f_5703:batch_2ddriver_2escm"),(void*)f_5703},
{C_text("f_5708:batch_2ddriver_2escm"),(void*)f_5708},
{C_text("f_5713:batch_2ddriver_2escm"),(void*)f_5713},
{C_text("f_5716:batch_2ddriver_2escm"),(void*)f_5716},
{C_text("f_5719:batch_2ddriver_2escm"),(void*)f_5719},
{C_text("f_5722:batch_2ddriver_2escm"),(void*)f_5722},
{C_text("f_5725:batch_2ddriver_2escm"),(void*)f_5725},
{C_text("f_5730:batch_2ddriver_2escm"),(void*)f_5730},
{C_text("f_5733:batch_2ddriver_2escm"),(void*)f_5733},
{C_text("f_5736:batch_2ddriver_2escm"),(void*)f_5736},
{C_text("f_5739:batch_2ddriver_2escm"),(void*)f_5739},
{C_text("f_5742:batch_2ddriver_2escm"),(void*)f_5742},
{C_text("f_5745:batch_2ddriver_2escm"),(void*)f_5745},
{C_text("f_5748:batch_2ddriver_2escm"),(void*)f_5748},
{C_text("f_5751:batch_2ddriver_2escm"),(void*)f_5751},
{C_text("f_5754:batch_2ddriver_2escm"),(void*)f_5754},
{C_text("f_5757:batch_2ddriver_2escm"),(void*)f_5757},
{C_text("f_5763:batch_2ddriver_2escm"),(void*)f_5763},
{C_text("f_5766:batch_2ddriver_2escm"),(void*)f_5766},
{C_text("f_5772:batch_2ddriver_2escm"),(void*)f_5772},
{C_text("f_5779:batch_2ddriver_2escm"),(void*)f_5779},
{C_text("f_5782:batch_2ddriver_2escm"),(void*)f_5782},
{C_text("f_5787:batch_2ddriver_2escm"),(void*)f_5787},
{C_text("f_5790:batch_2ddriver_2escm"),(void*)f_5790},
{C_text("f_5805:batch_2ddriver_2escm"),(void*)f_5805},
{C_text("f_5809:batch_2ddriver_2escm"),(void*)f_5809},
{C_text("f_5817:batch_2ddriver_2escm"),(void*)f_5817},
{C_text("f_5820:batch_2ddriver_2escm"),(void*)f_5820},
{C_text("f_5823:batch_2ddriver_2escm"),(void*)f_5823},
{C_text("f_5826:batch_2ddriver_2escm"),(void*)f_5826},
{C_text("f_5830:batch_2ddriver_2escm"),(void*)f_5830},
{C_text("f_5834:batch_2ddriver_2escm"),(void*)f_5834},
{C_text("f_5837:batch_2ddriver_2escm"),(void*)f_5837},
{C_text("f_5841:batch_2ddriver_2escm"),(void*)f_5841},
{C_text("f_5845:batch_2ddriver_2escm"),(void*)f_5845},
{C_text("f_5856:batch_2ddriver_2escm"),(void*)f_5856},
{C_text("f_5859:batch_2ddriver_2escm"),(void*)f_5859},
{C_text("f_5862:batch_2ddriver_2escm"),(void*)f_5862},
{C_text("f_5865:batch_2ddriver_2escm"),(void*)f_5865},
{C_text("f_5868:batch_2ddriver_2escm"),(void*)f_5868},
{C_text("f_5871:batch_2ddriver_2escm"),(void*)f_5871},
{C_text("f_5879:batch_2ddriver_2escm"),(void*)f_5879},
{C_text("f_5890:batch_2ddriver_2escm"),(void*)f_5890},
{C_text("f_5901:batch_2ddriver_2escm"),(void*)f_5901},
{C_text("f_5908:batch_2ddriver_2escm"),(void*)f_5908},
{C_text("f_5917:batch_2ddriver_2escm"),(void*)f_5917},
{C_text("f_5920:batch_2ddriver_2escm"),(void*)f_5920},
{C_text("f_5923:batch_2ddriver_2escm"),(void*)f_5923},
{C_text("f_5929:batch_2ddriver_2escm"),(void*)f_5929},
{C_text("f_5932:batch_2ddriver_2escm"),(void*)f_5932},
{C_text("f_5935:batch_2ddriver_2escm"),(void*)f_5935},
{C_text("f_5938:batch_2ddriver_2escm"),(void*)f_5938},
{C_text("f_5941:batch_2ddriver_2escm"),(void*)f_5941},
{C_text("f_5945:batch_2ddriver_2escm"),(void*)f_5945},
{C_text("f_5949:batch_2ddriver_2escm"),(void*)f_5949},
{C_text("f_5952:batch_2ddriver_2escm"),(void*)f_5952},
{C_text("f_5955:batch_2ddriver_2escm"),(void*)f_5955},
{C_text("f_5958:batch_2ddriver_2escm"),(void*)f_5958},
{C_text("f_5961:batch_2ddriver_2escm"),(void*)f_5961},
{C_text("f_5964:batch_2ddriver_2escm"),(void*)f_5964},
{C_text("f_5967:batch_2ddriver_2escm"),(void*)f_5967},
{C_text("f_5970:batch_2ddriver_2escm"),(void*)f_5970},
{C_text("f_5973:batch_2ddriver_2escm"),(void*)f_5973},
{C_text("f_5976:batch_2ddriver_2escm"),(void*)f_5976},
{C_text("f_5985:batch_2ddriver_2escm"),(void*)f_5985},
{C_text("f_5989:batch_2ddriver_2escm"),(void*)f_5989},
{C_text("f_5995:batch_2ddriver_2escm"),(void*)f_5995},
{C_text("f_6000:batch_2ddriver_2escm"),(void*)f_6000},
{C_text("f_6006:batch_2ddriver_2escm"),(void*)f_6006},
{C_text("f_6012:batch_2ddriver_2escm"),(void*)f_6012},
{C_text("f_6015:batch_2ddriver_2escm"),(void*)f_6015},
{C_text("f_6021:batch_2ddriver_2escm"),(void*)f_6021},
{C_text("f_6036:batch_2ddriver_2escm"),(void*)f_6036},
{C_text("f_6042:batch_2ddriver_2escm"),(void*)f_6042},
{C_text("f_6045:batch_2ddriver_2escm"),(void*)f_6045},
{C_text("f_6048:batch_2ddriver_2escm"),(void*)f_6048},
{C_text("f_6051:batch_2ddriver_2escm"),(void*)f_6051},
{C_text("f_6054:batch_2ddriver_2escm"),(void*)f_6054},
{C_text("f_6057:batch_2ddriver_2escm"),(void*)f_6057},
{C_text("f_6062:batch_2ddriver_2escm"),(void*)f_6062},
{C_text("f_6065:batch_2ddriver_2escm"),(void*)f_6065},
{C_text("f_6068:batch_2ddriver_2escm"),(void*)f_6068},
{C_text("f_6071:batch_2ddriver_2escm"),(void*)f_6071},
{C_text("f_6074:batch_2ddriver_2escm"),(void*)f_6074},
{C_text("f_6077:batch_2ddriver_2escm"),(void*)f_6077},
{C_text("f_6080:batch_2ddriver_2escm"),(void*)f_6080},
{C_text("f_6083:batch_2ddriver_2escm"),(void*)f_6083},
{C_text("f_6086:batch_2ddriver_2escm"),(void*)f_6086},
{C_text("f_6089:batch_2ddriver_2escm"),(void*)f_6089},
{C_text("f_6092:batch_2ddriver_2escm"),(void*)f_6092},
{C_text("f_6095:batch_2ddriver_2escm"),(void*)f_6095},
{C_text("f_6101:batch_2ddriver_2escm"),(void*)f_6101},
{C_text("f_6104:batch_2ddriver_2escm"),(void*)f_6104},
{C_text("f_6107:batch_2ddriver_2escm"),(void*)f_6107},
{C_text("f_6110:batch_2ddriver_2escm"),(void*)f_6110},
{C_text("f_6113:batch_2ddriver_2escm"),(void*)f_6113},
{C_text("f_6118:batch_2ddriver_2escm"),(void*)f_6118},
{C_text("f_6122:batch_2ddriver_2escm"),(void*)f_6122},
{C_text("f_6125:batch_2ddriver_2escm"),(void*)f_6125},
{C_text("f_6128:batch_2ddriver_2escm"),(void*)f_6128},
{C_text("f_6132:batch_2ddriver_2escm"),(void*)f_6132},
{C_text("f_6135:batch_2ddriver_2escm"),(void*)f_6135},
{C_text("f_6138:batch_2ddriver_2escm"),(void*)f_6138},
{C_text("f_6144:batch_2ddriver_2escm"),(void*)f_6144},
{C_text("f_6147:batch_2ddriver_2escm"),(void*)f_6147},
{C_text("f_6152:batch_2ddriver_2escm"),(void*)f_6152},
{C_text("f_6158:batch_2ddriver_2escm"),(void*)f_6158},
{C_text("f_6162:batch_2ddriver_2escm"),(void*)f_6162},
{C_text("f_6165:batch_2ddriver_2escm"),(void*)f_6165},
{C_text("f_6182:batch_2ddriver_2escm"),(void*)f_6182},
{C_text("f_6194:batch_2ddriver_2escm"),(void*)f_6194},
{C_text("f_6197:batch_2ddriver_2escm"),(void*)f_6197},
{C_text("f_6200:batch_2ddriver_2escm"),(void*)f_6200},
{C_text("f_6203:batch_2ddriver_2escm"),(void*)f_6203},
{C_text("f_6206:batch_2ddriver_2escm"),(void*)f_6206},
{C_text("f_6209:batch_2ddriver_2escm"),(void*)f_6209},
{C_text("f_6222:batch_2ddriver_2escm"),(void*)f_6222},
{C_text("f_6225:batch_2ddriver_2escm"),(void*)f_6225},
{C_text("f_6228:batch_2ddriver_2escm"),(void*)f_6228},
{C_text("f_6231:batch_2ddriver_2escm"),(void*)f_6231},
{C_text("f_6235:batch_2ddriver_2escm"),(void*)f_6235},
{C_text("f_6238:batch_2ddriver_2escm"),(void*)f_6238},
{C_text("f_6241:batch_2ddriver_2escm"),(void*)f_6241},
{C_text("f_6244:batch_2ddriver_2escm"),(void*)f_6244},
{C_text("f_6247:batch_2ddriver_2escm"),(void*)f_6247},
{C_text("f_6250:batch_2ddriver_2escm"),(void*)f_6250},
{C_text("f_6253:batch_2ddriver_2escm"),(void*)f_6253},
{C_text("f_6258:batch_2ddriver_2escm"),(void*)f_6258},
{C_text("f_6264:batch_2ddriver_2escm"),(void*)f_6264},
{C_text("f_6268:batch_2ddriver_2escm"),(void*)f_6268},
{C_text("f_6271:batch_2ddriver_2escm"),(void*)f_6271},
{C_text("f_6274:batch_2ddriver_2escm"),(void*)f_6274},
{C_text("f_6277:batch_2ddriver_2escm"),(void*)f_6277},
{C_text("f_6280:batch_2ddriver_2escm"),(void*)f_6280},
{C_text("f_6283:batch_2ddriver_2escm"),(void*)f_6283},
{C_text("f_6286:batch_2ddriver_2escm"),(void*)f_6286},
{C_text("f_6289:batch_2ddriver_2escm"),(void*)f_6289},
{C_text("f_6292:batch_2ddriver_2escm"),(void*)f_6292},
{C_text("f_6295:batch_2ddriver_2escm"),(void*)f_6295},
{C_text("f_6308:batch_2ddriver_2escm"),(void*)f_6308},
{C_text("f_6311:batch_2ddriver_2escm"),(void*)f_6311},
{C_text("f_6323:batch_2ddriver_2escm"),(void*)f_6323},
{C_text("f_6328:batch_2ddriver_2escm"),(void*)f_6328},
{C_text("f_6352:batch_2ddriver_2escm"),(void*)f_6352},
{C_text("f_6358:batch_2ddriver_2escm"),(void*)f_6358},
{C_text("f_6371:batch_2ddriver_2escm"),(void*)f_6371},
{C_text("f_6373:batch_2ddriver_2escm"),(void*)f_6373},
{C_text("f_6398:batch_2ddriver_2escm"),(void*)f_6398},
{C_text("f_6408:batch_2ddriver_2escm"),(void*)f_6408},
{C_text("f_6411:batch_2ddriver_2escm"),(void*)f_6411},
{C_text("f_6414:batch_2ddriver_2escm"),(void*)f_6414},
{C_text("f_6417:batch_2ddriver_2escm"),(void*)f_6417},
{C_text("f_6429:batch_2ddriver_2escm"),(void*)f_6429},
{C_text("f_6432:batch_2ddriver_2escm"),(void*)f_6432},
{C_text("f_6436:batch_2ddriver_2escm"),(void*)f_6436},
{C_text("f_6445:batch_2ddriver_2escm"),(void*)f_6445},
{C_text("f_6448:batch_2ddriver_2escm"),(void*)f_6448},
{C_text("f_6451:batch_2ddriver_2escm"),(void*)f_6451},
{C_text("f_6454:batch_2ddriver_2escm"),(void*)f_6454},
{C_text("f_6457:batch_2ddriver_2escm"),(void*)f_6457},
{C_text("f_6463:batch_2ddriver_2escm"),(void*)f_6463},
{C_text("f_6507:batch_2ddriver_2escm"),(void*)f_6507},
{C_text("f_6513:batch_2ddriver_2escm"),(void*)f_6513},
{C_text("f_6518:batch_2ddriver_2escm"),(void*)f_6518},
{C_text("f_6527:batch_2ddriver_2escm"),(void*)f_6527},
{C_text("f_6533:batch_2ddriver_2escm"),(void*)f_6533},
{C_text("f_6542:batch_2ddriver_2escm"),(void*)f_6542},
{C_text("f_6546:batch_2ddriver_2escm"),(void*)f_6546},
{C_text("f_6552:batch_2ddriver_2escm"),(void*)f_6552},
{C_text("f_6555:batch_2ddriver_2escm"),(void*)f_6555},
{C_text("f_6560:batch_2ddriver_2escm"),(void*)f_6560},
{C_text("f_6563:batch_2ddriver_2escm"),(void*)f_6563},
{C_text("f_6566:batch_2ddriver_2escm"),(void*)f_6566},
{C_text("f_6569:batch_2ddriver_2escm"),(void*)f_6569},
{C_text("f_6572:batch_2ddriver_2escm"),(void*)f_6572},
{C_text("f_6575:batch_2ddriver_2escm"),(void*)f_6575},
{C_text("f_6578:batch_2ddriver_2escm"),(void*)f_6578},
{C_text("f_6581:batch_2ddriver_2escm"),(void*)f_6581},
{C_text("f_6587:batch_2ddriver_2escm"),(void*)f_6587},
{C_text("f_6597:batch_2ddriver_2escm"),(void*)f_6597},
{C_text("f_6610:batch_2ddriver_2escm"),(void*)f_6610},
{C_text("f_6620:batch_2ddriver_2escm"),(void*)f_6620},
{C_text("f_6639:batch_2ddriver_2escm"),(void*)f_6639},
{C_text("f_6651:batch_2ddriver_2escm"),(void*)f_6651},
{C_text("f_6662:batch_2ddriver_2escm"),(void*)f_6662},
{C_text("f_6672:batch_2ddriver_2escm"),(void*)f_6672},
{C_text("f_6688:batch_2ddriver_2escm"),(void*)f_6688},
{C_text("f_6694:batch_2ddriver_2escm"),(void*)f_6694},
{C_text("f_6701:batch_2ddriver_2escm"),(void*)f_6701},
{C_text("f_6709:batch_2ddriver_2escm"),(void*)f_6709},
{C_text("f_6719:batch_2ddriver_2escm"),(void*)f_6719},
{C_text("f_6734:batch_2ddriver_2escm"),(void*)f_6734},
{C_text("f_6738:batch_2ddriver_2escm"),(void*)f_6738},
{C_text("f_6741:batch_2ddriver_2escm"),(void*)f_6741},
{C_text("f_6744:batch_2ddriver_2escm"),(void*)f_6744},
{C_text("f_6754:batch_2ddriver_2escm"),(void*)f_6754},
{C_text("f_6759:batch_2ddriver_2escm"),(void*)f_6759},
{C_text("f_6784:batch_2ddriver_2escm"),(void*)f_6784},
{C_text("f_6799:batch_2ddriver_2escm"),(void*)f_6799},
{C_text("f_6805:batch_2ddriver_2escm"),(void*)f_6805},
{C_text("f_6816:batch_2ddriver_2escm"),(void*)f_6816},
{C_text("f_6820:batch_2ddriver_2escm"),(void*)f_6820},
{C_text("f_6828:batch_2ddriver_2escm"),(void*)f_6828},
{C_text("f_6831:batch_2ddriver_2escm"),(void*)f_6831},
{C_text("f_6834:batch_2ddriver_2escm"),(void*)f_6834},
{C_text("f_6837:batch_2ddriver_2escm"),(void*)f_6837},
{C_text("f_6854:batch_2ddriver_2escm"),(void*)f_6854},
{C_text("f_6864:batch_2ddriver_2escm"),(void*)f_6864},
{C_text("f_6885:batch_2ddriver_2escm"),(void*)f_6885},
{C_text("f_6904:batch_2ddriver_2escm"),(void*)f_6904},
{C_text("f_6906:batch_2ddriver_2escm"),(void*)f_6906},
{C_text("f_6931:batch_2ddriver_2escm"),(void*)f_6931},
{C_text("f_6963:batch_2ddriver_2escm"),(void*)f_6963},
{C_text("f_6967:batch_2ddriver_2escm"),(void*)f_6967},
{C_text("f_6971:batch_2ddriver_2escm"),(void*)f_6971},
{C_text("f_6997:batch_2ddriver_2escm"),(void*)f_6997},
{C_text("f_7031:batch_2ddriver_2escm"),(void*)f_7031},
{C_text("f_7056:batch_2ddriver_2escm"),(void*)f_7056},
{C_text("f_7065:batch_2ddriver_2escm"),(void*)f_7065},
{C_text("f_7090:batch_2ddriver_2escm"),(void*)f_7090},
{C_text("f_7115:batch_2ddriver_2escm"),(void*)f_7115},
{C_text("f_7121:batch_2ddriver_2escm"),(void*)f_7121},
{C_text("f_7146:batch_2ddriver_2escm"),(void*)f_7146},
{C_text("f_7156:batch_2ddriver_2escm"),(void*)f_7156},
{C_text("f_7166:batch_2ddriver_2escm"),(void*)f_7166},
{C_text("f_7168:batch_2ddriver_2escm"),(void*)f_7168},
{C_text("f_7193:batch_2ddriver_2escm"),(void*)f_7193},
{C_text("f_7203:batch_2ddriver_2escm"),(void*)f_7203},
{C_text("f_7207:batch_2ddriver_2escm"),(void*)f_7207},
{C_text("f_7212:batch_2ddriver_2escm"),(void*)f_7212},
{C_text("f_7223:batch_2ddriver_2escm"),(void*)f_7223},
{C_text("f_7233:batch_2ddriver_2escm"),(void*)f_7233},
{C_text("f_7237:batch_2ddriver_2escm"),(void*)f_7237},
{C_text("f_7247:batch_2ddriver_2escm"),(void*)f_7247},
{C_text("f_7249:batch_2ddriver_2escm"),(void*)f_7249},
{C_text("f_7274:batch_2ddriver_2escm"),(void*)f_7274},
{C_text("f_7283:batch_2ddriver_2escm"),(void*)f_7283},
{C_text("f_7308:batch_2ddriver_2escm"),(void*)f_7308},
{C_text("f_7321:batch_2ddriver_2escm"),(void*)f_7321},
{C_text("f_7324:batch_2ddriver_2escm"),(void*)f_7324},
{C_text("f_7331:batch_2ddriver_2escm"),(void*)f_7331},
{C_text("f_7336:batch_2ddriver_2escm"),(void*)f_7336},
{C_text("f_7342:batch_2ddriver_2escm"),(void*)f_7342},
{C_text("f_7346:batch_2ddriver_2escm"),(void*)f_7346},
{C_text("f_7364:batch_2ddriver_2escm"),(void*)f_7364},
{C_text("f_7371:batch_2ddriver_2escm"),(void*)f_7371},
{C_text("f_7379:batch_2ddriver_2escm"),(void*)f_7379},
{C_text("f_7397:batch_2ddriver_2escm"),(void*)f_7397},
{C_text("f_7403:batch_2ddriver_2escm"),(void*)f_7403},
{C_text("f_7452:batch_2ddriver_2escm"),(void*)f_7452},
{C_text("f_7459:batch_2ddriver_2escm"),(void*)f_7459},
{C_text("f_7475:batch_2ddriver_2escm"),(void*)f_7475},
{C_text("f_7478:batch_2ddriver_2escm"),(void*)f_7478},
{C_text("f_7484:batch_2ddriver_2escm"),(void*)f_7484},
{C_text("f_7486:batch_2ddriver_2escm"),(void*)f_7486},
{C_text("f_7520:batch_2ddriver_2escm"),(void*)f_7520},
{C_text("f_7527:batch_2ddriver_2escm"),(void*)f_7527},
{C_text("f_7532:batch_2ddriver_2escm"),(void*)f_7532},
{C_text("f_7557:batch_2ddriver_2escm"),(void*)f_7557},
{C_text("f_7568:batch_2ddriver_2escm"),(void*)f_7568},
{C_text("f_7575:batch_2ddriver_2escm"),(void*)f_7575},
{C_text("f_7589:batch_2ddriver_2escm"),(void*)f_7589},
{C_text("f_7596:batch_2ddriver_2escm"),(void*)f_7596},
{C_text("f_7601:batch_2ddriver_2escm"),(void*)f_7601},
{C_text("f_7626:batch_2ddriver_2escm"),(void*)f_7626},
{C_text("f_7637:batch_2ddriver_2escm"),(void*)f_7637},
{C_text("f_7639:batch_2ddriver_2escm"),(void*)f_7639},
{C_text("f_7649:batch_2ddriver_2escm"),(void*)f_7649},
{C_text("f_7662:batch_2ddriver_2escm"),(void*)f_7662},
{C_text("f_7672:batch_2ddriver_2escm"),(void*)f_7672},
{C_text("f_7685:batch_2ddriver_2escm"),(void*)f_7685},
{C_text("f_7693:batch_2ddriver_2escm"),(void*)f_7693},
{C_text("f_7695:batch_2ddriver_2escm"),(void*)f_7695},
{C_text("f_7705:batch_2ddriver_2escm"),(void*)f_7705},
{C_text("f_7718:batch_2ddriver_2escm"),(void*)f_7718},
{C_text("f_7726:batch_2ddriver_2escm"),(void*)f_7726},
{C_text("f_7739:batch_2ddriver_2escm"),(void*)f_7739},
{C_text("f_7748:batch_2ddriver_2escm"),(void*)f_7748},
{C_text("f_7753:batch_2ddriver_2escm"),(void*)f_7753},
{C_text("f_7764:batch_2ddriver_2escm"),(void*)f_7764},
{C_text("f_7774:batch_2ddriver_2escm"),(void*)f_7774},
{C_text("f_7787:batch_2ddriver_2escm"),(void*)f_7787},
{C_text("f_7797:batch_2ddriver_2escm"),(void*)f_7797},
{C_text("f_7841:batch_2ddriver_2escm"),(void*)f_7841},
{C_text("f_7847:batch_2ddriver_2escm"),(void*)f_7847},
{C_text("f_7849:batch_2ddriver_2escm"),(void*)f_7849},
{C_text("f_7859:batch_2ddriver_2escm"),(void*)f_7859},
{C_text("f_7874:batch_2ddriver_2escm"),(void*)f_7874},
{C_text("f_7886:batch_2ddriver_2escm"),(void*)f_7886},
{C_text("f_7889:batch_2ddriver_2escm"),(void*)f_7889},
{C_text("f_7892:batch_2ddriver_2escm"),(void*)f_7892},
{C_text("f_7900:batch_2ddriver_2escm"),(void*)f_7900},
{C_text("f_7906:batch_2ddriver_2escm"),(void*)f_7906},
{C_text("f_7938:batch_2ddriver_2escm"),(void*)f_7938},
{C_text("f_7941:batch_2ddriver_2escm"),(void*)f_7941},
{C_text("f_7948:batch_2ddriver_2escm"),(void*)f_7948},
{C_text("f_7951:batch_2ddriver_2escm"),(void*)f_7951},
{C_text("f_7954:batch_2ddriver_2escm"),(void*)f_7954},
{C_text("f_7961:batch_2ddriver_2escm"),(void*)f_7961},
{C_text("f_7964:batch_2ddriver_2escm"),(void*)f_7964},
{C_text("f_7967:batch_2ddriver_2escm"),(void*)f_7967},
{C_text("f_7974:batch_2ddriver_2escm"),(void*)f_7974},
{C_text("f_7980:batch_2ddriver_2escm"),(void*)f_7980},
{C_text("f_7984:batch_2ddriver_2escm"),(void*)f_7984},
{C_text("f_8016:batch_2ddriver_2escm"),(void*)f_8016},
{C_text("f_8073:batch_2ddriver_2escm"),(void*)f_8073},
{C_text("f_8111:batch_2ddriver_2escm"),(void*)f_8111},
{C_text("f_8116:batch_2ddriver_2escm"),(void*)f_8116},
{C_text("f_8132:batch_2ddriver_2escm"),(void*)f_8132},
{C_text("f_8137:batch_2ddriver_2escm"),(void*)f_8137},
{C_text("f_8162:batch_2ddriver_2escm"),(void*)f_8162},
{C_text("f_8173:batch_2ddriver_2escm"),(void*)f_8173},
{C_text("f_8187:batch_2ddriver_2escm"),(void*)f_8187},
{C_text("f_8191:batch_2ddriver_2escm"),(void*)f_8191},
{C_text("f_8213:batch_2ddriver_2escm"),(void*)f_8213},
{C_text("f_8217:batch_2ddriver_2escm"),(void*)f_8217},
{C_text("f_8218:batch_2ddriver_2escm"),(void*)f_8218},
{C_text("f_8222:batch_2ddriver_2escm"),(void*)f_8222},
{C_text("f_8246:batch_2ddriver_2escm"),(void*)f_8246},
{C_text("f_8272:batch_2ddriver_2escm"),(void*)f_8272},
{C_text("f_8280:batch_2ddriver_2escm"),(void*)f_8280},
{C_text("f_8287:batch_2ddriver_2escm"),(void*)f_8287},
{C_text("toplevel:batch_2ddriver_2escm"),(void*)C_batch_2ddriver_toplevel},
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
o|hiding unexported module binding: chicken.compiler.batch-driver#partition 
o|hiding unexported module binding: chicken.compiler.batch-driver#span 
o|hiding unexported module binding: chicken.compiler.batch-driver#take 
o|hiding unexported module binding: chicken.compiler.batch-driver#drop 
o|hiding unexported module binding: chicken.compiler.batch-driver#split-at 
o|hiding unexported module binding: chicken.compiler.batch-driver#append-map 
o|hiding unexported module binding: chicken.compiler.batch-driver#every 
o|hiding unexported module binding: chicken.compiler.batch-driver#any 
o|hiding unexported module binding: chicken.compiler.batch-driver#cons* 
o|hiding unexported module binding: chicken.compiler.batch-driver#concatenate 
o|hiding unexported module binding: chicken.compiler.batch-driver#delete 
o|hiding unexported module binding: chicken.compiler.batch-driver#first 
o|hiding unexported module binding: chicken.compiler.batch-driver#second 
o|hiding unexported module binding: chicken.compiler.batch-driver#third 
o|hiding unexported module binding: chicken.compiler.batch-driver#fourth 
o|hiding unexported module binding: chicken.compiler.batch-driver#fifth 
o|hiding unexported module binding: chicken.compiler.batch-driver#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.batch-driver#alist-cons 
o|hiding unexported module binding: chicken.compiler.batch-driver#filter 
o|hiding unexported module binding: chicken.compiler.batch-driver#filter-map 
o|hiding unexported module binding: chicken.compiler.batch-driver#remove 
o|hiding unexported module binding: chicken.compiler.batch-driver#unzip1 
o|hiding unexported module binding: chicken.compiler.batch-driver#last 
o|hiding unexported module binding: chicken.compiler.batch-driver#list-index 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#list-tabulate 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.batch-driver#length+ 
o|hiding unexported module binding: chicken.compiler.batch-driver#find 
o|hiding unexported module binding: chicken.compiler.batch-driver#find-tail 
o|hiding unexported module binding: chicken.compiler.batch-driver#iota 
o|hiding unexported module binding: chicken.compiler.batch-driver#make-list 
o|hiding unexported module binding: chicken.compiler.batch-driver#posq 
o|hiding unexported module binding: chicken.compiler.batch-driver#posv 
o|hiding unexported module binding: chicken.compiler.batch-driver#print-program-statistics 
o|hiding unexported module binding: chicken.compiler.batch-driver#initialize-analysis-database 
o|hiding unexported module binding: chicken.compiler.batch-driver#display-analysis-database 
S|applied compiler syntax:
S|  scheme#for-each		15
S|  chicken.format#printf		18
S|  chicken.base#foldl		3
S|  scheme#map		19
S|  chicken.base#foldr		3
o|eliminated procedure checks: 188 
o|folded constant expression: (scheme#* (quote 1024) (quote 1024)) 
o|specializations:
o|  1 (scheme#current-output-port)
o|  4 (chicken.base#add1 *)
o|  4 (scheme#string=? * *)
o|  1 (scheme#string-append string string)
o|  1 (scheme#> integer integer)
o|  1 (chicken.base#sub1 fixnum)
o|  4 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#< fixnum fixnum)
o|  1 (scheme#- fixnum fixnum)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#positive? fixnum)
o|  2 (chicken.base#sub1 *)
o|  1 (chicken.base#add1 fixnum)
o|  69 (scheme#memq * list)
o|  44 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  18 (##sys#check-output-port * * *)
o|  1 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  27 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 688 
(o e)|assignments to immediate values: 5 
o|safe globals: (chicken.compiler.batch-driver#compile-source-file chicken.compiler.batch-driver#display-analysis-database chicken.compiler.batch-driver#initialize-analysis-database chicken.compiler.batch-driver#print-program-statistics chicken.compiler.batch-driver#posv chicken.compiler.batch-driver#posq chicken.compiler.batch-driver#make-list chicken.compiler.batch-driver#iota chicken.compiler.batch-driver#find-tail chicken.compiler.batch-driver#find chicken.compiler.batch-driver#length+ chicken.compiler.batch-driver#lset=/eq? chicken.compiler.batch-driver#lset<=/eq? chicken.compiler.batch-driver#list-tabulate chicken.compiler.batch-driver#lset-intersection/eq? chicken.compiler.batch-driver#lset-union/eq? chicken.compiler.batch-driver#lset-difference/eq? chicken.compiler.batch-driver#lset-adjoin/eq? chicken.compiler.batch-driver#list-index chicken.compiler.batch-driver#last chicken.compiler.batch-driver#unzip1 chicken.compiler.batch-driver#remove chicken.compiler.batch-driver#filter-map chicken.compiler.batch-driver#filter chicken.compiler.batch-driver#alist-cons chicken.compiler.batch-driver#delete-duplicates chicken.compiler.batch-driver#fifth chicken.compiler.batch-driver#fourth chicken.compiler.batch-driver#third chicken.compiler.batch-driver#second chicken.compiler.batch-driver#first chicken.compiler.batch-driver#delete chicken.compiler.batch-driver#concatenate chicken.compiler.batch-driver#cons* chicken.compiler.batch-driver#any chicken.compiler.batch-driver#every chicken.compiler.batch-driver#append-map chicken.compiler.batch-driver#split-at chicken.compiler.batch-driver#drop chicken.compiler.batch-driver#take chicken.compiler.batch-driver#span chicken.compiler.batch-driver#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#split-at 
o|merged explicitly consed rest parameter: lsts299 
o|inlining procedure: k2995 
o|inlining procedure: k3010 
o|inlining procedure: k3010 
o|inlining procedure: k2995 
o|inlining procedure: k3050 
o|inlining procedure: k3050 
o|inlining procedure: k3082 
o|contracted procedure: "(mini-srfi-1.scm:77) g352361" 
o|inlining procedure: k3082 
o|inlining procedure: k3131 
o|contracted procedure: "(mini-srfi-1.scm:76) g325334" 
o|inlining procedure: k3131 
o|inlining procedure: k3174 
o|inlining procedure: k3174 
o|inlining procedure: k3205 
o|inlining procedure: k3205 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#cons* 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#concatenate 
o|inlining procedure: k3291 
o|inlining procedure: k3291 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#alist-cons 
o|inlining procedure: k3422 
o|inlining procedure: k3422 
o|inlining procedure: k3414 
o|inlining procedure: k3414 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#last 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset-intersection/eq? 
o|inlining procedure: k3813 
o|inlining procedure: k3813 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#posv 
o|inlining procedure: k4173 
o|inlining procedure: k4213 
o|contracted procedure: "(batch-driver.scm:102) g838845" 
o|inlining procedure: k4213 
o|propagated global variable: g844846 chicken.compiler.core#internal-bindings 
o|inlining procedure: k4236 
o|contracted procedure: "(batch-driver.scm:98) g820827" 
o|inlining procedure: k4236 
o|propagated global variable: g826828 chicken.compiler.core#extended-bindings 
o|inlining procedure: k4259 
o|contracted procedure: "(batch-driver.scm:94) g802809" 
o|inlining procedure: k4259 
o|propagated global variable: g808810 chicken.compiler.core#standard-bindings 
o|inlining procedure: k4173 
o|inlining procedure: k4291 
o|inlining procedure: k4291 
o|inlining procedure: k4356 
o|contracted procedure: "(batch-driver.scm:176) g10361043" 
o|propagated global variable: out10461049 ##sys#standard-output 
o|substituted constant variable: a4327 
o|substituted constant variable: a4328 
o|propagated global variable: out10461049 ##sys#standard-output 
o|inlining procedure: k4356 
o|propagated global variable: out10201023 ##sys#standard-output 
o|substituted constant variable: a4380 
o|substituted constant variable: a4381 
o|propagated global variable: out10201023 ##sys#standard-output 
o|propagated global variable: out10271030 ##sys#standard-output 
o|substituted constant variable: a4407 
o|substituted constant variable: a4408 
o|inlining procedure: k4400 
o|propagated global variable: out10271030 ##sys#standard-output 
o|inlining procedure: k4400 
o|propagated global variable: out10091012 ##sys#standard-output 
o|substituted constant variable: a4445 
o|substituted constant variable: a4446 
o|propagated global variable: out10091012 ##sys#standard-output 
o|propagated global variable: out10031006 ##sys#standard-output 
o|substituted constant variable: a4461 
o|substituted constant variable: a4462 
o|propagated global variable: out10031006 ##sys#standard-output 
o|propagated global variable: out9971000 ##sys#standard-output 
o|substituted constant variable: a4477 
o|substituted constant variable: a4478 
o|propagated global variable: out9971000 ##sys#standard-output 
o|inlining procedure: k4492 
o|propagated global variable: out942945 ##sys#standard-output 
o|substituted constant variable: a4516 
o|substituted constant variable: a4517 
o|substituted constant variable: names857 
o|propagated global variable: out942945 ##sys#standard-output 
o|inlining procedure: k4536 
o|inlining procedure: k4536 
o|inlining procedure: k4549 
o|inlining procedure: k4549 
o|inlining procedure: k4559 
o|inlining procedure: k4559 
o|propagated global variable: out987990 ##sys#standard-output 
o|substituted constant variable: a4595 
o|substituted constant variable: a4596 
o|inlining procedure: k4585 
o|propagated global variable: out987990 ##sys#standard-output 
o|inlining procedure: k4585 
o|inlining procedure: k4627 
o|inlining procedure: k4627 
o|substituted constant variable: a4653 
o|substituted constant variable: a4655 
o|substituted constant variable: a4657 
o|inlining procedure: k4661 
o|inlining procedure: k4661 
o|inlining procedure: k4673 
o|inlining procedure: k4673 
o|inlining procedure: k4685 
o|inlining procedure: k4685 
o|inlining procedure: k4697 
o|inlining procedure: k4697 
o|inlining procedure: k4709 
o|inlining procedure: k4709 
o|inlining procedure: k4721 
o|inlining procedure: k4721 
o|substituted constant variable: a4734 
o|substituted constant variable: a4736 
o|substituted constant variable: a4738 
o|substituted constant variable: a4740 
o|substituted constant variable: a4742 
o|substituted constant variable: a4744 
o|substituted constant variable: a4746 
o|substituted constant variable: a4748 
o|substituted constant variable: a4750 
o|substituted constant variable: a4752 
o|substituted constant variable: a4754 
o|substituted constant variable: a4756 
o|substituted constant variable: a4758 
o|substituted constant variable: a4760 
o|substituted constant variable: a4762 
o|substituted constant variable: a4764 
o|substituted constant variable: a4766 
o|substituted constant variable: a4768 
o|inlining procedure: k4772 
o|inlining procedure: k4772 
o|inlining procedure: k4784 
o|inlining procedure: k4784 
o|inlining procedure: k4796 
o|inlining procedure: k4796 
o|inlining procedure: k4808 
o|inlining procedure: k4808 
o|inlining procedure: k4820 
o|inlining procedure: k4820 
o|inlining procedure: k4832 
o|inlining procedure: k4832 
o|inlining procedure: k4844 
o|inlining procedure: k4844 
o|inlining procedure: k4856 
o|inlining procedure: k4856 
o|inlining procedure: k4868 
o|inlining procedure: k4868 
o|inlining procedure: k4880 
o|inlining procedure: k4880 
o|inlining procedure: k4892 
o|inlining procedure: k4892 
o|substituted constant variable: a4899 
o|substituted constant variable: a4901 
o|substituted constant variable: a4903 
o|substituted constant variable: a4905 
o|substituted constant variable: a4907 
o|substituted constant variable: a4909 
o|substituted constant variable: a4911 
o|substituted constant variable: a4913 
o|substituted constant variable: a4915 
o|substituted constant variable: a4917 
o|substituted constant variable: a4919 
o|substituted constant variable: a4921 
o|substituted constant variable: a4923 
o|substituted constant variable: a4925 
o|substituted constant variable: a4927 
o|substituted constant variable: a4929 
o|substituted constant variable: a4931 
o|substituted constant variable: a4933 
o|substituted constant variable: a4935 
o|substituted constant variable: a4937 
o|substituted constant variable: a4939 
o|substituted constant variable: a4941 
o|substituted constant variable: a4943 
o|inlining procedure: k4492 
o|inlining procedure: k4954 
o|inlining procedure: k4954 
o|substituted constant variable: a4985 
o|substituted constant variable: a4988 
o|substituted constant variable: a4999 
o|substituted constant variable: a5001 
o|substituted constant variable: a5009 
o|substituted constant variable: a5020 
o|substituted constant variable: a5025 
o|substituted constant variable: a5030 
o|substituted constant variable: a5032 
o|substituted constant variable: a5034 
o|substituted constant variable: a5036 
o|substituted constant variable: a5038 
o|substituted constant variable: a5043 
o|merged explicitly consed rest parameter: args1183 
o|propagated global variable: out11871190 ##sys#standard-output 
o|substituted constant variable: a5077 
o|substituted constant variable: a5078 
o|inlining procedure: k5070 
o|propagated global variable: out11871190 ##sys#standard-output 
o|inlining procedure: k5070 
o|inlining procedure: k5094 
o|inlining procedure: k5094 
o|propagated global variable: out12041207 ##sys#standard-output 
o|substituted constant variable: a5123 
o|substituted constant variable: a5124 
o|inlining procedure: k5116 
o|propagated global variable: out12041207 ##sys#standard-output 
o|inlining procedure: k5116 
o|inlining procedure: k5143 
o|inlining procedure: k5166 
o|contracted procedure: "(batch-driver.scm:288) g12191226" 
o|inlining procedure: k5166 
o|inlining procedure: k5143 
o|inlining procedure: k5246 
o|inlining procedure: k5246 
o|substituted constant variable: a5310 
o|substituted constant variable: a5307 
o|contracted procedure: "(batch-driver.scm:305) string-trim1146" 
o|inlining procedure: k5199 
o|inlining procedure: k5199 
o|inlining procedure: k5216 
o|inlining procedure: k5216 
o|substituted constant variable: a5318 
o|inlining procedure: k5322 
o|inlining procedure: k5322 
o|inlining procedure: k5337 
o|inlining procedure: k5337 
o|substituted constant variable: a5384 
o|substituted constant variable: a5386 
o|substituted constant variable: a5391 
o|substituted constant variable: a5393 
o|substituted constant variable: a5395 
o|inlining procedure: k5408 
o|inlining procedure: k5408 
o|inlining procedure: k5434 
o|inlining procedure: "(batch-driver.scm:330) cputime1140" 
o|inlining procedure: k5434 
o|propagated global variable: out12871290 ##sys#standard-output 
o|substituted constant variable: a5448 
o|substituted constant variable: a5449 
o|inlining procedure: k5444 
o|inlining procedure: "(batch-driver.scm:336) cputime1140" 
o|propagated global variable: out12871290 ##sys#standard-output 
o|inlining procedure: k5444 
o|merged explicitly consed rest parameter: args1298 
o|inlining procedure: k5489 
o|propagated global variable: g13231324 chicken.compiler.support#db-get 
o|propagated global variable: g13371338 chicken.compiler.support#db-put! 
o|inlining procedure: k5489 
o|inlining procedure: k5517 
o|inlining procedure: k5517 
o|inlining procedure: k5553 
o|inlining procedure: k5553 
o|substituted constant variable: a5563 
o|substituted constant variable: a5568 
o|substituted constant variable: a5579 
o|substituted constant variable: a5689 
o|substituted constant variable: a5694 
o|substituted constant variable: a5699 
o|substituted constant variable: a5704 
o|substituted constant variable: a5709 
o|substituted constant variable: a5851 
o|substituted constant variable: a5875 
o|inlining procedure: k5872 
o|inlining procedure: k5872 
o|substituted constant variable: a5886 
o|substituted constant variable: a5897 
o|inlining procedure: k5894 
o|inlining procedure: k5894 
o|inlining procedure: k6139 
o|inlining procedure: k6166 
o|inlining procedure: k6166 
o|inlining procedure: k6189 
o|consed rest parameter at call site: "(batch-driver.scm:827) analyze1152" 3 
o|inlining procedure: k6189 
o|inlining procedure: k6139 
o|consed rest parameter at call site: "(batch-driver.scm:899) dribble1141" 2 
o|consed rest parameter at call site: "(batch-driver.scm:889) dribble1141" 2 
o|propagated global variable: g22032204 chicken.pretty-print#pp 
o|consed rest parameter at call site: "(batch-driver.scm:881) dribble1141" 2 
o|inlining procedure: "(batch-driver.scm:867) cputime1140" 
o|inlining procedure: k6375 
o|inlining procedure: k6375 
o|propagated global variable: g21802184 chicken.compiler.core#foreign-lambda-stubs 
o|consed rest parameter at call site: "(batch-driver.scm:856) dribble1141" 2 
o|inlining procedure: k6418 
o|inlining procedure: k6418 
o|contracted procedure: "(batch-driver.scm:805) chicken.compiler.batch-driver#print-program-statistics" 
o|propagated global variable: out748751 ##sys#standard-output 
o|substituted constant variable: a4093 
o|substituted constant variable: a4094 
o|propagated global variable: out757760 ##sys#standard-output 
o|substituted constant variable: a4111 
o|substituted constant variable: a4112 
o|propagated global variable: out764767 ##sys#standard-output 
o|substituted constant variable: a4123 
o|substituted constant variable: a4124 
o|propagated global variable: out771774 ##sys#standard-output 
o|substituted constant variable: a4135 
o|substituted constant variable: a4136 
o|propagated global variable: out778781 ##sys#standard-output 
o|substituted constant variable: a4147 
o|substituted constant variable: a4148 
o|propagated global variable: out785788 ##sys#standard-output 
o|substituted constant variable: a4159 
o|substituted constant variable: a4160 
o|inlining procedure: k4086 
o|propagated global variable: out785788 ##sys#standard-output 
o|propagated global variable: out778781 ##sys#standard-output 
o|propagated global variable: out771774 ##sys#standard-output 
o|propagated global variable: out764767 ##sys#standard-output 
o|propagated global variable: out757760 ##sys#standard-output 
o|propagated global variable: out748751 ##sys#standard-output 
o|inlining procedure: k4086 
o|inlining procedure: k6458 
o|consed rest parameter at call site: "(batch-driver.scm:798) dribble1141" 2 
o|inlining procedure: k6458 
o|inlining procedure: k6467 
o|propagated global variable: r64688494 chicken.compiler.core#types-output-file 
o|inlining procedure: k6467 
o|consed rest parameter at call site: "(batch-driver.scm:785) analyze1152" 3 
o|contracted procedure: "(batch-driver.scm:771) chicken.compiler.batch-driver#first" 
o|inlining procedure: k6579 
o|inlining procedure: k6579 
o|consed rest parameter at call site: "(batch-driver.scm:752) analyze1152" 3 
o|inlining procedure: k6589 
o|contracted procedure: "(batch-driver.scm:744) g20892096" 
o|inlining procedure: k6589 
o|inlining procedure: k6612 
o|contracted procedure: "(batch-driver.scm:739) g20682075" 
o|inlining procedure: k6519 
o|inlining procedure: k6519 
o|inlining procedure: k6612 
o|substituted constant variable: a6632 
o|inlining procedure: k6634 
o|inlining procedure: k6634 
o|consed rest parameter at call site: "(batch-driver.scm:728) dribble1141" 2 
o|inlining procedure: k6664 
o|inlining procedure: k6664 
o|inlining procedure: k6689 
o|consed rest parameter at call site: "(batch-driver.scm:720) dribble1141" 2 
o|inlining procedure: k6689 
o|propagated global variable: extensions2019 chicken.compiler.core#required-extensions 
o|inlining procedure: k6711 
o|inlining procedure: k6711 
o|inlining procedure: k6761 
o|inlining procedure: k6761 
o|consed rest parameter at call site: "(batch-driver.scm:700) dribble1141" 2 
o|substituted constant variable: a6792 
o|inlining procedure: k6856 
o|contracted procedure: "(batch-driver.scm:681) g19621969" 
o|propagated global variable: out19721975 ##sys#standard-output 
o|substituted constant variable: a6824 
o|substituted constant variable: a6825 
o|propagated global variable: out19721975 ##sys#standard-output 
o|inlining procedure: k6856 
o|propagated global variable: g19681970 chicken.compiler.compiler-syntax#compiler-syntax-statistics 
o|inlining procedure: k6908 
o|contracted procedure: "(batch-driver.scm:673) g19401949" 
o|inlining procedure: k6908 
o|propagated global variable: g19461950 chicken.compiler.core#import-libraries 
o|inlining procedure: k6980 
o|inlining procedure: k6980 
o|inlining procedure: k6999 
o|contracted procedure: "(batch-driver.scm:655) g19031912" 
o|inlining procedure: k6999 
o|propagated global variable: g19091913 chicken.compiler.core#immutable-constants 
o|inlining procedure: k7033 
o|contracted procedure: "(batch-driver.scm:651) g18721881" 
o|inlining procedure: k7033 
o|inlining procedure: k7067 
o|inlining procedure: k7067 
o|inlining procedure: k7123 
o|inlining procedure: k7123 
o|inlining procedure: k7170 
o|inlining procedure: k7170 
o|consed rest parameter at call site: "(batch-driver.scm:635) dribble1141" 2 
o|consed rest parameter at call site: "(batch-driver.scm:611) dribble1141" 2 
o|inlining procedure: k7214 
o|inlining procedure: k7251 
o|inlining procedure: k7251 
o|inlining procedure: k7285 
o|inlining procedure: k7285 
o|inlining procedure: k7214 
o|inlining procedure: k7347 
o|inlining procedure: k7347 
o|inlining procedure: "(batch-driver.scm:598) cputime1140" 
o|consed rest parameter at call site: "(batch-driver.scm:593) dribble1141" 2 
o|substituted constant variable: a7380 
o|inlining procedure: k7382 
o|substituted constant variable: a7385 
o|inlining procedure: k7382 
o|substituted constant variable: a7390 
o|consed rest parameter at call site: "(batch-driver.scm:572) dribble1141" 2 
o|inlining procedure: k7408 
o|consed rest parameter at call site: "(batch-driver.scm:572) dribble1141" 2 
o|inlining procedure: k7408 
o|consed rest parameter at call site: "(batch-driver.scm:572) dribble1141" 2 
o|inlining procedure: k7412 
o|inlining procedure: k7412 
o|consed rest parameter at call site: "(batch-driver.scm:554) dribble1141" 2 
o|inlining procedure: k7429 
o|consed rest parameter at call site: "(batch-driver.scm:554) dribble1141" 2 
o|inlining procedure: k7429 
o|consed rest parameter at call site: "(batch-driver.scm:554) dribble1141" 2 
o|substituted constant variable: a7432 
o|substituted constant variable: a7444 
o|substituted constant variable: a7460 
o|inlining procedure: k7488 
o|inlining procedure: k7488 
o|contracted procedure: "(batch-driver.scm:528) chicken.compiler.batch-driver#lset-union/eq?" 
o|propagated global variable: ls572 chicken.compiler.core#linked-libraries 
o|inlining procedure: k3765 
o|contracted procedure: "(mini-srfi-1.scm:171) g578583" 
o|inlining procedure: k3738 
o|contracted procedure: "(mini-srfi-1.scm:173) g590595" 
o|inlining procedure: k3714 
o|inlining procedure: k3714 
o|inlining procedure: k3738 
o|inlining procedure: k3765 
o|inlining procedure: k7534 
o|inlining procedure: k7534 
o|consed rest parameter at call site: "(batch-driver.scm:525) chicken.compiler.batch-driver#append-map" 3 
o|inlining procedure: k7603 
o|inlining procedure: k7603 
o|consed rest parameter at call site: "(batch-driver.scm:517) chicken.compiler.batch-driver#append-map" 3 
o|inlining procedure: k7641 
o|contracted procedure: "(batch-driver.scm:506) g15511558" 
o|inlining procedure: k5788 
o|inlining procedure: k5788 
o|inlining procedure: k7641 
o|consed rest parameter at call site: "(batch-driver.scm:505) dribble1141" 2 
o|inlining procedure: k7664 
o|inlining procedure: k7664 
o|propagated global variable: g15401541 chicken.string#string-split 
o|consed rest parameter at call site: "(batch-driver.scm:500) chicken.compiler.batch-driver#append-map" 3 
o|inlining procedure: k7697 
o|inlining procedure: k7697 
o|propagated global variable: g15251526 chicken.string#string-split 
o|consed rest parameter at call site: "(batch-driver.scm:497) chicken.compiler.batch-driver#append-map" 3 
o|substituted constant variable: a7733 
o|inlining procedure: k7766 
o|contracted procedure: "(batch-driver.scm:487) g15001507" 
o|inlining procedure: k7766 
o|propagated global variable: g15061508 chicken.compiler.core#default-extended-bindings 
o|inlining procedure: k7789 
o|contracted procedure: "(batch-driver.scm:482) g14811488" 
o|inlining procedure: k7789 
o|propagated global variable: g14871489 chicken.compiler.core#default-standard-bindings 
o|substituted constant variable: a7809 
o|substituted constant variable: a7812 
o|substituted constant variable: a7815 
o|substituted constant variable: a7818 
o|substituted constant variable: a7821 
o|inlining procedure: k7830 
o|inlining procedure: k7830 
o|inlining procedure: k7851 
o|inlining procedure: k7851 
o|substituted constant variable: a7882 
o|consed rest parameter at call site: "(batch-driver.scm:461) dribble1141" 2 
o|substituted constant variable: a7896 
o|consed rest parameter at call site: "(batch-driver.scm:458) dribble1141" 2 
o|substituted constant variable: a7910 
o|inlining procedure: k7907 
o|inlining procedure: k7907 
o|substituted constant variable: a7918 
o|substituted constant variable: a7926 
o|inlining procedure: k7923 
o|inlining procedure: k7923 
o|substituted constant variable: a7934 
o|consed rest parameter at call site: "(batch-driver.scm:447) dribble1141" 2 
o|inlining procedure: k7952 
o|inlining procedure: k7952 
o|inlining procedure: k7965 
o|inlining procedure: k7965 
o|substituted constant variable: a7985 
o|substituted constant variable: a7988 
o|substituted constant variable: a7991 
o|substituted constant variable: a7994 
o|substituted constant variable: a7997 
o|substituted constant variable: a8000 
o|substituted constant variable: a8003 
o|substituted constant variable: a8006 
o|substituted constant variable: a8009 
o|substituted constant variable: a8012 
o|consed rest parameter at call site: "(batch-driver.scm:410) dribble1141" 2 
o|substituted constant variable: a8019 
o|substituted constant variable: a8022 
o|substituted constant variable: a8025 
o|substituted constant variable: a8029 
o|substituted constant variable: a8033 
o|substituted constant variable: a8037 
o|substituted constant variable: a8040 
o|substituted constant variable: a8043 
o|substituted constant variable: a8046 
o|substituted constant variable: a8067 
o|inlining procedure: k8063 
o|inlining procedure: k8063 
o|inlining procedure: k8075 
o|contracted procedure: "(batch-driver.scm:374) g13911400" 
o|substituted constant variable: a5610 
o|inlining procedure: k8075 
o|inlining procedure: k8139 
o|contracted procedure: "(batch-driver.scm:366) g13631372" 
o|inlining procedure: k8139 
o|consed rest parameter at call site: "(batch-driver.scm:364) chicken.compiler.batch-driver#append-map" 3 
o|substituted constant variable: a8174 
o|propagated global variable: tmp13501352 chicken.compiler.core#unit-name 
o|inlining procedure: k8180 
o|propagated global variable: tmp13501352 chicken.compiler.core#unit-name 
o|inlining procedure: k8180 
o|substituted constant variable: a8195 
o|substituted constant variable: a8200 
o|inlining procedure: k8202 
o|inlining procedure: k8202 
o|substituted constant variable: a8205 
o|inlining procedure: k8223 
o|inlining procedure: k8223 
o|substituted constant variable: a8238 
o|inlining procedure: k8235 
o|inlining procedure: k8235 
o|inlining procedure: k8244 
o|inlining procedure: k8244 
o|inlining procedure: k8255 
o|inlining procedure: k8255 
o|inlining procedure: k8282 
o|inlining procedure: k8282 
o|inlining procedure: k8288 
o|inlining procedure: k8300 
o|inlining procedure: k8300 
o|inlining procedure: k8288 
o|substituted constant variable: a8322 
o|substituted constant variable: a8328 
o|substituted constant variable: a8331 
o|replaced variables: 1113 
o|removed binding forms: 557 
o|substituted constant variable: r30118336 
o|substituted constant variable: r30518338 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#every 
o|substituted constant variable: r32068346 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#filter 
o|removed side-effect free assignment to unused variable: chicken.compiler.batch-driver#list-tabulate 
o|propagated global variable: out10461049 ##sys#standard-output 
o|inlining procedure: k4315 
o|propagated global variable: out10201023 ##sys#standard-output 
o|propagated global variable: out10271030 ##sys#standard-output 
o|propagated global variable: out10091012 ##sys#standard-output 
o|propagated global variable: out10031006 ##sys#standard-output 
o|propagated global variable: out9971000 ##sys#standard-output 
o|propagated global variable: out942945 ##sys#standard-output 
o|propagated global variable: out987990 ##sys#standard-output 
o|removed side-effect free assignment to unused variable: cputime1140 
o|propagated global variable: out11871190 ##sys#standard-output 
o|substituted constant variable: r50718422 
o|substituted constant variable: r50718423 
o|propagated global variable: out12041207 ##sys#standard-output 
o|substituted constant variable: r54098443 
o|propagated global variable: out12871290 ##sys#standard-output 
o|propagated global variable: out748751 ##sys#standard-output 
o|propagated global variable: out757760 ##sys#standard-output 
o|propagated global variable: out764767 ##sys#standard-output 
o|propagated global variable: out771774 ##sys#standard-output 
o|propagated global variable: out778781 ##sys#standard-output 
o|propagated global variable: out785788 ##sys#standard-output 
o|substituted constant variable: r64598493 
o|substituted constant variable: r64688495 
o|substituted constant variable: r66908513 
o|propagated global variable: extensions2019 chicken.compiler.core#required-extensions 
o|propagated global variable: out19721975 ##sys#standard-output 
o|inlining procedure: k6980 
o|substituted constant variable: r69818524 
o|substituted constant variable: r69818524 
o|substituted constant variable: r74098550 
o|substituted constant variable: r74098550 
o|substituted constant variable: r74098552 
o|substituted constant variable: r74098552 
o|substituted constant variable: r74138554 
o|substituted constant variable: r74138554 
o|substituted constant variable: r74138556 
o|substituted constant variable: r74138556 
o|substituted constant variable: r74308558 
o|substituted constant variable: r74308558 
o|substituted constant variable: r74308560 
o|substituted constant variable: r74308560 
o|contracted procedure: "(batch-driver.scm:534) string->extension-name1147" 
o|substituted constant variable: r52008434 
o|propagated global variable: ls572 chicken.compiler.core#linked-libraries 
o|contracted procedure: "(batch-driver.scm:512) chicken.compiler.batch-driver#delete" 
o|propagated global variable: lst412 ##sys#features 
o|substituted constant variable: r78318596 
o|substituted constant variable: r80648613 
o|propagated global variable: r81818619 chicken.compiler.core#unit-name 
o|substituted constant variable: r82368627 
o|substituted constant variable: r82458631 
o|substituted constant variable: r82458631 
o|substituted constant variable: r82568633 
o|substituted constant variable: r82568633 
o|substituted constant variable: r82838637 
o|substituted constant variable: r82838637 
o|substituted constant variable: r82838639 
o|substituted constant variable: r82838639 
o|substituted constant variable: r83018643 
o|substituted constant variable: r82898644 
o|converted assignments to bindings: (option-arg1069) 
o|simplifications: ((let . 1)) 
o|replaced variables: 113 
o|removed binding forms: 1080 
o|removed conditional forms: 1 
o|inlining procedure: k4501 
o|inlining procedure: k4501 
o|inlining procedure: k4501 
o|inlining procedure: k4501 
o|inlining procedure: k4501 
o|inlining procedure: k4501 
o|inlining procedure: k4501 
o|inlining procedure: k4501 
o|inlining procedure: k4501 
o|inlining procedure: k6290 
o|inlining procedure: k6336 
o|inlining procedure: k6618 
o|inlining procedure: k6973 
o|inlining procedure: k6973 
o|contracted procedure: k6980 
o|inlining procedure: k7415 
o|contracted procedure: "(batch-driver.scm:534) g16361645" 
o|inlining procedure: k3752 
o|substituted constant variable: x411 
o|inlining procedure: k7824 
o|inlining procedure: k7824 
o|contracted procedure: "(batch-driver.scm:467) chop-separator1153" 
o|replaced variables: 8 
o|removed binding forms: 151 
o|substituted constant variable: r63378839 
o|substituted constant variable: r69748863 
o|substituted constant variable: r6981 
o|substituted constant variable: r74168882 
o|substituted constant variable: r78258909 
o|contracted procedure: k7824 
o|inlining procedure: k5556 
o|inlining procedure: k5556 
o|replaced variables: 21 
o|removed binding forms: 20 
o|removed conditional forms: 3 
o|substituted constant variable: r7825 
o|inlining procedure: k7872 
o|substituted constant variable: r55579003 
o|inlining procedure: k7872 
o|simplifications: ((if . 1) (let . 1)) 
o|removed binding forms: 13 
o|removed conditional forms: 2 
o|simplifications: ((let . 1)) 
o|replaced variables: 4 
o|removed binding forms: 2 
o|removed binding forms: 3 
o|simplifications: ((if . 13) (let . 20) (##core#call . 411)) 
o|  call simplifications:
o|    scheme#string->list
o|    scheme#string
o|    scheme#=
o|    scheme#char-whitespace?	2
o|    ##sys#apply
o|    scheme#list
o|    scheme#eof-object?
o|    ##sys#cons	10
o|    ##sys#list	12
o|    scheme#string?
o|    scheme#>
o|    ##sys#call-with-values	4
o|    scheme#-	2
o|    scheme#cddr
o|    scheme#string-length	4
o|    chicken.fixnum#fx<
o|    scheme#string-ref	4
o|    scheme#*	2
o|    scheme#cadr	2
o|    scheme#symbol?	2
o|    scheme#memq	14
o|    scheme#cdar	7
o|    scheme#caar	3
o|    scheme#assq
o|    scheme#length	3
o|    scheme#eq?	57
o|    scheme#not	14
o|    scheme#null?	11
o|    scheme#car	10
o|    scheme#apply	2
o|    scheme#cdr	4
o|    scheme#cons	49
o|    ##sys#setslot	18
o|    ##sys#check-list	31
o|    scheme#pair?	42
o|    ##sys#slot	91
o|contracted procedure: k2998 
o|contracted procedure: k3001 
o|contracted procedure: k3013 
o|contracted procedure: k3029 
o|contracted procedure: k3037 
o|contracted procedure: k3044 
o|contracted procedure: k3068 
o|contracted procedure: k3085 
o|contracted procedure: k3107 
o|contracted procedure: k3103 
o|contracted procedure: k3088 
o|contracted procedure: k3091 
o|contracted procedure: k3099 
o|contracted procedure: k3114 
o|contracted procedure: k3122 
o|contracted procedure: k3134 
o|contracted procedure: k3156 
o|contracted procedure: k3152 
o|contracted procedure: k3137 
o|contracted procedure: k3140 
o|contracted procedure: k3148 
o|contracted procedure: k3208 
o|contracted procedure: k3223 
o|contracted procedure: k4182 
o|contracted procedure: k4193 
o|contracted procedure: k4204 
o|contracted procedure: k4216 
o|contracted procedure: k4226 
o|contracted procedure: k4230 
o|propagated global variable: g844846 chicken.compiler.core#internal-bindings 
o|contracted procedure: k4239 
o|contracted procedure: k4249 
o|contracted procedure: k4253 
o|propagated global variable: g826828 chicken.compiler.core#extended-bindings 
o|contracted procedure: k4262 
o|contracted procedure: k4272 
o|contracted procedure: k4276 
o|propagated global variable: g808810 chicken.compiler.core#standard-bindings 
o|contracted procedure: k4294 
o|contracted procedure: k4321 
o|contracted procedure: k4347 
o|contracted procedure: k4359 
o|contracted procedure: k4369 
o|contracted procedure: k4373 
o|contracted procedure: k4336 
o|contracted procedure: k4389 
o|contracted procedure: k4416 
o|contracted procedure: k4431 
o|contracted procedure: k4438 
o|contracted procedure: k4441 
o|contracted procedure: k4454 
o|contracted procedure: k4457 
o|contracted procedure: k4470 
o|contracted procedure: k4473 
o|contracted procedure: k4486 
o|contracted procedure: k4495 
o|contracted procedure: k4498 
o|contracted procedure: k4509 
o|contracted procedure: k4533 
o|contracted procedure: k4529 
o|contracted procedure: k4525 
o|contracted procedure: k4539 
o|contracted procedure: k4546 
o|contracted procedure: k4552 
o|contracted procedure: k4556 
o|contracted procedure: k4562 
o|contracted procedure: k4568 
o|contracted procedure: k4572 
o|contracted procedure: k4578 
o|contracted procedure: k4582 
o|contracted procedure: k4588 
o|contracted procedure: k4610 
o|contracted procedure: k4614 
o|contracted procedure: k4620 
o|contracted procedure: k4624 
o|contracted procedure: k4630 
o|contracted procedure: k4634 
o|contracted procedure: k4640 
o|contracted procedure: k4644 
o|contracted procedure: k4658 
o|contracted procedure: k4664 
o|contracted procedure: k4670 
o|contracted procedure: k4676 
o|contracted procedure: k4682 
o|contracted procedure: k4688 
o|contracted procedure: k4694 
o|contracted procedure: k4700 
o|contracted procedure: k4706 
o|contracted procedure: k4712 
o|contracted procedure: k4718 
o|contracted procedure: k4724 
o|contracted procedure: k4769 
o|contracted procedure: k4775 
o|contracted procedure: k4781 
o|contracted procedure: k4787 
o|contracted procedure: k4793 
o|contracted procedure: k4799 
o|contracted procedure: k4805 
o|contracted procedure: k4811 
o|contracted procedure: k4817 
o|contracted procedure: k4823 
o|contracted procedure: k4829 
o|contracted procedure: k4835 
o|contracted procedure: k4841 
o|contracted procedure: k4847 
o|contracted procedure: k4853 
o|contracted procedure: k4859 
o|contracted procedure: k4865 
o|contracted procedure: k4871 
o|contracted procedure: k4877 
o|contracted procedure: k4883 
o|contracted procedure: k4889 
o|contracted procedure: k4978 
o|contracted procedure: k4957 
o|contracted procedure: k4965 
o|contracted procedure: k4971 
o|contracted procedure: k8266 
o|contracted procedure: k5003 
o|contracted procedure: k5027 
o|contracted procedure: k5040 
o|contracted procedure: k5073 
o|contracted procedure: k5157 
o|contracted procedure: k5169 
o|contracted procedure: k5179 
o|contracted procedure: k5183 
o|contracted procedure: k5314 
o|contracted procedure: k5328 
o|contracted procedure: k5334 
o|contracted procedure: k5340 
o|contracted procedure: k5343 
o|inlining procedure: k5319 
o|contracted procedure: k5360 
o|contracted procedure: k5363 
o|inlining procedure: k5319 
o|contracted procedure: k5405 
o|contracted procedure: k5425 
o|contracted procedure: k5474 
o|contracted procedure: k5520 
o|contracted procedure: k5526 
o|contracted procedure: k5533 
o|contracted procedure: k5539 
o|contracted procedure: k5589 
o|contracted procedure: k5593 
o|contracted procedure: k5614 
o|contracted procedure: k5758 
o|contracted procedure: k5767 
o|contracted procedure: k5774 
o|contracted procedure: k5800 
o|contracted procedure: k5811 
o|contracted procedure: k5847 
o|contracted procedure: k5912 
o|contracted procedure: k5977 
o|contracted procedure: k5980 
o|contracted procedure: k5986 
o|contracted procedure: k6016 
o|contracted procedure: k6022 
o|contracted procedure: k6037 
o|contracted procedure: k6177 
o|inlining procedure: "(batch-driver.scm:899) dribble1141" 
o|contracted procedure: k6299 
o|inlining procedure: "(batch-driver.scm:899) dribble1141" 
o|inlining procedure: "(batch-driver.scm:889) dribble1141" 
o|inlining procedure: "(batch-driver.scm:881) dribble1141" 
o|contracted procedure: k6346 
o|contracted procedure: k6336 
o|contracted procedure: k6353 
o|contracted procedure: k6363 
o|contracted procedure: k6366 
o|contracted procedure: k6378 
o|contracted procedure: k6381 
o|contracted procedure: k6384 
o|contracted procedure: k6392 
o|contracted procedure: k6400 
o|propagated global variable: g21802184 chicken.compiler.core#foreign-lambda-stubs 
o|inlining procedure: "(batch-driver.scm:856) dribble1141" 
o|contracted procedure: k6424 
o|contracted procedure: k6437 
o|inlining procedure: "(batch-driver.scm:798) dribble1141" 
o|contracted procedure: k6470 
o|contracted procedure: k6473 
o|contracted procedure: k6479 
o|contracted procedure: k6485 
o|contracted procedure: k6491 
o|contracted procedure: k6501 
o|contracted procedure: k6508 
o|contracted procedure: k6528 
o|contracted procedure: k6547 
o|contracted procedure: k6592 
o|contracted procedure: k6602 
o|contracted procedure: k6606 
o|contracted procedure: k6615 
o|contracted procedure: k6625 
o|contracted procedure: k6629 
o|contracted procedure: k66258849 
o|contracted procedure: k6643 
o|inlining procedure: "(batch-driver.scm:728) dribble1141" 
o|contracted procedure: k6655 
o|contracted procedure: k6667 
o|contracted procedure: k6677 
o|contracted procedure: k6681 
o|inlining procedure: "(batch-driver.scm:720) dribble1141" 
o|contracted procedure: k6702 
o|contracted procedure: k6714 
o|contracted procedure: k6724 
o|contracted procedure: k6728 
o|propagated global variable: extensions2019 chicken.compiler.core#required-extensions 
o|contracted procedure: k6746 
o|contracted procedure: k6749 
o|contracted procedure: k6764 
o|contracted procedure: k6767 
o|contracted procedure: k6770 
o|contracted procedure: k6778 
o|contracted procedure: k6786 
o|inlining procedure: "(batch-driver.scm:700) dribble1141" 
o|contracted procedure: k6809 
o|contracted procedure: k6847 
o|contracted procedure: k6859 
o|contracted procedure: k6869 
o|contracted procedure: k6873 
o|contracted procedure: k6844 
o|propagated global variable: g19681970 chicken.compiler.compiler-syntax#compiler-syntax-statistics 
o|contracted procedure: k6876 
o|contracted procedure: k6887 
o|contracted procedure: k6899 
o|contracted procedure: k6911 
o|contracted procedure: k6914 
o|contracted procedure: k6917 
o|contracted procedure: k6925 
o|contracted procedure: k6933 
o|contracted procedure: k6896 
o|propagated global variable: g19461950 chicken.compiler.core#import-libraries 
o|contracted procedure: k6940 
o|contracted procedure: k6958 
o|contracted procedure: k6983 
o|contracted procedure: k6993 
o|contracted procedure: k7002 
o|contracted procedure: k7024 
o|contracted procedure: k6949 
o|contracted procedure: k6953 
o|contracted procedure: k7020 
o|contracted procedure: k7005 
o|contracted procedure: k7008 
o|contracted procedure: k7016 
o|propagated global variable: g19091913 chicken.compiler.core#immutable-constants 
o|contracted procedure: k7036 
o|contracted procedure: k7039 
o|contracted procedure: k7042 
o|contracted procedure: k7050 
o|contracted procedure: k7058 
o|contracted procedure: k6031 
o|contracted procedure: k7070 
o|contracted procedure: k7073 
o|contracted procedure: k7076 
o|contracted procedure: k7084 
o|contracted procedure: k7092 
o|contracted procedure: k7098 
o|contracted procedure: k7117 
o|contracted procedure: k7109 
o|contracted procedure: k7105 
o|contracted procedure: k7126 
o|contracted procedure: k7129 
o|contracted procedure: k7132 
o|contracted procedure: k7140 
o|contracted procedure: k7148 
o|contracted procedure: k7158 
o|contracted procedure: k7161 
o|contracted procedure: k7173 
o|contracted procedure: k7176 
o|contracted procedure: k7179 
o|contracted procedure: k7187 
o|contracted procedure: k7195 
o|inlining procedure: "(batch-driver.scm:635) dribble1141" 
o|inlining procedure: "(batch-driver.scm:611) dribble1141" 
o|contracted procedure: k7217 
o|contracted procedure: k7225 
o|contracted procedure: k7228 
o|contracted procedure: k7239 
o|contracted procedure: k7242 
o|contracted procedure: k7254 
o|contracted procedure: k7257 
o|contracted procedure: k7260 
o|contracted procedure: k7268 
o|contracted procedure: k7276 
o|contracted procedure: k7288 
o|contracted procedure: k7291 
o|contracted procedure: k7294 
o|contracted procedure: k7302 
o|contracted procedure: k7310 
o|contracted procedure: k7316 
o|contracted procedure: k7350 
o|contracted procedure: k7357 
o|contracted procedure: k7373 
o|inlining procedure: "(batch-driver.scm:593) dribble1141" 
o|contracted procedure: k7425 
o|contracted procedure: k7392 
o|inlining procedure: "(batch-driver.scm:572) dribble1141" 
o|inlining procedure: "(batch-driver.scm:572) dribble1141" 
o|contracted procedure: k7415 
o|inlining procedure: "(batch-driver.scm:554) dribble1141" 
o|inlining procedure: "(batch-driver.scm:554) dribble1141" 
o|contracted procedure: k7437 
o|contracted procedure: k7464 
o|contracted procedure: k7479 
o|contracted procedure: k7491 
o|contracted procedure: k7513 
o|contracted procedure: k7509 
o|contracted procedure: k7494 
o|contracted procedure: k7497 
o|contracted procedure: k7505 
o|contracted procedure: k5304 
o|contracted procedure: k5249 
o|contracted procedure: k5193 
o|contracted procedure: k5202 
o|contracted procedure: k5237 
o|contracted procedure: k5208 
o|contracted procedure: k5231 
o|contracted procedure: k5219 
o|contracted procedure: k3768 
o|contracted procedure: k3775 
o|contracted procedure: k3783 
o|contracted procedure: k3729 
o|contracted procedure: k3741 
o|contracted procedure: k3748 
o|contracted procedure: k3756 
o|contracted procedure: k3752 
o|contracted procedure: k7522 
o|contracted procedure: k7537 
o|contracted procedure: k7540 
o|contracted procedure: k7543 
o|contracted procedure: k7551 
o|contracted procedure: k7559 
o|contracted procedure: k7569 
o|contracted procedure: k7585 
o|contracted procedure: k7581 
o|contracted procedure: k7577 
o|contracted procedure: k7591 
o|contracted procedure: k7606 
o|contracted procedure: k7609 
o|contracted procedure: k7612 
o|contracted procedure: k7620 
o|contracted procedure: k7628 
o|contracted procedure: k3294 
o|contracted procedure: k3320 
o|contracted procedure: k3300 
o|contracted procedure: k7644 
o|contracted procedure: k7654 
o|contracted procedure: k7658 
o|contracted procedure: k5794 
o|inlining procedure: "(batch-driver.scm:505) dribble1141" 
o|contracted procedure: k7667 
o|contracted procedure: k7677 
o|contracted procedure: k7681 
o|contracted procedure: k7700 
o|contracted procedure: k7710 
o|contracted procedure: k7714 
o|contracted procedure: k7727 
o|contracted procedure: k7743 
o|contracted procedure: k7757 
o|contracted procedure: k7769 
o|contracted procedure: k7779 
o|contracted procedure: k7783 
o|propagated global variable: g15061508 chicken.compiler.core#default-extended-bindings 
o|contracted procedure: k7792 
o|contracted procedure: k7802 
o|contracted procedure: k7806 
o|propagated global variable: g14871489 chicken.compiler.core#default-standard-bindings 
o|contracted procedure: k7836 
o|contracted procedure: k7842 
o|contracted procedure: k7854 
o|contracted procedure: k7860 
o|contracted procedure: k7868 
o|contracted procedure: k7876 
o|contracted procedure: k5550 
o|contracted procedure: k5565 
o|inlining procedure: "(batch-driver.scm:461) dribble1141" 
o|inlining procedure: "(batch-driver.scm:458) dribble1141" 
o|inlining procedure: "(batch-driver.scm:447) dribble1141" 
o|inlining procedure: "(batch-driver.scm:410) dribble1141" 
o|contracted procedure: k8052 
o|contracted procedure: k8056 
o|contracted procedure: k8063 
o|contracted procedure: k8078 
o|contracted procedure: k8100 
o|contracted procedure: k8096 
o|contracted procedure: k8081 
o|contracted procedure: k8084 
o|contracted procedure: k8092 
o|contracted procedure: k8106 
o|contracted procedure: k8118 
o|contracted procedure: k8142 
o|contracted procedure: k8145 
o|contracted procedure: k8148 
o|contracted procedure: k8156 
o|contracted procedure: k8164 
o|contracted procedure: k8127 
o|contracted procedure: k8226 
o|contracted procedure: k8251 
o|contracted procedure: k8262 
o|contracted procedure: k8255 
o|contracted procedure: k8274 
o|contracted procedure: k8291 
o|contracted procedure: k8297 
o|contracted procedure: k8303 
o|contracted procedure: k8306 
o|contracted procedure: k8319 
o|simplifications: ((if . 2) (let . 148)) 
o|removed binding forms: 372 
o|contracted procedure: k4376 
o|contracted procedure: k4403 
o|removed side-effect free assignment to unused variable: dribble1141 
o|substituted constant variable: fstr11829490 
o|substituted constant variable: args11839491 
o|substituted constant variable: fstr11829496 
o|substituted constant variable: args11839497 
o|substituted constant variable: fstr11829502 
o|substituted constant variable: fstr11829508 
o|substituted constant variable: fstr11829516 
o|substituted constant variable: fstr11829522 
o|contracted procedure: "(batch-driver.scm:726) g20452052" 
o|substituted constant variable: fstr11829534 
o|contracted procedure: "(batch-driver.scm:716) g20232030" 
o|substituted constant variable: fstr11829542 
o|substituted constant variable: fstr11829552 
o|substituted constant variable: args11839553 
o|substituted constant variable: fstr11829572 
o|substituted constant variable: args11839573 
o|substituted constant variable: fstr11829578 
o|substituted constant variable: args11839579 
o|substituted constant variable: fstr11829592 
o|substituted constant variable: fstr11829598 
o|substituted constant variable: fstr11829604 
o|substituted constant variable: fstr11829610 
o|substituted constant variable: fstr11829616 
o|substituted constant variable: fstr11829638 
o|substituted constant variable: args11839639 
o|substituted constant variable: fstr11829654 
o|substituted constant variable: args11839655 
o|substituted constant variable: fstr11829660 
o|substituted constant variable: args11839661 
o|substituted constant variable: fstr11829666 
o|substituted constant variable: args11839667 
o|substituted constant variable: fstr11829672 
o|substituted constant variable: args11839673 
o|replaced variables: 21 
o|removed binding forms: 4 
o|replaced variables: 3 
o|removed binding forms: 54 
o|inlining procedure: k6717 
o|removed binding forms: 2 
o|removed binding forms: 1 
x|eliminated type checks:
x|  C_i_check_list_2:	1
o|customizable procedures: (k4990 k4993 k8278 k8285 k5006 g11041105 k5022 k5569 k5572 map-loop13571375 map-loop13851403 k5620 k5623 k5629 k5632 k5635 k5638 k5641 k5644 k5647 k5650 k5653 k5656 k5659 k5662 k5665 k5668 k5671 k5674 k5677 k5680 k5683 k5686 k5691 k5696 k5701 k5706 k5711 k7857 map-loop14521469 k5734 k5737 k5740 k5743 k5746 for-each-loop14801492 for-each-loop14991511 for-each-loop11561527 for-each-loop11661542 for-each-loop15501563 loop414 map-loop15731590 k5821 chicken.compiler.batch-driver#append-map map-loop16041621 foldl592600 foldl580606 loop1236 map-loop16301651 k5835 arg-val1148 k5860 k5888 loop1754 doloop16891690 map-loop16941711 map-loop17201737 map-loop17691786 k5968 map-loop17971814 k6013 g18301839 map-loop18241856 map-loop18661887 map-loop18971918 k6965 map-loop19341952 for-each-loop19611981 print-expr1145 map-loop19902007 chicken.compiler.batch-driver#initialize-analysis-database for-each-loop20222036 for-each-loop20442056 collect-options1149 for-each-loop20672081 for-each-loop20882099 k6093 k6455 map-loop21682185 print-db1144 print-node1143 analyze1152 begin-time1150 end-time1151 loop2120 def-no13031342 def-contf13041340 body13011310 g12821283 option-arg1069 loop1274 for-each-loop12181230 chicken.compiler.batch-driver#display-analysis-database print-header1142 k4282 k4512 k4591 loop868 for-each-loop10351052 for-each-loop801812 for-each-loop819830 for-each-loop837848 loop388 chicken.compiler.batch-driver#any map-loop319337 map-loop346364 loop315 foldr304307 g309310) 
o|shared closure containers: 65 
o|shared closure users: 131 
o|calls to known targets: 404 
o|identified direct recursive calls: f_3008 1 
o|identified direct recursive calls: f_3080 1 
o|identified direct recursive calls: f_3129 1 
o|identified direct recursive calls: f_6997 1 
o|identified direct recursive calls: f_5197 2 
o|identified direct recursive calls: f_3289 2 
o|fast box initializations: 54 
o|fast global references: 9 
o|fast global assignments: 4 
o|dropping unused closure argument: f_2993 
o|dropping unused closure argument: f_3197 
o|dropping unused closure argument: f_4952 
o|dropping unused closure argument: f_5065 
o|dropping unused closure argument: f_5312 
*/
/* end of file */
