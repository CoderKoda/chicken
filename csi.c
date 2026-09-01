/* Generated from csi.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: csi.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -no-lambda-info -output-file csi.c
   uses: r7lib expand data-structures repl posix port pathname eval internal file extras library
*/
#include "chicken.h"

#include <signal.h>

#if defined(HAVE_DIRECT_H)
# include <direct.h>
#else
# define _getcwd(buf, len)       NULL
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_r7lib_toplevel)
C_extern void C_ccall C_r7lib_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_repl_toplevel)
C_extern void C_ccall C_repl_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_extern void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_extern void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_extern void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_extern void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[404];
static double C_possibly_force_alignment;


/* from k3975 */
C_regparm static C_word stub753(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mpointer(&C_a,(void*)_getcwd(t0,t1));
return C_r;}

C_noret_decl(f9509)
static void C_ccall f9509(C_word c,C_word *av) C_noret;
C_noret_decl(f9513)
static void C_ccall f9513(C_word c,C_word *av) C_noret;
C_noret_decl(f9634)
static void C_ccall f9634(C_word c,C_word *av) C_noret;
C_noret_decl(f9660)
static void C_ccall f9660(C_word c,C_word *av) C_noret;
C_noret_decl(f9664)
static void C_ccall f9664(C_word c,C_word *av) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word *av) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word *av) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word *av) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word *av) C_noret;
C_noret_decl(f_2550)
static void C_ccall f_2550(C_word c,C_word *av) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word *av) C_noret;
C_noret_decl(f_2556)
static void C_ccall f_2556(C_word c,C_word *av) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word *av) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word *av) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word *av) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568(C_word c,C_word *av) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word *av) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word *av) C_noret;
C_noret_decl(f_3072)
static void f_3072(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(f_3147)
static void f_3147(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3161)
static void C_ccall f_3161(C_word c,C_word *av) C_noret;
C_noret_decl(f_3174)
static void C_ccall f_3174(C_word c,C_word *av) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word *av) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word *av) C_noret;
C_noret_decl(f_3873)
static void C_ccall f_3873(C_word c,C_word *av) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word *av) C_noret;
C_noret_decl(f_3881)
static void f_3881(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word *av) C_noret;
C_noret_decl(f_3890)
static void C_ccall f_3890(C_word c,C_word *av) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word *av) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921(C_word c,C_word *av) C_noret;
C_noret_decl(f_3936)
static void C_ccall f_3936(C_word c,C_word *av) C_noret;
C_noret_decl(f_3950)
static void C_ccall f_3950(C_word c,C_word *av) C_noret;
C_noret_decl(f_3963)
static void C_ccall f_3963(C_word c,C_word *av) C_noret;
C_noret_decl(f_3982)
static void f_3982(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word *av) C_noret;
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word *av) C_noret;
C_noret_decl(f_3998)
static void C_ccall f_3998(C_word c,C_word *av) C_noret;
C_noret_decl(f_4011)
static void f_4011(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word *av) C_noret;
C_noret_decl(f_4036)
static void f_4036(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4040)
static void C_ccall f_4040(C_word c,C_word *av) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word *av) C_noret;
C_noret_decl(f_4061)
static void C_ccall f_4061(C_word c,C_word *av) C_noret;
C_noret_decl(f_4064)
static void C_ccall f_4064(C_word c,C_word *av) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word *av) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word *av) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word *av) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word *av) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word *av) C_noret;
C_noret_decl(f_4093)
static void f_4093(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word *av) C_noret;
C_noret_decl(f_4106)
static void C_ccall f_4106(C_word c,C_word *av) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word *av) C_noret;
C_noret_decl(f_4142)
static void f_4142(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4152)
static void f_4152(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word *av) C_noret;
C_noret_decl(f_4197)
static void f_4197(C_word t0,C_word t1,C_word t2) C_noret;
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
C_noret_decl(f_4231)
static void C_ccall f_4231(C_word c,C_word *av) C_noret;
C_noret_decl(f_4241)
static void f_4241(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word *av) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word *av) C_noret;
C_noret_decl(f_4285)
static void C_ccall f_4285(C_word c,C_word *av) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word *av) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word *av) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word *av) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word *av) C_noret;
C_noret_decl(f_4326)
static void C_ccall f_4326(C_word c,C_word *av) C_noret;
C_noret_decl(f_4332)
static void C_ccall f_4332(C_word c,C_word *av) C_noret;
C_noret_decl(f_4352)
static C_word f_4352(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word *av) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word *av) C_noret;
C_noret_decl(f_4435)
static void C_ccall f_4435(C_word c,C_word *av) C_noret;
C_noret_decl(f_4438)
static void C_ccall f_4438(C_word c,C_word *av) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445(C_word c,C_word *av) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word *av) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word *av) C_noret;
C_noret_decl(f_4461)
static void C_ccall f_4461(C_word c,C_word *av) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word *av) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word *av) C_noret;
C_noret_decl(f_4479)
static void C_ccall f_4479(C_word c,C_word *av) C_noret;
C_noret_decl(f_4491)
static void C_ccall f_4491(C_word c,C_word *av) C_noret;
C_noret_decl(f_4494)
static void C_ccall f_4494(C_word c,C_word *av) C_noret;
C_noret_decl(f_4506)
static void C_ccall f_4506(C_word c,C_word *av) C_noret;
C_noret_decl(f_4509)
static void C_ccall f_4509(C_word c,C_word *av) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word *av) C_noret;
C_noret_decl(f_4515)
static void C_ccall f_4515(C_word c,C_word *av) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word *av) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word *av) C_noret;
C_noret_decl(f_4553)
static void f_4553(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word *av) C_noret;
C_noret_decl(f_4578)
static void C_ccall f_4578(C_word c,C_word *av) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word *av) C_noret;
C_noret_decl(f_4588)
static void f_4588(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word *av) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word *av) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word *av) C_noret;
C_noret_decl(f_4609)
static void f_4609(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4619)
static void C_ccall f_4619(C_word c,C_word *av) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word *av) C_noret;
C_noret_decl(f_4643)
static void C_ccall f_4643(C_word c,C_word *av) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word *av) C_noret;
C_noret_decl(f_4652)
static void C_ccall f_4652(C_word c,C_word *av) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word *av) C_noret;
C_noret_decl(f_4663)
static void C_ccall f_4663(C_word c,C_word *av) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word *av) C_noret;
C_noret_decl(f_4674)
static void C_ccall f_4674(C_word c,C_word *av) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word *av) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word *av) C_noret;
C_noret_decl(f_4695)
static void C_ccall f_4695(C_word c,C_word *av) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word *av) C_noret;
C_noret_decl(f_4729)
static void C_ccall f_4729(C_word c,C_word *av) C_noret;
C_noret_decl(f_4733)
static void C_ccall f_4733(C_word c,C_word *av) C_noret;
C_noret_decl(f_4749)
static void C_ccall f_4749(C_word c,C_word *av) C_noret;
C_noret_decl(f_4761)
static void C_ccall f_4761(C_word c,C_word *av) C_noret;
C_noret_decl(f_4773)
static void C_ccall f_4773(C_word c,C_word *av) C_noret;
C_noret_decl(f_4785)
static void C_ccall f_4785(C_word c,C_word *av) C_noret;
C_noret_decl(f_4792)
static void C_ccall f_4792(C_word c,C_word *av) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word *av) C_noret;
C_noret_decl(f_4814)
static void C_ccall f_4814(C_word c,C_word *av) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word *av) C_noret;
C_noret_decl(f_4820)
static void C_ccall f_4820(C_word c,C_word *av) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word *av) C_noret;
C_noret_decl(f_4855)
static void C_ccall f_4855(C_word c,C_word *av) C_noret;
C_noret_decl(f_4860)
static void f_4860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word *av) C_noret;
C_noret_decl(f_4884)
static void C_ccall f_4884(C_word c,C_word *av) C_noret;
C_noret_decl(f_4930)
static void C_ccall f_4930(C_word c,C_word *av) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word *av) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word *av) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word *av) C_noret;
C_noret_decl(f_4959)
static void C_ccall f_4959(C_word c,C_word *av) C_noret;
C_noret_decl(f_4965)
static void C_ccall f_4965(C_word c,C_word *av) C_noret;
C_noret_decl(f_4979)
static void C_ccall f_4979(C_word c,C_word *av) C_noret;
C_noret_decl(f_4982)
static void C_ccall f_4982(C_word c,C_word *av) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word *av) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word *av) C_noret;
C_noret_decl(f_4999)
static void f_4999(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5009)
static void f_5009(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5024)
static void C_ccall f_5024(C_word c,C_word *av) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word *av) C_noret;
C_noret_decl(f_5039)
static void C_ccall f_5039(C_word c,C_word *av) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word *av) C_noret;
C_noret_decl(f_5051)
static void C_ccall f_5051(C_word c,C_word *av) C_noret;
C_noret_decl(f_5057)
static void C_ccall f_5057(C_word c,C_word *av) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word *av) C_noret;
C_noret_decl(f_5067)
static void f_5067(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5084)
static void C_ccall f_5084(C_word c,C_word *av) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090(C_word c,C_word *av) C_noret;
C_noret_decl(f_5096)
static void C_ccall f_5096(C_word c,C_word *av) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word *av) C_noret;
C_noret_decl(f_5105)
static void f_5105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5115)
static void C_ccall f_5115(C_word c,C_word *av) C_noret;
C_noret_decl(f_5119)
static void C_ccall f_5119(C_word c,C_word *av) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word *av) C_noret;
C_noret_decl(f_5125)
static void C_ccall f_5125(C_word c,C_word *av) C_noret;
C_noret_decl(f_5127)
static void f_5127(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5135)
static void C_ccall f_5135(C_word c,C_word *av) C_noret;
C_noret_decl(f_5143)
static void C_ccall f_5143(C_word c,C_word *av) C_noret;
C_noret_decl(f_5146)
static void C_ccall f_5146(C_word c,C_word *av) C_noret;
C_noret_decl(f_5147)
static void f_5147(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5151)
static void C_ccall f_5151(C_word c,C_word *av) C_noret;
C_noret_decl(f_5161)
static void f_5161(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5170)
static void C_ccall f_5170(C_word c,C_word *av) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word *av) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193(C_word c,C_word *av) C_noret;
C_noret_decl(f_5196)
static void C_ccall f_5196(C_word c,C_word *av) C_noret;
C_noret_decl(f_5199)
static void C_ccall f_5199(C_word c,C_word *av) C_noret;
C_noret_decl(f_5202)
static void C_ccall f_5202(C_word c,C_word *av) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word *av) C_noret;
C_noret_decl(f_5214)
static void C_ccall f_5214(C_word c,C_word *av) C_noret;
C_noret_decl(f_5218)
static void C_ccall f_5218(C_word c,C_word *av) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word *av) C_noret;
C_noret_decl(f_5226)
static void C_ccall f_5226(C_word c,C_word *av) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word *av) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word *av) C_noret;
C_noret_decl(f_5238)
static void C_ccall f_5238(C_word c,C_word *av) C_noret;
C_noret_decl(f_5242)
static void C_ccall f_5242(C_word c,C_word *av) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word *av) C_noret;
C_noret_decl(f_5282)
static void C_ccall f_5282(C_word c,C_word *av) C_noret;
C_noret_decl(f_5284)
static void f_5284(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word *av) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word *av) C_noret;
C_noret_decl(f_5317)
static void f_5317(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5342)
static void C_ccall f_5342(C_word c,C_word *av) C_noret;
C_noret_decl(f_5362)
static C_word f_5362(C_word t0,C_word t1);
C_noret_decl(f_5397)
static C_word f_5397(C_word t0);
C_noret_decl(f_5425)
static void f_5425(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5431)
static void C_ccall f_5431(C_word c,C_word *av) C_noret;
C_noret_decl(f_5438)
static void C_ccall f_5438(C_word c,C_word *av) C_noret;
C_noret_decl(f_5443)
static void f_5443(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5466)
static void C_ccall f_5466(C_word c,C_word *av) C_noret;
C_noret_decl(f_5475)
static void f_5475(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word *av) C_noret;
C_noret_decl(f_5488)
static void C_ccall f_5488(C_word c,C_word *av) C_noret;
C_noret_decl(f_5517)
static void C_ccall f_5517(C_word c,C_word *av) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word *av) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word *av) C_noret;
C_noret_decl(f_5563)
static void C_ccall f_5563(C_word c,C_word *av) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word *av) C_noret;
C_noret_decl(f_5641)
static void C_ccall f_5641(C_word c,C_word *av) C_noret;
C_noret_decl(f_5644)
static void C_ccall f_5644(C_word c,C_word *av) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word *av) C_noret;
C_noret_decl(f_5738)
static void C_ccall f_5738(C_word c,C_word *av) C_noret;
C_noret_decl(f_5745)
static void C_ccall f_5745(C_word c,C_word *av) C_noret;
C_noret_decl(f_5754)
static void C_ccall f_5754(C_word c,C_word *av) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word *av) C_noret;
C_noret_decl(f_5769)
static void C_ccall f_5769(C_word c,C_word *av) C_noret;
C_noret_decl(f_5774)
static void f_5774(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5784)
static void C_ccall f_5784(C_word c,C_word *av) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word *av) C_noret;
C_noret_decl(f_5790)
static void C_ccall f_5790(C_word c,C_word *av) C_noret;
C_noret_decl(f_5799)
static void C_ccall f_5799(C_word c,C_word *av) C_noret;
C_noret_decl(f_5819)
static void C_ccall f_5819(C_word c,C_word *av) C_noret;
C_noret_decl(f_5822)
static void C_ccall f_5822(C_word c,C_word *av) C_noret;
C_noret_decl(f_5825)
static void C_ccall f_5825(C_word c,C_word *av) C_noret;
C_noret_decl(f_5837)
static void f_5837(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word *av) C_noret;
C_noret_decl(f_5849)
static void f_5849(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5880)
static void C_ccall f_5880(C_word c,C_word *av) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word *av) C_noret;
C_noret_decl(f_5948)
static void C_ccall f_5948(C_word c,C_word *av) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word *av) C_noret;
C_noret_decl(f_5991)
static void C_ccall f_5991(C_word c,C_word *av) C_noret;
C_noret_decl(f_5998)
static void C_ccall f_5998(C_word c,C_word *av) C_noret;
C_noret_decl(f_6115)
static void C_ccall f_6115(C_word c,C_word *av) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word *av) C_noret;
C_noret_decl(f_6127)
static void C_ccall f_6127(C_word c,C_word *av) C_noret;
C_noret_decl(f_6140)
static void C_ccall f_6140(C_word c,C_word *av) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word *av) C_noret;
C_noret_decl(f_6155)
static void C_ccall f_6155(C_word c,C_word *av) C_noret;
C_noret_decl(f_6166)
static void f_6166(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6174)
static void f_6174(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6195)
static void C_ccall f_6195(C_word c,C_word *av) C_noret;
C_noret_decl(f_6204)
static void f_6204(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6214)
static void C_ccall f_6214(C_word c,C_word *av) C_noret;
C_noret_decl(f_6249)
static void C_ccall f_6249(C_word c,C_word *av) C_noret;
C_noret_decl(f_6250)
static void f_6250(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6254)
static void C_ccall f_6254(C_word c,C_word *av) C_noret;
C_noret_decl(f_6263)
static void f_6263(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6273)
static void C_ccall f_6273(C_word c,C_word *av) C_noret;
C_noret_decl(f_6286)
static void C_ccall f_6286(C_word c,C_word *av) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291(C_word c,C_word *av) C_noret;
C_noret_decl(f_6318)
static void f_6318(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6328)
static void C_ccall f_6328(C_word c,C_word *av) C_noret;
C_noret_decl(f_6359)
static void f_6359(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6367)
static void C_ccall f_6367(C_word c,C_word *av) C_noret;
C_noret_decl(f_6380)
static void C_ccall f_6380(C_word c,C_word *av) C_noret;
C_noret_decl(f_6386)
static void f_6386(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6411)
static void C_ccall f_6411(C_word c,C_word *av) C_noret;
C_noret_decl(f_6424)
static void C_ccall f_6424(C_word c,C_word *av) C_noret;
C_noret_decl(f_6452)
static void C_ccall f_6452(C_word c,C_word *av) C_noret;
C_noret_decl(f_6460)
static void f_6460(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6462)
static void f_6462(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6465)
static void f_6465(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6487)
static void C_ccall f_6487(C_word c,C_word *av) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word *av) C_noret;
C_noret_decl(f_6514)
static void C_ccall f_6514(C_word c,C_word *av) C_noret;
C_noret_decl(f_6547)
static void C_ccall f_6547(C_word c,C_word *av) C_noret;
C_noret_decl(f_6575)
static void f_6575(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6580)
static void f_6580(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6615)
static void f_6615(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6618)
static void f_6618(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6622)
static void C_ccall f_6622(C_word c,C_word *av) C_noret;
C_noret_decl(f_6636)
static void C_ccall f_6636(C_word c,C_word *av) C_noret;
C_noret_decl(f_6648)
static void f_6648(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6658)
static void C_ccall f_6658(C_word c,C_word *av) C_noret;
C_noret_decl(f_6661)
static void C_ccall f_6661(C_word c,C_word *av) C_noret;
C_noret_decl(f_6664)
static void C_ccall f_6664(C_word c,C_word *av) C_noret;
C_noret_decl(f_6667)
static void C_ccall f_6667(C_word c,C_word *av) C_noret;
C_noret_decl(f_6670)
static void C_ccall f_6670(C_word c,C_word *av) C_noret;
C_noret_decl(f_6673)
static void C_ccall f_6673(C_word c,C_word *av) C_noret;
C_noret_decl(f_6682)
static void f_6682(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6695)
static void C_ccall f_6695(C_word c,C_word *av) C_noret;
C_noret_decl(f_6698)
static void C_ccall f_6698(C_word c,C_word *av) C_noret;
C_noret_decl(f_6719)
static void C_ccall f_6719(C_word c,C_word *av) C_noret;
C_noret_decl(f_6733)
static void f_6733(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6767)
static void f_6767(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6777)
static void C_ccall f_6777(C_word c,C_word *av) C_noret;
C_noret_decl(f_6787)
static void C_ccall f_6787(C_word c,C_word *av) C_noret;
C_noret_decl(f_6790)
static void C_ccall f_6790(C_word c,C_word *av) C_noret;
C_noret_decl(f_6805)
static void C_ccall f_6805(C_word c,C_word *av) C_noret;
C_noret_decl(f_6809)
static void C_ccall f_6809(C_word c,C_word *av) C_noret;
C_noret_decl(f_6816)
static void C_ccall f_6816(C_word c,C_word *av) C_noret;
C_noret_decl(f_6818)
static void f_6818(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6821)
static void f_6821(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6827)
static void C_ccall f_6827(C_word c,C_word *av) C_noret;
C_noret_decl(f_6844)
static void f_6844(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6853)
static void f_6853(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6884)
static void C_ccall f_6884(C_word c,C_word *av) C_noret;
C_noret_decl(f_6887)
static void C_ccall f_6887(C_word c,C_word *av) C_noret;
C_noret_decl(f_6890)
static void C_ccall f_6890(C_word c,C_word *av) C_noret;
C_noret_decl(f_6893)
static void C_ccall f_6893(C_word c,C_word *av) C_noret;
C_noret_decl(f_6896)
static void C_ccall f_6896(C_word c,C_word *av) C_noret;
C_noret_decl(f_6899)
static void C_ccall f_6899(C_word c,C_word *av) C_noret;
C_noret_decl(f_6902)
static void C_ccall f_6902(C_word c,C_word *av) C_noret;
C_noret_decl(f_6905)
static void C_ccall f_6905(C_word c,C_word *av) C_noret;
C_noret_decl(f_6908)
static void C_ccall f_6908(C_word c,C_word *av) C_noret;
C_noret_decl(f_6911)
static void C_ccall f_6911(C_word c,C_word *av) C_noret;
C_noret_decl(f_6914)
static void C_ccall f_6914(C_word c,C_word *av) C_noret;
C_noret_decl(f_6927)
static void f_6927(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6937)
static void C_ccall f_6937(C_word c,C_word *av) C_noret;
C_noret_decl(f_6942)
static void f_6942(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6955)
static void C_ccall f_6955(C_word c,C_word *av) C_noret;
C_noret_decl(f_6958)
static void C_ccall f_6958(C_word c,C_word *av) C_noret;
C_noret_decl(f_6961)
static void C_ccall f_6961(C_word c,C_word *av) C_noret;
C_noret_decl(f_6964)
static void C_ccall f_6964(C_word c,C_word *av) C_noret;
C_noret_decl(f_6967)
static void C_ccall f_6967(C_word c,C_word *av) C_noret;
C_noret_decl(f_7001)
static void f_7001(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7011)
static void C_ccall f_7011(C_word c,C_word *av) C_noret;
C_noret_decl(f_7045)
static void C_ccall f_7045(C_word c,C_word *av) C_noret;
C_noret_decl(f_7048)
static void C_ccall f_7048(C_word c,C_word *av) C_noret;
C_noret_decl(f_7103)
static void f_7103(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7160)
static void f_7160(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7162)
static void f_7162(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7171)
static void C_ccall f_7171(C_word c,C_word *av) C_noret;
C_noret_decl(f_7191)
static void C_ccall f_7191(C_word c,C_word *av) C_noret;
C_noret_decl(f_7194)
static void f_7194(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7198)
static void C_ccall f_7198(C_word c,C_word *av) C_noret;
C_noret_decl(f_7201)
static void C_ccall f_7201(C_word c,C_word *av) C_noret;
C_noret_decl(f_7213)
static void f_7213(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7238)
static void C_ccall f_7238(C_word c,C_word *av) C_noret;
C_noret_decl(f_7247)
static void f_7247(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7253)
static void f_7253(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7263)
static void C_ccall f_7263(C_word c,C_word *av) C_noret;
C_noret_decl(f_7275)
static void C_ccall f_7275(C_word c,C_word *av) C_noret;
C_noret_decl(f_7278)
static void C_ccall f_7278(C_word c,C_word *av) C_noret;
C_noret_decl(f_7281)
static void C_ccall f_7281(C_word c,C_word *av) C_noret;
C_noret_decl(f_7284)
static void C_ccall f_7284(C_word c,C_word *av) C_noret;
C_noret_decl(f_7287)
static void C_ccall f_7287(C_word c,C_word *av) C_noret;
C_noret_decl(f_7323)
static void C_ccall f_7323(C_word c,C_word *av) C_noret;
C_noret_decl(f_7330)
static void C_ccall f_7330(C_word c,C_word *av) C_noret;
C_noret_decl(f_7332)
static void f_7332(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7342)
static void C_ccall f_7342(C_word c,C_word *av) C_noret;
C_noret_decl(f_7385)
static void C_ccall f_7385(C_word c,C_word *av) C_noret;
C_noret_decl(f_7390)
static void f_7390(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7396)
static void f_7396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7408)
static void f_7408(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7445)
static void f_7445(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7451)
static void f_7451(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7486)
static void C_ccall f_7486(C_word c,C_word *av) C_noret;
C_noret_decl(f_7500)
static void f_7500(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7515)
static void C_ccall f_7515(C_word c,C_word *av) C_noret;
C_noret_decl(f_7536)
static void C_ccall f_7536(C_word c,C_word *av) C_noret;
C_noret_decl(f_7540)
static void C_ccall f_7540(C_word c,C_word *av) C_noret;
C_noret_decl(f_7544)
static void f_7544(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7583)
static void C_ccall f_7583(C_word c,C_word *av) C_noret;
C_noret_decl(f_7590)
static void C_ccall f_7590(C_word c,C_word *av) C_noret;
C_noret_decl(f_7630)
static C_word f_7630(C_word t0);
C_noret_decl(f_7666)
static void f_7666(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7714)
static void C_ccall f_7714(C_word c,C_word *av) C_noret;
C_noret_decl(f_7723)
static void C_ccall f_7723(C_word c,C_word *av) C_noret;
C_noret_decl(f_7728)
static void C_ccall f_7728(C_word c,C_word *av) C_noret;
C_noret_decl(f_7734)
static void C_ccall f_7734(C_word c,C_word *av) C_noret;
C_noret_decl(f_7740)
static void C_ccall f_7740(C_word c,C_word *av) C_noret;
C_noret_decl(f_7746)
static void C_ccall f_7746(C_word c,C_word *av) C_noret;
C_noret_decl(f_7752)
static void C_ccall f_7752(C_word c,C_word *av) C_noret;
C_noret_decl(f_7758)
static void C_ccall f_7758(C_word c,C_word *av) C_noret;
C_noret_decl(f_7764)
static void C_ccall f_7764(C_word c,C_word *av) C_noret;
C_noret_decl(f_7785)
static void C_ccall f_7785(C_word c,C_word *av) C_noret;
C_noret_decl(f_7788)
static void C_ccall f_7788(C_word c,C_word *av) C_noret;
C_noret_decl(f_7791)
static void C_ccall f_7791(C_word c,C_word *av) C_noret;
C_noret_decl(f_7794)
static void C_ccall f_7794(C_word c,C_word *av) C_noret;
C_noret_decl(f_7797)
static void f_7797(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7800)
static void C_ccall f_7800(C_word c,C_word *av) C_noret;
C_noret_decl(f_7803)
static void f_7803(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7806)
static void C_ccall f_7806(C_word c,C_word *av) C_noret;
C_noret_decl(f_7811)
static void f_7811(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7817)
static void f_7817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7825)
static void f_7825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7846)
static void C_ccall f_7846(C_word c,C_word *av) C_noret;
C_noret_decl(f_7862)
static void C_ccall f_7862(C_word c,C_word *av) C_noret;
C_noret_decl(f_7865)
static void C_ccall f_7865(C_word c,C_word *av) C_noret;
C_noret_decl(f_7868)
static void C_ccall f_7868(C_word c,C_word *av) C_noret;
C_noret_decl(f_7871)
static void C_ccall f_7871(C_word c,C_word *av) C_noret;
C_noret_decl(f_7877)
static void C_ccall f_7877(C_word c,C_word *av) C_noret;
C_noret_decl(f_7886)
static void C_ccall f_7886(C_word c,C_word *av) C_noret;
C_noret_decl(f_7908)
static void C_ccall f_7908(C_word c,C_word *av) C_noret;
C_noret_decl(f_7922)
static void f_7922(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7929)
static void C_ccall f_7929(C_word c,C_word *av) C_noret;
C_noret_decl(f_7936)
static void C_ccall f_7936(C_word c,C_word *av) C_noret;
C_noret_decl(f_7938)
static void f_7938(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7948)
static void C_ccall f_7948(C_word c,C_word *av) C_noret;
C_noret_decl(f_7955)
static void C_ccall f_7955(C_word c,C_word *av) C_noret;
C_noret_decl(f_7959)
static void C_ccall f_7959(C_word c,C_word *av) C_noret;
C_noret_decl(f_7961)
static void C_ccall f_7961(C_word c,C_word *av) C_noret;
C_noret_decl(f_7969)
static void C_ccall f_7969(C_word c,C_word *av) C_noret;
C_noret_decl(f_7979)
static void C_ccall f_7979(C_word c,C_word *av) C_noret;
C_noret_decl(f_7982)
static void C_ccall f_7982(C_word c,C_word *av) C_noret;
C_noret_decl(f_7985)
static void f_7985(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7988)
static void C_ccall f_7988(C_word c,C_word *av) C_noret;
C_noret_decl(f_7991)
static void f_7991(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7994)
static void C_ccall f_7994(C_word c,C_word *av) C_noret;
C_noret_decl(f_7997)
static void C_ccall f_7997(C_word c,C_word *av) C_noret;
C_noret_decl(f_8003)
static void C_ccall f_8003(C_word c,C_word *av) C_noret;
C_noret_decl(f_8006)
static void C_ccall f_8006(C_word c,C_word *av) C_noret;
C_noret_decl(f_8012)
static void C_ccall f_8012(C_word c,C_word *av) C_noret;
C_noret_decl(f_8015)
static void C_ccall f_8015(C_word c,C_word *av) C_noret;
C_noret_decl(f_8021)
static void C_ccall f_8021(C_word c,C_word *av) C_noret;
C_noret_decl(f_8025)
static void C_ccall f_8025(C_word c,C_word *av) C_noret;
C_noret_decl(f_8028)
static void C_ccall f_8028(C_word c,C_word *av) C_noret;
C_noret_decl(f_8031)
static void C_ccall f_8031(C_word c,C_word *av) C_noret;
C_noret_decl(f_8034)
static void C_ccall f_8034(C_word c,C_word *av) C_noret;
C_noret_decl(f_8037)
static void C_ccall f_8037(C_word c,C_word *av) C_noret;
C_noret_decl(f_8040)
static void C_ccall f_8040(C_word c,C_word *av) C_noret;
C_noret_decl(f_8043)
static void C_ccall f_8043(C_word c,C_word *av) C_noret;
C_noret_decl(f_8046)
static void C_ccall f_8046(C_word c,C_word *av) C_noret;
C_noret_decl(f_8049)
static void f_8049(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8054)
static void f_8054(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8070)
static void C_ccall f_8070(C_word c,C_word *av) C_noret;
C_noret_decl(f_8082)
static void C_ccall f_8082(C_word c,C_word *av) C_noret;
C_noret_decl(f_8110)
static void C_ccall f_8110(C_word c,C_word *av) C_noret;
C_noret_decl(f_8122)
static void C_ccall f_8122(C_word c,C_word *av) C_noret;
C_noret_decl(f_8137)
static void C_ccall f_8137(C_word c,C_word *av) C_noret;
C_noret_decl(f_8156)
static void C_ccall f_8156(C_word c,C_word *av) C_noret;
C_noret_decl(f_8166)
static void C_ccall f_8166(C_word c,C_word *av) C_noret;
C_noret_decl(f_8181)
static void C_ccall f_8181(C_word c,C_word *av) C_noret;
C_noret_decl(f_8191)
static void C_ccall f_8191(C_word c,C_word *av) C_noret;
C_noret_decl(f_8201)
static void C_ccall f_8201(C_word c,C_word *av) C_noret;
C_noret_decl(f_8212)
static void C_ccall f_8212(C_word c,C_word *av) C_noret;
C_noret_decl(f_8216)
static void C_ccall f_8216(C_word c,C_word *av) C_noret;
C_noret_decl(f_8223)
static void C_ccall f_8223(C_word c,C_word *av) C_noret;
C_noret_decl(f_8225)
static void C_ccall f_8225(C_word c,C_word *av) C_noret;
C_noret_decl(f_8253)
static void C_ccall f_8253(C_word c,C_word *av) C_noret;
C_noret_decl(f_8257)
static void C_ccall f_8257(C_word c,C_word *av) C_noret;
C_noret_decl(f_8261)
static void C_ccall f_8261(C_word c,C_word *av) C_noret;
C_noret_decl(f_8264)
static void C_ccall f_8264(C_word c,C_word *av) C_noret;
C_noret_decl(f_8267)
static void C_ccall f_8267(C_word c,C_word *av) C_noret;
C_noret_decl(f_8270)
static void C_ccall f_8270(C_word c,C_word *av) C_noret;
C_noret_decl(f_8275)
static void f_8275(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8288)
static void C_ccall f_8288(C_word c,C_word *av) C_noret;
C_noret_decl(f_8291)
static void C_ccall f_8291(C_word c,C_word *av) C_noret;
C_noret_decl(f_8305)
static void C_ccall f_8305(C_word c,C_word *av) C_noret;
C_noret_decl(f_8324)
static void C_ccall f_8324(C_word c,C_word *av) C_noret;
C_noret_decl(f_8336)
static void C_ccall f_8336(C_word c,C_word *av) C_noret;
C_noret_decl(f_8339)
static void C_ccall f_8339(C_word c,C_word *av) C_noret;
C_noret_decl(f_8353)
static void C_ccall f_8353(C_word c,C_word *av) C_noret;
C_noret_decl(f_8356)
static void C_ccall f_8356(C_word c,C_word *av) C_noret;
C_noret_decl(f_8359)
static void C_ccall f_8359(C_word c,C_word *av) C_noret;
C_noret_decl(f_8362)
static void C_ccall f_8362(C_word c,C_word *av) C_noret;
C_noret_decl(f_8371)
static void C_ccall f_8371(C_word c,C_word *av) C_noret;
C_noret_decl(f_8374)
static void C_ccall f_8374(C_word c,C_word *av) C_noret;
C_noret_decl(f_8432)
static void C_ccall f_8432(C_word c,C_word *av) C_noret;
C_noret_decl(f_8439)
static void C_ccall f_8439(C_word c,C_word *av) C_noret;
C_noret_decl(f_8445)
static void C_ccall f_8445(C_word c,C_word *av) C_noret;
C_noret_decl(f_8452)
static void C_ccall f_8452(C_word c,C_word *av) C_noret;
C_noret_decl(f_8458)
static void C_ccall f_8458(C_word c,C_word *av) C_noret;
C_noret_decl(f_8460)
static void f_8460(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8485)
static void C_ccall f_8485(C_word c,C_word *av) C_noret;
C_noret_decl(f_8494)
static void f_8494(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8519)
static void C_ccall f_8519(C_word c,C_word *av) C_noret;
C_noret_decl(f_8528)
static void f_8528(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8538)
static void C_ccall f_8538(C_word c,C_word *av) C_noret;
C_noret_decl(f_8551)
static void f_8551(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8561)
static void C_ccall f_8561(C_word c,C_word *av) C_noret;
C_noret_decl(f_8574)
static void f_8574(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8584)
static void C_ccall f_8584(C_word c,C_word *av) C_noret;
C_noret_decl(f_8598)
static void C_ccall f_8598(C_word c,C_word *av) C_noret;
C_noret_decl(f_8601)
static void C_ccall f_8601(C_word c,C_word *av) C_noret;
C_noret_decl(f_8604)
static void C_ccall f_8604(C_word c,C_word *av) C_noret;
C_noret_decl(f_8613)
static void C_ccall f_8613(C_word c,C_word *av) C_noret;
C_noret_decl(f_8616)
static void C_ccall f_8616(C_word c,C_word *av) C_noret;
C_noret_decl(f_8626)
static void C_ccall f_8626(C_word c,C_word *av) C_noret;
C_noret_decl(f_8633)
static void C_ccall f_8633(C_word c,C_word *av) C_noret;
C_noret_decl(f_8643)
static void C_ccall f_8643(C_word c,C_word *av) C_noret;
C_noret_decl(f_8649)
static void C_ccall f_8649(C_word c,C_word *av) C_noret;
C_noret_decl(f_8652)
static void C_ccall f_8652(C_word c,C_word *av) C_noret;
C_noret_decl(f_8661)
static void C_ccall f_8661(C_word c,C_word *av) C_noret;
C_noret_decl(f_8667)
static void C_ccall f_8667(C_word c,C_word *av) C_noret;
C_noret_decl(f_8670)
static void C_ccall f_8670(C_word c,C_word *av) C_noret;
C_noret_decl(f_8673)
static void C_ccall f_8673(C_word c,C_word *av) C_noret;
C_noret_decl(f_8676)
static void C_ccall f_8676(C_word c,C_word *av) C_noret;
C_noret_decl(f_8685)
static void C_ccall f_8685(C_word c,C_word *av) C_noret;
C_noret_decl(f_8750)
static void C_ccall f_8750(C_word c,C_word *av) C_noret;
C_noret_decl(f_8763)
static void C_ccall f_8763(C_word c,C_word *av) C_noret;
C_noret_decl(f_8767)
static void C_ccall f_8767(C_word c,C_word *av) C_noret;
C_noret_decl(f_8771)
static void C_ccall f_8771(C_word c,C_word *av) C_noret;
C_noret_decl(f_8777)
static void C_ccall f_8777(C_word c,C_word *av) C_noret;
C_noret_decl(f_8783)
static void C_ccall f_8783(C_word c,C_word *av) C_noret;
C_noret_decl(f_8785)
static void C_ccall f_8785(C_word c,C_word *av) C_noret;
C_noret_decl(f_8791)
static void C_ccall f_8791(C_word c,C_word *av) C_noret;
C_noret_decl(f_8795)
static void C_ccall f_8795(C_word c,C_word *av) C_noret;
C_noret_decl(f_8798)
static void C_ccall f_8798(C_word c,C_word *av) C_noret;
C_noret_decl(f_8805)
static void C_ccall f_8805(C_word c,C_word *av) C_noret;
C_noret_decl(f_8809)
static void C_ccall f_8809(C_word c,C_word *av) C_noret;
C_noret_decl(f_8811)
static void C_ccall f_8811(C_word c,C_word *av) C_noret;
C_noret_decl(f_8815)
static void C_ccall f_8815(C_word c,C_word *av) C_noret;
C_noret_decl(f_8824)
static void C_ccall f_8824(C_word c,C_word *av) C_noret;
C_noret_decl(f_8830)
static void C_ccall f_8830(C_word c,C_word *av) C_noret;
C_noret_decl(f_8834)
static void f_8834(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8838)
static void C_ccall f_8838(C_word c,C_word *av) C_noret;
C_noret_decl(f_8851)
static void C_ccall f_8851(C_word c,C_word *av) C_noret;
C_noret_decl(f_8853)
static void C_ccall f_8853(C_word c,C_word *av) C_noret;
C_noret_decl(f_8861)
static void C_ccall f_8861(C_word c,C_word *av) C_noret;
C_noret_decl(f_8864)
static void C_ccall f_8864(C_word c,C_word *av) C_noret;
C_noret_decl(f_8871)
static void C_ccall f_8871(C_word c,C_word *av) C_noret;
C_noret_decl(f_8875)
static void C_ccall f_8875(C_word c,C_word *av) C_noret;
C_noret_decl(f_8884)
static void C_ccall f_8884(C_word c,C_word *av) C_noret;
C_noret_decl(f_8886)
static void C_ccall f_8886(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_extern void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_3072)
static void C_ccall trf_3072(C_word c,C_word *av) C_noret;
static void C_ccall trf_3072(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3072(t0,t1,t2);}

C_noret_decl(trf_3147)
static void C_ccall trf_3147(C_word c,C_word *av) C_noret;
static void C_ccall trf_3147(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3147(t0,t1,t2);}

C_noret_decl(trf_3881)
static void C_ccall trf_3881(C_word c,C_word *av) C_noret;
static void C_ccall trf_3881(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3881(t0,t1);}

C_noret_decl(trf_3982)
static void C_ccall trf_3982(C_word c,C_word *av) C_noret;
static void C_ccall trf_3982(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3982(t0,t1);}

C_noret_decl(trf_4011)
static void C_ccall trf_4011(C_word c,C_word *av) C_noret;
static void C_ccall trf_4011(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4011(t0,t1,t2);}

C_noret_decl(trf_4036)
static void C_ccall trf_4036(C_word c,C_word *av) C_noret;
static void C_ccall trf_4036(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4036(t0,t1,t2);}

C_noret_decl(trf_4093)
static void C_ccall trf_4093(C_word c,C_word *av) C_noret;
static void C_ccall trf_4093(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4093(t0,t1,t2);}

C_noret_decl(trf_4142)
static void C_ccall trf_4142(C_word c,C_word *av) C_noret;
static void C_ccall trf_4142(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4142(t0,t1,t2);}

C_noret_decl(trf_4152)
static void C_ccall trf_4152(C_word c,C_word *av) C_noret;
static void C_ccall trf_4152(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4152(t0,t1);}

C_noret_decl(trf_4197)
static void C_ccall trf_4197(C_word c,C_word *av) C_noret;
static void C_ccall trf_4197(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4197(t0,t1,t2);}

C_noret_decl(trf_4241)
static void C_ccall trf_4241(C_word c,C_word *av) C_noret;
static void C_ccall trf_4241(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4241(t0,t1);}

C_noret_decl(trf_4553)
static void C_ccall trf_4553(C_word c,C_word *av) C_noret;
static void C_ccall trf_4553(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4553(t0,t1,t2);}

C_noret_decl(trf_4588)
static void C_ccall trf_4588(C_word c,C_word *av) C_noret;
static void C_ccall trf_4588(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4588(t0,t1,t2);}

C_noret_decl(trf_4609)
static void C_ccall trf_4609(C_word c,C_word *av) C_noret;
static void C_ccall trf_4609(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4609(t0,t1,t2);}

C_noret_decl(trf_4860)
static void C_ccall trf_4860(C_word c,C_word *av) C_noret;
static void C_ccall trf_4860(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4860(t0,t1,t2);}

C_noret_decl(trf_4999)
static void C_ccall trf_4999(C_word c,C_word *av) C_noret;
static void C_ccall trf_4999(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4999(t0,t1,t2);}

C_noret_decl(trf_5009)
static void C_ccall trf_5009(C_word c,C_word *av) C_noret;
static void C_ccall trf_5009(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5009(t0,t1);}

C_noret_decl(trf_5067)
static void C_ccall trf_5067(C_word c,C_word *av) C_noret;
static void C_ccall trf_5067(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5067(t0,t1,t2,t3);}

C_noret_decl(trf_5105)
static void C_ccall trf_5105(C_word c,C_word *av) C_noret;
static void C_ccall trf_5105(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5105(t0,t1,t2);}

C_noret_decl(trf_5127)
static void C_ccall trf_5127(C_word c,C_word *av) C_noret;
static void C_ccall trf_5127(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5127(t0,t1);}

C_noret_decl(trf_5147)
static void C_ccall trf_5147(C_word c,C_word *av) C_noret;
static void C_ccall trf_5147(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5147(t0,t1,t2);}

C_noret_decl(trf_5161)
static void C_ccall trf_5161(C_word c,C_word *av) C_noret;
static void C_ccall trf_5161(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5161(t0,t1);}

C_noret_decl(trf_5284)
static void C_ccall trf_5284(C_word c,C_word *av) C_noret;
static void C_ccall trf_5284(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5284(t0,t1,t2);}

C_noret_decl(trf_5317)
static void C_ccall trf_5317(C_word c,C_word *av) C_noret;
static void C_ccall trf_5317(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5317(t0,t1,t2);}

C_noret_decl(trf_5425)
static void C_ccall trf_5425(C_word c,C_word *av) C_noret;
static void C_ccall trf_5425(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5425(t0,t1,t2,t3);}

C_noret_decl(trf_5443)
static void C_ccall trf_5443(C_word c,C_word *av) C_noret;
static void C_ccall trf_5443(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5443(t0,t1,t2);}

C_noret_decl(trf_5475)
static void C_ccall trf_5475(C_word c,C_word *av) C_noret;
static void C_ccall trf_5475(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5475(t0,t1,t2,t3);}

C_noret_decl(trf_5774)
static void C_ccall trf_5774(C_word c,C_word *av) C_noret;
static void C_ccall trf_5774(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5774(t0,t1,t2);}

C_noret_decl(trf_5837)
static void C_ccall trf_5837(C_word c,C_word *av) C_noret;
static void C_ccall trf_5837(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5837(t0,t1);}

C_noret_decl(trf_5849)
static void C_ccall trf_5849(C_word c,C_word *av) C_noret;
static void C_ccall trf_5849(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5849(t0,t1,t2,t3);}

C_noret_decl(trf_6166)
static void C_ccall trf_6166(C_word c,C_word *av) C_noret;
static void C_ccall trf_6166(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6166(t0,t1,t2);}

C_noret_decl(trf_6174)
static void C_ccall trf_6174(C_word c,C_word *av) C_noret;
static void C_ccall trf_6174(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6174(t0,t1,t2);}

C_noret_decl(trf_6204)
static void C_ccall trf_6204(C_word c,C_word *av) C_noret;
static void C_ccall trf_6204(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6204(t0,t1,t2);}

C_noret_decl(trf_6250)
static void C_ccall trf_6250(C_word c,C_word *av) C_noret;
static void C_ccall trf_6250(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6250(t0,t1,t2);}

C_noret_decl(trf_6263)
static void C_ccall trf_6263(C_word c,C_word *av) C_noret;
static void C_ccall trf_6263(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6263(t0,t1,t2);}

C_noret_decl(trf_6318)
static void C_ccall trf_6318(C_word c,C_word *av) C_noret;
static void C_ccall trf_6318(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6318(t0,t1,t2);}

C_noret_decl(trf_6359)
static void C_ccall trf_6359(C_word c,C_word *av) C_noret;
static void C_ccall trf_6359(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6359(t0,t1,t2);}

C_noret_decl(trf_6386)
static void C_ccall trf_6386(C_word c,C_word *av) C_noret;
static void C_ccall trf_6386(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6386(t0,t1,t2);}

C_noret_decl(trf_6460)
static void C_ccall trf_6460(C_word c,C_word *av) C_noret;
static void C_ccall trf_6460(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6460(t0,t1,t2);}

C_noret_decl(trf_6462)
static void C_ccall trf_6462(C_word c,C_word *av) C_noret;
static void C_ccall trf_6462(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6462(t0,t1,t2,t3);}

C_noret_decl(trf_6465)
static void C_ccall trf_6465(C_word c,C_word *av) C_noret;
static void C_ccall trf_6465(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6465(t0,t1,t2);}

C_noret_decl(trf_6575)
static void C_ccall trf_6575(C_word c,C_word *av) C_noret;
static void C_ccall trf_6575(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6575(t0,t1,t2);}

C_noret_decl(trf_6580)
static void C_ccall trf_6580(C_word c,C_word *av) C_noret;
static void C_ccall trf_6580(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6580(t0,t1);}

C_noret_decl(trf_6615)
static void C_ccall trf_6615(C_word c,C_word *av) C_noret;
static void C_ccall trf_6615(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6615(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6618)
static void C_ccall trf_6618(C_word c,C_word *av) C_noret;
static void C_ccall trf_6618(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6618(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6648)
static void C_ccall trf_6648(C_word c,C_word *av) C_noret;
static void C_ccall trf_6648(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6648(t0,t1,t2);}

C_noret_decl(trf_6682)
static void C_ccall trf_6682(C_word c,C_word *av) C_noret;
static void C_ccall trf_6682(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6682(t0,t1,t2,t3);}

C_noret_decl(trf_6733)
static void C_ccall trf_6733(C_word c,C_word *av) C_noret;
static void C_ccall trf_6733(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6733(t0,t1,t2,t3);}

C_noret_decl(trf_6767)
static void C_ccall trf_6767(C_word c,C_word *av) C_noret;
static void C_ccall trf_6767(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6767(t0,t1,t2);}

C_noret_decl(trf_6818)
static void C_ccall trf_6818(C_word c,C_word *av) C_noret;
static void C_ccall trf_6818(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6818(t0,t1);}

C_noret_decl(trf_6821)
static void C_ccall trf_6821(C_word c,C_word *av) C_noret;
static void C_ccall trf_6821(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6821(t0,t1);}

C_noret_decl(trf_6844)
static void C_ccall trf_6844(C_word c,C_word *av) C_noret;
static void C_ccall trf_6844(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6844(t0,t1);}

C_noret_decl(trf_6853)
static void C_ccall trf_6853(C_word c,C_word *av) C_noret;
static void C_ccall trf_6853(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6853(t0,t1,t2,t3);}

C_noret_decl(trf_6927)
static void C_ccall trf_6927(C_word c,C_word *av) C_noret;
static void C_ccall trf_6927(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6927(t0,t1,t2,t3);}

C_noret_decl(trf_6942)
static void C_ccall trf_6942(C_word c,C_word *av) C_noret;
static void C_ccall trf_6942(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6942(t0,t1,t2,t3);}

C_noret_decl(trf_7001)
static void C_ccall trf_7001(C_word c,C_word *av) C_noret;
static void C_ccall trf_7001(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7001(t0,t1,t2,t3);}

C_noret_decl(trf_7103)
static void C_ccall trf_7103(C_word c,C_word *av) C_noret;
static void C_ccall trf_7103(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7103(t0,t1);}

C_noret_decl(trf_7160)
static void C_ccall trf_7160(C_word c,C_word *av) C_noret;
static void C_ccall trf_7160(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7160(t0,t1);}

C_noret_decl(trf_7162)
static void C_ccall trf_7162(C_word c,C_word *av) C_noret;
static void C_ccall trf_7162(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7162(t0,t1,t2);}

C_noret_decl(trf_7194)
static void C_ccall trf_7194(C_word c,C_word *av) C_noret;
static void C_ccall trf_7194(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7194(t0,t1,t2);}

C_noret_decl(trf_7213)
static void C_ccall trf_7213(C_word c,C_word *av) C_noret;
static void C_ccall trf_7213(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7213(t0,t1,t2);}

C_noret_decl(trf_7247)
static void C_ccall trf_7247(C_word c,C_word *av) C_noret;
static void C_ccall trf_7247(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7247(t0,t1,t2,t3);}

C_noret_decl(trf_7253)
static void C_ccall trf_7253(C_word c,C_word *av) C_noret;
static void C_ccall trf_7253(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7253(t0,t1,t2,t3);}

C_noret_decl(trf_7332)
static void C_ccall trf_7332(C_word c,C_word *av) C_noret;
static void C_ccall trf_7332(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7332(t0,t1,t2,t3);}

C_noret_decl(trf_7390)
static void C_ccall trf_7390(C_word c,C_word *av) C_noret;
static void C_ccall trf_7390(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7390(t0,t1,t2);}

C_noret_decl(trf_7396)
static void C_ccall trf_7396(C_word c,C_word *av) C_noret;
static void C_ccall trf_7396(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7396(t0,t1,t2);}

C_noret_decl(trf_7408)
static void C_ccall trf_7408(C_word c,C_word *av) C_noret;
static void C_ccall trf_7408(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7408(t0,t1,t2);}

C_noret_decl(trf_7445)
static void C_ccall trf_7445(C_word c,C_word *av) C_noret;
static void C_ccall trf_7445(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7445(t0,t1);}

C_noret_decl(trf_7451)
static void C_ccall trf_7451(C_word c,C_word *av) C_noret;
static void C_ccall trf_7451(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7451(t0,t1,t2);}

C_noret_decl(trf_7500)
static void C_ccall trf_7500(C_word c,C_word *av) C_noret;
static void C_ccall trf_7500(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7500(t0,t1);}

C_noret_decl(trf_7544)
static void C_ccall trf_7544(C_word c,C_word *av) C_noret;
static void C_ccall trf_7544(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7544(t0,t1,t2);}

C_noret_decl(trf_7666)
static void C_ccall trf_7666(C_word c,C_word *av) C_noret;
static void C_ccall trf_7666(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7666(t0,t1,t2,t3);}

C_noret_decl(trf_7797)
static void C_ccall trf_7797(C_word c,C_word *av) C_noret;
static void C_ccall trf_7797(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7797(t0,t1);}

C_noret_decl(trf_7803)
static void C_ccall trf_7803(C_word c,C_word *av) C_noret;
static void C_ccall trf_7803(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7803(t0,t1);}

C_noret_decl(trf_7811)
static void C_ccall trf_7811(C_word c,C_word *av) C_noret;
static void C_ccall trf_7811(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7811(t0,t1,t2);}

C_noret_decl(trf_7817)
static void C_ccall trf_7817(C_word c,C_word *av) C_noret;
static void C_ccall trf_7817(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7817(t0,t1,t2);}

C_noret_decl(trf_7825)
static void C_ccall trf_7825(C_word c,C_word *av) C_noret;
static void C_ccall trf_7825(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7825(t0,t1,t2);}

C_noret_decl(trf_7922)
static void C_ccall trf_7922(C_word c,C_word *av) C_noret;
static void C_ccall trf_7922(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7922(t0,t1,t2);}

C_noret_decl(trf_7938)
static void C_ccall trf_7938(C_word c,C_word *av) C_noret;
static void C_ccall trf_7938(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7938(t0,t1,t2);}

C_noret_decl(trf_7985)
static void C_ccall trf_7985(C_word c,C_word *av) C_noret;
static void C_ccall trf_7985(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7985(t0,t1);}

C_noret_decl(trf_7991)
static void C_ccall trf_7991(C_word c,C_word *av) C_noret;
static void C_ccall trf_7991(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7991(t0,t1);}

C_noret_decl(trf_8049)
static void C_ccall trf_8049(C_word c,C_word *av) C_noret;
static void C_ccall trf_8049(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8049(t0,t1);}

C_noret_decl(trf_8054)
static void C_ccall trf_8054(C_word c,C_word *av) C_noret;
static void C_ccall trf_8054(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8054(t0,t1,t2);}

C_noret_decl(trf_8275)
static void C_ccall trf_8275(C_word c,C_word *av) C_noret;
static void C_ccall trf_8275(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8275(t0,t1,t2);}

C_noret_decl(trf_8460)
static void C_ccall trf_8460(C_word c,C_word *av) C_noret;
static void C_ccall trf_8460(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8460(t0,t1,t2);}

C_noret_decl(trf_8494)
static void C_ccall trf_8494(C_word c,C_word *av) C_noret;
static void C_ccall trf_8494(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8494(t0,t1,t2);}

C_noret_decl(trf_8528)
static void C_ccall trf_8528(C_word c,C_word *av) C_noret;
static void C_ccall trf_8528(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8528(t0,t1,t2);}

C_noret_decl(trf_8551)
static void C_ccall trf_8551(C_word c,C_word *av) C_noret;
static void C_ccall trf_8551(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8551(t0,t1,t2);}

C_noret_decl(trf_8574)
static void C_ccall trf_8574(C_word c,C_word *av) C_noret;
static void C_ccall trf_8574(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8574(t0,t1,t2);}

C_noret_decl(trf_8834)
static void C_ccall trf_8834(C_word c,C_word *av) C_noret;
static void C_ccall trf_8834(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8834(t0,t1,t2);}

/* f9509 in k4731 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f9509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f9509,c,av);}
C_trace(C_text("csi.scm:355: scheme#string-append"));
t2=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[81];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f9513 in k4731 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f9513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f9513,c,av);}
C_trace(C_text("csi.scm:355: scheme#string-append"));
t2=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[12],C_text("chicken.csi#default-editor"));
av2[3]=lf[81];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f9634 in k8334 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in ... */
static void C_ccall f9634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f9634,c,av);}
C_trace(C_text("csi.scm:152: chicken.base#print"));
t2=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[319];
av2[3]=t1;
av2[4]=lf[320];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* f9660 in k8596 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in ... */
static void C_ccall f9660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f9660,c,av);}
C_trace(C_text("csi.scm:1084: chicken.base#case-sensitive"));
t2=C_fast_retrieve(lf[328]);{
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

/* f9664 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f9664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f9664,c,av);}
C_trace(C_text("csi.scm:152: chicken.base#print"));
t2=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[319];
av2[3]=t1;
av2[4]=lf[320];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2536 */
static void C_ccall f_2538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2538,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2539 in k2536 */
static void C_ccall f_2541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_2541,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8886,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("csi.scm:43: ##sys#with-environment"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[403]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[403]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k2542 in k2539 in k2536 */
static void C_ccall f_2544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2544,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_2547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2547,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2550,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_2550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2550,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_2553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2553,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2556,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_2556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2556,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2559,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_2559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2559,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2562,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_2562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2562,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2565,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_repl_toplevel(2,av2);}}

/* k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_2565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2565,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2568,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_2568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2568,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_2571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2571,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2574,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_r7lib_toplevel(2,av2);}}

/* k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_2574(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2574,c,av);}
a=C_alloc(8);
t2=C_mutate(&lf[1] /* (set! chicken.csi#constant718 ...) */,lf[2]);
t3=C_set_block_item(lf[3] /* ##sys#repl-print-length-limit */,0,C_fix(2048));
t4=C_a_i_cons(&a,2,lf[4],C_fast_retrieve(lf[5]));
t5=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#features ...) */,t4);
t6=C_set_block_item(lf[6] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t7=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#repl-print-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3862,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3873,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:90: scheme#make-parameter"));
t9=C_fast_retrieve(lf[399]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* loop in loop in k8430 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in ... */
static void f_3072(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3072,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3099,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:109: loop"));
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k3097 in loop in loop in k8430 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in ... */
static void C_ccall f_3099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3099,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k8430 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in ... */
static void f_3147(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_3147,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3161,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3174,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3072,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3072(t10,t6,t4);}}

/* k3159 in loop in k8430 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in ... */
static void C_ccall f_3161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3161,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3172 in loop in k8430 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in ... */
static void C_ccall f_3174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3174,c,av);}
C_trace(C_text("mini-srfi-1.scm:123: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3147(t2,((C_word*)t0)[3],t1);}

/* ##sys#repl-print-hook in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_3862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3862,c,av);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3866,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:87: scheme.write#write"));
t5=C_fast_retrieve(lf[9]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3864 in ##sys#repl-print-hook in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_3866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3866,c,av);}
C_trace(C_text("csi.scm:88: scheme#newline"));
t2=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_3873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3873,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[10]+1 /* (set! chicken.csi#editor-command ...) */,t1);
t3=lf[11] /* chicken.csi#selected-frame */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3878,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:94: chicken.process-context#get-environment-variable"));
t5=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[398];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_3878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3878,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3881,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_3881(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8875,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:95: chicken.process-context#get-environment-variable"));
t4=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[397];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_3881(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3881,2,t0,t1);}
a=C_alloc(7);
t2=C_mutate(&lf[12] /* (set! chicken.csi#default-editor ...) */,t1);
t3=C_mutate(&lf[13] /* (set! chicken.csi#dirseparator? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3921,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[15] /* (set! chicken.csi#chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3936,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3963,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#make-string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[393]);
C_word av2[4];
av2[0]=*((C_word*)lf[393]+1);
av2[1]=t5;
av2[2]=C_fix(256);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k3885 in k8647 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_3887(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3887,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3890,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3897,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[355],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,C_retrieve2(lf[1],C_text("chicken.csi#constant718")),t4);
t6=C_a_i_cons(&a,2,lf[356],t5);
C_trace(C_text("csi.scm:43: ##sys#print-to-string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[357]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[357]+1);
av2[1]=t3;
av2[2]=t6;
tp(3,av2);}}

/* k3888 in k3885 in k8647 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void C_ccall f_3890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3890,c,av);}
C_trace(C_text("csi.scm:130: scheme#display"));
t2=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[354];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3895 in k3885 in k8647 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void C_ccall f_3897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3897,c,av);}
C_trace(C_text("csi.scm:125: scheme#display"));
t2=*((C_word*)lf[94]+1);{
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

/* chicken.csi#dirseparator? in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_3921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3921,c,av);}
if(C_truep(*((C_word*)lf[14]+1))){
t3=C_i_char_equalp(t2,C_make_character(92));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_i_char_equalp(t2,C_make_character(47)));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_char_equalp(t2,C_make_character(47));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.csi#chop-separator in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_3936(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3936,c,av);}
a=C_alloc(10);
t3=C_i_string_length(t2);
t4=C_a_i_fixnum_difference(&a,2,t3,C_fix(1));
t5=C_i_string_ref(t2,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3950,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
C_trace(C_text("csi.scm:166: dirseparator?"));
t7=C_retrieve2(lf[13],C_text("chicken.csi#dirseparator?"));{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
f_3921(3,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3948 in chicken.csi#chop-separator in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_3950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3950,c,av);}
if(C_truep(t1)){
C_trace(C_text("csi.scm:167: substring"));
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_3963(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(52,c,3)))){
C_save_and_reclaim((void *)f_3963,c,av);}
a=C_alloc(52);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3982,tmp=(C_word)a,a+=2,tmp);
t3=C_mutate(&lf[20] /* (set! chicken.csi#lookup-script-file ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4036,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=t1,a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp));
t4=C_SCHEME_UNDEFINED;
t5=C_a_i_vector(&a,32,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4);
t6=C_mutate(&lf[28] /* (set! chicken.csi#history-list ...) */,t5);
t7=lf[29] /* chicken.csi#history-count */ =C_fix(1);;
t8=C_fast_retrieve(lf[30]);
t9=C_mutate(&lf[31] /* (set! chicken.csi#history-add ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4142,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[33] /* (set! chicken.csi#history-ref ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4241,tmp=(C_word)a,a+=2,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8853,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("csi.scm:254: chicken.repl#repl-prompt"));
t13=C_fast_retrieve(lf[392]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=t11;
av2[2]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}

/* addext in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_3982(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3982,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3989,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:177: chicken.file#file-exists?"));
t4=C_fast_retrieve(lf[17]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3987 in addext in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_3989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3989,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3992,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[19];
tp(4,av2);}}}

/* k3990 in k3987 in addext in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_3992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3992,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3998,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:180: chicken.file#file-exists?"));
t4=C_fast_retrieve(lf[17]);{
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

/* k3996 in k3990 in k3987 in addext in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_3998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3998,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t1)?((C_word*)t2)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_4011(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4011,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4024,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:185: proc"));
t4=C_retrieve2(lf[13],C_text("chicken.csi#dirseparator?"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_string_ref(((C_word*)t0)[4],t2);
f_3921(3,av2);}}}

/* k4022 in loop in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4024,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("csi.scm:186: loop"));
t2=((C_word*)((C_word*)t0)[4])[1];
f_4011(t2,((C_word*)t0)[2],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}}

/* chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_4036(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4036,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=C_mutate(((C_word *)t0)+3,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4040,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:188: chicken.process-context#get-environment-variable"));
t6=C_fast_retrieve(lf[26]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[27];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4040,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+6,t1);
t4=C_i_string_length(((C_word*)t2)[4]);
if(C_truep(C_fixnum_greaterp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4052,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:190: dirseparator?"));
t6=C_retrieve2(lf[13],C_text("chicken.csi#dirseparator?"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_string_ref(((C_word*)t2)[4],C_fix(0));
f_3921(3,av2);}}
else{
t5=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4052(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4052,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
C_trace(C_text("csi.scm:190: addext"));
f_3982(((C_word*)t2)[3],((C_word*)t2)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4061,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_retrieve2(lf[13],C_text("chicken.csi#dirseparator?"));
t5=C_i_string_length(((C_word*)t2)[4]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4011,a[2]=t5,a[3]=t7,a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4011(t9,t3,C_fix(0));}}

/* k4059 in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4061,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=(C_truep(((C_word*)t0)[5])?C_i_foreign_block_argumentp(((C_word*)t0)[5]):C_SCHEME_FALSE);
t5=C_fix(256);
C_trace(C_text("csi.scm:175: ##sys#peek-nonnull-c-string"));
t6=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub753(t3,t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:194: addext"));
f_3982(t2,((C_word*)t0)[4]);}}

/* k4062 in k4059 in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4064,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4075,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:193: chop-separator"));
t4=C_retrieve2(lf[15],C_text("chicken.csi#chop-separator"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
f_3936(3,av2);}}

/* k4069 in k4062 in k4059 in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_4071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4071,c,av);}
C_trace(C_text("csi.scm:193: addext"));
f_3982(((C_word*)t0)[3],t1);}

/* k4073 in k4062 in k4059 in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_4075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4075,c,av);}
C_trace(C_text("csi.scm:193: scheme#string-append"));
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
av2[3]=lf[22];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4076 in k4059 in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4078,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4084,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t2;
av2[2]=lf[25];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}}

/* k4082 in k4076 in k4059 in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_4084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4084,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4091,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:197: ##sys#split-path"));
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

/* k4089 in k4082 in k4076 in k4059 in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_4091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4091,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4093,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4093(t5,((C_word*)t0)[4],t1);}

/* loop in k4089 in k4082 in k4076 in k4059 in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void f_4093(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_4093,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4103,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4120,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:199: chop-separator"));
t5=C_retrieve2(lf[15],C_text("chicken.csi#chop-separator"));{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_slot(t2,C_fix(0));
f_3936(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4101 in loop in k4089 in k4082 in k4076 in k4059 in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_4103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4103,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:200: addext"));
f_3982(t2,t1);}

/* k4104 in k4101 in loop in k4089 in k4082 in k4076 in k4059 in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_4106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4106,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("csi.scm:201: loop"));
t2=((C_word*)((C_word*)t0)[3])[1];
f_4093(t2,((C_word*)t0)[2],C_slot(((C_word*)t0)[4],C_fix(1)));}}

/* k4118 in loop in k4089 in k4082 in k4076 in k4059 in k4050 in k4038 in chicken.csi#lookup-script-file in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_4120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4120,c,av);}
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* chicken.csi#history-add in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_4142(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4142,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?*((C_word*)lf[32]+1):C_slot(t2,C_fix(0)));
t5=C_block_size(C_retrieve2(lf[28],C_text("chicken.csi#history-list")));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4152,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(C_retrieve2(lf[29],C_text("chicken.csi#history-count")),t5))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4166,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:216: vector-resize"));
t8=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[28],C_text("chicken.csi#history-list"));
av2[3]=C_fixnum_times(C_fix(2),t5);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t7=t6;
f_4152(t7,C_SCHEME_UNDEFINED);}}

/* k4150 in chicken.csi#history-add in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_4152(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_4152,2,t0,t1);}
t2=C_i_vector_set(C_retrieve2(lf[28],C_text("chicken.csi#history-list")),C_retrieve2(lf[29],C_text("chicken.csi#history-count")),((C_word*)t0)[2]);
t3=C_fixnum_plus(C_retrieve2(lf[29],C_text("chicken.csi#history-count")),C_fix(1));
t4=lf[29] /* chicken.csi#history-count */ =t3;;
t5=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4164 in chicken.csi#history-add in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4166,c,av);}
t2=C_mutate(&lf[28] /* (set! chicken.csi#history-list ...) */,t1);
t3=((C_word*)t0)[2];
f_4152(t3,t2);}

/* doloop810 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_4197(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4197,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_greater_or_equalp(t2,C_retrieve2(lf[29],C_text("chicken.csi#history-count"))))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=*((C_word*)lf[85]+1);
t4=*((C_word*)lf[85]+1);
t5=C_i_check_port_2(*((C_word*)lf[85]+1),C_fix(2),C_SCHEME_TRUE,lf[86]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4210,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:229: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word av2[4];
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t6;
av2[2]=C_make_character(35);
av2[3]=*((C_word*)lf[85]+1);
tp(4,av2);}}}

/* k4208 in doloop810 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4210,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4213,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:229: ##sys#print"));
t3=*((C_word*)lf[87]+1);{
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
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4211 in k4208 in doloop810 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4213,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4216,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:229: ##sys#print"));
t4=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[89];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4214 in k4211 in k4208 in doloop810 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_4216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4216,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4219,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4231,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:230: ##sys#with-print-length-limit"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[88]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t2;
av2[2]=C_fix(80);
av2[3]=t3;
tp(4,av2);}}

/* k4217 in k4214 in k4211 in k4208 in doloop810 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_4219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4219,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4222,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:234: newline"));
t4=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4220 in k4217 in k4214 in k4211 in k4208 in doloop810 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_4222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4222,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t2)[2])[1];
f_4197(t3,((C_word*)t2)[3],C_fixnum_plus(((C_word*)t2)[4],C_fix(1)));}

/* a4230 in k4214 in k4211 in k4208 in doloop810 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_4231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4231,c,av);}
C_trace(C_text("csi.scm:233: ##sys#print"));
t2=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_i_vector_ref(C_retrieve2(lf[28],C_text("chicken.csi#history-list")),((C_word*)t0)[2]);
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[85]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.csi#history-ref in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_4241(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4241,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4245,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:237: scheme#inexact->exact"));
t4=*((C_word*)lf[36]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4243 in chicken.csi#history-ref in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4245,c,av);}
t2=C_fixnum_greaterp(t1,C_fix(0));
t3=(C_truep(t2)?C_fixnum_less_or_equal_p(t1,C_retrieve2(lf[29],C_text("chicken.csi#history-count"))):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_vector_ref(C_retrieve2(lf[28],C_text("chicken.csi#history-list")),t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
C_trace(C_text("csi.scm:240: ##sys#error"));
t4=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[35];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* ##sys#user-read-hook in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_4268(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4268,c,av);}
a=C_alloc(3);
t4=C_i_char_equalp(C_make_character(41),t2);
t5=(C_truep(t4)?t4:C_u_i_char_whitespacep(t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4285,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:249: history-ref"));
f_4241(t6,C_fixnum_difference(C_retrieve2(lf[29],C_text("chicken.csi#history-count")),C_fix(1)));}
else{
C_trace(C_text("csi.scm:250: old-hook"));
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k4283 in ##sys#user-read-hook in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in ... */
static void C_ccall f_4285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4285,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[274],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#sharp-number-hook in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_4297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4297,c,av);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4305,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:252: history-ref"));
f_4241(t4,t3);}

/* k4303 in ##sys#sharp-number-hook in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in ... */
static void C_ccall f_4305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4305,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,lf[274],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
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
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_4308,c,av);}
a=C_alloc(18);
t2=C_fast_retrieve(lf[37]);
t3=C_mutate((C_word*)lf[37]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4319,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t4=lf[40] /* chicken.csi#command-table */ =C_SCHEME_END_OF_LIST;;
t5=C_mutate((C_word*)lf[41]+1 /* (set! chicken.csi#toplevel-command ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4332,tmp=(C_word)a,a+=2,tmp));
t6=C_fast_retrieve(lf[43]);
t7=C_fast_retrieve(lf[44]);
t8=C_fast_retrieve(lf[45]);
t9=C_fast_retrieve(lf[46]);
t10=C_fast_retrieve(lf[47]);
t11=*((C_word*)lf[48]+1);
t12=C_mutate((C_word*)lf[49]+1 /* (set! chicken.csi#default-evaluator ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4387,a[2]=t10,a[3]=t9,a[4]=t8,a[5]=t7,a[6]=t6,a[7]=t11,tmp=(C_word)a,a+=8,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4956,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8811,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("csi.scm:421: toplevel-command"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[41]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[41]+1);
av2[1]=t13;
av2[2]=lf[385];
av2[3]=t14;
av2[4]=lf[386];
tp(5,av2);}}

/* ##sys#read-prompt-hook in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4319,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4326,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_tty_forcedp();
if(C_truep(t3)){
if(C_truep(t3)){
C_trace(C_text("csi.scm:274: old"));
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
C_trace(C_text("csi.scm:269: ##sys#tty-port?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=*((C_word*)lf[39]+1);
tp(3,av2);}}}

/* k4324 in ##sys#read-prompt-hook in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4326,c,av);}
if(C_truep(t1)){
C_trace(C_text("csi.scm:274: old"));
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.csi#toplevel-command in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4332(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4332,c,av);}
a=C_alloc(12);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_i_check_symbol_2(t2,lf[42]);
t7=(C_truep(t5)?C_i_check_string_2(t5,lf[42]):C_SCHEME_UNDEFINED);
t8=C_i_assq(t2,C_retrieve2(lf[40],C_text("chicken.csi#command-table")));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4352,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t10=(
C_trace("csi.scm:281: g875"),
  f_4352(C_a_i(&a,6),t9,t8)
);
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_a_i_list3(&a,3,t2,t3,t5);
t10=C_a_i_cons(&a,2,t9,C_retrieve2(lf[40],C_text("chicken.csi#command-table")));
t11=C_mutate(&lf[40] /* (set! chicken.csi#command-table ...) */,t10);
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* g875 in chicken.csi#toplevel-command in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static C_word f_4352(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
return(C_i_set_cdr(t1,t2));}

/* chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4387(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4387,c,av);}
a=C_alloc(10);
if(C_truep(C_eofp(t2))){
C_trace(C_text("csi.scm:300: chicken.repl#quit"));
t3=C_fast_retrieve(lf[50]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_eqp(lf[51],C_slot(t2,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_i_cadr(t2);
t6=C_i_assq(t5,C_retrieve2(lf[40],C_text("chicken.csi#command-table")));
if(C_truep(t6)){
t7=C_i_cadr(t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4420,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:305: g908"));
t9=t7;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)C_fast_retrieve_proc(t9))(2,av2);}}
else{
t7=C_eqp(t5,lf[52]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4435,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:291: chicken.syntax#read-with-source-info"));
t9=C_fast_retrieve(lf[54]);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=*((C_word*)lf[39]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=C_eqp(t5,lf[55]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4458,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:291: chicken.syntax#read-with-source-info"));
t10=C_fast_retrieve(lf[54]);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=*((C_word*)lf[39]+1);
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t9=C_eqp(t5,lf[57]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4476,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:291: chicken.syntax#read-with-source-info"));
t11=C_fast_retrieve(lf[54]);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=*((C_word*)lf[39]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t10=C_eqp(t5,lf[59]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4491,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:291: chicken.syntax#read-with-source-info"));
t12=C_fast_retrieve(lf[54]);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=*((C_word*)lf[39]+1);
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}
else{
t11=C_eqp(t5,lf[61]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4506,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:291: chicken.syntax#read-with-source-info"));
t13=C_fast_retrieve(lf[54]);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
av2[2]=*((C_word*)lf[39]+1);
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}
else{
t12=C_eqp(t5,lf[62]);
if(C_truep(t12)){
C_trace(C_text("csi.scm:334: report"));
t13=C_retrieve2(lf[63],C_text("chicken.csi#report"));
f_5105(t13,t1,C_SCHEME_END_OF_LIST);}
else{
t13=C_eqp(t5,lf[64]);
if(C_truep(t13)){
C_trace(C_text("csi.scm:335: chicken.repl#quit"));
t14=C_fast_retrieve(lf[50]);{
C_word *av2=av;
av2[0]=t14;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t14=C_eqp(t5,lf[65]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4545,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4578,a[2]=((C_word*)t0)[4],a[3]=t15,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:337: read-line"));
t17=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t17;
av2[1]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}
else{
t15=C_eqp(t5,lf[67]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[4],a[3]=t16,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:341: read-line"));
t18=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t18;
av2[1]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}
else{
t16=C_eqp(t5,lf[71]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4643,a[2]=((C_word*)t0)[7],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:291: chicken.syntax#read-with-source-info"));
t18=C_fast_retrieve(lf[54]);{
C_word *av2=av;
av2[0]=t18;
av2[1]=t17;
av2[2]=*((C_word*)lf[39]+1);
((C_proc)(void*)(*((C_word*)t18+1)))(3,av2);}}
else{
t17=C_eqp(t5,lf[75]);
if(C_truep(t17)){
if(C_truep(C_fast_retrieve(lf[76]))){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4695,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t19=C_a_i_list1(&a,1,C_fast_retrieve(lf[76]));
C_trace(C_text("csi.scm:351: history-add"));
t20=C_retrieve2(lf[31],C_text("chicken.csi#history-add"));
f_4142(t20,t18,t19);}
else{
t18=C_SCHEME_UNDEFINED;
t19=t1;{
C_word *av2=av;
av2[0]=t19;
av2[1]=t18;
((C_proc)(void*)(*((C_word*)t19+1)))(2,av2);}}}
else{
t18=C_eqp(t5,lf[77]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4711,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4729,a[2]=t19,tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4733,a[2]=t20,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:356: editor-command"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word *av2=av;
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t21;
tp(2,av2);}}
else{
t19=C_eqp(t5,lf[82]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4749,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t21=*((C_word*)lf[32]+1);
C_trace(C_text("csi.scm:222: scheme#vector-fill!"));
t22=*((C_word*)lf[83]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t22;
av2[1]=t20;
av2[2]=C_retrieve2(lf[28],C_text("chicken.csi#history-list"));
av2[3]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t22+1)))(4,av2);}}
else{
t20=C_eqp(t5,lf[84]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4761,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4197,a[2]=t23,tmp=(C_word)a,a+=3,tmp));
t25=((C_word*)t23)[1];
f_4197(t25,t21,C_fix(1));}
else{
t21=C_eqp(t5,lf[91]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4773,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:367: show-frameinfo"));
f_6818(t22,C_retrieve2(lf[11],C_text("chicken.csi#selected-frame")));}
else{
t22=C_eqp(t5,lf[93]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4785,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4792,a[2]=t23,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:291: chicken.syntax#read-with-source-info"));
t25=C_fast_retrieve(lf[54]);{
C_word *av2=av;
av2[0]=t25;
av2[1]=t24;
av2[2]=*((C_word*)lf[39]+1);
((C_proc)(void*)(*((C_word*)t25+1)))(3,av2);}}
else{
t23=C_eqp(t5,lf[97]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4805,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:291: chicken.syntax#read-with-source-info"));
t25=C_fast_retrieve(lf[54]);{
C_word *av2=av;
av2[0]=t25;
av2[1]=t24;
av2[2]=*((C_word*)lf[39]+1);
((C_proc)(void*)(*((C_word*)t25+1)))(3,av2);}}
else{
t24=C_eqp(t5,lf[105]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4814,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:375: read-line"));
t26=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t26;
av2[1]=t25;
((C_proc)(void*)(*((C_word*)t26+1)))(2,av2);}}
else{
t25=C_eqp(t5,lf[106]);
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4833,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:380: display"));
t27=*((C_word*)lf[94]+1);{
C_word *av2=av;
av2[0]=t27;
av2[1]=t26;
av2[2]=lf[109];
((C_proc)(void*)(*((C_word*)t27+1)))(3,av2);}}
else{
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4884,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:411: printf"));
t27=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t27;
av2[1]=t26;
av2[2]=lf[110];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t27+1)))(4,av2);}}}}}}}}}}}}}}}}}}}}}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4930,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4936,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:414: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}}}

/* k4418 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4420,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4433 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4435,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4445,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4449,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:313: expand"));
t5=((C_word*)t0)[4];{
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

/* k4436 in k4433 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4438,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4443 in k4433 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4445,c,av);}
C_trace(C_text("csi.scm:313: pretty-print"));
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

/* k4447 in k4433 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4449,c,av);}
C_trace(C_text("csi.scm:313: chicken.syntax#strip-syntax"));
t2=C_fast_retrieve(lf[53]);{
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

/* k4456 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4458,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4461,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:317: eval"));
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4459 in k4456 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4461,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4464,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:318: pretty-print"));
t4=((C_word*)t2)[3];{
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

/* k4462 in k4459 in k4456 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4464,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4474 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4476,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4479,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:322: eval"));
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4477 in k4474 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4479,c,av);}
C_trace(C_text("csi.scm:323: describe"));
t2=C_retrieve2(lf[58],C_text("chicken.csi#describe"));
f_5425(t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4489 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4491,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:326: eval"));
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4492 in k4489 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4494,c,av);}
C_trace(C_text("csi.scm:327: dump"));
f_6460(((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4504 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4506,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4509,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:291: chicken.syntax#read-with-source-info"));
t4=C_fast_retrieve(lf[54]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[39]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4507 in k4504 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4509,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4512,a[2]=((C_word*)t2)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:331: eval"));
t4=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4510 in k4507 in k4504 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4512,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4515,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:332: eval"));
t3=*((C_word*)lf[56]+1);{
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

/* k4513 in k4510 in k4507 in k4504 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_4515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4515,c,av);}
a=C_alloc(3);
C_trace(C_text("csi.scm:333: dump"));
f_6460(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k4543 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4545,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4548,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4553,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4553(t6,t2,t1);}

/* k4546 in k4543 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4548,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop933 in k4543 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_4553(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4553,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4563,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:338: g934"));
t4=*((C_word*)lf[66]+1);{
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

/* k4561 in for-each-loop933 in k4543 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4563,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4553(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4576 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4578,c,av);}
C_trace(C_text("csi.scm:337: string-split"));
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

/* k4585 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4587(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4587,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4604,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4609,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4609(t7,t3,t1);}

/* g953 in k4585 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_4588(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4588,3,t0,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4594,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:342: g968"));
t4=((C_word*)t0)[3];{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[70];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a4593 in g953 in k4585 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4594,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4598,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:342: pretty-print"));
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4596 in a4593 in g953 in k4585 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_4598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4598,c,av);}
C_trace(C_text("csi.scm:342: chicken.base#print*"));
t2=*((C_word*)lf[68]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[69];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4602 in k4585 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4604,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop952 in k4585 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_4609(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4609,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4619,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:342: g953"));
t4=((C_word*)t0)[3];
f_4588(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4617 in for-each-loop952 in k4585 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4619,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4609(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4632 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4634,c,av);}
C_trace(C_text("csi.scm:341: string-split"));
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

/* k4641 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4643,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4648,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:346: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a4647 in k4641 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4648,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4652,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:346: ##sys#start-timer"));
t3=*((C_word*)lf[74]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4650 in a4647 in k4641 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4652,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4657,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4663,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("csi.scm:346: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a4656 in k4650 in a4647 in k4641 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_4657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4657,c,av);}
C_trace(C_text("csi.scm:346: eval"));
t2=*((C_word*)lf[56]+1);{
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

/* a4662 in k4650 in a4647 in k4641 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_4663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_4663,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4667,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4674,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:346: ##sys#stop-timer"));
t5=*((C_word*)lf[73]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4665 in a4662 in k4650 in a4647 in k4641 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_4667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4667,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* k4672 in a4662 in k4650 in a4647 in k4641 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_4674(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4674,c,av);}
C_trace(C_text("csi.scm:346: ##sys#display-times"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[72]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a4675 in k4641 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4676,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4680,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:347: history-add"));
t4=C_retrieve2(lf[31],C_text("chicken.csi#history-add"));
f_4142(t4,t3,t2);}

/* k4678 in a4675 in k4641 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4680,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k4693 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4695,c,av);}
C_trace(C_text("csi.scm:352: describe"));
t2=C_retrieve2(lf[58],C_text("chicken.csi#describe"));
f_5425(t2,((C_word*)t0)[2],C_fast_retrieve(lf[76]),C_SCHEME_END_OF_LIST);}

/* k4709 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4711,c,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(C_i_not(t2))){
C_trace(C_text("csi.scm:359: printf"));
t3=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[79];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4727 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4729,c,av);}
C_trace(C_text("csi.scm:354: chicken.process#system"));
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

/* k4731 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4733,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f9509,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:357: read-line"));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_retrieve2(lf[12],C_text("chicken.csi#default-editor"));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:357: read-line"));
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4747 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4749,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4759 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4761,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4771 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4773,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4783 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4785,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4790 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4792(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4792,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=C_i_numberp(((C_word*)t0)[3]);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7103,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
t6=t5;
f_7103(t6,t4);}
else{
t6=C_i_not(C_fast_retrieve(lf[96]));
if(C_truep(t6)){
t7=t5;
f_7103(t7,t6);}
else{
t7=C_fixnum_lessp(((C_word*)t0)[3],C_fix(0));
t8=t5;
f_7103(t8,(C_truep(t7)?t7:C_fixnum_greater_or_equal_p(((C_word*)t0)[3],C_i_length(C_fast_retrieve(lf[96])))));}}}

/* k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4805(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4805,c,av);}
a=C_alloc(7);
t2=C_fast_retrieve(lf[96]);
t3=(C_truep(C_fast_retrieve(lf[96]))?C_fast_retrieve(lf[96]):C_SCHEME_END_OF_LIST);
t4=C_i_length(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7160,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
t6=t5;
f_7160(t6,C_slot(t1,C_fix(1)));}
else{
if(C_truep(C_i_stringp(t1))){
t6=t5;
f_7160(t6,t1);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7385,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:885: display"));
t7=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[104];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}

/* k4812 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4814,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4817,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:376: chicken.process#system"));
t3=C_fast_retrieve(lf[80]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4815 in k4812 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4817,c,av);}
a=C_alloc(6);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4820,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
C_trace(C_text("csi.scm:377: history-add"));
t5=C_retrieve2(lf[31],C_text("chicken.csi#history-add"));
f_4142(t5,t3,t4);}

/* k4818 in k4815 in k4812 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4820,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4831 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4833(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4833,c,av);}
a=C_alloc(8);
t2=C_retrieve2(lf[40],C_text("chicken.csi#command-table"));
t3=C_i_check_list_2(C_retrieve2(lf[40],C_text("chicken.csi#command-table")),lf[101]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4855,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4860,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4860(t8,t4,C_retrieve2(lf[40],C_text("chicken.csi#command-table")));}

/* k4853 in k4831 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4855,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop999 in k4831 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_4860(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4860,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4870,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_caddr(t4);
if(C_truep(t5)){
C_trace(C_text("csi.scm:406: chicken.base#print"));
t6=*((C_word*)lf[107]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=C_make_character(32);
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
C_trace(C_text("csi.scm:407: chicken.base#print"));
t6=*((C_word*)lf[107]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[108];
av2[3]=C_u_i_car(t4);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4868 in for-each-loop999 in k4831 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_4870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4870,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4860(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4882 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4884,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4929 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4930,c,av);}
C_trace(C_text("csi.scm:414: eval"));
t2=*((C_word*)lf[56]+1);{
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

/* a4935 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4936,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4940,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:415: history-add"));
t4=C_retrieve2(lf[31],C_text("chicken.csi#history-add"));
f_4142(t4,t3,t2);}

/* k4938 in a4935 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4940,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4956,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4959,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=C_fast_retrieve(lf[47]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8791,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:437: toplevel-command"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[41]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[41]+1);
av2[1]=t2;
av2[2]=lf[377];
av2[3]=t4;
av2[4]=lf[378];
tp(5,av2);}}

/* k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_4959(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4959,c,av);}
a=C_alloc(6);
t2=C_fast_retrieve(lf[111]);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=C_fast_retrieve(lf[112]);
t5=C_mutate(((C_word *)t0)+4,t4);
t6=C_fast_retrieve(lf[113]);
t7=C_mutate(((C_word *)t0)+2,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5104,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t9=*((C_word*)lf[375]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_4965(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4965,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4988,a[2]=t5,a[3]=t6,a[4]=((C_word*)t2)[2],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5033,a[2]=((C_word*)t2)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:460: scheme#call-with-current-continuation"));
t9=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k4977 in map-loop1042 in k4989 in k4986 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_4979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4979,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4982,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:458: scheme#write"));
t3=*((C_word*)lf[177]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4980 in k4977 in map-loop1042 in k4989 in k4986 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_4982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4982,c,av);}
C_trace(C_text("csi.scm:459: scheme#get-output-string"));
t2=C_fast_retrieve(lf[370]);{
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

/* k4986 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_4988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4988,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4991,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:460: g1065"));
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k4989 in k4986 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_4991(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4991,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t1,lf[134]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4999,a[2]=((C_word*)t2)[2],a[3]=t5,a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4999(t7,((C_word*)t2)[4],t1);}

/* map-loop1042 in k4989 in k4986 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void f_4999(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_4999,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5024,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
if(C_truep(C_i_stringp(t5))){
t6=t3;
f_5009(t6,C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4979,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:457: scheme#open-output-string"));
t7=C_fast_retrieve(lf[371]);{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5007 in map-loop1042 in k4989 in k4986 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void f_5009(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_5009,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4999(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k5022 in map-loop1042 in k4989 in k4986 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_5024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5024,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_5009(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* a5032 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_5033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5033,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5039,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5051,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:460: chicken.condition#with-exception-handler"));
t5=C_fast_retrieve(lf[291]);{
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

/* a5038 in a5032 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_5039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5039,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5045,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:460: k1062"));
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a5044 in a5038 in a5032 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_5045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5045,c,av);}
C_trace(C_text("csi.scm:460: ##sys#error"));
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[372];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a5050 in a5032 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_5051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5051,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5057,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5090,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:460: ##sys#call-with-values"));{
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

/* a5056 in a5050 in a5032 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_5057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5057,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5065,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:461: scheme#read"));
t3=*((C_word*)lf[290]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5063 in a5056 in a5050 in a5032 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_5065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5065,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5067,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5067(t5,((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* doloop1069 in k5063 in a5056 in a5050 in a5032 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void f_5067(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5067,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eofp(t2))){
C_trace(C_text("csi.scm:463: scheme#reverse"));
t4=*((C_word*)lf[373]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5084,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:461: scheme#read"));
t5=*((C_word*)lf[290]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5082 in doloop1069 in k5063 in a5056 in a5050 in a5032 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_5084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5084,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_5067(t3,((C_word*)t0)[5],t1,t2);}

/* a5089 in a5050 in a5032 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_5090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_5090,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5096,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:460: k1062"));
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

/* a5095 in a5089 in a5050 in a5032 in k4963 in k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_5096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5096,c,av);}{
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

/* k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_5104(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,6)))){
C_save_and_reclaim((void *)f_5104,c,av);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[63] /* (set! chicken.csi#report ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5105,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],tmp=(C_word)a,a+=6,tmp));
t4=C_mutate(&lf[140] /* (set! chicken.csi#bytevector-data ...) */,lf[141]);
t5=*((C_word*)lf[142]+1);
t6=*((C_word*)lf[143]+1);
t7=*((C_word*)lf[144]+1);
t8=C_mutate(&lf[58] /* (set! chicken.csi#describe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5425,a[2]=t7,a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t9=C_mutate(&lf[60] /* (set! chicken.csi#dump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6460,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[213] /* (set! chicken.csi#hexdump ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6615,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[92] /* (set! chicken.csi#show-frameinfo ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6818,tmp=(C_word)a,a+=2,tmp));
t12=C_establish_signal_handler(C_fix((C_word)SIGINT),C_fix((C_word)SIGINT));
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8785,tmp=(C_word)a,a+=2,tmp);
t14=C_i_setslot(C_fast_retrieve(lf[253]),C_fix((C_word)SIGINT),t13);
t15=C_mutate(&lf[254] /* (set! chicken.csi#member* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7390,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate(&lf[255] /* (set! chicken.csi#constant1696 ...) */,lf[256]);
t17=C_mutate(&lf[257] /* (set! chicken.csi#canonicalize-args ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7445,tmp=(C_word)a,a+=2,tmp));
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8777,a[2]=((C_word*)t2)[5],tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7785,a[2]=t18,tmp=(C_word)a,a+=3,tmp);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8771,a[2]=t19,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:1016: chicken.process-context#get-environment-variable"));
t21=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t21;
av2[1]=t20;
av2[2]=lf[374];
((C_proc)(void*)(*((C_word*)t21+1)))(3,av2);}}

/* chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void f_5105(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_5105,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_u_i_car(t2):*((C_word*)lf[85]+1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5115,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:476: with-output-to-port"));
t6=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t6;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_5115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5115,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5119,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("csi.scm:478: chicken.gc#gc"));
t3=C_fast_retrieve(lf[139]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_5119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5119,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5122,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:479: ##sys#symbol-table-info"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[138]);
C_word *av2=av;
av2[0]=*((C_word*)lf[138]+1);
av2[1]=t2;
tp(2,av2);}}

/* k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_5122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5122,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5125,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:480: chicken.gc#memory-statistics"));
t5=C_fast_retrieve(lf[137]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_5125(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_5125,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=C_mk_bool(C_interrupts_enabled);
t4=C_mk_bool(C_heap_size_is_fixed);
t5=C_mk_bool(C_STACK_GROWS_DOWNWARD);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5127,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5143,a[2]=((C_word*)t2)[2],a[3]=t3,a[4]=((C_word*)t2)[3],a[5]=t1,a[6]=t4,a[7]=t5,a[8]=((C_word*)t2)[4],a[9]=((C_word*)t2)[5],a[10]=t6,a[11]=((C_word*)t2)[6],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("csi.scm:485: printf"));
t8=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[136];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* shorten in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void f_5127(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trf_5127,2,t1,t2);}
a=C_alloc(36);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5135,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_s_a_i_times(&a,2,t2,C_fix(100));
C_trace(C_text("csi.scm:484: scheme#truncate"));
t5=*((C_word*)lf[115]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k5133 in shorten in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_5135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5135,c,av);}
C_trace(C_text("##sys#/-2"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[114]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[114]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(100);
tp(4,av2);}}

/* k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_5143(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_5143,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[126]);
t8=C_fast_retrieve(lf[5]);
t9=C_i_check_list_2(C_fast_retrieve(lf[5]),lf[134]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[11],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5317,a[2]=t5,a[3]=t12,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_5317(t14,t10,C_fast_retrieve(lf[5]));}

/* k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_5146(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_5146,c,av);}
a=C_alloc(16);
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5147,a[2]=C_SCHEME_UNDEFINED,a[3]=t3,a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
t5=C_i_check_list_2(t1,lf[101]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5193,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5284,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_5284(t10,t6,t1);}

/* g1132 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void f_5147(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_5147,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+2,t2);
t4=C_mutate(((C_word *)t0)+4,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5151,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:490: printf"));
t6=*((C_word*)lf[78]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[118];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k5149 in g1132 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_5151(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(99,c,2)))){
C_save_and_reclaim((void *)f_5151,c,av);}
a=C_alloc(99);
t2=((C_word*)t0)[2];
t3=C_i_string_length(((C_word*)t2)[2]);
t4=C_a_i_fixnum_difference(&a,2,C_fix(16),t3);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)((C_word*)t2)[3])[1];
t7=C_mutate(((C_word *)((C_word*)t2)[3])+1,C_s_a_i_plus(&a,2,t6,C_fix(1)));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5161,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_less_or_equalp(((C_word*)t5)[1],C_fix(0)))){
t9=((C_word*)((C_word*)t2)[3])[1];
t10=C_mutate(((C_word *)((C_word*)t2)[3])+1,C_s_a_i_plus(&a,2,t9,C_fix(1)));
t11=C_s_a_i_plus(&a,2,((C_word*)t5)[1],C_fix(18));
t12=C_set_block_item(t5,0,t11);
t13=t8;
f_5161(t13,t12);}
else{
t9=t8;
f_5161(t9,C_SCHEME_UNDEFINED);}}

/* k5159 in k5149 in g1132 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void f_5161(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_5161,2,t0,t1);}
a=C_alloc(4);
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[2])[1],C_fix(3)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:498: scheme#display"));
t3=*((C_word*)lf[94]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[116];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5178,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:501: scheme#make-string"));
t3=*((C_word*)lf[117]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k5168 in k5159 in k5149 in g1132 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void C_ccall f_5170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5170,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5176 in k5159 in k5149 in g1132 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void C_ccall f_5178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5178,c,av);}
C_trace(C_text("csi.scm:501: scheme#display"));
t2=*((C_word*)lf[94]+1);{
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

/* k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_5193(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_5193,c,av);}
a=C_alloc(20);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5196,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5209,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[6],a[5]=((C_word*)t2)[7],a[6]=t3,a[7]=C_SCHEME_UNDEFINED,a[8]=C_SCHEME_UNDEFINED,a[9]=C_SCHEME_UNDEFINED,a[10]=C_SCHEME_UNDEFINED,a[11]=C_SCHEME_UNDEFINED,a[12]=((C_word*)t2)[8],a[13]=C_SCHEME_UNDEFINED,a[14]=((C_word*)t2)[9],a[15]=((C_word*)t2)[10],tmp=(C_word)a,a+=16,tmp);
C_trace(C_text("csi.scm:519: chicken.platform#machine-type"));
t5=C_fast_retrieve(lf[133]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5194 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_5196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5196,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5199,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:538: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[85]+1);
tp(4,av2);}}

/* k5197 in k5194 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_5199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5199,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5202,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t2)[3])){
C_trace(C_text("csi.scm:539: scheme#display"));
t4=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[119];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5200 in k5197 in k5194 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void C_ccall f_5202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5202,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5207 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_5209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5209,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+7,t1);
t3=C_fix((C_word)C_WORD_SIZE);
t4=C_mutate(((C_word *)t0)+8,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5214,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:521: chicken.platform#software-type"));
t6=C_fast_retrieve(lf[132]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5212 in k5207 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_5214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5214,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+9,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5218,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:522: chicken.platform#software-version"));
t5=C_fast_retrieve(lf[131]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5216 in k5212 in k5207 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void C_ccall f_5218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5218,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+10,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5222,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:523: chicken.platform#build-platform"));
t5=C_fast_retrieve(lf[130]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5220 in k5216 in k5212 in k5207 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void C_ccall f_5222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5222,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+11,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5226,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:525: chicken.platform#installation-repository"));
t5=C_fast_retrieve(lf[129]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5224 in k5220 in k5216 in k5212 in k5207 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in ... */
static void C_ccall f_5226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5226,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+13,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5230,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:526: chicken.platform#repository-path"));
t5=C_fast_retrieve(lf[128]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5228 in k5224 in k5220 in k5216 in k5212 in k5207 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in ... */
static void C_ccall f_5230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_5230,c,av);}
a=C_alloc(21);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5234,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=t1,a[15]=C_SCHEME_UNDEFINED,a[16]=((C_word*)t2)[14],a[17]=((C_word*)t2)[15],tmp=(C_word)a,a+=18,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5282,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:528: chicken.base#keyword-style"));
t5=C_fast_retrieve(lf[127]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k5232 in k5228 in k5224 in k5220 in k5216 in k5212 in k5207 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in ... */
static void C_ccall f_5234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5234,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+15,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5238,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:529: shorten"));
f_5127(t3,C_i_vector_ref(((C_word*)t0)[2],C_fix(0)));}

/* k5236 in k5232 in k5228 in k5224 in k5220 in k5216 in k5212 in k5207 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in ... */
static void C_ccall f_5238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_5238,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5242,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=t1,a[17]=((C_word*)t2)[16],tmp=(C_word)a,a+=18,tmp);
C_trace(C_text("csi.scm:530: shorten"));
f_5127(t3,C_i_vector_ref(((C_word*)t2)[2],C_fix(1)));}

/* k5240 in k5236 in k5232 in k5228 in k5224 in k5220 in k5216 in k5212 in k5207 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in ... */
static void C_ccall f_5242(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_5242,c,av);}
a=C_alloc(20);
t2=C_i_vector_ref(((C_word*)t0)[2],C_fix(2));
t3=C_i_vector_ref(((C_word*)t0)[3],C_fix(0));
t4=(C_truep(((C_word*)t0)[4])?lf[120]:lf[121]);
t5=C_i_vector_ref(((C_word*)t0)[3],C_fix(1));
t6=C_i_vector_ref(((C_word*)t0)[3],C_fix(2));
t7=(C_truep(((C_word*)t0)[5])?lf[122]:lf[123]);
t8=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_5270,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[16],a[13]=t1,a[14]=t2,a[15]=t3,a[16]=t4,a[17]=t5,a[18]=t6,a[19]=t7,tmp=(C_word)a,a+=20,tmp);
C_trace(C_text("csi.scm:537: argv"));
t9=((C_word*)t0)[17];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k5268 in k5240 in k5236 in k5232 in k5228 in k5224 in k5220 in k5216 in k5212 in k5207 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in ... */
static void C_ccall f_5270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,21)))){
C_save_and_reclaim((void *)f_5270,c,av);}
C_trace(C_text("csi.scm:503: printf"));
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 22) {
  av2=av;
} else {
  av2=C_alloc(22);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[124];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[6];
av2[7]=((C_word*)t0)[7];
av2[8]=((C_word*)t0)[8];
av2[9]=((C_word*)t0)[9];
av2[10]=((C_word*)t0)[10];
av2[11]=C_fast_retrieve(lf[125]);
av2[12]=((C_word*)t0)[11];
av2[13]=((C_word*)t0)[12];
av2[14]=((C_word*)t0)[13];
av2[15]=((C_word*)t0)[14];
av2[16]=((C_word*)t0)[15];
av2[17]=((C_word*)t0)[16];
av2[18]=((C_word*)t0)[17];
av2[19]=((C_word*)t0)[18];
av2[20]=((C_word*)t0)[19];
av2[21]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(22,av2);}}

/* k5280 in k5228 in k5224 in k5220 in k5216 in k5212 in k5207 in k5191 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in ... */
static void C_ccall f_5282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5282,c,av);}
C_trace(C_text("csi.scm:528: chicken.keyword#keyword->string"));
t2=C_fast_retrieve(lf[126]);{
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

/* for-each-loop1131 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void f_5284(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5284,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5294,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:488: g1132"));
t4=((C_word*)t0)[3];
f_5147(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5292 in for-each-loop1131 in k5144 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_5294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5294,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_5284(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k5313 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_5315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5315,c,av);}
C_trace(C_text("csi.scm:486: sort"));
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
av2[3]=*((C_word*)lf[135]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1105 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void f_5317(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5317,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:486: g1111"));
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

/* k5340 in map-loop1105 in k5141 in k5123 in k5120 in k5117 in a5114 in chicken.csi#report in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_5342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5342,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5317(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* lp in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static C_word f_5362(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t3=C_u_i_cdr(t1);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(t3);
t5=C_i_cdr(t2);
t6=C_eqp(t4,t5);
if(C_truep(t6)){
return(t6);}
else{
t8=t4;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}

/* lp in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static C_word f_5397(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_i_pairp(t1);
if(C_truep(C_i_not(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_i_car(t1);
t4=C_eqp(t1,t3);
if(C_truep(t4)){
return(t4);}
else{
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}}}

/* chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void f_5425(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,6)))){
C_save_and_reclaim_args((void *)trf_5425,4,t0,t1,t2,t3);}
a=C_alloc(17);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[85]+1):C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5431,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5563,a[2]=t1,a[3]=t2,a[4]=t5,a[5]=t6,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_permanentp(t2))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6452,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:608: ##sys#block-address"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word av2[3];
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t8;
av2[2]=t2;
tp(3,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_5563(2,av2);}}}

/* descseq in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_5431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5431,c,av);}
a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5560,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("csi.scm:585: plen"));
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k5436 in k5558 in descseq in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_5438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_5438,c,av);}
a=C_alloc(10);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_5443(t5,((C_word*)t0)[7],C_fix(0));}

/* loop1 in k5436 in k5558 in descseq in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void f_5443(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_5443,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(40)))){
C_trace(C_text("csi.scm:590: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[146];
av2[4]=C_fixnum_difference(((C_word*)t0)[2],t2);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5466,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("csi.scm:592: pref"));
t5=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=C_fixnum_plus(((C_word*)t0)[4],t2);
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}}

/* k5464 in loop1 in k5436 in k5558 in descseq in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_5466(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5466,c,av);}
a=C_alloc(12);
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[3],t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5475,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=t5,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_5475(t7,((C_word*)t0)[9],C_fix(1),t3);}

/* loop2 in k5464 in loop1 in k5436 in k5558 in descseq in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void f_5475(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5475,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5485,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5517,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:595: ##sys#with-print-length-limit"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[88]);
C_word av2[4];
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t4;
av2[2]=C_fix(1000);
av2[3]=t5;
tp(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("csi.scm:605: pref"));
t5=((C_word*)t0)[8];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}}

/* k5483 in loop2 in k5464 in loop1 in k5436 in k5558 in descseq in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_5485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_5485,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[5],C_fix(1)))){
t3=C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t4=C_eqp(((C_word*)t0)[5],C_fix(2));
if(C_truep(t4)){
C_trace(C_text("csi.scm:600: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[147];
av2[4]=t3;
av2[5]=lf[148];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
C_trace(C_text("csi.scm:600: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[147];
av2[4]=t3;
av2[5]=lf[149];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}
else{
C_trace(C_text("csi.scm:603: scheme#newline"));
t3=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k5486 in k5483 in loop2 in k5464 in loop1 in k5436 in k5558 in descseq in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_5488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5488,c,av);}
C_trace(C_text("csi.scm:604: loop1"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_5443(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[5]));}

/* a5516 in loop2 in k5464 in loop1 in k5436 in k5558 in descseq in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_5517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5517,c,av);}
C_trace(C_text("csi.scm:598: fprintf"));
t2=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[150];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k5543 in loop2 in k5464 in loop1 in k5436 in k5558 in descseq in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_5545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5545,c,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
C_trace(C_text("csi.scm:605: loop2"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5475(t3,((C_word*)t0)[4],C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),C_fixnum_plus(((C_word*)t0)[6],C_fix(1)));}
else{
C_trace(C_text("csi.scm:606: loop2"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5475(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[7]);}}

/* k5558 in descseq in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_5560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_5560,c,av);}
a=C_alloc(8);
t2=C_fixnum_difference(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5438,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
C_trace(C_text("csi.scm:586: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[151];
av2[4]=((C_word*)t0)[7];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5438(2,av2);}}}

/* k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_5563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_5563,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5566,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_charp(((C_word*)t0)[3]))){
t3=C_fix(C_character_code(((C_word*)t0)[3]));
C_trace(C_text("csi.scm:611: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[152];
av2[4]=((C_word*)t0)[3];
av2[5]=t3;
av2[6]=t3;
av2[7]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}
else{
switch(((C_word*)t0)[3]){
case C_SCHEME_TRUE:
C_trace(C_text("csi.scm:612: fprintf"));
t3=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[153];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}
case C_SCHEME_FALSE:
C_trace(C_text("csi.scm:613: fprintf"));
t3=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[154];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}
default:
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
C_trace(C_text("csi.scm:614: fprintf"));
t3=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[155];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
if(C_truep(C_bwpp(((C_word*)t0)[3]))){
C_trace(C_text("csi.scm:616: fprintf"));
t3=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[156];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
if(C_truep(C_eofp(((C_word*)t0)[3]))){
C_trace(C_text("csi.scm:617: fprintf"));
t3=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[157];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=*((C_word*)lf[32]+1);
t4=C_eqp(*((C_word*)lf[32]+1),((C_word*)t0)[3]);
if(C_truep(t4)){
C_trace(C_text("csi.scm:618: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[158];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5641,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:620: fprintf"));
t6=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[161];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(8,av2);}}
else{
if(C_truep(C_i_bignump(((C_word*)t0)[3]))){
C_trace(C_text("csi.scm:626: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[162];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(8,av2);}}
else{
if(C_truep(C_unboundvaluep(((C_word*)t0)[3]))){
C_trace(C_text("csi.scm:629: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[163];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_i_flonump(((C_word*)t0)[3]))){
C_trace(C_text("csi.scm:630: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[164];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
if(C_truep(C_i_ratnump(((C_word*)t0)[3]))){
C_trace(C_text("csi.scm:631: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[165];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
if(C_truep(C_i_cplxnump(((C_word*)t0)[3]))){
if(C_truep(C_i_exactp(((C_word*)t0)[3]))){
C_trace(C_text("csi.scm:632: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[166];
av2[4]=lf[167];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
C_trace(C_text("csi.scm:632: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[166];
av2[4]=lf[168];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
C_trace(C_text("csi.scm:634: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[169];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
C_trace(C_text("csi.scm:635: descseq"));
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[170];
av2[3]=*((C_word*)lf[171]+1);
av2[4]=((C_word*)t0)[6];
av2[5]=C_fix(0);
f_5431(6,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
C_trace(C_text("csi.scm:636: descseq"));
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=lf[172];
av2[3]=*((C_word*)lf[173]+1);
av2[4]=*((C_word*)lf[174]+1);
av2[5]=C_fix(0);
f_5431(6,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5738,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("csi.scm:637: chicken.keyword#keyword?"));
t6=C_fast_retrieve(lf[234]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}}}}}}}}}}}}}}}

/* k5564 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_5566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5566,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5639 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_5641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5641,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5644,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:622: scheme#integer->char"));
t3=*((C_word*)lf[160]+1);{
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

/* k5642 in k5639 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_5644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5644,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5647,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t2)[3],C_fix(65536)))){
C_trace(C_text("csi.scm:623: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
av2[3]=lf[159];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
C_trace(C_text("csi.scm:624: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[85]+1);
tp(4,av2);}}}

/* k5645 in k5642 in k5639 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_5647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5647,c,av);}
C_trace(C_text("csi.scm:624: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[85]+1);
tp(4,av2);}}

/* k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_5738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_5738,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:639: ##sys#symbol->string/shared"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[176]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[176]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5754,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5825,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:641: ##sys#symbol-has-toplevel-binding?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[185]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[185]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5362,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_5362(((C_word*)t0)[4],((C_word*)t0)[4])
);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5837,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_5837(t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5397,tmp=(C_word)a,a+=2,tmp);
t6=t4;
f_5837(t6,(
  f_5397(((C_word*)t0)[4])
));}}}}

/* k5743 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_5745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5745,c,av);}
C_trace(C_text("csi.scm:638: fprintf"));
t2=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[175];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5752 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_5754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5754,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5757,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5822,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:644: ##sys#interned-symbol?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[183]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[183]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k5755 in k5752 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_5757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5757,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_slot(((C_word*)t2)[2],C_fix(2));
if(C_truep(C_i_nullp(t3))){
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5769,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:648: scheme#display"));
t5=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[179];
av2[3]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k5767 in k5755 in k5752 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_5769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5769,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5774,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5774(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* doloop1244 in k5767 in k5755 in k5752 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void f_5774(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5774,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5784,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:651: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[178];
av2[4]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k5782 in doloop1244 in k5767 in k5755 in k5752 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_5784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5784,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5787,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5799,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:652: ##sys#with-print-length-limit"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[88]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t2;
av2[2]=C_fix(1000);
av2[3]=t3;
tp(4,av2);}}

/* k5785 in k5782 in doloop1244 in k5767 in k5755 in k5752 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_5787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5787,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5790,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:656: scheme#newline"));
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5788 in k5785 in k5782 in doloop1244 in k5767 in k5755 in k5752 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_5790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5790,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_5774(t2,((C_word*)t0)[3],C_i_cddr(((C_word*)t0)[4]));}

/* a5798 in k5782 in doloop1244 in k5767 in k5755 in k5752 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_5799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5799,c,av);}
C_trace(C_text("csi.scm:655: scheme#write"));
t2=*((C_word*)lf[177]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5817 in k5820 in k5752 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_5819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5819,c,av);}
C_trace(C_text("csi.scm:643: fprintf"));
t2=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[182];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k5820 in k5752 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_5822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5822,c,av);}
a=C_alloc(5);
t2=(C_truep(t1)?lf[180]:lf[181]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5819,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:645: ##sys#symbol->string/shared"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[176]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[176]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k5823 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_5825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5825,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5754(2,av2);}}
else{
C_trace(C_text("csi.scm:642: scheme#display"));
t2=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[184];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void f_5837(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_5837,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:658: fprintf"));
t3=*((C_word*)lf[145]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[189];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
C_trace(C_text("csi.scm:668: descseq"));
t2=((C_word*)t0)[5];{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[190];
av2[3]=((C_word*)t0)[6];
av2[4]=((C_word*)t0)[7];
av2[5]=C_fix(0);
f_5431(6,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
C_trace(C_text("csi.scm:669: fprintf"));
t2=*((C_word*)lf[145]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[191];
av2[4]=C_u_i_car(((C_word*)t0)[2]);
av2[5]=C_u_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5944,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5948,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:673: ##sys#peek-unsigned-integer"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[194]);
C_word av2[4];
av2[0]=*((C_word*)lf[194]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:675: scheme#port?"));
t3=C_fast_retrieve(lf[233]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}}}

/* k5838 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_5840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5840,c,av);}
a=C_alloc(9);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5849,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5849(t6,((C_word*)t0)[4],((C_word*)t0)[2],t2);}

/* loop-print in k5838 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void f_5849(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5849,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_not_pair_p(t2);
t5=(C_truep(t4)?t4:C_i_nullp(t2));
if(C_truep(t5)){
C_trace(C_text("csi.scm:662: printf"));
t6=*((C_word*)lf[78]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[186];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_i_car(t2);
if(C_truep(C_i_memq(t6,t3))){
C_trace(C_text("csi.scm:664: fprintf"));
t7=*((C_word*)lf[145]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[187];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=C_i_memq(C_u_i_car(t2),t3);
if(C_truep(C_i_not(t7))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5880,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:666: fprintf"));
t9=*((C_word*)lf[145]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[188];
av2[4]=C_u_i_car(t2);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}}

/* k5878 in loop-print in k5838 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_5880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5880,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
C_trace(C_text("csi.scm:667: loop-print"));
t5=((C_word*)((C_word*)t0)[4])[1];
f_5849(t5,((C_word*)t0)[5],t2,t4);}

/* k5942 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_5944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5944,c,av);}
C_trace(C_text("csi.scm:672: descseq"));
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=*((C_word*)lf[173]+1);
av2[4]=*((C_word*)lf[174]+1);
av2[5]=C_fix(1);
f_5431(6,av2);}}

/* k5946 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_5948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5948,c,av);}
C_trace(C_text("csi.scm:673: sprintf"));
t2=*((C_word*)lf[192]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[193];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_5954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5954,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(C_truep(t2)?lf[195]:lf[196]);
C_trace(C_text("csi.scm:676: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[197];
av2[4]=t3;
av2[5]=C_slot(((C_word*)t0)[2],C_fix(7));
av2[6]=C_slot(((C_word*)t0)[2],C_fix(3));
av2[7]=C_slot(((C_word*)t0)[2],C_fix(15));
((C_proc)(void*)(*((C_word*)t4+1)))(8,av2);}}
else{
if(C_truep(C_i_not(C_blockp(((C_word*)t0)[2])))){
C_trace(C_text("csi.scm:684: fprintf"));
t2=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[198];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5991,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:685: ##sys#locative?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[232]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[232]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_5991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5991,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5998,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:687: ##sys#peek-unsigned-integer"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[194]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[194]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
if(C_truep(C_anypointerp(((C_word*)t2)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6115,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:702: ##sys#peek-unsigned-integer"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[194]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[194]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[2];
av2[3]=C_fix(0);
tp(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6121,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:703: ##sys#bytevector?"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[231]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[231]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[2];
tp(3,av2);}}}}

/* k5996 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_5998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5998,c,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=C_slot(((C_word*)t0)[2],C_fix(2));
switch(t3){
case C_fix(0):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[200];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(1):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[201];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(2):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[202];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(3):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[203];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(4):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[204];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(5):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[205];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(6):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[206];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(7):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[207];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(8):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[208];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(9):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[209];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(10):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[210];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
case C_fix(11):
C_trace(C_text("csi.scm:686: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=lf[211];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}
default:
t4=C_SCHEME_UNDEFINED;
C_trace(C_text("csi.scm:686: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[199];
av2[4]=t1;
av2[5]=t2;
av2[6]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}}

/* k6113 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_6115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6115,c,av);}
C_trace(C_text("csi.scm:702: fprintf"));
t2=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[212];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_6121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_6121,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6127,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:705: fprintf"));
t4=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[215];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6140,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:708: ##sys#lambda-info->string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[217]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[217]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[218]))){
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(t2,C_fix(1));
t5=(C_truep(t4)?lf[221]:lf[222]);
C_trace(C_text("csi.scm:711: fprintf"));
t6=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[223];
av2[4]=t2;
av2[5]=t5;
av2[6]=C_slot(((C_word*)t0)[2],C_fix(3));
((C_proc)(void*)(*((C_word*)t6+1)))(7,av2);}}
else{
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[224]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:725: fprintf"));
t3=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[227];
av2[4]=C_slot(((C_word*)t0)[2],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
if(C_truep(C_structurep(((C_word*)t0)[2]))){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_i_assq(t2,C_retrieve2(lf[140],C_text("chicken.csi#bytevector-data")));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6359,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:741: g1339"));
t5=t4;
f_6359(t5,((C_word*)t0)[3],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6424,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:745: fprintf"));
t5=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[229];
av2[4]=C_slot(((C_word*)t0)[2],C_fix(0));
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}
else{
C_trace(C_text("csi.scm:747: fprintf"));
t2=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[230];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}}}}}

/* k6125 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_6127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6127,c,av);}
C_trace(C_text("csi.scm:706: hexdump"));
f_6615(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],*((C_word*)lf[214]+1),((C_word*)t0)[5]);}

/* k6138 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_6140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6140,c,av);}
C_trace(C_text("csi.scm:708: fprintf"));
t2=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[216];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6150 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_6152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6152,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6155,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:713: fprintf"));
t3=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[220];
av2[4]=C_slot(((C_word*)t0)[2],C_fix(4));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6153 in k6150 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_6155(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6155,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_slot(((C_word*)t2)[2],C_fix(1));
t4=C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6166,a[2]=t4,a[3]=((C_word*)t2)[3],a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_6166(t8,((C_word*)t2)[4],C_fix(0));}

/* doloop1282 in k6153 in k6150 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void f_6166(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_6166,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6174,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[101]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6195,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6204,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_6204(t10,t6,t4);}}

/* g1288 in doloop1282 in k6153 in k6150 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void f_6174(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_6174,3,t0,t1,t2);}
C_trace(C_text("csi.scm:721: fprintf"));
t3=*((C_word*)lf[145]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[219];
av2[4]=C_slot(t2,C_fix(0));
av2[5]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k6193 in doloop1282 in k6153 in k6150 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void C_ccall f_6195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6195,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6166(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1287 in doloop1282 in k6153 in k6150 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void f_6204(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6204,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6214,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:719: g1288"));
t4=((C_word*)t0)[3];
f_6174(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6212 in for-each-loop1287 in doloop1282 in k6153 in k6150 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void C_ccall f_6214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6214,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6204(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6247 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_6249(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6249,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6250,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[3],a[5]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_i_check_list_2(t3,lf[101]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6318,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6318(t8,((C_word*)t0)[4],t3);}

/* g1310 in k6247 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void f_6250(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_6250,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=C_mutate(((C_word *)t0)+5,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6254,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:728: fprintf"));
t6=*((C_word*)lf[145]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[226];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6252 in g1310 in k6247 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_6254(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6254,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_slot(((C_word*)t2)[2],C_fix(2));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6263,a[2]=t5,a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6263(t7,((C_word*)t2)[5],t3);}

/* loop in k6252 in g1310 in k6247 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void f_6263(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_6263,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6273,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_caar(t2);
t5=C_eqp(((C_word*)t0)[3],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6286,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6291,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:732: ##sys#with-print-length-limit"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[88]);
C_word av2[4];
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t6;
av2[2]=C_fix(100);
av2[3]=t7;
tp(4,av2);}}
else{
C_trace(C_text("csi.scm:737: loop"));
t9=t1;
t10=C_i_cddr(t2);
t1=t9;
t2=t10;
goto loop;}}}

/* k6271 in loop in k6252 in g1310 in k6247 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void C_ccall f_6273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6273,c,av);}
C_trace(C_text("csi.scm:737: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_6263(t2,((C_word*)t0)[3],C_i_cddr(((C_word*)t0)[4]));}

/* k6284 in loop in k6252 in g1310 in k6247 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void C_ccall f_6286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6286,c,av);}
C_trace(C_text("csi.scm:736: scheme#newline"));
t2=*((C_word*)lf[8]+1);{
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

/* a6290 in loop in k6252 in g1310 in k6247 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void C_ccall f_6291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6291,c,av);}
C_trace(C_text("csi.scm:735: fprintf"));
t2=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[225];
av2[4]=C_i_cdar(((C_word*)t0)[3]);
av2[5]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* for-each-loop1309 in k6247 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void f_6318(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6318,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6328,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:726: g1310"));
t4=((C_word*)t0)[3];
f_6250(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6326 in for-each-loop1309 in k6247 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_6328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6328,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6318(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* g1339 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void f_6359(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,0,3)))){
C_save_and_reclaim_args((void *)trf_6359,3,t0,t1,t2);}
a=C_alloc(19);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6367,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_cdr(t2);
t9=C_i_check_list_2(t8,lf[134]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6380,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6386,a[2]=t6,a[3]=t12,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_6386(t14,t10,t8);}

/* k6365 in g1339 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_6367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6367,c,av);}{
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

/* k6378 in g1339 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_6380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6380,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,C_fix(0));
C_trace(C_text("csi.scm:743: scheme#append"));
t3=*((C_word*)lf[228]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* map-loop1344 in g1339 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void f_6386(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6386,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:743: g1350"));
t4=*((C_word*)lf[56]+1);{
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

/* k6409 in map-loop1344 in g1339 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_6411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6411,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6386(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6422 in k6119 in k5989 in k5952 in k5835 in k5736 in k5561 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_6424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6424,c,av);}
C_trace(C_text("csi.scm:746: descseq"));
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_SCHEME_FALSE;
av2[3]=*((C_word*)lf[173]+1);
av2[4]=*((C_word*)lf[174]+1);
av2[5]=C_fix(1);
f_5431(6,av2);}}

/* k6450 in chicken.csi#describe in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_6452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6452,c,av);}
C_trace(C_text("csi.scm:608: fprintf"));
t2=*((C_word*)lf[145]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[235];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.csi#dump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void f_6460(C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_6460,3,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6462,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6575,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6580,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace(C_text("csi.scm:755: def-len1379"));
t7=t6;
f_6580(t7,t1);}
else{
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
C_trace(C_text("csi.scm:755: def-out1380"));
t9=t5;
f_6575(t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_u_i_cdr(t8);
C_trace(C_text("csi.scm:755: body1377"));
t11=t4;
f_6462(t11,t1,t7,t9);}}}

/* body1377 in chicken.csi#dump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void f_6462(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_6462,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6465,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_immp(((C_word*)t0)[2]))){
C_trace(C_text("csi.scm:759: ##sys#error"));
t5=*((C_word*)lf[34]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[238];
av2[3]=lf[239];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6487,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:760: ##sys#bytevector?"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[231]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[231]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* bestlen in body1377 in chicken.csi#dump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void f_6465(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6465,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
C_trace(C_text("csi.scm:758: scheme#min"));
t3=*((C_word*)lf[237]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6485 in body1377 in chicken.csi#dump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_6487(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_6487,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:760: bestlen"));
t3=((C_word*)t0)[5];
f_6465(t3,t2,C_block_size(((C_word*)t0)[3]));}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=C_slot(((C_word*)t0)[3],C_fix(0));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6514,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_block_size(t2);
C_trace(C_text("csi.scm:763: bestlen"));
t5=((C_word*)t0)[5];
f_6465(t5,t3,C_fixnum_difference(t4,C_fix(1)));}
else{
t2=C_immp(((C_word*)t0)[3]);
t3=C_i_not(t2);
t4=(C_truep(t3)?C_anypointerp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t4)){
C_trace(C_text("csi.scm:765: hexdump"));
f_6615(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(32),*((C_word*)lf[240]+1),((C_word*)t0)[4]);}
else{
t5=C_structurep(((C_word*)t0)[3]);
t6=(C_truep(t5)?C_i_assq(C_slot(((C_word*)t0)[3],C_fix(0)),C_retrieve2(lf[140],C_text("chicken.csi#bytevector-data"))):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_slot(((C_word*)t0)[3],C_fix(1));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6547,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:768: bestlen"));
t9=((C_word*)t0)[5];
f_6465(t9,t8,C_block_size(t7));}
else{
C_trace(C_text("csi.scm:769: ##sys#error"));
t7=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[238];
av2[3]=lf[241];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}}}}

/* k6492 in k6485 in body1377 in chicken.csi#dump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_6494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6494,c,av);}
C_trace(C_text("csi.scm:760: hexdump"));
f_6615(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[214]+1),((C_word*)t0)[4]);}

/* k6512 in k6485 in body1377 in chicken.csi#dump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_6514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6514,c,av);}
C_trace(C_text("csi.scm:763: hexdump"));
f_6615(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[214]+1),((C_word*)t0)[4]);}

/* k6545 in k6485 in body1377 in chicken.csi#dump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_6547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6547,c,av);}
C_trace(C_text("csi.scm:768: hexdump"));
f_6615(((C_word*)t0)[2],((C_word*)t0)[3],t1,*((C_word*)lf[214]+1),((C_word*)t0)[4]);}

/* def-out1380 in chicken.csi#dump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void f_6575(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6575,3,t0,t1,t2);}
C_trace(C_text("csi.scm:755: body1377"));
t3=((C_word*)t0)[2];
f_6462(t3,t1,t2,*((C_word*)lf[85]+1));}

/* def-len1379 in chicken.csi#dump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void f_6580(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_6580,2,t0,t1);}
C_trace(C_text("csi.scm:755: def-out1380"));
t2=((C_word*)t0)[2];
f_6575(t2,t1,C_SCHEME_FALSE);}

/* chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void f_6615(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,6)))){
C_save_and_reclaim_args((void *)trf_6615,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6618,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6648,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t4,a[6]=t2,a[7]=t6,tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_6648(t10,t1,C_fix(0));}

/* justify in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void f_6618(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6618,5,t1,t2,t3,t4,t5);}
a=C_alloc(5);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6622,a[2]=t3,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("##sys#number->string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[242]);
C_word av2[4];
av2[0]=*((C_word*)lf[242]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k6620 in justify in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_6622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6622,c,av);}
a=C_alloc(4);
t2=C_u_i_string_length(t1);
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6636,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:782: make-string"));
t4=*((C_word*)lf[117]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fixnum_difference(((C_word*)t0)[2],t2);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6634 in k6620 in justify in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_6636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6636,c,av);}
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void f_6648(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_6648,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6658,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6816,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:787: justify"));
f_6618(t4,t2,C_fix(4),C_fix(10),C_make_character(32));}}

/* k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_6658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6658,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6661,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#write-char/port"));
t3=C_fast_retrieve(lf[243]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(58);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_6661(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_6661,c,av);}
a=C_alloc(19);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6664,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],tmp=(C_word)a,a+=9,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6733,a[2]=((C_word*)t2)[6],a[3]=((C_word*)t2)[5],a[4]=t5,a[5]=((C_word*)t2)[9],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_6733(t7,t3,C_fix(0),((C_word*)t2)[4]);}

/* k6662 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_6664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6664,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6667,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#write-char/port"));
t3=C_fast_retrieve(lf[243]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6665 in k6662 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_6667(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_6667,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6670,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6682,a[2]=((C_word*)t2)[6],a[3]=t5,a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_6682(t7,t3,C_fix(0),((C_word*)t2)[4]);}

/* k6668 in k6665 in k6662 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_6670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6670,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("##sys#write-char/port"));
t3=C_fast_retrieve(lf[243]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6671 in k6668 in k6665 in k6662 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_6673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6673,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6648(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(16)));}

/* doloop1427 in k6665 in k6662 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void f_6682(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6682,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6695,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("csi.scm:804: ref"));
t7=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k6693 in doloop1427 in k6665 in k6662 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_6695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6695,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6698,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_greater_or_equal_p(t1,C_fix(32));
t4=(C_truep(t3)?C_fixnum_lessp(t1,C_fix(128)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6719,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:806: scheme#integer->char"));
t6=*((C_word*)lf[160]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
C_trace(C_text("##sys#write-char/port"));
t5=C_fast_retrieve(lf[243]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=C_make_character(46);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k6696 in k6693 in doloop1427 in k6665 in k6662 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_6698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6698,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6682(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k6717 in k6693 in doloop1427 in k6665 in k6662 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_6719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6719,c,av);}
C_trace(C_text("##sys#write-char/port"));
t2=C_fast_retrieve(lf[243]);{
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

/* doloop1426 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void f_6733(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_6733,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t6=C_fixnum_modulo(((C_word*)t0)[2],C_fix(16));
t7=C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_fixnum_difference(C_fix(16),t6);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6767,a[2]=t10,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_6767(t12,t1,t8);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6787,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("##sys#write-char/port"));
t7=C_fast_retrieve(lf[243]);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_make_character(32);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* doloop1435 in doloop1426 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void f_6767(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6767,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6777,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:797: display"));
t5=*((C_word*)lf[94]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[244];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k6775 in doloop1435 in doloop1426 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_6777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6777,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6767(t2,((C_word*)t0)[3],C_fixnum_difference(((C_word*)t0)[4],C_fix(1)));}

/* k6785 in doloop1426 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_6787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_6787,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6805,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6809,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:799: ref"));
t5=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}

/* k6788 in k6785 in doloop1426 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_6790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6790,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6733(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k6803 in k6785 in doloop1426 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_6805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6805,c,av);}
C_trace(C_text("csi.scm:799: display"));
t2=*((C_word*)lf[94]+1);{
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

/* k6807 in k6785 in doloop1426 in k6659 in k6656 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_6809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6809,c,av);}
C_trace(C_text("csi.scm:799: justify"));
f_6618(((C_word*)t0)[3],t1,C_fix(2),C_fix(16),C_make_character(48));}

/* k6814 in doloop1416 in chicken.csi#hexdump in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_6816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6816,c,av);}
C_trace(C_text("csi.scm:787: display"));
t2=*((C_word*)lf[94]+1);{
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

/* chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void f_6818(C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_6818,2,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6821,tmp=(C_word)a,a+=2,tmp);
t4=C_fast_retrieve(lf[96]);
t5=(C_truep(C_fast_retrieve(lf[96]))?C_fast_retrieve(lf[96]):C_SCHEME_END_OF_LIST);
t6=C_i_length(t5);
t7=(C_truep(C_u_i_memq(t2,t5))?t2:C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6844,a[2]=t6,a[3]=t3,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t7)){
t9=t8;
f_6844(t9,t7);}
else{
t9=C_fixnum_greaterp(t6,C_fix(0));
t10=t8;
f_6844(t10,(C_truep(t9)?C_i_list_ref(t5,C_fixnum_difference(t6,C_fix(1))):C_SCHEME_FALSE));}}

/* prin1 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void f_6821(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6821,2,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6827,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:818: ##sys#with-print-length-limit"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[88]);
C_word av2[4];
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t1;
av2[2]=C_fix(100);
av2[3]=t3;
tp(4,av2);}}

/* a6826 in prin1 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_6827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6827,c,av);}
C_trace(C_text("csi.scm:821: ##sys#print"));
t2=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[85]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void f_6844(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_6844,2,t0,t1);}
a=C_alloc(6);
t2=C_mutate(&lf[11] /* (set! chicken.csi#selected-frame ...) */,t1);
t3=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6853,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_6853(t7,((C_word*)t0)[4],((C_word*)t0)[5],t3);}

/* doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void f_6853(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_6853,4,t0,t1,t2,t3);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_eqp(C_retrieve2(lf[11],C_text("chicken.csi#selected-frame")),t4);
t6=C_slot(t4,C_fix(1));
t7=C_slot(t4,C_fix(2));
t8=C_i_structurep(t7,lf[99]);
t9=(C_truep(t8)?C_slot(t7,C_fix(1)):t7);
t10=*((C_word*)lf[85]+1);
t11=*((C_word*)lf[85]+1);
t12=C_i_check_port_2(*((C_word*)lf[85]+1),C_fix(2),C_SCHEME_TRUE,lf[86]);
t13=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6884,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t5,a[7]=t8,a[8]=((C_word*)t0)[3],a[9]=t7,a[10]=t6,a[11]=t9,a[12]=t10,a[13]=t4,tmp=(C_word)a,a+=14,tmp);
if(C_truep(t5)){
C_trace(C_text("csi.scm:837: ##sys#print"));
t14=*((C_word*)lf[87]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=C_make_character(42);
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[85]+1);
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}
else{
C_trace(C_text("csi.scm:837: ##sys#print"));
t14=*((C_word*)lf[87]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=C_make_character(32);
av2[3]=C_SCHEME_FALSE;
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}}

/* k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_6884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6884,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6887,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:837: ##sys#print"));
t3=*((C_word*)lf[87]+1);{
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
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_6887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6887,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6890,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:837: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t3;
av2[2]=C_make_character(58);
av2[3]=((C_word*)t2)[12];
tp(4,av2);}}

/* k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_6890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6890,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6893,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(((C_word*)t2)[7])?C_i_pairp(C_slot(((C_word*)t2)[9],C_fix(2))):C_SCHEME_FALSE);
if(C_truep(t4)){
C_trace(C_text("csi.scm:837: ##sys#print"));
t5=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[250];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[12];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
C_trace(C_text("csi.scm:837: ##sys#print"));
t5=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[251];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[12];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_6893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6893,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6896,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:837: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t3;
av2[2]=C_make_character(9);
av2[3]=((C_word*)t2)[12];
tp(4,av2);}}

/* k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_6896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6896,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6899,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("csi.scm:837: ##sys#print"));
t4=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(((C_word*)t2)[13],C_fix(0));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[12];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_6899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6899,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("csi.scm:837: ##sys#print"));
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[249];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[12];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_6902(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_6902,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6905,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[11])){
t3=*((C_word*)lf[85]+1);
t4=*((C_word*)lf[85]+1);
t5=C_i_check_port_2(*((C_word*)lf[85]+1),C_fix(2),C_SCHEME_TRUE,lf[86]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7045,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:842: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t6;
av2[2]=C_make_character(91);
av2[3]=*((C_word*)lf[85]+1);
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6905(2,av2);}}}

/* k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void C_ccall f_6905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6905,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[10])){
C_trace(C_text("csi.scm:843: prin1"));
f_6821(t2,((C_word*)t0)[10]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6908(2,av2);}}}

/* k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void C_ccall f_6908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6908,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6911,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:844: newline"));
t3=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in ... */
static void C_ccall f_6911(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_6911,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6914,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t2)[6])?((C_word*)t2)[7]:C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6927,a[2]=((C_word*)t2)[8],a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=6,tmp);
t6=C_slot(((C_word*)t2)[9],C_fix(2));
t7=C_slot(((C_word*)t2)[9],C_fix(3));
t8=C_i_check_list_2(t6,lf[101]);
t9=C_i_check_list_2(t7,lf[101]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7001,a[2]=t11,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_7001(t13,t3,t6,t7);}
else{
t5=((C_word*)((C_word*)t2)[2])[1];
f_6853(t5,((C_word*)t2)[3],C_u_i_cdr(((C_word*)t2)[4]),C_fixnum_difference(((C_word*)t2)[5],C_fix(1)));}}

/* k6912 in k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in ... */
static void C_ccall f_6914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6914,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6853(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),C_fixnum_difference(((C_word*)t0)[5],C_fix(1)));}

/* g1510 in k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in ... */
static void f_6927(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6927,4,t0,t1,t2,t3);}
a=C_alloc(3);
t4=C_mutate(((C_word *)t0)+3,t3);
t5=C_mutate(((C_word *)t0)+5,t2);
t6=C_mutate(((C_word *)t0)+4,t1);
if(C_truep(C_i_nullp(((C_word*)t0)[5]))){
t7=C_SCHEME_UNDEFINED;
t8=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6937,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:849: display"));
t8=*((C_word*)lf[94]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[247];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k6935 in g1510 in k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in ... */
static void C_ccall f_6937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6937,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6942,a[2]=t4,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6942(t6,((C_word*)t2)[4],C_fix(0),((C_word*)t2)[5]);}

/* doloop1523 in k6935 in g1510 in k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in ... */
static void f_6942(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_6942,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=*((C_word*)lf[85]+1);
t5=*((C_word*)lf[85]+1);
t6=C_i_check_port_2(*((C_word*)lf[85]+1),C_fix(2),C_SCHEME_TRUE,lf[86]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6955,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("csi.scm:853: ##sys#print"));
t8=*((C_word*)lf[87]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[246];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[85]+1);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* k6953 in doloop1523 in k6935 in g1510 in k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in ... */
static void C_ccall f_6955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6955,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6958,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:853: ##sys#print"));
t3=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[5]);
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6956 in k6953 in doloop1523 in k6935 in g1510 in k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in ... */
static void C_ccall f_6958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6958,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6961,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("csi.scm:853: ##sys#print"));
t4=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[245];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k6959 in k6956 in k6953 in doloop1523 in k6935 in g1510 in k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in ... */
static void C_ccall f_6961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6961,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:854: prin1"));
f_6821(t2,C_slot(((C_word*)t0)[7],((C_word*)t0)[4]));}

/* k6962 in k6959 in k6956 in k6953 in doloop1523 in k6935 in g1510 in k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in ... */
static void C_ccall f_6964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6964,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6967,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:855: newline"));
t3=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6965 in k6962 in k6959 in k6956 in k6953 in doloop1523 in k6935 in g1510 in k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in ... */
static void C_ccall f_6967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6967,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t2)[2])[1];
f_6942(t3,((C_word*)t2)[3],C_fixnum_plus(((C_word*)t2)[4],C_fix(1)),C_u_i_cdr(((C_word*)t2)[5]));}

/* for-each-loop1509 in k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in ... */
static void f_7001(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7001,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7011,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:846: g1510"));
t7=((C_word*)t0)[3];
f_6927(t7,t6,C_slot(t2,C_fix(0)),C_slot(t3,C_fix(0)));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k7009 in for-each-loop1509 in k6909 in k6906 in k6903 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in ... */
static void C_ccall f_7011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7011,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7001(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7043 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void C_ccall f_7045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7045,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7048,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:842: ##sys#print"));
t3=*((C_word*)lf[87]+1);{
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

/* k7046 in k7043 in k6900 in k6897 in k6894 in k6891 in k6888 in k6885 in k6882 in doloop1472 in k6842 in chicken.csi#show-frameinfo in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void C_ccall f_7048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7048,c,av);}
C_trace(C_text("csi.scm:842: ##sys#print"));
t2=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[248];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7101 in k4790 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_7103(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7103,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
C_trace(C_text("csi.scm:866: display"));
t3=*((C_word*)lf[94]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[95];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=C_i_length(C_fast_retrieve(lf[96]));
t4=C_fixnum_plus(((C_word*)t2)[3],C_fix(1));
t5=C_fixnum_difference(t3,t4);
t6=C_i_list_ref(C_fast_retrieve(lf[96]),t5);
t7=C_mutate(&lf[11] /* (set! chicken.csi#selected-frame ...) */,t6);
C_trace(C_text("csi.scm:872: show-frameinfo"));
f_6818(((C_word*)t2)[2],C_retrieve2(lf[11],C_text("chicken.csi#selected-frame")));}}

/* k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void f_7160(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7160,2,t0,t1);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7162,a[2]=C_SCHEME_UNDEFINED,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7191,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:893: call/cc"));
t4=*((C_word*)lf[103]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* compare in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void f_7162(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_7162,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+2,t1);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7171,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t6=C_i_string_length(((C_word*)t0)[3]);
t7=C_i_string_length(t4);
C_trace(C_text("csi.scm:891: scheme#substring"));
t8=*((C_word*)lf[16]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t5;
av2[2]=t4;
av2[3]=C_fix(0);
av2[4]=C_i_fixnum_min(t6,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k7169 in compare in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_7171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7171,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_string_equal_p(((C_word*)t2)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_7191(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7191,c,av);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7194,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7213,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_7213(t7,t1,((C_word*)t0)[4]);}

/* fail in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void f_7194(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7194,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7198,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:896: display"));
t4=*((C_word*)lf[94]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7196 in fail in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_7198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7198,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7201,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:897: newline"));
t3=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7199 in k7196 in fail in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_7201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7201,c,av);}
t2=((C_word*)t0)[2];
t3=*((C_word*)lf[32]+1);
C_trace(C_text("csi.scm:898: return"));
t4=((C_word*)t2)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t2)[3];
av2[2]=*((C_word*)lf[32]+1);
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void f_7213(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(20,0,4)))){
C_save_and_reclaim_args((void *)trf_7213,3,t0,t1,t2);}
a=C_alloc(20);
if(C_truep(C_i_nullp(t2))){
C_trace(C_text("csi.scm:900: fail"));
t3=((C_word*)t0)[2];
f_7194(t3,t1,lf[98]);}
else{
t3=C_i_car(t2);
t4=C_eqp(C_retrieve2(lf[11],C_text("chicken.csi#selected-frame")),t3);
t5=C_slot(t3,C_fix(2));
t6=C_i_structurep(t5,lf[99]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7238,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(t4)?t6:C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7247,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t5,C_fix(2));
t11=C_slot(t5,C_fix(3));
t12=C_i_check_list_2(t10,lf[101]);
t13=C_i_check_list_2(t11,lf[101]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7323,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7332,a[2]=t16,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t18=((C_word*)t16)[1];
f_7332(t18,t14,t10,t11);}
else{
t19=t1;
t20=C_u_i_cdr(t2);
t1=t19;
t2=t20;
goto loop;}}}

/* k7236 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_7238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7238,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7213(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* g1607 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void f_7247(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_7247,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7253,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7253(t7,t1,C_fix(0),t2);}

/* doloop1620 in g1607 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void f_7253(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7253,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7263,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7275,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("csi.scm:912: compare"));
t6=((C_word*)t0)[5];
f_7162(t6,t5,C_i_car(t3));}}

/* k7261 in doloop1620 in g1607 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_7263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7263,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7253(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),C_u_i_cdr(((C_word*)t0)[5]));}

/* k7273 in doloop1620 in g1607 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_7275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7275,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("csi.scm:913: display"));
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[100];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)((C_word*)t0)[7])[1];
f_7253(t2,((C_word*)t0)[8],C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),C_u_i_cdr(((C_word*)t0)[6]));}}

/* k7276 in k7273 in doloop1620 in g1607 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_7278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7278,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7281,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:914: display"));
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[6]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7279 in k7276 in k7273 in doloop1620 in g1607 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_7281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7281,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7284,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:915: newline"));
t3=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7282 in k7279 in k7276 in k7273 in doloop1620 in g1607 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_7284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7284,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7287,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_slot(((C_word*)t2)[4],((C_word*)t2)[5]);
t5=C_a_i_list1(&a,1,t4);
C_trace(C_text("csi.scm:916: history-add"));
t6=C_retrieve2(lf[31],C_text("chicken.csi#history-add"));
f_4142(t6,t3,t5);}

/* k7285 in k7282 in k7279 in k7276 in k7273 in doloop1620 in g1607 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_7287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7287,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("csi.scm:917: return"));
t3=((C_word*)t2)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=C_slot(((C_word*)t2)[4],((C_word*)t2)[5]);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k7321 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_7323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7323,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:920: ##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t2;
av2[2]=lf[102];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k7328 in k7321 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_7330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7330,c,av);}
C_trace(C_text("csi.scm:920: fail"));
t2=((C_word*)t0)[2];
f_7194(t2,((C_word*)t0)[3],t1);}

/* for-each-loop1606 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void f_7332(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7332,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7342,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:907: g1607"));
t7=((C_word*)t0)[3];
f_7247(t7,t6,C_slot(t2,C_fix(0)),C_slot(t3,C_fix(0)));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k7340 in for-each-loop1606 in doloop1592 in a7190 in k7158 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_7342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7342,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7332(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7383 in k4803 in chicken.csi#default-evaluator in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_7385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7385,c,av);}
t2=((C_word*)t0)[2];
f_7160(t2,C_SCHEME_FALSE);}

/* chicken.csi#member* in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void f_7390(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7390,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7396,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7396(t7,t1,t3);}

/* loop in chicken.csi#member* in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void f_7396(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_7396,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7408,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7408(t6,t1,((C_word*)t0)[3]);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* find in loop in chicken.csi#member* in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void f_7408(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7408,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
C_trace(C_text("csi.scm:944: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_7396(t3,t1,C_i_cdr(((C_word*)t0)[3]));}
else{
t3=C_i_car(t2);
t4=C_i_car(((C_word*)t0)[3]);
if(C_truep(C_i_equalp(t3,t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
C_trace(C_text("csi.scm:946: find"));
t6=t1;
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}}

/* chicken.csi#canonicalize-args in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void f_7445(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7445,2,t1,t2);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7451,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_7451(t6,t1,t2);}

/* loop in chicken.csi#canonicalize-args in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void f_7451(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7451,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep((C_truep(C_i_equalp(t3,lf[258]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[259]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[260]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[261]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[262]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(2));
t6=(C_truep(t5)?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(t3,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t6)){
if(C_truep(C_i_memq(C_i_string_ref(t3,C_fix(1)),C_retrieve2(lf[255],C_text("chicken.csi#constant1696"))))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7486,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:967: loop"));
t10=t7;
t11=C_u_i_cdr(t2);
t1=t10;
t2=t11;
goto loop;}
else{
C_trace(C_text("csi.scm:968: ##sys#error"));
t7=*((C_word*)lf[34]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[263];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7500,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greaterp(C_u_i_string_length(t3),C_fix(2)))){
t8=C_i_string_ref(t3,C_fix(0));
t9=t7;
f_7500(t9,(C_truep(C_u_i_char_equalp(C_make_character(45),t8))?C_i_not(C_i_member(t3,lf[266])):C_SCHEME_FALSE));}
else{
t8=t7;
f_7500(t8,C_SCHEME_FALSE);}}}}}

/* k7484 in loop in chicken.csi#canonicalize-args in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_7486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7486,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7498 in loop in chicken.csi#canonicalize-args in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void f_7500(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7500,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_string_ref(((C_word*)t0)[2],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(58),t2))){
C_trace(C_text("csi.scm:973: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7451(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7515,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7583,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:974: scheme#substring"));
t5=*((C_word*)lf[16]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7590,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:978: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7451(t3,t2,C_u_i_cdr(((C_word*)t0)[5]));}}

/* k7513 in k7498 in loop in chicken.csi#canonicalize-args in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_7515(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_7515,c,av);}
a=C_alloc(19);
t2=((C_word*)t0)[2];
t3=C_retrieve2(lf[255],C_text("chicken.csi#constant1696"));
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7630,tmp=(C_word)a,a+=2,tmp);
t5=(
  f_7630(t1)
);
if(C_truep(t5)){
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7536,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[5],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7544,a[2]=t8,a[3]=t12,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_7544(t14,t10,t1);}
else{
C_trace(C_text("csi.scm:977: ##sys#error"));
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t2)[4];
av2[2]=lf[264];
av2[3]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k7534 in k7513 in k7498 in loop in chicken.csi#canonicalize-args in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_7536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7536,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7540,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:976: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7451(t3,t2,C_u_i_cdr(((C_word*)t0)[4]));}

/* k7538 in k7534 in k7513 in k7498 in loop in chicken.csi#canonicalize-args in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_7540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7540,c,av);}
C_trace(C_text("csi.scm:976: scheme#append"));
t2=*((C_word*)lf[228]+1);{
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

/* map-loop1719 in k7513 in k7498 in loop in chicken.csi#canonicalize-args in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void f_7544(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_7544,3,t0,t1,t2);}
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

/* k7581 in k7498 in loop in chicken.csi#canonicalize-args in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_7583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7583,c,av);}
C_trace(C_text("##sys#string->list"));
t2=C_fast_retrieve(lf[265]);{
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

/* k7588 in k7498 in loop in chicken.csi#canonicalize-args in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_7590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7590,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7513 in k7498 in loop in chicken.csi#canonicalize-args in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static C_word f_7630(C_word t1){
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
if(C_truep(C_i_memq(t3,C_retrieve2(lf[255],C_text("chicken.csi#constant1696"))))){
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* loop in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void f_7666(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,0,4)))){
C_save_and_reclaim_args((void *)trf_7666,4,t0,t1,t2,t3);}
a=C_alloc(58);
if(C_truep(C_i_nequalp(t2,t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[293];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_string_ref(((C_word*)t0)[2],t2);
if(C_truep(C_u_i_char_whitespacep(t4))){
t5=C_a_i_fixnum_plus(&a,2,t2,C_fix(1));
C_trace(C_text("csi.scm:1001: loop"));
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
C_trace(C_text("csi.scm:1003: loop"));
t9=t1;
t10=t2;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
C_trace(C_text("csi.scm:1004: scheme#substring"));
t7=*((C_word*)lf[16]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}}}}

/* k7712 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_7714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7714,c,av);}
a=C_alloc(6);
t2=C_i_string_length(t1);
t3=(C_truep(C_i_fixnum_positivep(t2))?C_u_i_char_equalp(C_make_character(40),C_i_string_ref(t1,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7728,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1010: scheme#call-with-current-continuation"));
t6=*((C_word*)lf[103]+1);{
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
C_trace(C_text("csi.scm:1013: scheme#string->symbol"));
t4=*((C_word*)lf[292]+1);{
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

/* k7721 in k7712 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in ... */
static void C_ccall f_7723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7723,c,av);}
C_trace(C_text("csi.scm:1010: g1794"));
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a7727 in k7712 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in ... */
static void C_ccall f_7728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_7728,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7734,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7746,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:1010: chicken.condition#with-exception-handler"));
t5=C_fast_retrieve(lf[291]);{
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

/* a7733 in a7727 in k7712 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in ... */
static void C_ccall f_7734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7734,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7740,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1010: k1791"));
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a7739 in a7733 in a7727 in k7712 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in ... */
static void C_ccall f_7740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7740,c,av);}
C_trace(C_text("csi.scm:1011: ##sys#error"));
t2=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[288];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a7745 in a7727 in k7712 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in ... */
static void C_ccall f_7746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7746,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7752,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7758,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1010: ##sys#call-with-values"));{
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

/* a7751 in a7745 in a7727 in k7712 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in ... */
static void C_ccall f_7752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7752,c,av);}
C_trace(C_text("csi.scm:1012: chicken.port#with-input-from-string"));
t2=C_fast_retrieve(lf[289]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=*((C_word*)lf[290]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a7757 in a7745 in a7727 in k7712 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in ... */
static void C_ccall f_7758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_7758,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7764,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1010: k1791"));
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

/* a7763 in a7757 in a7745 in a7727 in k7712 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in ... */
static void C_ccall f_7764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7764,c,av);}{
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

/* k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_7785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7785,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7788,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],a[4]=C_SCHEME_UNDEFINED,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8767,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1017: chicken.process-context#command-line-arguments"));
t4=C_fast_retrieve(lf[302]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_7788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7788,c,av);}
a=C_alloc(5);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_mutate(((C_word *)t0)+2,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7791,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1019: member*"));
f_7390(t5,lf[368],((C_word*)((C_word*)t0)[2])[1]);}

/* k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in ... */
static void C_ccall f_7791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7791,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7794,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1020: member*"));
f_7390(t4,lf[367],((C_word*)((C_word*)t2)[2])[1]);}

/* k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in ... */
static void C_ccall f_7794(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7794,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7797,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8667,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t1);
t6=C_i_pairp(t5);
t7=C_i_not(t6);
if(C_truep(t7)){
if(C_truep(t7)){
C_trace(C_text("csi.scm:1025: ##sys#error"));
t8=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[365];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t8=t4;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_8667(2,av2);}}}
else{
t8=C_i_cadr(t1);
t9=C_i_string_length(t8);
t10=C_eqp(t9,C_fix(0));
if(C_truep(t10)){
if(C_truep(t10)){
C_trace(C_text("csi.scm:1025: ##sys#error"));
t11=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t4;
av2[2]=lf[365];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t11=t4;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_8667(2,av2);}}}
else{
t11=C_u_i_cdr(t1);
t12=C_i_string_ref(C_u_i_car(t11),C_fix(0));
if(C_truep(C_u_i_char_equalp(C_make_character(45),t12))){
C_trace(C_text("csi.scm:1025: ##sys#error"));
t13=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t13;
av2[1]=t4;
av2[2]=lf[365];
((C_proc)(void*)(*((C_word*)t13+1)))(3,av2);}}
else{
t13=t4;{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_SCHEME_UNDEFINED;
f_8667(2,av2);}}}}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8750,a[2]=((C_word*)t2)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8763,a[2]=t4,a[3]=((C_word*)t2)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:1035: canonicalize-args"));
f_7445(t5,((C_word*)t2)[5]);}}

/* k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void f_7797(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_7797,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7800,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1038: member*"));
f_7390(t2,lf[362],((C_word*)((C_word*)t0)[3])[1]);}

/* k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_7800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7800,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7803,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t2)[4],a[7]=((C_word*)t2)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t2)[2])){
t4=t3;
f_7803(t4,((C_word*)t2)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8661,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:1039: member*"));
f_7390(t4,lf[361],((C_word*)((C_word*)t2)[3])[1]);}}

/* k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void f_7803(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_7803,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7806,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1040: member*"));
f_7390(t3,lf[360],((C_word*)((C_word*)t0)[4])[1]);}

/* k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_7806(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_7806,c,av);}
a=C_alloc(23);
t2=((C_word*)t0)[2];
t3=(C_truep(((C_word*)t2)[2])?((C_word*)t2)[2]:(C_truep(t1)?t1:((C_word*)t2)[3]));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7811,a[2]=((C_word*)t2)[4],tmp=(C_word)a,a+=3,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7922,tmp=(C_word)a,a+=2,tmp));
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7979,a[2]=((C_word*)t2)[5],a[3]=t7,a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[4],a[7]=((C_word*)t2)[3],a[8]=t3,a[9]=((C_word*)t2)[7],a[10]=t5,tmp=(C_word)a,a+=11,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8649,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1067: member*"));
f_7390(t11,lf[359],((C_word*)((C_word*)t2)[4])[1]);}

/* collect-options in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void f_7811(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7811,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7817,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_7817(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in collect-options in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void f_7817(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_7817,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_member(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7825,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1044: g1885"));
t5=t4;
f_7825(t5,t1,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g1885 in loop in collect-options in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void f_7825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_7825,3,t0,t1,t2);}
a=C_alloc(4);
t3=((C_word*)t0)[2];
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
C_trace(C_text("csi.scm:1047: ##sys#error"));
t5=*((C_word*)lf[34]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[268];
av2[3]=((C_word*)t3)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t5=C_i_cadr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7846,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_u_i_cdr(t2);
C_trace(C_text("csi.scm:1048: loop"));
t8=((C_word*)((C_word*)t3)[3])[1];
f_7817(t8,t6,C_u_i_cdr(t7));}}

/* k7844 in g1885 in loop in collect-options in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void C_ccall f_7846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7846,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7860 in k8322 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in ... */
static void C_ccall f_7862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7862,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7865,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=C_a_i_list2(&a,2,t1,lf[315]);
C_trace(C_text("csi.scm:1052: chicken.pathname#make-pathname"));
t4=C_fast_retrieve(lf[312]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_retrieve2(lf[1],C_text("chicken.csi#constant718"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_7865(2,av2);}}}

/* k7863 in k7860 in k8322 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in ... */
static void C_ccall f_7865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7865,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7868,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1054: chicken.process-context#get-environment-variable"));
t4=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[314];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7866 in k7863 in k7860 in k8322 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_7868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7868,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7871,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
if(C_truep(C_i_not(C_i_string_equal_p(t1,lf[311])))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7908,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_retrieve2(lf[1],C_text("chicken.csi#constant718"));
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t4;
av2[2]=lf[313];
av2[3]=C_retrieve2(lf[1],C_text("chicken.csi#constant718"));
tp(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_7871(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_7871(2,av2);}}}

/* k7869 in k7866 in k7863 in k7860 in k8322 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in ... */
static void C_ccall f_7871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7871,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7877,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace(C_text("csi.scm:1057: chicken.file#file-exists?"));
t4=C_fast_retrieve(lf[17]);{
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
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_7877(2,av2);}}}

/* k7875 in k7869 in k7866 in k7863 in k7860 in k8322 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in ... */
static void C_ccall f_7877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7877,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
C_trace(C_text("csi.scm:1058: scheme#load"));
t3=*((C_word*)lf[66]+1);{
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
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7886,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t2)[4])){
C_trace(C_text("csi.scm:1059: chicken.file#file-exists?"));
t4=C_fast_retrieve(lf[17]);{
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
t4=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_8046(2,av2);}}}}

/* k7884 in k7875 in k7869 in k7866 in k7863 in k7860 in k8322 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in ... */
static void C_ccall f_7886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7886,c,av);}
if(C_truep(t1)){
C_trace(C_text("csi.scm:1060: scheme#load"));
t2=*((C_word*)lf[66]+1);{
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
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_8046(2,av2);}}}

/* k7906 in k7866 in k7863 in k7860 in k8322 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in ... */
static void C_ccall f_7908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7908,c,av);}
C_trace(C_text("csi.scm:1056: chicken.pathname#make-pathname"));
t2=C_fast_retrieve(lf[312]);{
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

/* evalstring in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void f_7922(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_7922,3,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_nullp(t3);
t5=(C_truep(t4)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7969,tmp=(C_word)a,a+=2,tmp):C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7929,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:1062: scheme#open-input-string"));
t7=C_fast_retrieve(lf[270]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k7927 in evalstring in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_7929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7929,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=C_fast_retrieve(lf[54]);
t4=C_mutate(((C_word *)t0)+2,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7936,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1064: read-with-source-info"));
t6=C_fast_retrieve(lf[54]);{
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

/* k7934 in k7927 in evalstring in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void C_ccall f_7936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_7936,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7938,a[2]=t4,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_7938(t6,((C_word*)t2)[5],t1);}

/* doloop1916 in k7934 in k7927 in evalstring in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void f_7938(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_7938,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7948,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7959,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7961,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1066: ##sys#call-with-values"));{
C_word av2[4];
av2[0]=0;
av2[1]=t4;
av2[2]=t5;
av2[3]=*((C_word*)lf[269]+1);
C_call_with_values(4,av2);}}}

/* k7946 in doloop1916 in k7934 in k7927 in evalstring in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in ... */
static void C_ccall f_7948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7948,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:1064: read-with-source-info"));
t3=((C_word*)t0)[4];{
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

/* k7953 in k7946 in doloop1916 in k7934 in k7927 in evalstring in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in ... */
static void C_ccall f_7955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7955,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7938(t2,((C_word*)t0)[3],t1);}

/* k7957 in doloop1916 in k7934 in k7927 in evalstring in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in ... */
static void C_ccall f_7959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7959,c,av);}
C_trace(C_text("csi.scm:1066: rec"));
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

/* a7960 in doloop1916 in k7934 in k7927 in evalstring in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in ... */
static void C_ccall f_7961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7961,c,av);}
C_trace(C_text("csi.scm:1066: scheme#eval"));
t2=*((C_word*)lf[56]+1);{
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

/* f_7969 in evalstring in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_7969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7969,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_7979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7979,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7982,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_member(lf[353],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8643,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9664,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:152: chicken.platform#chicken-version"));
t5=C_fast_retrieve(lf[321]);{
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
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_7982(2,av2);}}}

/* k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_7982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7982,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7985,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_member(lf[351],((C_word*)((C_word*)t2)[6])[1]))){
t4=C_set_block_item(lf[352] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
t5=t3;
f_7985(t5,t4);}
else{
t4=t3;
f_7985(t4,C_SCHEME_UNDEFINED);}}

/* k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in ... */
static void f_7985(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,2)))){
C_save_and_reclaim_args((void *)trf_7985,2,t0,t1);}
a=C_alloc(17);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7988,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_member(lf[350],((C_word*)((C_word*)t2)[6])[1]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8626,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8633,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1076: chicken.platform#chicken-version"));
t6=C_fast_retrieve(lf[321]);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_7988(2,av2);}}}

/* k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void C_ccall f_7988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7988,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7991,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8613,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:1078: member*"));
f_7390(t3,lf[349],((C_word*)((C_word*)t0)[6])[1]);}

/* k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in ... */
static void f_7991(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_7991,2,t0,t1);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7994,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8598,a[2]=t3,a[3]=((C_word*)t2)[8],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:1081: member*"));
f_7390(t4,lf[346],((C_word*)((C_word*)t2)[6])[1]);}

/* k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in ... */
static void C_ccall f_7994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7994,c,av);}
a=C_alloc(3);
t2=C_fast_retrieve(lf[271]);
t3=C_mutate(((C_word *)t0)+11,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7997,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1085: collect-options"));
t5=((C_word*)((C_word*)t0)[10])[1];
f_7811(t5,t4,lf[343]);}

/* k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in ... */
static void C_ccall f_7997(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7997,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t1,lf[101]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8003,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=12,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8574,a[2]=t6,a[3]=((C_word*)t2)[11],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_8574(t8,t4,t1);}

/* k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in ... */
static void C_ccall f_8003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8003,c,av);}
a=C_alloc(3);
t2=C_fast_retrieve(lf[271]);
t3=C_mutate(((C_word *)t0)+11,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8006,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1086: collect-options"));
t5=((C_word*)((C_word*)t0)[10])[1];
f_7811(t5,t4,lf[342]);}

/* k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in ... */
static void C_ccall f_8006(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8006,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t1,lf[101]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8012,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=12,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8551,a[2]=t6,a[3]=((C_word*)t2)[11],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_8551(t8,t4,t1);}

/* k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in ... */
static void C_ccall f_8012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8012,c,av);}
a=C_alloc(3);
t2=C_fast_retrieve(lf[272]);
t3=C_mutate(((C_word *)t0)+11,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8015,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1087: collect-options"));
t5=((C_word*)((C_word*)t0)[10])[1];
f_7811(t5,t4,lf[341]);}

/* k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in ... */
static void C_ccall f_8015(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_8015,c,av);}
a=C_alloc(17);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(t1,lf[101]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8021,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],tmp=(C_word)a,a+=11,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8528,a[2]=t6,a[3]=((C_word*)t2)[11],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_8528(t8,t4,t1);}

/* k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in ... */
static void C_ccall f_8021(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_8021,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8025,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8432,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_retrieve2(lf[15],C_text("chicken.csi#chop-separator"));
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8439,a[2]=t3,a[3]=((C_word*)t0)[10],a[4]=t6,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:1090: collect-options"));
t10=((C_word*)((C_word*)t0)[10])[1];
f_7811(t10,t9,lf[340]);}

/* k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in ... */
static void C_ccall f_8025(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8025,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[125]+1 /* (set! ##sys#include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8028,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=C_i_cdr(((C_word*)t0)[9]);
t5=C_i_pairp(t4);
if(C_truep(C_i_not(t5))){
C_trace(C_text("csi.scm:1096: ##sys#error"));
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[333];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=C_i_cadr(((C_word*)t0)[9]);
if(C_truep(C_i_string_equal_p(lf[334],t6))){
C_trace(C_text("csi.scm:1098: chicken.base#keyword-style"));
t7=C_fast_retrieve(lf[127]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=lf[335];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t7=C_u_i_cdr(((C_word*)t0)[9]);
t8=C_u_i_car(t7);
if(C_truep(C_i_string_equal_p(lf[336],t8))){
C_trace(C_text("csi.scm:1100: chicken.base#keyword-style"));
t9=C_fast_retrieve(lf[127]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t3;
av2[2]=lf[327];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t9=C_u_i_cdr(((C_word*)t0)[9]);
t10=C_u_i_car(t9);
if(C_truep(C_i_string_equal_p(lf[337],t10))){
C_trace(C_text("csi.scm:1102: chicken.base#keyword-style"));
t11=C_fast_retrieve(lf[127]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t3;
av2[2]=lf[338];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
t11=t3;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_8028(2,av2);}}}}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_8028(2,av2);}}}

/* k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in ... */
static void C_ccall f_8028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8028,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8031,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8371,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:1103: member*"));
f_7390(t3,lf[332],((C_word*)((C_word*)t0)[6])[1]);}

/* k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in ... */
static void C_ccall f_8031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8031,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8034,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8353,a[2]=t3,a[3]=((C_word*)t2)[8],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:1106: member*"));
f_7390(t4,lf[330],((C_word*)((C_word*)t2)[6])[1]);}

/* k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in ... */
static void C_ccall f_8034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8034,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8037,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[324],C_fast_retrieve(lf[325]));
C_trace(C_text("csi.scm:1114: scheme#eval"));
t5=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in ... */
static void C_ccall f_8037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8037,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8040,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[287],C_fast_retrieve(lf[323]));
C_trace(C_text("csi.scm:1115: scheme#eval"));
t5=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in ... */
static void C_ccall f_8040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_8040,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8043,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t2)[8])){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_8043(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8336,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1117: chicken.load#load-verbose"));
t5=C_fast_retrieve(lf[322]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in ... */
static void C_ccall f_8043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_8043,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8324,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:1120: member*"));
f_7390(t3,lf[317],((C_word*)((C_word*)t0)[6])[1]);}

/* k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in ... */
static void C_ccall f_8046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8046,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8049,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_set_block_item(lf[6] /* ##sys#notices-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_8049(t4,t3);}
else{
t3=t2;
f_8049(t3,C_SCHEME_UNDEFINED);}}

/* k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in ... */
static void f_8049(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_8049,2,t0,t1);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8054,a[2]=((C_word*)t2)[2],a[3]=t4,a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_8054(t6,((C_word*)t2)[5],((C_word*)((C_word*)t2)[6])[1]);}

/* doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in ... */
static void f_8054(C_word t0,C_word t1,C_word t2){
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(24,0,4)))){
C_save_and_reclaim_args((void *)trf_8054,3,t0,t1,t2);}
a=C_alloc(24);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_nullp(((C_word*)t3)[1]))){
t4=C_fast_retrieve(lf[273]);
t5=C_mutate((C_word*)lf[273]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4268,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[275]+1 /* (set! ##sys#sharp-number-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4297,tmp=(C_word)a,a+=2,tmp));
if(C_truep(((C_word*)t0)[2])){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8070,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1128: chicken.repl#repl"));
t8=C_fast_retrieve(lf[276]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_fast_retrieve(lf[49]);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}
else{
t4=C_i_car(((C_word*)t3)[1]);
t5=C_i_member(t4,lf[277]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8082,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t19=t1;
t20=C_i_cdr(((C_word*)t3)[1]);
t1=t19;
t2=t20;
goto loop;}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[278]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[279]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[280]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[281]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[282]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[283]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[284]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))))){
t7=C_i_cdr(((C_word*)t3)[1]);
t8=C_set_block_item(t3,0,t7);
t19=t1;
t20=C_i_cdr(((C_word*)t3)[1]);
t1=t19;
t2=t20;
goto loop;}
else{
t7=C_i_string_equal_p(lf[285],t4);
t8=(C_truep(t7)?t7:C_i_string_equal_p(lf[286],t4));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8110,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8122,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=C_i_cadr(((C_word*)t3)[1]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7714,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
t13=C_i_string_length(t11);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7666,a[2]=t11,a[3]=t15,tmp=(C_word)a,a+=4,tmp));
t17=((C_word*)t15)[1];
f_7666(t17,t12,C_fix(0),t13);}
else{
t9=C_i_string_equal_p(lf[294],t4);
t10=(C_truep(t9)?t9:C_i_string_equal_p(lf[295],t4));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8137,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:1138: evalstring"));
f_7922(t11,C_i_cadr(((C_word*)t3)[1]),C_SCHEME_END_OF_LIST);}
else{
t11=C_i_string_equal_p(lf[296],t4);
t12=(C_truep(t11)?t11:C_i_string_equal_p(lf[297],t4));
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8156,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t14=C_i_cadr(((C_word*)t3)[1]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8166,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("csi.scm:1141: evalstring"));
f_7922(t13,t14,C_a_i_list(&a,1,t15));}
else{
t13=C_i_string_equal_p(lf[299],t4);
t14=(C_truep(t13)?t13:C_i_string_equal_p(lf[300],t4));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8181,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t16=C_i_cadr(((C_word*)t3)[1]);
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8191,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("csi.scm:1144: evalstring"));
f_7922(t15,t16,C_a_i_list(&a,1,t17));}
else{
t15=(C_truep(((C_word*)t0)[5])?C_i_car(((C_word*)t0)[5]):C_SCHEME_FALSE);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8201,a[2]=t15,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_equalp(lf[305],t15))){
t17=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8253,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("csi.scm:1148: scheme#load"));
t18=*((C_word*)lf[66]+1);{
C_word av2[4];
av2[0]=t18;
av2[1]=t16;
av2[2]=t4;
av2[3]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
else{
C_trace(C_text("csi.scm:1148: scheme#load"));
t17=*((C_word*)lf[66]+1);{
C_word av2[4];
av2[0]=t17;
av2[1]=t16;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}}}}}}}}}

/* k8068 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_8070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8070,c,av);}
C_trace(C_text("csi.scm:1129: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[85]+1);
tp(4,av2);}}

/* k8080 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_8082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8082,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8054(t2,((C_word*)t0)[3],C_i_cdr(((C_word*)((C_word*)t0)[4])[1]));}

/* k8108 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_8110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8110,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_8054(t4,((C_word*)t0)[4],C_i_cdr(((C_word*)((C_word*)t0)[2])[1]));}

/* k8120 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_8122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8122,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,2,lf[287],t1);
C_trace(C_text("csi.scm:1135: scheme#eval"));
t3=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8135 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_8137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8137,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_8054(t4,((C_word*)t0)[4],C_i_cdr(((C_word*)((C_word*)t0)[2])[1]));}

/* k8154 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_8156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8156,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_8054(t4,((C_word*)t0)[4],C_i_cdr(((C_word*)((C_word*)t0)[2])[1]));}

/* a8165 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_8166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_8166,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[298]+1);
av2[3]=*((C_word*)lf[107]+1);
av2[4]=t2;
C_apply(5,av2);}}

/* k8179 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_8181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8181,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_8054(t4,((C_word*)t0)[4],C_i_cdr(((C_word*)((C_word*)t0)[2])[1]));}

/* a8190 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_8191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_8191,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[298]+1);
av2[3]=C_fast_retrieve(lf[47]);
av2[4]=t2;
C_apply(5,av2);}}

/* k8199 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_8201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8201,c,av);}
a=C_alloc(4);
if(C_truep(C_i_equalp(lf[301],((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8212,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8225,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("csi.scm:1165: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)((C_word*)t0)[4])[1];
f_8054(t2,((C_word*)t0)[5],C_i_cdr(((C_word*)((C_word*)t0)[6])[1]));}}

/* a8211 in k8199 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in ... */
static void C_ccall f_8212(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8212,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8216,a[2]=C_SCHEME_UNDEFINED,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:1165: scheme#eval"));
t3=*((C_word*)lf[56]+1);{
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

/* k8214 in a8211 in k8199 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in ... */
static void C_ccall f_8216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8216,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8223,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1165: chicken.process-context#command-line-arguments"));
t4=C_fast_retrieve(lf[302]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8221 in k8214 in a8211 in k8199 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in ... */
static void C_ccall f_8223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8223,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("csi.scm:1165: g2087"));
t3=((C_word*)t2)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* a8224 in k8199 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in ... */
static void C_ccall f_8225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8225,c,av);}
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
if(C_truep(C_fixnump(t3))){
C_trace(C_text("csi.scm:1167: chicken.base#exit"));
t4=C_fast_retrieve(lf[304]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
C_trace(C_text("csi.scm:1167: chicken.base#exit"));
t4=C_fast_retrieve(lf[304]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* f_8253 in doloop1875 in k8047 in k8044 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in ... */
static void C_ccall f_8253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8253,c,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8257,a[2]=t1,a[3]=t2,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8305,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1152: chicken.port#with-output-to-string"));
t5=C_fast_retrieve(lf[310]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8255 */
static void C_ccall f_8257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8257,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=C_u_i_string_length(((C_word*)t0)[5]);
t4=C_mutate(((C_word *)t0)+4,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8261,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1154: chicken.base#flush-output"));
t6=*((C_word*)lf[309]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=*((C_word*)lf[85]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k8259 in k8255 */
static void C_ccall f_8261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8261,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8264,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1155: scheme#display"));
t4=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[308];
av2[3]=*((C_word*)lf[306]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k8262 in k8259 in k8255 */
static void C_ccall f_8264(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8264,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8267,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8275,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[5],a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8275(t7,t3,C_fix(0));}

/* k8265 in k8262 in k8259 in k8255 */
static void C_ccall f_8267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8267,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8270,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1162: scheme#newline"));
t3=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=*((C_word*)lf[306]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8268 in k8265 in k8262 in k8259 in k8255 */
static void C_ccall f_8270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8270,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("csi.scm:1163: scheme#eval"));
t3=*((C_word*)lf[56]+1);{
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

/* doloop2076 in k8262 in k8259 in k8255 */
static void f_8275(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8275,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8288,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("##sys#write-char/port"));
t5=C_fast_retrieve(lf[243]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=*((C_word*)lf[306]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k8286 in doloop2076 in k8262 in k8259 in k8255 */
static void C_ccall f_8288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8288,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_u_i_char_equalp(C_make_character(10),((C_word*)t0)[5]))){
C_trace(C_text("csi.scm:1161: scheme#display"));
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[307];
av2[3]=*((C_word*)lf[306]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
f_8275(t3,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}}

/* k8289 in k8286 in doloop2076 in k8262 in k8259 in k8255 */
static void C_ccall f_8291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8291,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8275(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* a8304 */
static void C_ccall f_8305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8305,c,av);}
t2=C_fast_retrieve(lf[47]);
C_trace(C_text("csi.scm:1152: g2073"));
t3=C_fast_retrieve(lf[47]);{
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

/* k8322 in k8041 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in ... */
static void C_ccall f_8324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8324,c,av);}
a=C_alloc(3);
t2=(C_truep(t1)?t1:(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:((C_word*)t0)[3]));
if(C_truep(t2)){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8046(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7862,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1051: chicken.platform#system-config-directory"));
t4=C_fast_retrieve(lf[316]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8334 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in ... */
static void C_ccall f_8336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8336,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9634,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:152: chicken.platform#chicken-version"));
t4=C_fast_retrieve(lf[321]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8337 in k8334 in k8038 in k8035 in k8032 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in ... */
static void C_ccall f_8339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8339,c,av);}
C_trace(C_text("csi.scm:1119: chicken.base#print"));
t2=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[318];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8351 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in ... */
static void C_ccall f_8353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8353,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8356,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8356(2,av2);}}
else{
C_trace(C_text("csi.scm:1107: scheme#display"));
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[329];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_8034(2,av2);}}}

/* k8354 in k8351 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in ... */
static void C_ccall f_8356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8356,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1108: chicken.base#case-sensitive"));
t3=C_fast_retrieve(lf[328]);{
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

/* k8357 in k8354 in k8351 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in ... */
static void C_ccall f_8359(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8359,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1109: chicken.base#keyword-style"));
t3=C_fast_retrieve(lf[127]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[327];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8360 in k8357 in k8354 in k8351 in k8029 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in ... */
static void C_ccall f_8362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8362,c,av);}
C_trace(C_text("csi.scm:1110: chicken.base#parentheses-synonyms"));
t2=C_fast_retrieve(lf[326]);{
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

/* k8369 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in ... */
static void C_ccall f_8371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8371,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8374,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace(C_text("csi.scm:1105: chicken.base#parentheses-synonyms"));
t3=C_fast_retrieve(lf[326]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
C_trace(C_text("csi.scm:1104: scheme#display"));
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[331];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_8031(2,av2);}}}

/* k8372 in k8369 in k8026 in k8023 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in ... */
static void C_ccall f_8374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8374,c,av);}
C_trace(C_text("csi.scm:1105: chicken.base#parentheses-synonyms"));
t2=C_fast_retrieve(lf[326]);{
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

/* k8430 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in ... */
static void C_ccall f_8432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_8432,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3147,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3147(t5,((C_word*)t0)[2],t1);}

/* k8437 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in ... */
static void C_ccall f_8439(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8439,c,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[134]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8494,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8494(t7,t3,t1);}

/* k8443 in k8437 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in ... */
static void C_ccall f_8445(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_8445,c,av);}
a=C_alloc(11);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_retrieve2(lf[15],C_text("chicken.csi#chop-separator"));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8452,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:1091: collect-options"));
t8=((C_word*)((C_word*)t0)[3])[1];
f_7811(t8,t7,lf[339]);}

/* k8450 in k8443 in k8437 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in ... */
static void C_ccall f_8452(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8452,c,av);}
a=C_alloc(11);
t2=C_i_check_list_2(t1,lf[134]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8460,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8460(t7,t3,t1);}

/* k8456 in k8450 in k8443 in k8437 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in ... */
static void C_ccall f_8458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8458,c,av);}
C_trace(C_text("csi.scm:1090: scheme#append"));
t2=*((C_word*)lf[228]+1);{
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
av2[4]=C_fast_retrieve(lf[125]);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop1976 in k8450 in k8443 in k8437 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in ... */
static void f_8460(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8460,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:1091: g1982"));
t4=C_retrieve2(lf[15],C_text("chicken.csi#chop-separator"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_3936(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8483 in map-loop1976 in k8450 in k8443 in k8437 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in ... */
static void C_ccall f_8485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8485,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8460(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1950 in k8437 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in ... */
static void f_8494(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8494,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csi.scm:1090: g1956"));
t4=C_retrieve2(lf[15],C_text("chicken.csi#chop-separator"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_3936(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8517 in map-loop1950 in k8437 in k8019 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in ... */
static void C_ccall f_8519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8519,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8494(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* for-each-loop1867 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in ... */
static void f_8528(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8528,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8538,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:1087: g1868"));
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

/* k8536 in for-each-loop1867 in k8013 in k8010 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in ... */
static void C_ccall f_8538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8538,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8528(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1857 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in ... */
static void f_8551(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8551,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8561,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:1086: g1858"));
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

/* k8559 in for-each-loop1857 in k8004 in k8001 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in ... */
static void C_ccall f_8561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8561,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8551(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1847 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in ... */
static void f_8574(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8574,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8584,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csi.scm:1085: g1848"));
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

/* k8582 in for-each-loop1847 in k7995 in k7992 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in ... */
static void C_ccall f_8584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8584,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8574(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k8596 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in ... */
static void C_ccall f_8598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8598,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8601,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f9660,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1083: chicken.platform#register-feature!"));
t4=C_fast_retrieve(lf[271]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[344];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
C_trace(C_text("csi.scm:1082: scheme#display"));
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[345];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7994(2,av2);}}}

/* k8599 in k8596 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in ... */
static void C_ccall f_8601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8601,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8604,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1083: chicken.platform#register-feature!"));
t3=C_fast_retrieve(lf[271]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[344];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8602 in k8599 in k8596 in k7989 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in ... */
static void C_ccall f_8604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8604,c,av);}
C_trace(C_text("csi.scm:1084: chicken.base#case-sensitive"));
t2=C_fast_retrieve(lf[328]);{
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

/* k8611 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in ... */
static void C_ccall f_8613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8613,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_set_block_item(lf[347] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t4=((C_word*)t0)[2];
f_7991(t4,t3);}
else{
C_trace(C_text("csi.scm:1079: scheme#display"));
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[348];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[2];
f_7991(t2,C_SCHEME_UNDEFINED);}}

/* k8614 in k8611 in k7986 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in ... */
static void C_ccall f_8616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8616,c,av);}
t2=C_set_block_item(lf[347] /* ##sys#warnings-enabled */,0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_7991(t3,t2);}

/* k8624 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void C_ccall f_8626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8626,c,av);}
C_trace(C_text("csi.scm:1077: chicken.base#exit"));
t2=C_fast_retrieve(lf[304]);{
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

/* k8631 in k7983 in k7980 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in ... */
static void C_ccall f_8633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8633,c,av);}
C_trace(C_text("csi.scm:1076: chicken.base#print"));
t2=*((C_word*)lf[107]+1);{
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

/* k8641 in k7977 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_8643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8643,c,av);}
C_trace(C_text("csi.scm:1072: chicken.base#exit"));
t2=C_fast_retrieve(lf[304]);{
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

/* k8647 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_8649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8649,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3887,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:104: scheme#display"));
t4=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[358];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7979(2,av2);}}}

/* k8650 in k8647 in k7804 in k7801 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in ... */
static void C_ccall f_8652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8652,c,av);}
C_trace(C_text("csi.scm:1069: chicken.base#exit"));
t2=C_fast_retrieve(lf[304]);{
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

/* k8659 in k7798 in k7795 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_8661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8661,c,av);}
t2=((C_word*)t0)[2];
f_7803(t2,(C_truep(t1)?t1:((C_word*)t0)[3]));}

/* k8665 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_8667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8667,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8670,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1026: chicken.process-context#program-name"));
t3=C_fast_retrieve(lf[364]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8668 in k8665 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in ... */
static void C_ccall f_8670(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8670,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8673,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_u_i_cdr(((C_word*)t2)[3]);
C_trace(C_text("csi.scm:1027: chicken.process-context#command-line-arguments"));
t5=C_fast_retrieve(lf[302]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_u_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8671 in k8668 in k8665 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in ... */
static void C_ccall f_8673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8673,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8676,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1029: chicken.platform#register-feature!"));
t4=C_fast_retrieve(lf[271]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[363];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8674 in k8671 in k8668 in k8665 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in ... */
static void C_ccall f_8676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8676,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_i_set_i_slot(C_u_i_cdr(((C_word*)t2)[3]),C_fix(1),C_SCHEME_END_OF_LIST);
if(C_truep(*((C_word*)lf[14]+1))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8685,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:1032: lookup-script-file"));
t5=C_retrieve2(lf[20],C_text("chicken.csi#lookup-script-file"));
f_4036(t5,t4,C_i_cadr(((C_word*)t2)[3]));}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t2)[2];
f_7797(t5,t4);}}

/* k8683 in k8674 in k8671 in k8668 in k8665 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in ... */
static void C_ccall f_8685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8685,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];
f_7797(t3,(C_truep(t1)?C_i_set_car(C_u_i_cdr(((C_word*)t2)[3]),t1):C_SCHEME_FALSE));}

/* k8748 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_8750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8750,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_member(lf[366],((C_word*)((C_word*)t0)[2])[1]);
t4=((C_word*)t0)[3];
f_7797(t4,(C_truep(t3)?C_i_set_cdr(t3,C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}

/* k8761 in k7792 in k7789 in k7786 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in ... */
static void C_ccall f_8763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8763,c,av);}
C_trace(C_text("csi.scm:1035: scheme#append"));
t2=*((C_word*)lf[228]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8765 in k7783 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_8767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8767,c,av);}
C_trace(C_text("csi.scm:1017: canonicalize-args"));
f_7445(((C_word*)t0)[2],t1);}

/* k8769 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_8771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8771,c,av);}
a=C_alloc(3);
t2=(C_truep(t1)?t1:lf[369]);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4965,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:453: scheme#open-input-string"));
t5=C_fast_retrieve(lf[270]);{
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

/* k8775 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_8777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8777,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8783,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t3=C_fast_retrieve(lf[267]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8781 in k8775 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_8783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8783,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8784 in k5102 in k4957 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_8785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8785,c,av);}
C_trace(C_text("csi.scm:935: ##sys#user-interrupt-hook"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[252]);
C_word *av2=av;
av2[0]=*((C_word*)lf[252]+1);
av2[1]=t1;
tp(2,av2);}}

/* a8790 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8791,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8795,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:441: scheme#read"));
t3=*((C_word*)lf[290]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8793 in a8790 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8795,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8798,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8805,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8809,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:445: chicken.syntax#expand1"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[376]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[376]+1);
av2[1]=t4;
av2[2]=t1;
tp(3,av2);}}

/* k8796 in k8793 in a8790 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_8798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8798,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[32]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8803 in k8793 in a8790 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_8805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8805,c,av);}
C_trace(C_text("csi.scm:445: pretty-print"));
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

/* k8807 in k8793 in a8790 in k4954 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void C_ccall f_8809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8809,c,av);}
C_trace(C_text("csi.scm:445: chicken.syntax#strip-syntax"));
t2=C_fast_retrieve(lf[53]);{
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

/* a8810 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8811,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8815,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:425: scheme#read"));
t3=*((C_word*)lf[290]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8813 in a8810 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8815,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8824,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:427: ##sys#switch-module"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[380]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[380]+1);
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8830,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8851,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:429: ##sys#resolve-module-name"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[384]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[384]+1);
av2[1]=t3;
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}

/* k8822 in k8813 in a8810 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8824,c,av);}
C_trace(C_text("csi.scm:428: printf"));
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[379];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k8828 in k8813 in a8810 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_8830,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8834,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csi.scm:426: g1030"));
t3=t2;
f_8834(t3,((C_word*)t0)[3],t1);}
else{
C_trace(C_text("csi.scm:434: printf"));
t2=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[382];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* g1030 in k8828 in k8813 in a8810 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 in ... */
static void f_8834(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8834,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8838,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:431: ##sys#switch-module"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[380]);
C_word av2[3];
av2[0]=*((C_word*)lf[380]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k8836 in g1030 in k8828 in k8813 in a8810 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in ... */
static void C_ccall f_8838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8838,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("csi.scm:432: printf"));
t3=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[381];
av2[3]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8849 in k8813 in a8810 in k4306 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8851,c,av);}
C_trace(C_text("csi.scm:429: ##sys#find-module"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[383]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[383]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* a8852 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8853,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8861,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:258: ##sys#current-module"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[391]);
C_word *av2=av;
av2[0]=*((C_word*)lf[391]+1);
av2[1]=t2;
tp(2,av2);}}

/* k8859 in a8852 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8861,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8871,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:260: ##sys#module-name"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[389]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[389]+1);
av2[1]=t3;
av2[2]=t1;
tp(3,av2);}}
else{
C_trace(C_text("csi.scm:257: sprintf"));
t3=*((C_word*)lf[192]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[387];
av2[3]=lf[390];
av2[4]=C_retrieve2(lf[29],C_text("chicken.csi#history-count"));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k8862 in k8859 in a8852 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8864,c,av);}
C_trace(C_text("csi.scm:257: sprintf"));
t2=*((C_word*)lf[192]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[387];
av2[3]=t1;
av2[4]=C_retrieve2(lf[29],C_text("chicken.csi#history-count"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8869 in k8859 in a8852 in k3961 in k3879 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8871,c,av);}
C_trace(C_text("csi.scm:260: sprintf"));
t2=*((C_word*)lf[192]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[388];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k8873 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8875,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_3881(t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8884,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csi.scm:96: chicken.process-context#get-environment-variable"));
t3=C_fast_retrieve(lf[26]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[396];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k8882 in k8873 in k3876 in k3871 in k2572 in k2569 in k2566 in k2563 in k2560 in k2557 in k2554 in k2551 in k2548 in k2545 in k2542 in k2539 in k2536 */
static void C_ccall f_8884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8884,c,av);}
t2=((C_word*)t0)[2];
f_3881(t2,(C_truep(t1)?lf[394]:lf[395]));}

/* a8885 in k2539 in k2536 */
static void C_ccall f_8886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_8886,c,av);}
C_trace(C_text("csi.scm:43: ##sys#register-compiled-module"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[400]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[400]+1);
av2[1]=t1;
av2[2]=lf[401];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[402];
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
if(C_unlikely(!C_demand_2(2059))){
C_save(t1);
C_rereclaim2(2059*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,404);
lf[0]=C_h_intern(&lf[0],12, C_text("chicken.csi#"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\143\163\151\162\143\000"));
lf[3]=C_h_intern(&lf[3],29, C_text("##sys#repl-print-length-limit"));
lf[4]=C_h_intern_kw(&lf[4],3, C_text("csi"));
lf[5]=C_h_intern(&lf[5],14, C_text("##sys#features"));
lf[6]=C_h_intern(&lf[6],21, C_text("##sys#notices-enabled"));
lf[7]=C_h_intern(&lf[7],21, C_text("##sys#repl-print-hook"));
lf[8]=C_h_intern(&lf[8],14, C_text("scheme#newline"));
lf[9]=C_h_intern(&lf[9],18, C_text("scheme.write#write"));
lf[10]=C_h_intern(&lf[10],26, C_text("chicken.csi#editor-command"));
lf[14]=C_h_intern(&lf[14],22, C_text("##sys#windows-platform"));
lf[16]=C_h_intern(&lf[16],16, C_text("scheme#substring"));
lf[17]=C_h_intern(&lf[17],25, C_text("chicken.file#file-exists?"));
lf[18]=C_h_intern(&lf[18],19, C_text("##sys#string-append"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\056\142\141\164\000"));
lf[21]=C_h_intern(&lf[21],20, C_text("scheme#string-append"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[23]=C_h_intern(&lf[23],27, C_text("##sys#peek-nonnull-c-string"));
lf[24]=C_h_intern(&lf[24],16, C_text("##sys#split-path"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[26]=C_h_intern(&lf[26],48, C_text("chicken.process-context#get-environment-variable"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\120\101\124\110\000"));
lf[30]=C_h_intern(&lf[30],26, C_text("chicken.base#vector-resize"));
lf[32]=C_h_intern(&lf[32],21, C_text("##sys#undefined-value"));
lf[34]=C_h_intern(&lf[34],11, C_text("##sys#error"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\150\151\163\164\157\162\171\040\145\156\164\162\171\040\151\156\144\145\170\040\157\165\164\040\157\146\040\162\141\156\147\145\000"));
lf[36]=C_h_intern(&lf[36],21, C_text("scheme#inexact->exact"));
lf[37]=C_h_intern(&lf[37],22, C_text("##sys#read-prompt-hook"));
lf[38]=C_h_intern(&lf[38],15, C_text("##sys#tty-port?"));
lf[39]=C_h_intern(&lf[39],20, C_text("##sys#standard-input"));
lf[41]=C_h_intern(&lf[41],28, C_text("chicken.csi#toplevel-command"));
lf[42]=C_h_intern(&lf[42],16, C_text("toplevel-command"));
lf[43]=C_h_intern(&lf[43],25, C_text("chicken.load#load-noisily"));
lf[44]=C_h_intern(&lf[44],20, C_text("chicken.io#read-line"));
lf[45]=C_h_intern(&lf[45],27, C_text("chicken.string#string-split"));
lf[46]=C_h_intern(&lf[46],21, C_text("chicken.syntax#expand"));
lf[47]=C_h_intern(&lf[47],33, C_text("chicken.pretty-print#pretty-print"));
lf[48]=C_h_intern(&lf[48],13, C_text("scheme#values"));
lf[49]=C_h_intern(&lf[49],29, C_text("chicken.csi#default-evaluator"));
lf[50]=C_h_intern(&lf[50],17, C_text("chicken.repl#quit"));
lf[51]=C_h_intern(&lf[51],7, C_text("unquote"));
lf[52]=C_h_intern(&lf[52],1, C_text("x"));
lf[53]=C_h_intern(&lf[53],27, C_text("chicken.syntax#strip-syntax"));
lf[54]=C_h_intern(&lf[54],36, C_text("chicken.syntax#read-with-source-info"));
lf[55]=C_h_intern(&lf[55],1, C_text("p"));
lf[56]=C_h_intern(&lf[56],11, C_text("scheme#eval"));
lf[57]=C_h_intern(&lf[57],1, C_text("d"));
lf[59]=C_h_intern(&lf[59],2, C_text("du"));
lf[61]=C_h_intern(&lf[61],3, C_text("dur"));
lf[62]=C_h_intern(&lf[62],1, C_text("r"));
lf[64]=C_h_intern(&lf[64],1, C_text("q"));
lf[65]=C_h_intern(&lf[65],1, C_text("l"));
lf[66]=C_h_intern(&lf[66],11, C_text("scheme#load"));
lf[67]=C_h_intern(&lf[67],2, C_text("ln"));
lf[68]=C_h_intern(&lf[68],19, C_text("chicken.base#print*"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\075\075\076\040\000"));
lf[70]=C_h_intern_kw(&lf[70],7, C_text("printer"));
lf[71]=C_h_intern(&lf[71],1, C_text("t"));
lf[72]=C_h_intern(&lf[72],19, C_text("##sys#display-times"));
lf[73]=C_h_intern(&lf[73],16, C_text("##sys#stop-timer"));
lf[74]=C_h_intern(&lf[74],17, C_text("##sys#start-timer"));
lf[75]=C_h_intern(&lf[75],3, C_text("exn"));
lf[76]=C_h_intern(&lf[76],20, C_text("##sys#last-exception"));
lf[77]=C_h_intern(&lf[77],1, C_text("e"));
lf[78]=C_h_intern(&lf[78],21, C_text("chicken.format#printf"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\055\145\144\151\164\157\162\040\162\145\164\165\162\156\145\144\040\167\151\164\150\040\156\157\156\055\172\145\162\157\040\145\170\151\164\040\163\164\141\164\165\163\040\176\141\000"));
lf[80]=C_h_intern(&lf[80],22, C_text("chicken.process#system"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\040\000"));
lf[82]=C_h_intern(&lf[82],2, C_text("ch"));
lf[83]=C_h_intern(&lf[83],19, C_text("scheme#vector-fill!"));
lf[84]=C_h_intern(&lf[84],1, C_text("h"));
lf[85]=C_h_intern(&lf[85],21, C_text("##sys#standard-output"));
lf[86]=C_h_intern(&lf[86],6, C_text("printf"));
lf[87]=C_h_intern(&lf[87],11, C_text("##sys#print"));
lf[88]=C_h_intern(&lf[88],29, C_text("##sys#with-print-length-limit"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\072\040\000"));
lf[90]=C_h_intern(&lf[90],18, C_text("##sys#write-char-0"));
lf[91]=C_h_intern(&lf[91],1, C_text("c"));
lf[93]=C_h_intern(&lf[93],1, C_text("f"));
lf[94]=C_h_intern(&lf[94],14, C_text("scheme#display"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\156\157\040\163\165\143\150\040\146\162\141\155\145\012\000"));
lf[96]=C_h_intern(&lf[96],28, C_text("##sys#repl-recent-call-chain"));
lf[97]=C_h_intern(&lf[97],1, C_text("g"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\156\157\040\145\156\166\151\162\157\156\155\145\156\164\040\151\156\040\146\162\141\155\145\000"));
lf[99]=C_h_intern(&lf[99],9, C_text("frameinfo"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\073\040\147\145\164\164\151\156\147\040\000"));
lf[101]=C_h_intern(&lf[101],8, C_text("for-each"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\156\157\040\163\165\143\150\040\166\141\162\151\141\142\154\145\072\040\000"));
lf[103]=C_h_intern(&lf[103],37, C_text("scheme#call-with-current-continuation"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\163\164\162\151\156\147\040\157\162\040\163\171\155\142\157\154\040\162\145\161\165\151\162\145\144\040\146\157\162\040\140\054\147\047\012\000"));
lf[105]=C_h_intern(&lf[105],1, C_text("s"));
lf[106]=C_h_intern(&lf[106],1, C_text("?"));
lf[107]=C_h_intern(&lf[107],18, C_text("chicken.base#print"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\040\054\000"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376\002\000\003\267\124\157\160\154\145\166\145\154\040\143\157\155\155\141\156\144\163\072\012\012\040\054\077\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\123\150\157\167\040\164\150\151\163\040\164\145\170\164\012\040\054\160\040\105\130\120\040\040\040\040\040\040\040\040\040\040\040\040\120\162\145\164\164\171\040\160\162\151\156\164\040\145\166\141\154\165\141\164\145\144\040\145\170\160\162\145\163\163\151\157\156\040\105\130\120\012\040\054\144\040\105\130\120\040\040\040\040\040\040\040\040\040\040\040\040\104\145\163\143\162\151\142\145\040\162\145\163\165\154\164\040\157\146\040\145\166\141\154\165\141\164\145\144\040\145\170\160\162\145\163\163\151\157\156\040\105\130\120\012\040\054\144\165\040\105\130\120\040\040\040\040\040\040\040\040\040\040\040\104\165\155\160\040\144\141\164\141\040\157\146\040\145\170\160\162\145\163\163\151\157\156\040\105\130\120\012\040\054\144\165\162\040\105\130\120\040\116\040\040\040\040\040\040\040\040\104\165\155\160\040\162\141\156\147\145\012\040\054\161\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\121\165\151\164\040\151\156\164\145\162\160\162\145\164\145\162\012\040\054\154\040\106\111\114\105\116\101\115\105\040\056\056\056\040\040\040\114\157\141\144\040\157\156\145\040\157\162\040\155\157\162\145\040\146\151\154\145\163\012\040\054\154\156\040\106\111\114\105\116\101\115\105\040\056\056\056\040\040\114\157\141\144\040\157\156\145\040\157\162\040\155\157\162\145\040\146\151\154\145\163\040\141\156\144\040\160\162\151\156\164\040\162\145\163\165\154\164\040\157\146\040\145\141\143\150\040\164\157\160\055\154\145\166\145\154\040\145\170\160\162\145\163\163\151\157\156\012\040\054\162\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\123\150\157\167\040\163\171\163\164\145\155\040\151\156\146\157\162\155\141\164\151\157\156\012\040\054\150\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\123\150\157\167\040\150\151\163\164\157\162\171\040\157\146\040\145\170\160\162\145\163\163\151\157\156\040\162\145\163\165\154\164\163\012\040\054\143\150\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\103\154\145\141\162\040\150\151\163\164\157\162\171\040\157\146\040\145\170\160\162\145\163\163\151\157\156\040\162\145\163\165\154\164\163\012\040\054\145\040\106\111\114\105\116\101\115\105\040\040\040\040\040\040\040\122\165\156\040\145\170\164\145\162\156\141\154\040\145\144\151\164\157\162\012\040\054\163\040\124\105\130\124\040\056\056\056\040\040\040\040\040\040\040\105\170\145\143\165\164\145\040\163\150\145\154\154\055\143\157\155\155\141\156\144\012\040\054\145\170\156\040\040\040\040\040\040\040\040\040\040\040\040\040\040\104\145\163\143\162\151\142\145\040\154\141\163\164\040\145\170\143\145\160\164\151\157\156\012\040\054\143\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\123\150\157\167\040\143\141\154\154\055\143\150\141\151\156\040\157\146\040\155\157\163\164\040\162\145\143\145\156\164\040\145\162\162\157\162\012\040\054\146\040\116\040\040\040\040\040\040\040\040\040\040\040\040\040\040\123\145\154\145\143\164\040\146\162\141\155\145\040\116\012\040\054\147\040\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\107\145\164\040\166\141\162\151\141\142\154\145\040\116\101\115\105\040\146\162\157\155\040\143\165\162\162\145\156\164\040\146\162\141\155\145\012\040\054\164\040\105\130\120\040\040\040\040\040\040\040\040\040\040\040\040\105\166\141\154\165\141\164\145\040\146\157\162\155\040\141\156\144\040\160\162\151\156\164\040\145\154\141\160\163\145\144\040\164\151\155\145\012\040\054\170\040\105\130\120\040\040\040\040\040\040\040\040\040\040\040\040\120\162\145\164\164\171\040\160\162\151\156\164\040\145\170\160\141\156\144\145\144\040\145\170\160\162\145\163\163\151\157\156\040\105\130\120\012\000"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\066\165\156\144\145\146\151\156\145\144\040\164\157\160\154\145\166\145\154\040\143\157\155\155\141\156\144\040\176\163\040\055\040\145\156\164\145\162\040\140\054\077\047\040\146\157\162\040\150\145\154\160\176\045\000"));
lf[111]=C_h_intern(&lf[111],17, C_text("chicken.sort#sort"));
lf[112]=C_h_intern(&lf[112],32, C_text("chicken.port#with-output-to-port"));
lf[113]=C_h_intern(&lf[113],28, C_text("chicken.process-context#argv"));
lf[114]=C_h_intern(&lf[114],9, C_text("##sys#/-2"));
lf[115]=C_h_intern(&lf[115],15, C_text("scheme#truncate"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\012\000"));
lf[117]=C_h_intern(&lf[117],18, C_text("scheme#make-string"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\040\040\176\141\000"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\151\156\164\145\162\162\165\160\164\163\040\141\162\145\040\145\156\141\142\154\145\144\012\000"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\040\050\146\151\170\145\144\051\000"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\144\157\167\156\167\141\162\144\000"));
lf[123]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\165\160\167\141\162\144\000"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376\002\000\002\361\176\045\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\115\141\143\150\151\156\145\040\164\171\160\145\072\040\040\040\040\011\176\101\040\050\176\101\055\142\151\164\051\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\123\157\146\164\167\141\162\145\040\164\171\160\145\072\040\040\040\011\176\101\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\123\157\146\164\167\141\162\145\040\166\145\162\163\151\157\156\072\011\176\101\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\102\165\151\154\144\040\160\154\141\164\146\157\162\155\072\040\040\011\176\101\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\111\156\163\164\141\154\154\141\164\151\157\156\040\160\162\145\146\151\170\072\011\176\101\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\105\170\164\145\156\163\151\157\156\040\151\156\163\164\141\154\154\141\164\151\157\156\040\154\157\143\141\164\151\157\156\072\011\176\101\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\105\170\164\145\156\163\151\157\156\040\160\141\164\150\072\040\040\011\176\101\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\111\156\143\154\165\144\145\040\160\141\164\150\072\040\040\040\040\011\176\101\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\113\145\171\167\157\162\144\040\163\164\171\154\145\072\040\040\040\011\176\101\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\123\171\155\142\157\154\055\164\141\142\154\145\040\154\157\141\144\072\011\176\123\176\045\040\040\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\101\166\147\040\142\165\143\153\145\164\040\154\145\156\147\164\150\072\011\176\123\176\045\040\040\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\124\157\164\141\154\040\163\171\155\142\157\154\040\143\157\165\156\164\072\011\176\123\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\115\145\155\157\162\171\072\011\150\145\141\160\040\163\151\172\145\040\151\163\040\176\123\040\142\171\164\145\163\176\101\040\167\151\164\150\040\176\123\040\142\171\164\145\163\040\143\165\162\162\145\156\164\154\171\040\151\156\040\165\163\145\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\156\165\162\163\145\162\171\040\163\151\172\145\040\151\163\040\176\123\040\142\171\164\145\163\054\040\163\164\141\143\153\040\147\162\157\167\163\040\176\101\176\045\176\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\103\157\155\155\141\156\144\040\154\151\156\145\072\040\040\040\040\011\176\123\176\045\000"));
lf[125]=C_h_intern(&lf[125],23, C_text("##sys#include-pathnames"));
lf[126]=C_h_intern(&lf[126],31, C_text("chicken.keyword#keyword->string"));
lf[127]=C_h_intern(&lf[127],26, C_text("chicken.base#keyword-style"));
lf[128]=C_h_intern(&lf[128],32, C_text("chicken.platform#repository-path"));
lf[129]=C_h_intern(&lf[129],40, C_text("chicken.platform#installation-repository"));
lf[130]=C_h_intern(&lf[130],31, C_text("chicken.platform#build-platform"));
lf[131]=C_h_intern(&lf[131],33, C_text("chicken.platform#software-version"));
lf[132]=C_h_intern(&lf[132],30, C_text("chicken.platform#software-type"));
lf[133]=C_h_intern(&lf[133],29, C_text("chicken.platform#machine-type"));
lf[134]=C_h_intern(&lf[134],3, C_text("map"));
lf[135]=C_h_intern(&lf[135],15, C_text("scheme#string<?"));
lf[136]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\106\145\141\164\165\162\145\163\072\176\045\176\045\000"));
lf[137]=C_h_intern(&lf[137],28, C_text("chicken.gc#memory-statistics"));
lf[138]=C_h_intern(&lf[138],23, C_text("##sys#symbol-table-info"));
lf[139]=C_h_intern(&lf[139],13, C_text("chicken.gc#gc"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\165\070\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\031\166\145\143\164\157\162\040\157\146\040\165\156\163\151\147\156\145\144\040\142\171\164\145\163\000\376\003\000\000\002\376\001\000\000\017\001\165\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\014\001\165\070\166\145\143\164\157\162\055\162\145\146\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\070\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\027\166\145\143\164\157\162\040\157\146\040\163\151\147\156\145\144\040\142\171\164\145\163\000\376\003\000\000\002\376\001\000\000\017\001\163\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\014\001\163\070\166\145\143\164\157\162\055\162\145\146\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\061\066\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\040\166\145\143\164\157\162\040\157\146\040\165\156\163\151\147\156\145\144\040\061\066\055\142\151\164\040\167\157\162\144\163\000\376\003\000\000\002\376\001\000\000\020\001\165\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\015\001\165\061\066\166\145\143\164\157\162\055\162\145\146\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\061\066\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\036\166\145\143\164\157\162\040\157\146\040\163\151\147\156\145\144\040\061\066\055\142\151\164\040\167\157\162\144\163\000\376\003\000\000\002\376\001\000\000\020\001\163\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\015\001\163\061\066\166\145\143\164\157\162\055\162\145\146\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\063\062\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\040\166\145\143\164\157\162\040\157\146\040\165\156\163\151\147\156\145\144\040\063\062\055\142\151\164\040\167\157\162\144\163\000\376\003\000\000\002\376\001\000\000\020\001\165\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\015\001\165\063\062\166\145\143\164\157\162\055\162\145\146\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\063\062\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\036\166\145\143\164\157\162\040\157\146\040\163\151\147\156\145\144\040\063\062\055\142\151\164\040\167\157\162\144\163\000\376\003\000\000\002\376\001\000\000\020\001\163\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\015\001\163\063\062\166\145\143\164\157\162\055\162\145\146\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\066\064\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\040\166\145\143\164\157\162\040\157\146\040\165\156\163\151\147\156\145\144\040\066\064\055\142\151\164\040\167\157\162\144\163\000\376\003\000\000\002\376\001\000\000\020\001\165\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\015\001\165\066\064\166\145\143\164\157\162\055\162\145\146\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\066\064\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\036\166\145\143\164\157\162\040\157\146\040\163\151\147\156\145\144\040\066\064\055\142\151\164\040\167\157\162\144\163\000\376\003\000\000\002\376\001\000\000\020\001\163\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\015\001\163\066\064\166\145\143\164\157\162\055\162\145\146\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\063\062\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\030\166\145\143\164\157\162\040\157\146\040\063\062\055\142\151\164\040\146\154\157\141\164\163\000\376\003\000\000\002\376\001\000\000\020\001\146\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\015\001\146\063\062\166\145\143\164\157\162\055\162\145\146\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\066\064\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\030\166\145\143\164\157\162\040\157\146\040\066\064\055\142\151\164\040\146\154\157\141\164\163\000\376\003\000\000\002\376\001\000\000\020\001\146\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\015\001\146\066\064\166\145\143\164\157\162\055\162\145\146\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\066\064\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\041\166\145\143\164\157\162\040\157\146\040\063\062\055\142\151\164\040\143\157\155\160\154\145\170\040\156\165\155\142\145\162\163\000\376\003\000\000\002\376\001\000\000\020\001\143\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\015\001\143\066\064\166\145\143\164\157\162\055\162\145\146\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\061\062\070\166\145\143\164\157\162\376\003\000\000\002\376\002\000\000\041\166\145\143\164\157\162\040\157\146\040\066\064\055\142\151\164\040\143\157\155\160\154\145\170\040\156\165\155\142\145\162\163\000\376\003\000\000\002\376\001\000\000\021\001\143\061\062\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\016\001\143\061\062\070\166\145\143\164\157\162\055\162\145\146\376\377\016\376\377\016"));
lf[142]=C_h_intern(&lf[142],13, C_text("scheme#length"));
lf[143]=C_h_intern(&lf[143],15, C_text("scheme#list-ref"));
lf[144]=C_h_intern(&lf[144],17, C_text("scheme#string-ref"));
lf[145]=C_h_intern(&lf[145],22, C_text("chicken.format#fprintf"));
lf[146]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\176\045\040\050\176\101\040\145\154\145\155\145\156\164\163\040\156\157\164\040\144\151\163\160\154\141\171\145\144\051\176\045\000"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\057\011\050\146\157\154\154\157\167\145\144\040\142\171\040\176\101\040\151\144\145\156\164\151\143\141\154\040\151\156\163\164\141\156\143\145\176\141\051\176\045\040\056\056\056\176\045\000"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\163\000"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\040\176\123\072\040\176\123\000"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\176\101\040\157\146\040\154\145\156\147\164\150\040\176\123\176\045\000"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\143\150\141\162\141\143\164\145\162\040\176\123\054\040\143\157\144\145\072\040\176\123\054\040\043\170\176\130\054\040\043\157\176\117\176\045\000"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\142\157\157\154\145\141\156\040\164\162\165\145\176\045\000"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\142\157\157\154\145\141\156\040\146\141\154\163\145\176\045\000"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\145\155\160\164\171\040\154\151\163\164\176\045\000"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\142\162\157\153\145\156\040\167\145\141\153\040\160\157\151\156\164\145\162\176\045\000"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\145\156\144\055\157\146\055\146\151\154\145\040\157\142\152\145\143\164\176\045\000"));
lf[158]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\165\156\163\160\145\143\151\146\151\145\144\040\157\142\152\145\143\164\176\045\000"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\054\040\143\150\141\162\141\143\164\145\162\040\176\123\000"));
lf[160]=C_h_intern(&lf[160],20, C_text("scheme#integer->char"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\063\145\170\141\143\164\040\151\155\155\145\144\151\141\164\145\040\151\156\164\145\147\145\162\040\176\123\176\045\040\040\043\170\176\130\176\045\040\040\043\157\176\117\176\045\040\040\043\142\176\102\000"));
lf[162]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\145\170\141\143\164\040\154\141\162\147\145\040\151\156\164\145\147\145\162\040\176\123\176\045\040\040\043\170\176\130\176\045\040\040\043\157\176\117\176\045\040\040\043\142\176\102\176\045\000"));
lf[163]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\165\156\142\157\165\156\144\040\166\141\154\165\145\176\045\000"));
lf[164]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\151\156\145\170\141\143\164\040\162\141\164\151\157\156\141\154\040\156\165\155\142\145\162\040\176\123\176\045\000"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\145\170\141\143\164\040\162\141\164\151\157\040\176\123\176\045\000"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\176\101\040\143\157\155\160\154\145\170\040\156\165\155\142\145\162\040\176\123\176\045\000"));
lf[167]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\145\170\141\143\164\000"));
lf[168]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\151\156\145\170\141\143\164\000"));
lf[169]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\156\165\155\142\145\162\040\176\123\176\045\000"));
lf[170]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\163\164\162\151\156\147\000"));
lf[171]=C_h_intern(&lf[171],20, C_text("scheme#string-length"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\166\145\143\164\157\162\000"));
lf[173]=C_h_intern(&lf[173],10, C_text("##sys#size"));
lf[174]=C_h_intern(&lf[174],10, C_text("##sys#slot"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\153\145\171\167\157\162\144\040\163\171\155\142\157\154\040\167\151\164\150\040\156\141\155\145\040\176\163\176\045\000"));
lf[176]=C_h_intern(&lf[176],27, C_text("##sys#symbol->string/shared"));
lf[177]=C_h_intern(&lf[177],12, C_text("scheme#write"));
lf[178]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\040\040\176\163\011\000"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\040\040\012\160\162\157\160\145\162\164\151\145\163\072\012\012\000"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\165\156\151\156\164\145\162\156\145\144\040\000"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\176\141\163\171\155\142\157\154\040\167\151\164\150\040\156\141\155\145\040\176\123\176\045\000"));
lf[183]=C_h_intern(&lf[183],22, C_text("##sys#interned-symbol?"));
lf[184]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\165\156\142\157\165\156\144\040\000"));
lf[185]=C_h_intern(&lf[185],34, C_text("##sys#symbol-has-toplevel-binding?"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\145\157\154\176\045\000"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\050\143\151\162\143\154\145\051\176\045\000"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\176\123\040\055\076\040\000"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\143\151\162\143\165\154\141\162\040\163\164\162\165\143\164\165\162\145\072\040\000"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\154\151\163\164\000"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\160\141\151\162\040\167\151\164\150\040\143\141\162\040\176\123\176\045\141\156\144\040\143\144\162\040\176\123\176\045\000"));
lf[192]=C_h_intern(&lf[192],22, C_text("chicken.format#sprintf"));
lf[193]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\160\162\157\143\145\144\165\162\145\040\167\151\164\150\040\143\157\144\145\040\160\157\151\156\164\145\162\040\060\170\176\130\000"));
lf[194]=C_h_intern(&lf[194],27, C_text("##sys#peek-unsigned-integer"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\151\156\160\165\164\000"));
lf[196]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\157\165\164\160\165\164\000"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\062\176\101\040\160\157\162\164\040\157\146\040\164\171\160\145\040\176\101\040\167\151\164\150\040\156\141\155\145\040\176\123\040\141\156\144\040\176\101\040\145\156\143\157\144\151\156\147\176\045\000"));
lf[198]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\165\156\153\156\157\167\156\040\151\155\155\145\144\151\141\164\145\040\157\142\152\145\143\164\176\045\000"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\060\154\157\143\141\164\151\166\145\176\045\040\040\160\157\151\156\164\145\162\040\176\130\176\045\040\040\151\156\144\145\170\040\176\101\176\045\040\040\164\171\160\145\040\176\101\176\045\000"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\163\154\157\164\000"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\143\150\141\162\000"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\165\070\166\145\143\164\157\162\000"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\163\070\166\145\143\164\157\162\000"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\165\061\066\166\145\143\164\157\162\000"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\163\061\066\166\145\143\164\157\162\000"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\165\063\062\166\145\143\164\157\162\000"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\163\063\062\166\145\143\164\157\162\000"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\165\066\064\166\145\143\164\157\162\000"));
lf[209]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\163\066\064\166\145\143\164\157\162\000"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\146\063\062\166\145\143\164\157\162\000"));
lf[211]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\146\066\064\166\145\143\164\157\162\000"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\155\141\143\150\151\156\145\040\160\157\151\156\164\145\162\040\176\130\176\045\000"));
lf[214]=C_h_intern(&lf[214],10, C_text("##sys#byte"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\142\171\164\145\166\145\143\164\157\162\040\157\146\040\163\151\172\145\040\176\123\072\176\045\000"));
lf[216]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\154\141\155\142\144\141\040\151\156\146\157\162\155\141\164\151\157\156\072\040\176\163\176\045\000"));
lf[217]=C_h_intern(&lf[217],25, C_text("##sys#lambda-info->string"));
lf[218]=C_h_intern(&lf[218],10, C_text("hash-table"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\040\176\123\011\055\076\040\176\123\176\045\000"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\040\040\150\141\163\150\040\146\165\156\143\164\151\157\156\072\040\176\141\176\045\000"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\163\000"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\073\150\141\163\150\055\164\141\142\154\145\040\167\151\164\150\040\176\123\040\145\154\145\155\145\156\164\176\141\176\045\040\040\143\157\155\160\141\162\151\163\157\156\040\160\162\157\143\145\144\165\162\145\072\040\176\101\176\045\000"));
lf[224]=C_h_intern(&lf[224],9, C_text("condition"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\011\176\163\072\040\176\163\000"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\040\176\163\176\045\000"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\143\157\156\144\151\164\151\157\156\072\040\176\163\176\045\000"));
lf[228]=C_h_intern(&lf[228],13, C_text("scheme#append"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\163\164\162\165\143\164\165\162\145\040\157\146\040\164\171\160\145\040\140\176\123\047\072\176\045\000"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\165\156\153\156\157\167\156\040\157\142\152\145\143\164\176\045\000"));
lf[231]=C_h_intern(&lf[231],17, C_text("##sys#bytevector?"));
lf[232]=C_h_intern(&lf[232],15, C_text("##sys#locative?"));
lf[233]=C_h_intern(&lf[233],12, C_text("scheme#port?"));
lf[234]=C_h_intern(&lf[234],24, C_text("chicken.keyword#keyword?"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\163\164\141\164\151\143\141\154\154\171\040\141\154\154\157\143\141\164\145\144\040\050\060\170\176\130\051\040\000"));
lf[236]=C_h_intern(&lf[236],19, C_text("##sys#block-address"));
lf[237]=C_h_intern(&lf[237],10, C_text("scheme#min"));
lf[238]=C_h_intern(&lf[238],4, C_text("dump"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\143\141\156\156\157\164\040\144\165\155\160\040\151\155\155\145\144\151\141\164\145\040\157\142\152\145\143\164\000"));
lf[240]=C_h_intern(&lf[240],15, C_text("##sys#peek-byte"));
lf[241]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\143\141\156\156\157\164\040\144\165\155\160\040\157\142\152\145\143\164\000"));
lf[242]=C_h_intern(&lf[242],20, C_text("##sys#number->string"));
lf[243]=C_h_intern(&lf[243],21, C_text("##sys#write-char/port"));
lf[244]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\040\040\000"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\072\011\040\040\000"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\040\040\000"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\040\040\055\055\055\012\000"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\135\040\000"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\011\040\040\000"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\133\135\000"));
lf[251]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\040\040\000"));
lf[252]=C_h_intern(&lf[252],25, C_text("##sys#user-interrupt-hook"));
lf[253]=C_h_intern(&lf[253],19, C_text("##sys#signal-vector"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\153\376\003\000\000\002\376\377\012\000\000\163\376\003\000\000\002\376\377\012\000\000\150\376\003\000\000\002\376\377\012\000\000\104\376\003\000\000\002\376\377\012\000\000\145\376\003\000\000\002\376\377\012\000\000\151\376\003\000\000\002\376\377\012\000\000\122\376\003\000\000\002\376\377\012\000\000\142\376\003\000\000\002\376\377\012\000\000\156\376\003\000\000\002\376\377\012\000\000\161\376\003\000\000\002\376\377\012\000\000\167\376\003\000\000\002\376\377\012\000\000\055\376\003\000\000\002\376\377\012\000\000\111\376\003\000\000\002\376\377\012\000\000\160\376\003\000\000\002\376\377\012\000\000\120\376\003\000\000\002\376\377\012\000\000\113\376\377\016"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\163\000"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\055\163\163\000"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\055\163\143\162\151\160\164\000"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\055\163\170\000"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\055\000"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\151\156\166\141\154\151\144\040\157\160\164\151\157\156\000"));
lf[264]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\151\156\166\141\154\151\144\040\157\160\164\151\157\156\000"));
lf[265]=C_h_intern(&lf[265],18, C_text("##sys#string->list"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\004\055\163\163\000\376\003\000\000\002\376\002\000\000\004\055\163\170\000\376\003\000\000\002\376\002\000\000\010\055\163\143\162\151\160\164\000\376\003\000\000\002\376\002\000\000\011\055\166\145\162\163\151\157\156\000\376\003\000\000\002\376\002\000\000\006\055\150\145\154\160\000\376\003\000\000\002\376\002\000\000\007\055\055\150\145\154\160\000\376\003\000\000\002\376\002\000\000\011\055\146\145\141\164\165\162\145\000\376\003\000\000\002\376\002\000\000\014\055\156\157\055\146\145\141\164\165\162\145\000\376\003\000\000\002\376\002\000\000\006\055\145\166\141\154\000\376\003\000\000\002\376\002\000\000\022\055\143\141\163\145\055\151\156\163\145\156\163\151\164\151\166\145\000\376\003\000\000\002\376\002\000\000\017\055\153\145\171\167\157\162\144\055\163\164\171\154\145\000\376\003\000\000\002\376\002\000\000\031\055\156\157\055\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\000\376\003\000\000\002\376\002\000\000\022\055\156\157\055\163\171\155\142\157\154\055\145\163\143\141\160\145\000\376\003\000\000\002\376\002\000\000\015\055\162\067\162\163\055\163\171\156\164\141\170\000\376\003\000\000\002\376\002\000\000\014\055\163\145\164\165\160\055\155\157\144\145\000\376\003\000\000\002\376\002\000\000\023\055\162\145\161\165\151\162\145\055\145\170\164\145\156\163\151\157\156\000\376\003\000\000\002\376\002\000\000\007\055\142\141\164\143\150\000\376\003\000\000\002\376\002\000\000\007\055\161\165\151\145\164\000\376\003\000\000\002\376\002\000\000\015\055\156\157\055\167\141\162\156\151\156\147\163\000\376\003\000\000\002\376\002\000\000\011\055\156\157\055\151\156\151\164\000\376\003\000\000\002\376\002\000\000\016\055\151\156\143\154\165\144\145\055\160\141\164\150\000\376\003\000\000\002\376\002\000\000\011\055\162\145\154\145\141\163\145\000\376\003\000\000\002\376\002\000\000\007\055\160\162\151\156\164\000\376\003\000\000\002\376\002\000\000\016\055\160\162\145\164\164\171\055\160\162\151\156\164\000\376\003\000\000\002\376\002\000\000\003\055\055\000\376\377\016"));
lf[267]=C_h_intern(&lf[267],34, C_text("chicken.base#implicit-exit-handler"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\155\151\163\163\151\156\147\040\141\162\147\165\155\145\156\164\040\164\157\040\143\157\155\155\141\156\144\055\154\151\156\145\040\157\160\164\151\157\156\000"));
lf[269]=C_h_intern(&lf[269],10, C_text("##sys#list"));
lf[270]=C_h_intern(&lf[270],24, C_text("scheme#open-input-string"));
lf[271]=C_h_intern(&lf[271],34, C_text("chicken.platform#register-feature!"));
lf[272]=C_h_intern(&lf[272],36, C_text("chicken.platform#unregister-feature!"));
lf[273]=C_h_intern(&lf[273],20, C_text("##sys#user-read-hook"));
lf[274]=C_h_intern(&lf[274],5, C_text("quote"));
lf[275]=C_h_intern(&lf[275],23, C_text("##sys#sharp-number-hook"));
lf[276]=C_h_intern(&lf[276],17, C_text("chicken.repl#repl"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\003\055\055\000\376\003\000\000\002\376\002\000\000\003\055\142\000\376\003\000\000\002\376\002\000\000\007\055\142\141\164\143\150\000\376\003\000\000\002\376\002\000\000\003\055\161\000\376\003\000\000\002\376\002\000\000\007\055\161\165\151\145\164\000\376\003\000\000\002\376\002\000\000\003\055\156\000\376\003\000\000\002\376\002\000\000\011\055\156\157\055\151\156\151\164\000\376\003\000\000\002\376\002\000\000\003\055\167\000\376\003\000\000\002\376\002\000\000\015\055\156\157\055\167\141\162\156\151\156\147\163\000\376\003\000\000\002\376\002\000\000\003\055\151\000\376\003\000\000\002\376\002\000\000\022\055\143\141\163\145\055\151\156\163\145\156\163\151\164\151\166\145\000\376\003\000\000\002\376\002\000\000\031\055\156\157\055\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\000\376\003\000\000\002\376\002\000\000\015\055\162\067\162\163\055\163\171\156\164\141\170\000\376\003\000\000\002\376\002\000\000\014\055\163\145\164\165\160\055\155\157\144\145\000\376\003\000\000\002\376\002\000\000\004\055\163\163\000\376\003\000\000\002\376\002\000\000\004\055\163\170\000\376\003\000\000\002\376\002\000\000\003\055\163\000\376\003\000\000\002\376\002\000\000\010\055\163\143\162\151\160\164\000\376\377\016"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\104\000"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\146\145\141\164\165\162\145\000"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\111\000"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\055\151\156\143\154\165\144\145\055\160\141\164\150\000"));
lf[282]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\113\000"));
lf[283]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\055\153\145\171\167\157\162\144\055\163\164\171\154\145\000"));
lf[284]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\055\156\157\055\146\145\141\164\165\162\145\000"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\122\000"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\055\162\145\161\165\151\162\145\055\145\170\164\145\156\163\151\157\156\000"));
lf[287]=C_h_intern(&lf[287],6, C_text("import"));
lf[288]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\151\156\166\141\154\151\144\040\151\155\160\157\162\164\040\163\160\145\143\151\146\151\143\141\164\151\157\156\000"));
lf[289]=C_h_intern(&lf[289],35, C_text("chicken.port#with-input-from-string"));
lf[290]=C_h_intern(&lf[290],11, C_text("scheme#read"));
lf[291]=C_h_intern(&lf[291],40, C_text("chicken.condition#with-exception-handler"));
lf[292]=C_h_intern(&lf[292],21, C_text("scheme#string->symbol"));
lf[293]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[294]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\145\000"));
lf[295]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\145\166\141\154\000"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\160\000"));
lf[297]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\055\160\162\151\156\164\000"));
lf[298]=C_h_intern(&lf[298],15, C_text("scheme#for-each"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\120\000"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\055\160\162\145\164\164\171\055\160\162\151\156\164\000"));
lf[301]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\055\163\163\000"));
lf[302]=C_h_intern(&lf[302],46, C_text("chicken.process-context#command-line-arguments"));
lf[303]=C_h_intern(&lf[303],4, C_text("main"));
lf[304]=C_h_intern(&lf[304],17, C_text("chicken.base#exit"));
lf[305]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\055\163\170\000"));
lf[306]=C_h_intern(&lf[306],20, C_text("##sys#standard-error"));
lf[307]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\073\040\000"));
lf[308]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\012\073\040\000"));
lf[309]=C_h_intern(&lf[309],25, C_text("chicken.base#flush-output"));
lf[310]=C_h_intern(&lf[310],34, C_text("chicken.port#with-output-to-string"));
lf[311]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[312]=C_h_intern(&lf[312],30, C_text("chicken.pathname#make-pathname"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[314]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\110\117\115\105\000"));
lf[315]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\143\150\151\143\153\145\156\000"));
lf[316]=C_h_intern(&lf[316],40, C_text("chicken.platform#system-config-directory"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\003\055\156\000\376\003\000\000\002\376\002\000\000\011\055\156\157\055\151\156\151\164\000\376\377\016"));
lf[318]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\124\171\160\145\040\054\077\040\146\157\162\040\150\145\154\160\056\000"));
lf[319]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\104\103\110\111\103\113\105\116\012\050\143\051\062\060\060\060\055\062\060\060\067\040\106\145\154\151\170\040\114\056\040\127\151\156\153\145\154\155\141\156\156\054\040\050\143\051\062\060\060\070\040\124\150\145\040\103\110\111\103\113\105\116\040\124\145\141\155\012\000"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\012\000"));
lf[321]=C_h_intern(&lf[321],32, C_text("chicken.platform#chicken-version"));
lf[322]=C_h_intern(&lf[322],25, C_text("chicken.load#load-verbose"));
lf[323]=C_h_intern(&lf[323],32, C_text("chicken.internal#default-imports"));
lf[324]=C_h_intern(&lf[324],17, C_text("import-for-syntax"));
lf[325]=C_h_intern(&lf[325],39, C_text("chicken.internal#default-syntax-imports"));
lf[326]=C_h_intern(&lf[326],33, C_text("chicken.base#parentheses-synonyms"));
lf[327]=C_h_intern_kw(&lf[327],4, C_text("none"));
lf[328]=C_h_intern(&lf[328],27, C_text("chicken.base#case-sensitive"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\060\104\151\163\141\142\154\145\144\040\164\150\145\040\103\110\111\103\113\105\116\040\145\170\164\145\156\163\151\157\156\163\040\164\157\040\122\067\122\123\040\163\171\156\164\141\170\012\000"));
lf[330]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\015\055\162\067\162\163\055\163\171\156\164\141\170\000\376\377\016"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\053\104\151\163\141\142\154\145\144\040\163\165\160\160\157\162\164\040\146\157\162\040\160\141\162\145\156\164\150\145\163\145\163\040\163\171\156\157\156\171\155\163\012\000"));
lf[332]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\031\055\156\157\055\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\000\376\377\016"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\155\151\163\163\151\156\147\040\141\162\147\165\155\145\156\164\040\164\157\040\140\055\153\145\171\167\157\162\144\055\163\164\171\154\145\047\040\157\160\164\151\157\156\000"));
lf[334]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\160\162\145\146\151\170\000"));
lf[335]=C_h_intern_kw(&lf[335],6, C_text("prefix"));
lf[336]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\156\157\156\145\000"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\163\165\146\146\151\170\000"));
lf[338]=C_h_intern_kw(&lf[338],6, C_text("suffix"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\111\000"));
lf[340]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\055\151\156\143\154\165\144\145\055\160\141\164\150\000"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\055\156\157\055\146\145\141\164\165\162\145\000"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\104\000"));
lf[343]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\146\145\141\164\165\162\145\000"));
lf[344]=C_h_intern(&lf[344],16, C_text("case-insensitive"));
lf[345]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\056\111\144\145\156\164\151\146\151\145\162\163\040\141\156\144\040\163\171\155\142\157\154\163\040\141\162\145\040\143\141\163\145\040\151\156\163\145\156\163\151\164\151\166\145\012\000"));
lf[346]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\003\055\151\000\376\003\000\000\002\376\002\000\000\022\055\143\141\163\145\055\151\156\163\145\156\163\151\164\151\166\145\000\376\377\016"));
lf[347]=C_h_intern(&lf[347],22, C_text("##sys#warnings-enabled"));
lf[348]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\127\141\162\156\151\156\147\163\040\141\162\145\040\144\151\163\141\142\154\145\144\012\000"));
lf[349]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\003\055\167\000\376\003\000\000\002\376\002\000\000\015\055\156\157\055\167\141\162\156\151\156\147\163\000\376\377\016"));
lf[350]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\162\145\154\145\141\163\145\000"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\055\163\145\164\165\160\055\155\157\144\145\000"));
lf[352]=C_h_intern(&lf[352],16, C_text("##sys#setup-mode"));
lf[353]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\166\145\162\163\151\157\156\000"));
lf[354]=C_decode_literal(C_heaptop,C_text("\376\002\000\004\037\040\040\040\040\055\142\040\040\055\142\141\164\143\150\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\164\145\162\155\151\156\141\164\145\040\141\146\164\145\162\040\143\157\155\155\141\156\144\055\154\151\156\145\040\160\162\157\143\145\163\163\151\156\147\012\040\040\040\040\055\167\040\040\055\156\157\055\167\141\162\156\151\156\147\163\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\141\154\154\040\167\141\162\156\151\156\147\163\012\040\040\040\040\055\113\040\040\055\153\145\171\167\157\162\144\055\163\164\171\154\145\040\123\124\131\114\105\040\040\040\040\040\040\145\156\141\142\154\145\040\141\154\164\145\162\156\141\164\151\166\145\040\153\145\171\167\157\162\144\055\163\171\156\164\141\170\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\050\160\162\145\146\151\170\054\040\163\165\146\146\151\170\040\157\162\040\156\157\156\145\051\012\040\040\040\040\040\040\040\040\055\156\157\055\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\040\040\144\151\163\141\142\154\145\163\040\154\151\163\164\040\144\145\154\151\155\151\164\145\162\040\163\171\156\157\156\171\155\163\012\040\040\040\040\040\040\040\040\055\162\067\162\163\055\163\171\156\164\141\170\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\163\040\164\150\145\040\103\110\111\103\113\105\116\040\145\170\164\145\156\163\151\157\156\163\040\164\157\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\122\067\122\123\040\163\171\156\164\141\170\012\040\040\040\040\055\163\040\040\055\163\143\162\151\160\164\040\120\101\124\110\116\101\115\105\040\040\040\040\040\040\040\040\040\040\165\163\145\040\143\163\151\040\141\163\040\151\156\164\145\162\160\162\145\164\145\162\040\146\157\162\040\123\143\150\145\155\145\040\163\143\162\151\160\164\163\012\040\040\040\040\040\040\040\040\055\163\163\040\120\101\124\110\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\141\155\145\040\141\163\040\140\055\163\047\054\040\142\165\164\040\151\156\166\157\153\145\040\140\155\141\151\156\047\040\160\162\157\143\145\144\165\162\145\012\040\040\040\040\040\040\040\040\055\163\170\040\120\101\124\110\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\141\155\145\040\141\163\040\140\055\163\047\054\040\142\165\164\040\160\162\151\156\164\040\145\141\143\150\040\145\170\160\162\145\163\163\151\157\156\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\141\163\040\151\164\040\151\163\040\145\166\141\154\165\141\164\145\144\012\040\040\040\040\040\040\040\040\055\163\145\164\165\160\055\155\157\144\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\162\145\146\145\162\040\164\150\145\040\143\165\162\162\145\156\164\040\144\151\162\145\143\164\157\162\171\040\167\150\145\156\040\154\157\143\141\164\151\156\147\040\145\170\164\145\156\163\151\157\156\163\012\040\040\040\040\055\122\040\040\055\162\145\161\165\151\162\145\055\145\170\164\145\156\163\151\157\156\040\116\101\115\105\040\040\040\162\145\161\165\151\162\145\040\145\170\164\145\156\163\151\157\156\040\141\156\144\040\151\155\160\157\162\164\040\142\145\146\157\162\145\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\170\145\143\165\164\151\156\147\040\143\157\144\145\012\040\040\040\040\055\111\040\040\055\151\156\143\154\165\144\145\055\160\141\164\150\040\120\101\124\110\116\101\115\105\040\040\040\040\141\144\144\040\120\101\124\110\116\101\115\105\040\164\157\040\151\156\143\154\165\144\145\040\160\141\164\150\012\040\040\040\040\055\055\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\151\147\156\157\162\145\040\141\154\154\040\146\157\154\154\157\167\151\156\147\040\157\160\164\151\157\156\163\012\000"));
lf[355]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\047\012\000"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\105\040\040\040\040\055\156\040\040\055\156\157\055\151\156\151\164\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\157\040\156\157\164\040\154\157\141\144\040\151\156\151\164\151\141\154\151\172\141\164\151\157\156\040\146\151\154\145\040\140\040\000"));
lf[357]=C_h_intern(&lf[357],21, C_text("##sys#print-to-string"));
lf[358]=C_decode_literal(C_heaptop,C_text("\376\002\000\003\055\165\163\141\147\145\072\040\143\163\151\040\133\117\120\124\111\117\116\040\056\056\056\135\040\133\106\111\114\105\116\101\115\105\040\056\056\056\135\012\012\040\040\140\143\163\151\047\040\151\163\040\164\150\145\040\103\110\111\103\113\105\116\040\151\156\164\145\162\160\162\145\164\145\162\056\012\012\040\040\106\111\114\105\116\101\115\105\040\151\163\040\141\040\123\143\150\145\155\145\040\163\157\165\162\143\145\040\146\151\154\145\040\156\141\155\145\040\167\151\164\150\040\157\160\164\151\157\156\141\154\040\145\170\164\145\156\163\151\157\156\056\040\117\120\124\111\117\116\040\155\141\171\040\142\145\012\040\040\157\156\145\040\157\146\040\164\150\145\040\146\157\154\154\157\167\151\156\147\072\012\012\040\040\040\040\055\150\040\040\055\150\145\154\160\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\160\154\141\171\040\164\150\151\163\040\164\145\170\164\040\141\156\144\040\145\170\151\164\012\040\040\040\040\040\040\040\040\055\166\145\162\163\151\157\156\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\160\154\141\171\040\166\145\162\163\151\157\156\040\141\156\144\040\145\170\151\164\012\040\040\040\040\040\040\040\040\055\162\145\154\145\141\163\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\162\151\156\164\040\162\145\154\145\141\163\145\040\156\165\155\142\145\162\040\141\156\144\040\145\170\151\164\012\040\040\040\040\055\151\040\040\055\143\141\163\145\055\151\156\163\145\156\163\151\164\151\166\145\040\040\040\040\040\040\040\040\040\145\156\141\142\154\145\040\143\141\163\145\055\151\156\163\145\156\163\151\164\151\166\145\040\162\145\141\144\151\156\147\012\040\040\040\040\055\145\040\040\055\145\166\141\154\040\105\130\120\122\105\123\123\111\117\116\040\040\040\040\040\040\040\040\040\040\145\166\141\154\165\141\164\145\040\147\151\166\145\156\040\145\170\160\162\145\163\163\151\157\156\012\040\040\040\040\055\160\040\040\055\160\162\151\156\164\040\105\130\120\122\105\123\123\111\117\116\040\040\040\040\040\040\040\040\040\145\166\141\154\165\141\164\145\040\141\156\144\040\160\162\151\156\164\040\162\145\163\165\154\164\050\163\051\012\040\040\040\040\055\120\040\040\055\160\162\145\164\164\171\055\160\162\151\156\164\040\105\130\120\122\105\123\123\111\117\116\040\040\145\166\141\154\165\141\164\145\040\141\156\144\040\160\162\151\156\164\040\162\145\163\165\154\164\050\163\051\040\160\162\145\164\164\151\154\171\012\040\040\040\040\055\104\040\040\055\146\145\141\164\165\162\145\040\123\131\115\102\117\114\040\040\040\040\040\040\040\040\040\040\040\162\145\147\151\163\164\145\162\040\146\145\141\164\165\162\145\040\151\144\145\156\164\151\146\151\145\162\012\040\040\040\040\040\040\040\040\055\156\157\055\146\145\141\164\165\162\145\040\123\131\115\102\117\114\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\142\165\151\154\164\055\151\156\040\146\145\141\164\165\162\145\040\151\144\145\156\164\151\146\151\145\162\012\040\040\040\040\055\161\040\040\055\161\165\151\145\164\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\157\040\156\157\164\040\160\162\151\156\164\040\142\141\156\156\145\162\012\000"));
lf[359]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\003\055\150\000\376\003\000\000\002\376\002\000\000\006\055\150\145\154\160\000\376\003\000\000\002\376\002\000\000\007\055\055\150\145\154\160\000\376\377\016"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\003\055\161\000\376\003\000\000\002\376\002\000\000\007\055\161\165\151\145\164\000\376\377\016"));
lf[361]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\003\055\142\000\376\003\000\000\002\376\002\000\000\007\055\142\141\164\143\150\000\376\377\016"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\003\055\145\000\376\003\000\000\002\376\002\000\000\003\055\160\000\376\003\000\000\002\376\002\000\000\003\055\120\000\376\003\000\000\002\376\002\000\000\006\055\145\166\141\154\000\376\003\000\000\002\376\002\000\000\007\055\160\162\151\156\164\000\376\003\000\000\002\376\002\000\000\016\055\160\162\145\164\164\171\055\160\162\151\156\164\000\376\377\016"));
lf[363]=C_h_intern(&lf[363],14, C_text("chicken-script"));
lf[364]=C_h_intern(&lf[364],36, C_text("chicken.process-context#program-name"));
lf[365]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\155\151\163\163\151\156\147\040\157\162\040\151\156\166\141\154\151\144\040\163\143\162\151\160\164\040\141\162\147\165\155\145\156\164\000"));
lf[366]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\055\000"));
lf[367]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\004\055\163\163\000\376\003\000\000\002\376\002\000\000\004\055\163\170\000\376\003\000\000\002\376\002\000\000\003\055\163\000\376\003\000\000\002\376\002\000\000\010\055\163\143\162\151\160\164\000\376\377\016"));
lf[368]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\003\055\113\000\376\003\000\000\002\376\002\000\000\017\055\153\145\171\167\157\162\144\055\163\164\171\154\145\000\376\377\016"));
lf[369]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[370]=C_h_intern(&lf[370],24, C_text("scheme#get-output-string"));
lf[371]=C_h_intern(&lf[371],25, C_text("scheme#open-output-string"));
lf[372]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\151\156\166\141\154\151\144\040\157\160\164\151\157\156\040\163\171\156\164\141\170\000"));
lf[373]=C_h_intern(&lf[373],14, C_text("scheme#reverse"));
lf[374]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\123\111\137\117\120\124\111\117\116\123\000"));
lf[375]=C_h_intern(&lf[375],19, C_text("##sys#peek-c-string"));
lf[376]=C_h_intern(&lf[376],22, C_text("chicken.syntax#expand1"));
lf[377]=C_h_intern(&lf[377],2, C_text("x1"));
lf[378]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\071\054\170\061\040\105\130\120\040\040\040\040\040\040\040\040\040\040\040\120\162\145\164\164\171\040\160\162\151\156\164\040\145\170\160\141\156\144\061\055\145\144\040\145\170\160\162\145\163\163\151\157\156\040\105\130\120\000"));
lf[379]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\073\040\162\145\163\145\164\164\151\156\147\040\143\165\162\162\145\156\164\040\155\157\144\165\154\145\040\164\157\040\164\157\160\154\145\166\145\154\176\045\000"));
lf[380]=C_h_intern(&lf[380],19, C_text("##sys#switch-module"));
lf[381]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\073\040\163\167\151\164\143\150\151\156\147\040\143\165\162\162\145\156\164\040\155\157\144\165\154\145\040\164\157\040\140\176\141\047\176\045\000"));
lf[382]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\165\156\144\145\146\151\156\145\144\040\155\157\144\165\154\145\040\140\176\141\047\176\045\000"));
lf[383]=C_h_intern(&lf[383],17, C_text("##sys#find-module"));
lf[384]=C_h_intern(&lf[384],25, C_text("##sys#resolve-module-name"));
lf[385]=C_h_intern(&lf[385],1, C_text("m"));
lf[386]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\066\054\155\040\115\117\104\125\114\105\040\040\040\040\040\040\040\040\040\163\167\151\164\143\150\040\164\157\040\155\157\144\165\154\145\040\167\151\164\150\040\156\141\155\145\040\140\115\117\104\125\114\105\047\000"));
lf[387]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\043\073\176\101\176\101\076\040\000"));
lf[388]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\176\141\072\000"));
lf[389]=C_h_intern(&lf[389],17, C_text("##sys#module-name"));
lf[390]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[391]=C_h_intern(&lf[391],20, C_text("##sys#current-module"));
lf[392]=C_h_intern(&lf[392],24, C_text("chicken.repl#repl-prompt"));
lf[393]=C_h_intern(&lf[393],17, C_text("##sys#make-string"));
lf[394]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\145\155\141\143\163\143\154\151\145\156\164\000"));
lf[395]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\166\151\000"));
lf[396]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\105\115\101\103\123\000"));
lf[397]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\126\111\123\125\101\114\000"));
lf[398]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\105\104\111\124\117\122\000"));
lf[399]=C_h_intern(&lf[399],21, C_text("scheme#make-parameter"));
lf[400]=C_h_intern(&lf[400],30, C_text("##sys#register-compiled-module"));
lf[401]=C_h_intern(&lf[401],11, C_text("chicken.csi"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\145\144\151\164\157\162\055\143\157\155\155\141\156\144\376\001\000\000\032\001\143\150\151\143\153\145\156\056\143\163\151\043\145\144\151\164\157\162\055\143\157\155\155\141\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\164\157\160\154\145\166\145\154\055\143\157\155\155\141\156\144\376\001\000\000\034\001\143\150\151\143\153\145\156\056\143\163\151\043\164\157\160\154\145\166\145\154\055\143\157\155\155\141\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\144\145\146\141\165\154\164\055\145\166\141\154\165\141\164\157\162\376\001\000\000\035\001\143\150\151\143\153\145\156\056\143\163\151\043\144\145\146\141\165\154\164\055\145\166\141\154\165\141\164\157\162\376\377\016"));
lf[403]=C_h_intern(&lf[403],22, C_text("##sys#with-environment"));
C_register_lf2(lf,404,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2538,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[507] = {
{C_text("f9509:csi_2escm"),(void*)f9509},
{C_text("f9513:csi_2escm"),(void*)f9513},
{C_text("f9634:csi_2escm"),(void*)f9634},
{C_text("f9660:csi_2escm"),(void*)f9660},
{C_text("f9664:csi_2escm"),(void*)f9664},
{C_text("f_2538:csi_2escm"),(void*)f_2538},
{C_text("f_2541:csi_2escm"),(void*)f_2541},
{C_text("f_2544:csi_2escm"),(void*)f_2544},
{C_text("f_2547:csi_2escm"),(void*)f_2547},
{C_text("f_2550:csi_2escm"),(void*)f_2550},
{C_text("f_2553:csi_2escm"),(void*)f_2553},
{C_text("f_2556:csi_2escm"),(void*)f_2556},
{C_text("f_2559:csi_2escm"),(void*)f_2559},
{C_text("f_2562:csi_2escm"),(void*)f_2562},
{C_text("f_2565:csi_2escm"),(void*)f_2565},
{C_text("f_2568:csi_2escm"),(void*)f_2568},
{C_text("f_2571:csi_2escm"),(void*)f_2571},
{C_text("f_2574:csi_2escm"),(void*)f_2574},
{C_text("f_3072:csi_2escm"),(void*)f_3072},
{C_text("f_3099:csi_2escm"),(void*)f_3099},
{C_text("f_3147:csi_2escm"),(void*)f_3147},
{C_text("f_3161:csi_2escm"),(void*)f_3161},
{C_text("f_3174:csi_2escm"),(void*)f_3174},
{C_text("f_3862:csi_2escm"),(void*)f_3862},
{C_text("f_3866:csi_2escm"),(void*)f_3866},
{C_text("f_3873:csi_2escm"),(void*)f_3873},
{C_text("f_3878:csi_2escm"),(void*)f_3878},
{C_text("f_3881:csi_2escm"),(void*)f_3881},
{C_text("f_3887:csi_2escm"),(void*)f_3887},
{C_text("f_3890:csi_2escm"),(void*)f_3890},
{C_text("f_3897:csi_2escm"),(void*)f_3897},
{C_text("f_3921:csi_2escm"),(void*)f_3921},
{C_text("f_3936:csi_2escm"),(void*)f_3936},
{C_text("f_3950:csi_2escm"),(void*)f_3950},
{C_text("f_3963:csi_2escm"),(void*)f_3963},
{C_text("f_3982:csi_2escm"),(void*)f_3982},
{C_text("f_3989:csi_2escm"),(void*)f_3989},
{C_text("f_3992:csi_2escm"),(void*)f_3992},
{C_text("f_3998:csi_2escm"),(void*)f_3998},
{C_text("f_4011:csi_2escm"),(void*)f_4011},
{C_text("f_4024:csi_2escm"),(void*)f_4024},
{C_text("f_4036:csi_2escm"),(void*)f_4036},
{C_text("f_4040:csi_2escm"),(void*)f_4040},
{C_text("f_4052:csi_2escm"),(void*)f_4052},
{C_text("f_4061:csi_2escm"),(void*)f_4061},
{C_text("f_4064:csi_2escm"),(void*)f_4064},
{C_text("f_4071:csi_2escm"),(void*)f_4071},
{C_text("f_4075:csi_2escm"),(void*)f_4075},
{C_text("f_4078:csi_2escm"),(void*)f_4078},
{C_text("f_4084:csi_2escm"),(void*)f_4084},
{C_text("f_4091:csi_2escm"),(void*)f_4091},
{C_text("f_4093:csi_2escm"),(void*)f_4093},
{C_text("f_4103:csi_2escm"),(void*)f_4103},
{C_text("f_4106:csi_2escm"),(void*)f_4106},
{C_text("f_4120:csi_2escm"),(void*)f_4120},
{C_text("f_4142:csi_2escm"),(void*)f_4142},
{C_text("f_4152:csi_2escm"),(void*)f_4152},
{C_text("f_4166:csi_2escm"),(void*)f_4166},
{C_text("f_4197:csi_2escm"),(void*)f_4197},
{C_text("f_4210:csi_2escm"),(void*)f_4210},
{C_text("f_4213:csi_2escm"),(void*)f_4213},
{C_text("f_4216:csi_2escm"),(void*)f_4216},
{C_text("f_4219:csi_2escm"),(void*)f_4219},
{C_text("f_4222:csi_2escm"),(void*)f_4222},
{C_text("f_4231:csi_2escm"),(void*)f_4231},
{C_text("f_4241:csi_2escm"),(void*)f_4241},
{C_text("f_4245:csi_2escm"),(void*)f_4245},
{C_text("f_4268:csi_2escm"),(void*)f_4268},
{C_text("f_4285:csi_2escm"),(void*)f_4285},
{C_text("f_4297:csi_2escm"),(void*)f_4297},
{C_text("f_4305:csi_2escm"),(void*)f_4305},
{C_text("f_4308:csi_2escm"),(void*)f_4308},
{C_text("f_4319:csi_2escm"),(void*)f_4319},
{C_text("f_4326:csi_2escm"),(void*)f_4326},
{C_text("f_4332:csi_2escm"),(void*)f_4332},
{C_text("f_4352:csi_2escm"),(void*)f_4352},
{C_text("f_4387:csi_2escm"),(void*)f_4387},
{C_text("f_4420:csi_2escm"),(void*)f_4420},
{C_text("f_4435:csi_2escm"),(void*)f_4435},
{C_text("f_4438:csi_2escm"),(void*)f_4438},
{C_text("f_4445:csi_2escm"),(void*)f_4445},
{C_text("f_4449:csi_2escm"),(void*)f_4449},
{C_text("f_4458:csi_2escm"),(void*)f_4458},
{C_text("f_4461:csi_2escm"),(void*)f_4461},
{C_text("f_4464:csi_2escm"),(void*)f_4464},
{C_text("f_4476:csi_2escm"),(void*)f_4476},
{C_text("f_4479:csi_2escm"),(void*)f_4479},
{C_text("f_4491:csi_2escm"),(void*)f_4491},
{C_text("f_4494:csi_2escm"),(void*)f_4494},
{C_text("f_4506:csi_2escm"),(void*)f_4506},
{C_text("f_4509:csi_2escm"),(void*)f_4509},
{C_text("f_4512:csi_2escm"),(void*)f_4512},
{C_text("f_4515:csi_2escm"),(void*)f_4515},
{C_text("f_4545:csi_2escm"),(void*)f_4545},
{C_text("f_4548:csi_2escm"),(void*)f_4548},
{C_text("f_4553:csi_2escm"),(void*)f_4553},
{C_text("f_4563:csi_2escm"),(void*)f_4563},
{C_text("f_4578:csi_2escm"),(void*)f_4578},
{C_text("f_4587:csi_2escm"),(void*)f_4587},
{C_text("f_4588:csi_2escm"),(void*)f_4588},
{C_text("f_4594:csi_2escm"),(void*)f_4594},
{C_text("f_4598:csi_2escm"),(void*)f_4598},
{C_text("f_4604:csi_2escm"),(void*)f_4604},
{C_text("f_4609:csi_2escm"),(void*)f_4609},
{C_text("f_4619:csi_2escm"),(void*)f_4619},
{C_text("f_4634:csi_2escm"),(void*)f_4634},
{C_text("f_4643:csi_2escm"),(void*)f_4643},
{C_text("f_4648:csi_2escm"),(void*)f_4648},
{C_text("f_4652:csi_2escm"),(void*)f_4652},
{C_text("f_4657:csi_2escm"),(void*)f_4657},
{C_text("f_4663:csi_2escm"),(void*)f_4663},
{C_text("f_4667:csi_2escm"),(void*)f_4667},
{C_text("f_4674:csi_2escm"),(void*)f_4674},
{C_text("f_4676:csi_2escm"),(void*)f_4676},
{C_text("f_4680:csi_2escm"),(void*)f_4680},
{C_text("f_4695:csi_2escm"),(void*)f_4695},
{C_text("f_4711:csi_2escm"),(void*)f_4711},
{C_text("f_4729:csi_2escm"),(void*)f_4729},
{C_text("f_4733:csi_2escm"),(void*)f_4733},
{C_text("f_4749:csi_2escm"),(void*)f_4749},
{C_text("f_4761:csi_2escm"),(void*)f_4761},
{C_text("f_4773:csi_2escm"),(void*)f_4773},
{C_text("f_4785:csi_2escm"),(void*)f_4785},
{C_text("f_4792:csi_2escm"),(void*)f_4792},
{C_text("f_4805:csi_2escm"),(void*)f_4805},
{C_text("f_4814:csi_2escm"),(void*)f_4814},
{C_text("f_4817:csi_2escm"),(void*)f_4817},
{C_text("f_4820:csi_2escm"),(void*)f_4820},
{C_text("f_4833:csi_2escm"),(void*)f_4833},
{C_text("f_4855:csi_2escm"),(void*)f_4855},
{C_text("f_4860:csi_2escm"),(void*)f_4860},
{C_text("f_4870:csi_2escm"),(void*)f_4870},
{C_text("f_4884:csi_2escm"),(void*)f_4884},
{C_text("f_4930:csi_2escm"),(void*)f_4930},
{C_text("f_4936:csi_2escm"),(void*)f_4936},
{C_text("f_4940:csi_2escm"),(void*)f_4940},
{C_text("f_4956:csi_2escm"),(void*)f_4956},
{C_text("f_4959:csi_2escm"),(void*)f_4959},
{C_text("f_4965:csi_2escm"),(void*)f_4965},
{C_text("f_4979:csi_2escm"),(void*)f_4979},
{C_text("f_4982:csi_2escm"),(void*)f_4982},
{C_text("f_4988:csi_2escm"),(void*)f_4988},
{C_text("f_4991:csi_2escm"),(void*)f_4991},
{C_text("f_4999:csi_2escm"),(void*)f_4999},
{C_text("f_5009:csi_2escm"),(void*)f_5009},
{C_text("f_5024:csi_2escm"),(void*)f_5024},
{C_text("f_5033:csi_2escm"),(void*)f_5033},
{C_text("f_5039:csi_2escm"),(void*)f_5039},
{C_text("f_5045:csi_2escm"),(void*)f_5045},
{C_text("f_5051:csi_2escm"),(void*)f_5051},
{C_text("f_5057:csi_2escm"),(void*)f_5057},
{C_text("f_5065:csi_2escm"),(void*)f_5065},
{C_text("f_5067:csi_2escm"),(void*)f_5067},
{C_text("f_5084:csi_2escm"),(void*)f_5084},
{C_text("f_5090:csi_2escm"),(void*)f_5090},
{C_text("f_5096:csi_2escm"),(void*)f_5096},
{C_text("f_5104:csi_2escm"),(void*)f_5104},
{C_text("f_5105:csi_2escm"),(void*)f_5105},
{C_text("f_5115:csi_2escm"),(void*)f_5115},
{C_text("f_5119:csi_2escm"),(void*)f_5119},
{C_text("f_5122:csi_2escm"),(void*)f_5122},
{C_text("f_5125:csi_2escm"),(void*)f_5125},
{C_text("f_5127:csi_2escm"),(void*)f_5127},
{C_text("f_5135:csi_2escm"),(void*)f_5135},
{C_text("f_5143:csi_2escm"),(void*)f_5143},
{C_text("f_5146:csi_2escm"),(void*)f_5146},
{C_text("f_5147:csi_2escm"),(void*)f_5147},
{C_text("f_5151:csi_2escm"),(void*)f_5151},
{C_text("f_5161:csi_2escm"),(void*)f_5161},
{C_text("f_5170:csi_2escm"),(void*)f_5170},
{C_text("f_5178:csi_2escm"),(void*)f_5178},
{C_text("f_5193:csi_2escm"),(void*)f_5193},
{C_text("f_5196:csi_2escm"),(void*)f_5196},
{C_text("f_5199:csi_2escm"),(void*)f_5199},
{C_text("f_5202:csi_2escm"),(void*)f_5202},
{C_text("f_5209:csi_2escm"),(void*)f_5209},
{C_text("f_5214:csi_2escm"),(void*)f_5214},
{C_text("f_5218:csi_2escm"),(void*)f_5218},
{C_text("f_5222:csi_2escm"),(void*)f_5222},
{C_text("f_5226:csi_2escm"),(void*)f_5226},
{C_text("f_5230:csi_2escm"),(void*)f_5230},
{C_text("f_5234:csi_2escm"),(void*)f_5234},
{C_text("f_5238:csi_2escm"),(void*)f_5238},
{C_text("f_5242:csi_2escm"),(void*)f_5242},
{C_text("f_5270:csi_2escm"),(void*)f_5270},
{C_text("f_5282:csi_2escm"),(void*)f_5282},
{C_text("f_5284:csi_2escm"),(void*)f_5284},
{C_text("f_5294:csi_2escm"),(void*)f_5294},
{C_text("f_5315:csi_2escm"),(void*)f_5315},
{C_text("f_5317:csi_2escm"),(void*)f_5317},
{C_text("f_5342:csi_2escm"),(void*)f_5342},
{C_text("f_5362:csi_2escm"),(void*)f_5362},
{C_text("f_5397:csi_2escm"),(void*)f_5397},
{C_text("f_5425:csi_2escm"),(void*)f_5425},
{C_text("f_5431:csi_2escm"),(void*)f_5431},
{C_text("f_5438:csi_2escm"),(void*)f_5438},
{C_text("f_5443:csi_2escm"),(void*)f_5443},
{C_text("f_5466:csi_2escm"),(void*)f_5466},
{C_text("f_5475:csi_2escm"),(void*)f_5475},
{C_text("f_5485:csi_2escm"),(void*)f_5485},
{C_text("f_5488:csi_2escm"),(void*)f_5488},
{C_text("f_5517:csi_2escm"),(void*)f_5517},
{C_text("f_5545:csi_2escm"),(void*)f_5545},
{C_text("f_5560:csi_2escm"),(void*)f_5560},
{C_text("f_5563:csi_2escm"),(void*)f_5563},
{C_text("f_5566:csi_2escm"),(void*)f_5566},
{C_text("f_5641:csi_2escm"),(void*)f_5641},
{C_text("f_5644:csi_2escm"),(void*)f_5644},
{C_text("f_5647:csi_2escm"),(void*)f_5647},
{C_text("f_5738:csi_2escm"),(void*)f_5738},
{C_text("f_5745:csi_2escm"),(void*)f_5745},
{C_text("f_5754:csi_2escm"),(void*)f_5754},
{C_text("f_5757:csi_2escm"),(void*)f_5757},
{C_text("f_5769:csi_2escm"),(void*)f_5769},
{C_text("f_5774:csi_2escm"),(void*)f_5774},
{C_text("f_5784:csi_2escm"),(void*)f_5784},
{C_text("f_5787:csi_2escm"),(void*)f_5787},
{C_text("f_5790:csi_2escm"),(void*)f_5790},
{C_text("f_5799:csi_2escm"),(void*)f_5799},
{C_text("f_5819:csi_2escm"),(void*)f_5819},
{C_text("f_5822:csi_2escm"),(void*)f_5822},
{C_text("f_5825:csi_2escm"),(void*)f_5825},
{C_text("f_5837:csi_2escm"),(void*)f_5837},
{C_text("f_5840:csi_2escm"),(void*)f_5840},
{C_text("f_5849:csi_2escm"),(void*)f_5849},
{C_text("f_5880:csi_2escm"),(void*)f_5880},
{C_text("f_5944:csi_2escm"),(void*)f_5944},
{C_text("f_5948:csi_2escm"),(void*)f_5948},
{C_text("f_5954:csi_2escm"),(void*)f_5954},
{C_text("f_5991:csi_2escm"),(void*)f_5991},
{C_text("f_5998:csi_2escm"),(void*)f_5998},
{C_text("f_6115:csi_2escm"),(void*)f_6115},
{C_text("f_6121:csi_2escm"),(void*)f_6121},
{C_text("f_6127:csi_2escm"),(void*)f_6127},
{C_text("f_6140:csi_2escm"),(void*)f_6140},
{C_text("f_6152:csi_2escm"),(void*)f_6152},
{C_text("f_6155:csi_2escm"),(void*)f_6155},
{C_text("f_6166:csi_2escm"),(void*)f_6166},
{C_text("f_6174:csi_2escm"),(void*)f_6174},
{C_text("f_6195:csi_2escm"),(void*)f_6195},
{C_text("f_6204:csi_2escm"),(void*)f_6204},
{C_text("f_6214:csi_2escm"),(void*)f_6214},
{C_text("f_6249:csi_2escm"),(void*)f_6249},
{C_text("f_6250:csi_2escm"),(void*)f_6250},
{C_text("f_6254:csi_2escm"),(void*)f_6254},
{C_text("f_6263:csi_2escm"),(void*)f_6263},
{C_text("f_6273:csi_2escm"),(void*)f_6273},
{C_text("f_6286:csi_2escm"),(void*)f_6286},
{C_text("f_6291:csi_2escm"),(void*)f_6291},
{C_text("f_6318:csi_2escm"),(void*)f_6318},
{C_text("f_6328:csi_2escm"),(void*)f_6328},
{C_text("f_6359:csi_2escm"),(void*)f_6359},
{C_text("f_6367:csi_2escm"),(void*)f_6367},
{C_text("f_6380:csi_2escm"),(void*)f_6380},
{C_text("f_6386:csi_2escm"),(void*)f_6386},
{C_text("f_6411:csi_2escm"),(void*)f_6411},
{C_text("f_6424:csi_2escm"),(void*)f_6424},
{C_text("f_6452:csi_2escm"),(void*)f_6452},
{C_text("f_6460:csi_2escm"),(void*)f_6460},
{C_text("f_6462:csi_2escm"),(void*)f_6462},
{C_text("f_6465:csi_2escm"),(void*)f_6465},
{C_text("f_6487:csi_2escm"),(void*)f_6487},
{C_text("f_6494:csi_2escm"),(void*)f_6494},
{C_text("f_6514:csi_2escm"),(void*)f_6514},
{C_text("f_6547:csi_2escm"),(void*)f_6547},
{C_text("f_6575:csi_2escm"),(void*)f_6575},
{C_text("f_6580:csi_2escm"),(void*)f_6580},
{C_text("f_6615:csi_2escm"),(void*)f_6615},
{C_text("f_6618:csi_2escm"),(void*)f_6618},
{C_text("f_6622:csi_2escm"),(void*)f_6622},
{C_text("f_6636:csi_2escm"),(void*)f_6636},
{C_text("f_6648:csi_2escm"),(void*)f_6648},
{C_text("f_6658:csi_2escm"),(void*)f_6658},
{C_text("f_6661:csi_2escm"),(void*)f_6661},
{C_text("f_6664:csi_2escm"),(void*)f_6664},
{C_text("f_6667:csi_2escm"),(void*)f_6667},
{C_text("f_6670:csi_2escm"),(void*)f_6670},
{C_text("f_6673:csi_2escm"),(void*)f_6673},
{C_text("f_6682:csi_2escm"),(void*)f_6682},
{C_text("f_6695:csi_2escm"),(void*)f_6695},
{C_text("f_6698:csi_2escm"),(void*)f_6698},
{C_text("f_6719:csi_2escm"),(void*)f_6719},
{C_text("f_6733:csi_2escm"),(void*)f_6733},
{C_text("f_6767:csi_2escm"),(void*)f_6767},
{C_text("f_6777:csi_2escm"),(void*)f_6777},
{C_text("f_6787:csi_2escm"),(void*)f_6787},
{C_text("f_6790:csi_2escm"),(void*)f_6790},
{C_text("f_6805:csi_2escm"),(void*)f_6805},
{C_text("f_6809:csi_2escm"),(void*)f_6809},
{C_text("f_6816:csi_2escm"),(void*)f_6816},
{C_text("f_6818:csi_2escm"),(void*)f_6818},
{C_text("f_6821:csi_2escm"),(void*)f_6821},
{C_text("f_6827:csi_2escm"),(void*)f_6827},
{C_text("f_6844:csi_2escm"),(void*)f_6844},
{C_text("f_6853:csi_2escm"),(void*)f_6853},
{C_text("f_6884:csi_2escm"),(void*)f_6884},
{C_text("f_6887:csi_2escm"),(void*)f_6887},
{C_text("f_6890:csi_2escm"),(void*)f_6890},
{C_text("f_6893:csi_2escm"),(void*)f_6893},
{C_text("f_6896:csi_2escm"),(void*)f_6896},
{C_text("f_6899:csi_2escm"),(void*)f_6899},
{C_text("f_6902:csi_2escm"),(void*)f_6902},
{C_text("f_6905:csi_2escm"),(void*)f_6905},
{C_text("f_6908:csi_2escm"),(void*)f_6908},
{C_text("f_6911:csi_2escm"),(void*)f_6911},
{C_text("f_6914:csi_2escm"),(void*)f_6914},
{C_text("f_6927:csi_2escm"),(void*)f_6927},
{C_text("f_6937:csi_2escm"),(void*)f_6937},
{C_text("f_6942:csi_2escm"),(void*)f_6942},
{C_text("f_6955:csi_2escm"),(void*)f_6955},
{C_text("f_6958:csi_2escm"),(void*)f_6958},
{C_text("f_6961:csi_2escm"),(void*)f_6961},
{C_text("f_6964:csi_2escm"),(void*)f_6964},
{C_text("f_6967:csi_2escm"),(void*)f_6967},
{C_text("f_7001:csi_2escm"),(void*)f_7001},
{C_text("f_7011:csi_2escm"),(void*)f_7011},
{C_text("f_7045:csi_2escm"),(void*)f_7045},
{C_text("f_7048:csi_2escm"),(void*)f_7048},
{C_text("f_7103:csi_2escm"),(void*)f_7103},
{C_text("f_7160:csi_2escm"),(void*)f_7160},
{C_text("f_7162:csi_2escm"),(void*)f_7162},
{C_text("f_7171:csi_2escm"),(void*)f_7171},
{C_text("f_7191:csi_2escm"),(void*)f_7191},
{C_text("f_7194:csi_2escm"),(void*)f_7194},
{C_text("f_7198:csi_2escm"),(void*)f_7198},
{C_text("f_7201:csi_2escm"),(void*)f_7201},
{C_text("f_7213:csi_2escm"),(void*)f_7213},
{C_text("f_7238:csi_2escm"),(void*)f_7238},
{C_text("f_7247:csi_2escm"),(void*)f_7247},
{C_text("f_7253:csi_2escm"),(void*)f_7253},
{C_text("f_7263:csi_2escm"),(void*)f_7263},
{C_text("f_7275:csi_2escm"),(void*)f_7275},
{C_text("f_7278:csi_2escm"),(void*)f_7278},
{C_text("f_7281:csi_2escm"),(void*)f_7281},
{C_text("f_7284:csi_2escm"),(void*)f_7284},
{C_text("f_7287:csi_2escm"),(void*)f_7287},
{C_text("f_7323:csi_2escm"),(void*)f_7323},
{C_text("f_7330:csi_2escm"),(void*)f_7330},
{C_text("f_7332:csi_2escm"),(void*)f_7332},
{C_text("f_7342:csi_2escm"),(void*)f_7342},
{C_text("f_7385:csi_2escm"),(void*)f_7385},
{C_text("f_7390:csi_2escm"),(void*)f_7390},
{C_text("f_7396:csi_2escm"),(void*)f_7396},
{C_text("f_7408:csi_2escm"),(void*)f_7408},
{C_text("f_7445:csi_2escm"),(void*)f_7445},
{C_text("f_7451:csi_2escm"),(void*)f_7451},
{C_text("f_7486:csi_2escm"),(void*)f_7486},
{C_text("f_7500:csi_2escm"),(void*)f_7500},
{C_text("f_7515:csi_2escm"),(void*)f_7515},
{C_text("f_7536:csi_2escm"),(void*)f_7536},
{C_text("f_7540:csi_2escm"),(void*)f_7540},
{C_text("f_7544:csi_2escm"),(void*)f_7544},
{C_text("f_7583:csi_2escm"),(void*)f_7583},
{C_text("f_7590:csi_2escm"),(void*)f_7590},
{C_text("f_7630:csi_2escm"),(void*)f_7630},
{C_text("f_7666:csi_2escm"),(void*)f_7666},
{C_text("f_7714:csi_2escm"),(void*)f_7714},
{C_text("f_7723:csi_2escm"),(void*)f_7723},
{C_text("f_7728:csi_2escm"),(void*)f_7728},
{C_text("f_7734:csi_2escm"),(void*)f_7734},
{C_text("f_7740:csi_2escm"),(void*)f_7740},
{C_text("f_7746:csi_2escm"),(void*)f_7746},
{C_text("f_7752:csi_2escm"),(void*)f_7752},
{C_text("f_7758:csi_2escm"),(void*)f_7758},
{C_text("f_7764:csi_2escm"),(void*)f_7764},
{C_text("f_7785:csi_2escm"),(void*)f_7785},
{C_text("f_7788:csi_2escm"),(void*)f_7788},
{C_text("f_7791:csi_2escm"),(void*)f_7791},
{C_text("f_7794:csi_2escm"),(void*)f_7794},
{C_text("f_7797:csi_2escm"),(void*)f_7797},
{C_text("f_7800:csi_2escm"),(void*)f_7800},
{C_text("f_7803:csi_2escm"),(void*)f_7803},
{C_text("f_7806:csi_2escm"),(void*)f_7806},
{C_text("f_7811:csi_2escm"),(void*)f_7811},
{C_text("f_7817:csi_2escm"),(void*)f_7817},
{C_text("f_7825:csi_2escm"),(void*)f_7825},
{C_text("f_7846:csi_2escm"),(void*)f_7846},
{C_text("f_7862:csi_2escm"),(void*)f_7862},
{C_text("f_7865:csi_2escm"),(void*)f_7865},
{C_text("f_7868:csi_2escm"),(void*)f_7868},
{C_text("f_7871:csi_2escm"),(void*)f_7871},
{C_text("f_7877:csi_2escm"),(void*)f_7877},
{C_text("f_7886:csi_2escm"),(void*)f_7886},
{C_text("f_7908:csi_2escm"),(void*)f_7908},
{C_text("f_7922:csi_2escm"),(void*)f_7922},
{C_text("f_7929:csi_2escm"),(void*)f_7929},
{C_text("f_7936:csi_2escm"),(void*)f_7936},
{C_text("f_7938:csi_2escm"),(void*)f_7938},
{C_text("f_7948:csi_2escm"),(void*)f_7948},
{C_text("f_7955:csi_2escm"),(void*)f_7955},
{C_text("f_7959:csi_2escm"),(void*)f_7959},
{C_text("f_7961:csi_2escm"),(void*)f_7961},
{C_text("f_7969:csi_2escm"),(void*)f_7969},
{C_text("f_7979:csi_2escm"),(void*)f_7979},
{C_text("f_7982:csi_2escm"),(void*)f_7982},
{C_text("f_7985:csi_2escm"),(void*)f_7985},
{C_text("f_7988:csi_2escm"),(void*)f_7988},
{C_text("f_7991:csi_2escm"),(void*)f_7991},
{C_text("f_7994:csi_2escm"),(void*)f_7994},
{C_text("f_7997:csi_2escm"),(void*)f_7997},
{C_text("f_8003:csi_2escm"),(void*)f_8003},
{C_text("f_8006:csi_2escm"),(void*)f_8006},
{C_text("f_8012:csi_2escm"),(void*)f_8012},
{C_text("f_8015:csi_2escm"),(void*)f_8015},
{C_text("f_8021:csi_2escm"),(void*)f_8021},
{C_text("f_8025:csi_2escm"),(void*)f_8025},
{C_text("f_8028:csi_2escm"),(void*)f_8028},
{C_text("f_8031:csi_2escm"),(void*)f_8031},
{C_text("f_8034:csi_2escm"),(void*)f_8034},
{C_text("f_8037:csi_2escm"),(void*)f_8037},
{C_text("f_8040:csi_2escm"),(void*)f_8040},
{C_text("f_8043:csi_2escm"),(void*)f_8043},
{C_text("f_8046:csi_2escm"),(void*)f_8046},
{C_text("f_8049:csi_2escm"),(void*)f_8049},
{C_text("f_8054:csi_2escm"),(void*)f_8054},
{C_text("f_8070:csi_2escm"),(void*)f_8070},
{C_text("f_8082:csi_2escm"),(void*)f_8082},
{C_text("f_8110:csi_2escm"),(void*)f_8110},
{C_text("f_8122:csi_2escm"),(void*)f_8122},
{C_text("f_8137:csi_2escm"),(void*)f_8137},
{C_text("f_8156:csi_2escm"),(void*)f_8156},
{C_text("f_8166:csi_2escm"),(void*)f_8166},
{C_text("f_8181:csi_2escm"),(void*)f_8181},
{C_text("f_8191:csi_2escm"),(void*)f_8191},
{C_text("f_8201:csi_2escm"),(void*)f_8201},
{C_text("f_8212:csi_2escm"),(void*)f_8212},
{C_text("f_8216:csi_2escm"),(void*)f_8216},
{C_text("f_8223:csi_2escm"),(void*)f_8223},
{C_text("f_8225:csi_2escm"),(void*)f_8225},
{C_text("f_8253:csi_2escm"),(void*)f_8253},
{C_text("f_8257:csi_2escm"),(void*)f_8257},
{C_text("f_8261:csi_2escm"),(void*)f_8261},
{C_text("f_8264:csi_2escm"),(void*)f_8264},
{C_text("f_8267:csi_2escm"),(void*)f_8267},
{C_text("f_8270:csi_2escm"),(void*)f_8270},
{C_text("f_8275:csi_2escm"),(void*)f_8275},
{C_text("f_8288:csi_2escm"),(void*)f_8288},
{C_text("f_8291:csi_2escm"),(void*)f_8291},
{C_text("f_8305:csi_2escm"),(void*)f_8305},
{C_text("f_8324:csi_2escm"),(void*)f_8324},
{C_text("f_8336:csi_2escm"),(void*)f_8336},
{C_text("f_8339:csi_2escm"),(void*)f_8339},
{C_text("f_8353:csi_2escm"),(void*)f_8353},
{C_text("f_8356:csi_2escm"),(void*)f_8356},
{C_text("f_8359:csi_2escm"),(void*)f_8359},
{C_text("f_8362:csi_2escm"),(void*)f_8362},
{C_text("f_8371:csi_2escm"),(void*)f_8371},
{C_text("f_8374:csi_2escm"),(void*)f_8374},
{C_text("f_8432:csi_2escm"),(void*)f_8432},
{C_text("f_8439:csi_2escm"),(void*)f_8439},
{C_text("f_8445:csi_2escm"),(void*)f_8445},
{C_text("f_8452:csi_2escm"),(void*)f_8452},
{C_text("f_8458:csi_2escm"),(void*)f_8458},
{C_text("f_8460:csi_2escm"),(void*)f_8460},
{C_text("f_8485:csi_2escm"),(void*)f_8485},
{C_text("f_8494:csi_2escm"),(void*)f_8494},
{C_text("f_8519:csi_2escm"),(void*)f_8519},
{C_text("f_8528:csi_2escm"),(void*)f_8528},
{C_text("f_8538:csi_2escm"),(void*)f_8538},
{C_text("f_8551:csi_2escm"),(void*)f_8551},
{C_text("f_8561:csi_2escm"),(void*)f_8561},
{C_text("f_8574:csi_2escm"),(void*)f_8574},
{C_text("f_8584:csi_2escm"),(void*)f_8584},
{C_text("f_8598:csi_2escm"),(void*)f_8598},
{C_text("f_8601:csi_2escm"),(void*)f_8601},
{C_text("f_8604:csi_2escm"),(void*)f_8604},
{C_text("f_8613:csi_2escm"),(void*)f_8613},
{C_text("f_8616:csi_2escm"),(void*)f_8616},
{C_text("f_8626:csi_2escm"),(void*)f_8626},
{C_text("f_8633:csi_2escm"),(void*)f_8633},
{C_text("f_8643:csi_2escm"),(void*)f_8643},
{C_text("f_8649:csi_2escm"),(void*)f_8649},
{C_text("f_8652:csi_2escm"),(void*)f_8652},
{C_text("f_8661:csi_2escm"),(void*)f_8661},
{C_text("f_8667:csi_2escm"),(void*)f_8667},
{C_text("f_8670:csi_2escm"),(void*)f_8670},
{C_text("f_8673:csi_2escm"),(void*)f_8673},
{C_text("f_8676:csi_2escm"),(void*)f_8676},
{C_text("f_8685:csi_2escm"),(void*)f_8685},
{C_text("f_8750:csi_2escm"),(void*)f_8750},
{C_text("f_8763:csi_2escm"),(void*)f_8763},
{C_text("f_8767:csi_2escm"),(void*)f_8767},
{C_text("f_8771:csi_2escm"),(void*)f_8771},
{C_text("f_8777:csi_2escm"),(void*)f_8777},
{C_text("f_8783:csi_2escm"),(void*)f_8783},
{C_text("f_8785:csi_2escm"),(void*)f_8785},
{C_text("f_8791:csi_2escm"),(void*)f_8791},
{C_text("f_8795:csi_2escm"),(void*)f_8795},
{C_text("f_8798:csi_2escm"),(void*)f_8798},
{C_text("f_8805:csi_2escm"),(void*)f_8805},
{C_text("f_8809:csi_2escm"),(void*)f_8809},
{C_text("f_8811:csi_2escm"),(void*)f_8811},
{C_text("f_8815:csi_2escm"),(void*)f_8815},
{C_text("f_8824:csi_2escm"),(void*)f_8824},
{C_text("f_8830:csi_2escm"),(void*)f_8830},
{C_text("f_8834:csi_2escm"),(void*)f_8834},
{C_text("f_8838:csi_2escm"),(void*)f_8838},
{C_text("f_8851:csi_2escm"),(void*)f_8851},
{C_text("f_8853:csi_2escm"),(void*)f_8853},
{C_text("f_8861:csi_2escm"),(void*)f_8861},
{C_text("f_8864:csi_2escm"),(void*)f_8864},
{C_text("f_8871:csi_2escm"),(void*)f_8871},
{C_text("f_8875:csi_2escm"),(void*)f_8875},
{C_text("f_8884:csi_2escm"),(void*)f_8884},
{C_text("f_8886:csi_2escm"),(void*)f_8886},
{C_text("toplevel:csi_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: chicken.csi#constant231 
o|hiding unexported module binding: chicken.csi#partition 
o|hiding unexported module binding: chicken.csi#span 
o|hiding unexported module binding: chicken.csi#take 
o|hiding unexported module binding: chicken.csi#drop 
o|hiding unexported module binding: chicken.csi#split-at 
o|hiding unexported module binding: chicken.csi#append-map 
o|hiding unexported module binding: chicken.csi#every 
o|hiding unexported module binding: chicken.csi#any 
o|hiding unexported module binding: chicken.csi#cons* 
o|hiding unexported module binding: chicken.csi#concatenate 
o|hiding unexported module binding: chicken.csi#delete 
o|hiding unexported module binding: chicken.csi#first 
o|hiding unexported module binding: chicken.csi#second 
o|hiding unexported module binding: chicken.csi#third 
o|hiding unexported module binding: chicken.csi#fourth 
o|hiding unexported module binding: chicken.csi#fifth 
o|hiding unexported module binding: chicken.csi#delete-duplicates 
o|hiding unexported module binding: chicken.csi#alist-cons 
o|hiding unexported module binding: chicken.csi#filter 
o|hiding unexported module binding: chicken.csi#filter-map 
o|hiding unexported module binding: chicken.csi#remove 
o|hiding unexported module binding: chicken.csi#unzip1 
o|hiding unexported module binding: chicken.csi#last 
o|hiding unexported module binding: chicken.csi#list-index 
o|hiding unexported module binding: chicken.csi#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.csi#lset-difference/eq? 
o|hiding unexported module binding: chicken.csi#lset-union/eq? 
o|hiding unexported module binding: chicken.csi#lset-intersection/eq? 
o|hiding unexported module binding: chicken.csi#list-tabulate 
o|hiding unexported module binding: chicken.csi#lset<=/eq? 
o|hiding unexported module binding: chicken.csi#lset=/eq? 
o|hiding unexported module binding: chicken.csi#length+ 
o|hiding unexported module binding: chicken.csi#find 
o|hiding unexported module binding: chicken.csi#find-tail 
o|hiding unexported module binding: chicken.csi#iota 
o|hiding unexported module binding: chicken.csi#make-list 
o|hiding unexported module binding: chicken.csi#posq 
o|hiding unexported module binding: chicken.csi#posv 
o|hiding unexported module binding: chicken.csi#constant718 
o|hiding unexported module binding: chicken.csi#selected-frame 
o|hiding unexported module binding: chicken.csi#default-editor 
o|hiding unexported module binding: chicken.csi#print-usage 
o|hiding unexported module binding: chicken.csi#print-banner 
o|hiding unexported module binding: chicken.csi#dirseparator? 
o|hiding unexported module binding: chicken.csi#chop-separator 
o|hiding unexported module binding: chicken.csi#lookup-script-file 
o|hiding unexported module binding: chicken.csi#history-list 
o|hiding unexported module binding: chicken.csi#history-count 
o|hiding unexported module binding: chicken.csi#history-add 
o|hiding unexported module binding: chicken.csi#history-clear 
o|hiding unexported module binding: chicken.csi#history-show 
o|hiding unexported module binding: chicken.csi#history-ref 
o|hiding unexported module binding: chicken.csi#register-repl-history! 
o|hiding unexported module binding: chicken.csi#tty-input? 
o|hiding unexported module binding: chicken.csi#command-table 
o|hiding unexported module binding: chicken.csi#parse-option-string 
o|hiding unexported module binding: chicken.csi#report 
o|hiding unexported module binding: chicken.csi#bytevector-data 
o|hiding unexported module binding: chicken.csi#circular-list? 
o|hiding unexported module binding: chicken.csi#improper-pairs? 
o|hiding unexported module binding: chicken.csi#describe 
o|hiding unexported module binding: chicken.csi#dump 
o|hiding unexported module binding: chicken.csi#hexdump 
o|hiding unexported module binding: chicken.csi#show-frameinfo 
o|hiding unexported module binding: chicken.csi#select-frame 
o|hiding unexported module binding: chicken.csi#copy-from-frame 
o|hiding unexported module binding: chicken.csi#defhandler 
o|hiding unexported module binding: chicken.csi#member* 
o|hiding unexported module binding: chicken.csi#constant1696 
o|hiding unexported module binding: chicken.csi#constant1702 
o|hiding unexported module binding: chicken.csi#canonicalize-args 
o|hiding unexported module binding: chicken.csi#findall 
o|hiding unexported module binding: chicken.csi#constant1767 
o|hiding unexported module binding: chicken.csi#constant1775 
o|hiding unexported module binding: chicken.csi#string-trim 
o|hiding unexported module binding: chicken.csi#string->extension-name 
o|hiding unexported module binding: chicken.csi#run 
S|applied compiler syntax:
S|  scheme#for-each		11
S|  chicken.format#printf		4
S|  chicken.base#foldl		3
S|  scheme#map		9
S|  chicken.base#foldr		3
o|eliminated procedure checks: 162 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (scheme#set-cdr! pair *)
o|  2 (scheme#cddr (pair * pair))
o|  3 (scheme#cadr (pair * pair))
o|  1 (scheme#positive? fixnum)
o|  2 (chicken.base#sub1 *)
o|  1 (chicken.base#add1 fixnum)
o|  6 (scheme#char=? char char)
o|  13 (scheme#string=? * *)
o|  1 (scheme#min fixnum fixnum)
o|  1 (scheme#memq * list)
o|  3 (scheme#string-length string)
o|  1 (scheme#number->string * *)
o|  2 (chicken.base#add1 *)
o|  1 (scheme#- fixnum fixnum)
o|  1 (scheme#/ * *)
o|  1 (scheme#current-output-port)
o|  2 (scheme#zero? integer)
o|  31 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  1 (scheme#current-input-port)
o|  4 (##sys#check-output-port * * *)
o|  6 (scheme#string-ref string fixnum)
o|  1 (scheme#> fixnum fixnum)
o|  5 (scheme#string-append string string)
o|  1 (scheme#make-string fixnum)
o|  1 (chicken.base#sub1 fixnum)
o|  1 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  41 (scheme#cdr pair)
o|  14 (scheme#car pair)
(o e)|safe calls: 1010 
(o e)|assignments to immediate values: 5 
o|removed side-effect free assignment to unused variable: chicken.csi#partition 
o|removed side-effect free assignment to unused variable: chicken.csi#span 
o|removed side-effect free assignment to unused variable: chicken.csi#drop 
o|removed side-effect free assignment to unused variable: chicken.csi#split-at 
o|removed side-effect free assignment to unused variable: chicken.csi#append-map 
o|inlining procedure: k2957 
o|inlining procedure: k2957 
o|inlining procedure: k2988 
o|inlining procedure: k2988 
o|removed side-effect free assignment to unused variable: chicken.csi#cons* 
o|removed side-effect free assignment to unused variable: chicken.csi#concatenate 
o|removed side-effect free assignment to unused variable: chicken.csi#first 
o|removed side-effect free assignment to unused variable: chicken.csi#second 
o|removed side-effect free assignment to unused variable: chicken.csi#third 
o|removed side-effect free assignment to unused variable: chicken.csi#fourth 
o|removed side-effect free assignment to unused variable: chicken.csi#fifth 
o|removed side-effect free assignment to unused variable: chicken.csi#alist-cons 
o|inlining procedure: k3205 
o|inlining procedure: k3205 
o|inlining procedure: k3197 
o|inlining procedure: k3197 
o|removed side-effect free assignment to unused variable: chicken.csi#filter-map 
o|removed side-effect free assignment to unused variable: chicken.csi#remove 
o|removed side-effect free assignment to unused variable: chicken.csi#unzip1 
o|removed side-effect free assignment to unused variable: chicken.csi#last 
o|removed side-effect free assignment to unused variable: chicken.csi#list-index 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset-intersection/eq? 
o|inlining procedure: k3596 
o|inlining procedure: k3596 
o|removed side-effect free assignment to unused variable: chicken.csi#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.csi#length+ 
o|removed side-effect free assignment to unused variable: chicken.csi#find 
o|removed side-effect free assignment to unused variable: chicken.csi#find-tail 
o|removed side-effect free assignment to unused variable: chicken.csi#iota 
o|removed side-effect free assignment to unused variable: chicken.csi#make-list 
o|removed side-effect free assignment to unused variable: chicken.csi#posq 
o|removed side-effect free assignment to unused variable: chicken.csi#posv 
o|substituted constant variable: chicken.csi#constant231 
o|inlining procedure: k3926 
o|inlining procedure: k3926 
o|inlining procedure: k3945 
o|inlining procedure: k3945 
o|inlining procedure: k3984 
o|inlining procedure: k3984 
o|substituted constant variable: a4000 
o|inlining procedure: k4041 
o|inlining procedure: k4056 
o|contracted procedure: "(csi.scm:192) _getcwd750" 
o|inlining procedure: k4056 
o|inlining procedure: k4095 
o|inlining procedure: k4095 
o|substituted constant variable: a4126 
o|contracted procedure: "(csi.scm:191) string-index761" 
o|inlining procedure: k4013 
o|inlining procedure: k4013 
o|substituted constant variable: a4130 
o|inlining procedure: k4041 
o|substituted constant variable: a4135 
o|inlining procedure: k4199 
o|propagated global variable: out813816 ##sys#standard-output 
o|substituted constant variable: a4206 
o|substituted constant variable: a4207 
o|inlining procedure: k4199 
o|propagated global variable: out813816 ##sys#standard-output 
o|inlining procedure: k4246 
o|inlining procedure: k4246 
o|inlining procedure: k4321 
o|inlining procedure: k4321 
o|contracted procedure: "(csi.scm:274) chicken.csi#tty-input?" 
o|inlining procedure: k4312 
o|inlining procedure: k4312 
o|inlining procedure: k4346 
o|inlining procedure: k4346 
o|inlining procedure: k4389 
o|inlining procedure: k4389 
o|inlining procedure: k4410 
o|contracted procedure: "(csi.scm:304) g905906" 
o|inlining procedure: k4410 
o|inlining procedure: "(csi.scm:312) read884" 
o|inlining procedure: k4450 
o|inlining procedure: "(csi.scm:316) read884" 
o|inlining procedure: k4450 
o|consed rest parameter at call site: "(csi.scm:323) chicken.csi#describe" 2 
o|inlining procedure: "(csi.scm:321) read884" 
o|inlining procedure: k4483 
o|consed rest parameter at call site: "(csi.scm:327) chicken.csi#dump" 2 
o|inlining procedure: "(csi.scm:325) read884" 
o|inlining procedure: k4483 
o|consed rest parameter at call site: "(csi.scm:333) chicken.csi#dump" 2 
o|inlining procedure: "(csi.scm:330) read884" 
o|inlining procedure: "(csi.scm:329) read884" 
o|inlining procedure: k4519 
o|consed rest parameter at call site: "(csi.scm:334) chicken.csi#report" 1 
o|inlining procedure: k4519 
o|inlining procedure: k4537 
o|inlining procedure: k4555 
o|inlining procedure: k4555 
o|inlining procedure: k4537 
o|inlining procedure: k4611 
o|inlining procedure: k4611 
o|inlining procedure: k4635 
o|inlining procedure: "(csi.scm:345) read884" 
o|inlining procedure: k4635 
o|inlining procedure: k4690 
o|consed rest parameter at call site: "(csi.scm:352) chicken.csi#describe" 2 
o|inlining procedure: k4690 
o|inlining procedure: k4703 
o|inlining procedure: k4703 
o|contracted procedure: "(csi.scm:361) chicken.csi#history-clear" 
o|inlining procedure: k4753 
o|inlining procedure: k4753 
o|inlining procedure: k4777 
o|inlining procedure: "(csi.scm:370) read884" 
o|inlining procedure: k4777 
o|inlining procedure: "(csi.scm:373) read884" 
o|inlining procedure: k4806 
o|inlining procedure: k4806 
o|inlining procedure: k4862 
o|contracted procedure: "(csi.scm:402) g10001007" 
o|inlining procedure: k4839 
o|inlining procedure: k4839 
o|inlining procedure: k4862 
o|propagated global variable: g10061008 chicken.csi#command-table 
o|substituted constant variable: a4889 
o|substituted constant variable: a4891 
o|substituted constant variable: a4893 
o|substituted constant variable: a4895 
o|substituted constant variable: a4897 
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
o|merged explicitly consed rest parameter: port1090 
o|substituted constant variable: a5136 
o|substituted constant variable: a5155 
o|inlining procedure: k5162 
o|inlining procedure: k5162 
o|inlining procedure: k5200 
o|inlining procedure: k5200 
o|inlining procedure: k5286 
o|inlining procedure: k5286 
o|inlining procedure: k5319 
o|inlining procedure: k5319 
o|propagated global variable: g11171121 ##sys#features 
o|merged explicitly consed rest parameter: rest11991201 
o|inlining procedure: k5448 
o|inlining procedure: k5448 
o|inlining procedure: k5477 
o|inlining procedure: k5507 
o|inlining procedure: k5507 
o|inlining procedure: k5477 
o|inlining procedure: k5564 
o|inlining procedure: k5564 
o|inlining procedure: k5588 
o|inlining procedure: k5588 
o|inlining procedure: k5606 
o|inlining procedure: k5606 
o|inlining procedure: k5624 
o|inlining procedure: k5624 
o|inlining procedure: k5645 
o|inlining procedure: k5645 
o|inlining procedure: k5657 
o|inlining procedure: k5657 
o|inlining procedure: k5672 
o|inlining procedure: k5672 
o|inlining procedure: k5690 
o|inlining procedure: k5700 
o|inlining procedure: k5700 
o|inlining procedure: k5690 
o|inlining procedure: k5715 
o|inlining procedure: k5715 
o|inlining procedure: k5733 
o|inlining procedure: k5733 
o|inlining procedure: k5761 
o|inlining procedure: k5761 
o|inlining procedure: k5776 
o|inlining procedure: k5776 
o|inlining procedure: k5829 
o|inlining procedure: k5851 
o|inlining procedure: k5851 
o|inlining procedure: k5872 
o|inlining procedure: k5872 
o|inlining procedure: k5829 
o|inlining procedure: k5916 
o|inlining procedure: k5916 
o|inlining procedure: k5949 
o|inlining procedure: k5949 
o|inlining procedure: k5986 
o|inlining procedure: k6007 
o|inlining procedure: k6007 
o|inlining procedure: k6019 
o|inlining procedure: k6019 
o|inlining procedure: k6031 
o|inlining procedure: k6031 
o|inlining procedure: k6043 
o|inlining procedure: k6043 
o|inlining procedure: k6055 
o|inlining procedure: k6055 
o|inlining procedure: k6067 
o|inlining procedure: k6067 
o|substituted constant variable: a6080 
o|substituted constant variable: a6082 
o|substituted constant variable: a6084 
o|substituted constant variable: a6086 
o|substituted constant variable: a6088 
o|substituted constant variable: a6090 
o|substituted constant variable: a6092 
o|substituted constant variable: a6094 
o|substituted constant variable: a6096 
o|substituted constant variable: a6098 
o|substituted constant variable: a6100 
o|substituted constant variable: a6102 
o|inlining procedure: k5986 
o|inlining procedure: k6116 
o|inlining procedure: k6116 
o|inlining procedure: k6141 
o|inlining procedure: k6168 
o|inlining procedure: k6168 
o|inlining procedure: k6206 
o|inlining procedure: k6206 
o|inlining procedure: k6141 
o|inlining procedure: k6265 
o|inlining procedure: k6265 
o|inlining procedure: k6320 
o|inlining procedure: k6320 
o|inlining procedure: k6344 
o|inlining procedure: k6388 
o|inlining procedure: k6388 
o|inlining procedure: k6344 
o|contracted procedure: "(csi.scm:657) chicken.csi#improper-pairs?" 
o|inlining procedure: k5399 
o|inlining procedure: k5399 
o|contracted procedure: "(csi.scm:657) chicken.csi#circular-list?" 
o|inlining procedure: k5364 
o|inlining procedure: k5384 
o|inlining procedure: k5384 
o|inlining procedure: k5364 
o|merged explicitly consed rest parameter: len-out1374 
o|inlining procedure: k6467 
o|inlining procedure: k6467 
o|inlining procedure: k6473 
o|inlining procedure: k6473 
o|inlining procedure: k6499 
o|inlining procedure: k6499 
o|inlining procedure: k6532 
o|inlining procedure: k6532 
o|inlining procedure: k6585 
o|inlining procedure: k6585 
o|inlining procedure: k6624 
o|inlining procedure: k6624 
o|inlining procedure: k6650 
o|inlining procedure: k6650 
o|inlining procedure: k6684 
o|inlining procedure: k6684 
o|inlining procedure: k6735 
o|inlining procedure: k6753 
o|inlining procedure: k6753 
o|inlining procedure: k6769 
o|inlining procedure: k6769 
o|inlining procedure: k6735 
o|inlining procedure: k6855 
o|propagated global variable: out14871490 ##sys#standard-output 
o|substituted constant variable: a6880 
o|substituted constant variable: a6881 
o|inlining procedure: k6855 
o|inlining procedure: k6929 
o|inlining procedure: k6929 
o|inlining procedure: k6944 
o|propagated global variable: out15271530 ##sys#standard-output 
o|substituted constant variable: a6951 
o|substituted constant variable: a6952 
o|inlining procedure: k6944 
o|propagated global variable: out15271530 ##sys#standard-output 
o|inlining procedure: k7003 
o|inlining procedure: k7003 
o|propagated global variable: out14991502 ##sys#standard-output 
o|substituted constant variable: a7041 
o|substituted constant variable: a7042 
o|propagated global variable: out14991502 ##sys#standard-output 
o|inlining procedure: k7057 
o|inlining procedure: k7057 
o|inlining procedure: k7071 
o|propagated global variable: out14871490 ##sys#standard-output 
o|inlining procedure: k7071 
o|inlining procedure: k7077 
o|inlining procedure: k7077 
o|propagated global variable: tmp14681470 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp14681470 ##sys#repl-recent-call-chain 
o|inlining procedure: k7095 
o|inlining procedure: k7095 
o|inlining procedure: k7129 
o|inlining procedure: k7129 
o|inlining procedure: k7184 
o|inlining procedure: k7215 
o|inlining procedure: k7215 
o|inlining procedure: k7255 
o|inlining procedure: k7255 
o|inlining procedure: k7334 
o|inlining procedure: k7334 
o|inlining procedure: k7184 
o|inlining procedure: k7377 
o|inlining procedure: k7377 
o|propagated global variable: tmp15781580 ##sys#repl-recent-call-chain 
o|propagated global variable: tmp15781580 ##sys#repl-recent-call-chain 
o|inlining procedure: k7398 
o|inlining procedure: k7410 
o|inlining procedure: k7410 
o|inlining procedure: k7398 
o|inlining procedure: k7453 
o|inlining procedure: k7453 
o|inlining procedure: k7468 
o|substituted constant variable: a7494 
o|inlining procedure: k7468 
o|substituted constant variable: a7507 
o|substituted constant variable: a7504 
o|inlining procedure: k7501 
o|inlining procedure: k7501 
o|inlining procedure: k7546 
o|contracted procedure: "(csi.scm:976) g17251734" 
o|inlining procedure: k7546 
o|contracted procedure: "(csi.scm:975) chicken.csi#findall" 
o|inlining procedure: k7635 
o|inlining procedure: k7635 
o|substituted constant variable: a7602 
o|substituted constant variable: a7599 
o|inlining procedure: k7596 
o|substituted constant variable: chicken.csi#constant1702 
o|inlining procedure: k7596 
o|substituted constant variable: a7618 
o|substituted constant variable: a7615 
o|contracted procedure: "(csi.scm:1169) chicken.csi#run" 
o|inlining procedure: k7827 
o|inlining procedure: k7827 
o|inlining procedure: k7822 
o|inlining procedure: k7822 
o|merged explicitly consed rest parameter: rest19051907 
o|inlining procedure: k7940 
o|inlining procedure: k7940 
o|propagated global variable: read-with-source-info1915 chicken.syntax#read-with-source-info 
o|inlining procedure: k8056 
o|contracted procedure: "(csi.scm:1126) chicken.csi#register-repl-history!" 
o|inlining procedure: k4270 
o|inlining procedure: k4270 
o|inlining procedure: k8056 
o|inlining procedure: k8090 
o|inlining procedure: k8090 
o|substituted constant variable: a8103 
o|contracted procedure: "(csi.scm:1135) chicken.csi#string->extension-name" 
o|inlining procedure: k7715 
o|inlining procedure: k7715 
o|substituted constant variable: a7779 
o|substituted constant variable: a7776 
o|contracted procedure: "(csi.scm:1007) chicken.csi#string-trim" 
o|inlining procedure: k7668 
o|inlining procedure: k7668 
o|inlining procedure: k7685 
o|inlining procedure: k7685 
o|substituted constant variable: a8130 
o|inlining procedure: k8127 
o|consed rest parameter at call site: "(csi.scm:1138) evalstring1844" 2 
o|inlining procedure: k8127 
o|substituted constant variable: a8149 
o|consed rest parameter at call site: "(csi.scm:1141) evalstring1844" 2 
o|substituted constant variable: a8174 
o|inlining procedure: k8171 
o|consed rest parameter at call site: "(csi.scm:1144) evalstring1844" 2 
o|inlining procedure: k8171 
o|inlining procedure: k8234 
o|inlining procedure: k8234 
o|inlining procedure: k8247 
o|inlining procedure: k8277 
o|inlining procedure: k8277 
o|substituted constant variable: a8299 
o|propagated global variable: g20732074 chicken.pretty-print#pretty-print 
o|inlining procedure: k8247 
o|substituted constant variable: a8313 
o|substituted constant variable: a8315 
o|substituted constant variable: a8317 
o|substituted constant variable: a8319 
o|substituted constant variable: chicken.csi#constant1775 
o|substituted constant variable: chicken.csi#constant1767 
o|contracted procedure: "(csi.scm:1121) loadinit1843" 
o|inlining procedure: k7872 
o|inlining procedure: k7872 
o|inlining procedure: k7896 
o|substituted constant variable: a7909 
o|inlining procedure: k7896 
o|substituted constant variable: a7913 
o|inlining procedure: k8331 
o|inlining procedure: k8331 
o|inlining procedure: k8372 
o|inlining procedure: k8372 
o|inlining procedure: k8381 
o|inlining procedure: k8381 
o|substituted constant variable: a8393 
o|substituted constant variable: a8404 
o|inlining procedure: k8401 
o|inlining procedure: k8401 
o|substituted constant variable: a8414 
o|contracted procedure: "(csi.scm:1089) chicken.csi#delete-duplicates" 
o|inlining procedure: k3149 
o|inlining procedure: k3149 
o|contracted procedure: "(mini-srfi-1.scm:123) chicken.csi#delete" 
o|inlining procedure: k3074 
o|inlining procedure: k3074 
o|inlining procedure: k8462 
o|inlining procedure: k8462 
o|inlining procedure: k8496 
o|inlining procedure: k8496 
o|inlining procedure: k8530 
o|inlining procedure: k8530 
o|inlining procedure: k8553 
o|inlining procedure: k8553 
o|inlining procedure: k8576 
o|inlining procedure: k8576 
o|inlining procedure: k8614 
o|inlining procedure: k8614 
o|contracted procedure: "(csi.scm:1068) chicken.csi#print-usage" 
o|inlining procedure: k8656 
o|inlining procedure: k8656 
o|inlining procedure: k8662 
o|inlining procedure: k8662 
o|inlining procedure: k8680 
o|inlining procedure: k8680 
o|substituted constant variable: a8700 
o|inlining procedure: k8720 
o|inlining procedure: k8720 
o|substituted constant variable: a8723 
o|inlining procedure: k8754 
o|inlining procedure: k8754 
o|contracted procedure: "(csi.scm:1016) chicken.csi#parse-option-string" 
o|inlining procedure: k5001 
o|contracted procedure: "(csi.scm:454) g10481057" 
o|inlining procedure: k4971 
o|inlining procedure: k4971 
o|inlining procedure: k5001 
o|inlining procedure: k5069 
o|inlining procedure: k5069 
o|inlining procedure: k8816 
o|inlining procedure: k8816 
o|inlining procedure: k8862 
o|inlining procedure: k8862 
o|substituted constant variable: a8872 
o|inlining procedure: k8876 
o|inlining procedure: k8876 
o|replaced variables: 1424 
o|removed binding forms: 406 
o|removed side-effect free assignment to unused variable: chicken.csi#constant231 
o|removed side-effect free assignment to unused variable: chicken.csi#every 
o|removed side-effect free assignment to unused variable: chicken.csi#any 
o|removed side-effect free assignment to unused variable: chicken.csi#filter 
o|removed side-effect free assignment to unused variable: chicken.csi#list-tabulate 
o|substituted constant variable: int752757 
o|substituted constant variable: r40968927 
o|substituted constant variable: r40148928 
o|substituted constant variable: r40428930 
o|contracted procedure: "(csi.scm:364) chicken.csi#history-show" 
o|propagated global variable: out813816 ##sys#standard-output 
o|contracted procedure: "(csi.scm:370) chicken.csi#select-frame" 
o|contracted procedure: "(csi.scm:373) chicken.csi#copy-from-frame" 
o|converted assignments to bindings: (fail1593) 
o|converted assignments to bindings: (compare1588) 
o|substituted constant variable: r73789180 
o|converted assignments to bindings: (shorten1099) 
o|substituted constant variable: r55089030 
o|substituted constant variable: r55089030 
o|substituted constant variable: r55089032 
o|substituted constant variable: r55089032 
o|inlining procedure: k5564 
o|substituted constant variable: r57019066 
o|substituted constant variable: r57019066 
o|substituted constant variable: r57019068 
o|substituted constant variable: r57019068 
o|inlining procedure: k5564 
o|removed call to pure procedure with unused result: "(csi.scm:671) ##sys#size" 
o|substituted constant variable: r60089090 
o|substituted constant variable: r60089090 
o|inlining procedure: k6007 
o|inlining procedure: k6007 
o|substituted constant variable: r60209094 
o|inlining procedure: k6007 
o|inlining procedure: k6007 
o|substituted constant variable: r60329096 
o|inlining procedure: k6007 
o|inlining procedure: k6007 
o|substituted constant variable: r60449098 
o|inlining procedure: k6007 
o|inlining procedure: k6007 
o|substituted constant variable: r60569100 
o|inlining procedure: k6007 
o|inlining procedure: k6007 
o|substituted constant variable: r60689102 
o|inlining procedure: k6007 
o|inlining procedure: k6007 
o|substituted constant variable: r54009121 
o|substituted constant variable: r53659126 
o|converted assignments to bindings: (descseq1207) 
o|converted assignments to bindings: (bestlen1393) 
o|converted assignments to bindings: (justify1417) 
o|propagated global variable: out14871490 ##sys#standard-output 
o|propagated global variable: out15271530 ##sys#standard-output 
o|propagated global variable: out14991502 ##sys#standard-output 
o|substituted constant variable: r70589157 
o|substituted constant variable: r70589157 
o|substituted constant variable: r70589159 
o|substituted constant variable: r70589159 
o|substituted constant variable: r70729161 
o|substituted constant variable: r70729161 
o|substituted constant variable: r70729163 
o|substituted constant variable: r70729163 
o|substituted constant variable: r70789166 
o|converted assignments to bindings: (prin11465) 
o|substituted constant variable: r73999184 
o|removed side-effect free assignment to unused variable: chicken.csi#constant1702 
o|substituted constant variable: r74549185 
o|substituted constant variable: r75979196 
o|removed side-effect free assignment to unused variable: chicken.csi#constant1767 
o|removed side-effect free assignment to unused variable: chicken.csi#constant1775 
o|substituted constant variable: r78239200 
o|substituted constant variable: r76699211 
o|substituted constant variable: r82359221 
o|substituted constant variable: r82359221 
o|substituted constant variable: r82489227 
o|substituted constant variable: r82489227 
o|substituted constant variable: r78979232 
o|substituted constant variable: r87559278 
o|substituted constant variable: r88639289 
o|substituted constant variable: r88639289 
o|converted assignments to bindings: (addext760) 
o|simplifications: ((let . 8)) 
o|replaced variables: 105 
o|removed binding forms: 1208 
o|inlining procedure: k3923 
o|inlining procedure: k4324 
o|inlining procedure: k4734 
o|inlining procedure: k4734 
o|inlining procedure: k7236 
o|contracted procedure: k5935 
o|inlining procedure: k6271 
o|inlining procedure: k8080 
o|inlining procedure: k8080 
o|inlining procedure: k8080 
o|inlining procedure: k8080 
o|inlining procedure: k8080 
o|inlining procedure: k8080 
o|inlining procedure: k8080 
o|inlining procedure: k8289 
o|inlining procedure: k7884 
o|inlining procedure: "(csi.scm:1118) chicken.csi#print-banner" 
o|inlining procedure: k8599 
o|inlining procedure: "(csi.scm:1071) chicken.csi#print-banner" 
o|inlining procedure: k8711 
o|inlining procedure: k8711 
o|inlining procedure: k8711 
o|inlining procedure: k5022 
o|replaced variables: 13 
o|removed binding forms: 163 
o|removed side-effect free assignment to unused variable: chicken.csi#print-banner 
o|substituted constant variable: r39249495 
o|substituted constant variable: r39249495 
o|inlining procedure: k3948 
o|substituted constant variable: r60089354 
o|substituted constant variable: r60089356 
o|substituted constant variable: r60089358 
o|substituted constant variable: r60089360 
o|substituted constant variable: r60089362 
o|substituted constant variable: r60089364 
o|substituted constant variable: r60089366 
o|substituted constant variable: r60089368 
o|substituted constant variable: r60089370 
o|substituted constant variable: r60089372 
o|substituted constant variable: r60089374 
o|contracted procedure: k8062 
o|substituted constant variable: r78859631 
o|replaced variables: 9 
o|removed binding forms: 23 
o|removed conditional forms: 2 
o|substituted constant variable: r39499674 
o|removed binding forms: 23 
o|removed conditional forms: 1 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|simplifications: ((let . 32) (if . 47) (##core#call . 548)) 
o|  call simplifications:
o|    scheme#make-vector
o|    scheme#set-car!
o|    scheme#string=?
o|    ##sys#cons	2
o|    scheme#=
o|    scheme#char-whitespace?	3
o|    ##sys#list	3
o|    chicken.base#void
o|    scheme#member	9
o|    scheme#string->list
o|    scheme#string
o|    scheme#equal?	4
o|    chicken.fixnum#fxmod
o|    scheme#write-char	7
o|    ##sys#immediate?	2
o|    ##sys#permanent?
o|    scheme#char?
o|    chicken.base#bwp-object?
o|    chicken.base#fixnum?	2
o|    chicken.base#bignum?
o|    chicken.base#flonum?
o|    chicken.base#ratnum?
o|    chicken.base#cplxnum?
o|    scheme#vector?
o|    scheme#list?
o|    scheme#procedure?
o|    ##sys#pointer?	2
o|    ##sys#generic-structure?	2
o|    scheme#cdr	19
o|    scheme#caar
o|    scheme#cdar
o|    chicken.fixnum#fx=	4
o|    chicken.base#atom?
o|    scheme#memq	4
o|    scheme#cddr	3
o|    scheme#exact?
o|    scheme#char->integer
o|    ##sys#setslot	8
o|    scheme#<=
o|    scheme#+
o|    scheme#*
o|    scheme#eof-object?	4
o|    scheme#caddr
o|    scheme#symbol?	2
o|    scheme#string?	4
o|    ##sys#structure?	4
o|    ##sys#check-list	16
o|    chicken.fixnum#fxmin
o|    scheme#number?	2
o|    chicken.fixnum#fx<	4
o|    scheme#length	4
o|    chicken.fixnum#fx-	12
o|    scheme#list-ref	2
o|    scheme#>=	2
o|    scheme#eq?	44
o|    scheme#not	12
o|    scheme#apply	5
o|    ##sys#call-with-values	7
o|    ##sys#apply	3
o|    scheme#cadr	13
o|    scheme#car	21
o|    ##sys#check-symbol
o|    ##sys#check-string
o|    scheme#assq	4
o|    scheme#cons	25
o|    scheme#list	12
o|    scheme#set-cdr!	2
o|    chicken.fixnum#fx<=
o|    scheme#vector-ref	8
o|    scheme#null?	24
o|    ##sys#void	21
o|    ##sys#size	6
o|    chicken.fixnum#fx*
o|    scheme#vector-set!
o|    chicken.fixnum#fx>=	15
o|    chicken.fixnum#fx+	20
o|    scheme#pair?	30
o|    ##sys#slot	85
o|    ##sys#foreign-block-argument
o|    ##sys#foreign-fixnum-argument
o|    scheme#string-length	10
o|    scheme#string-ref	6
o|    chicken.fixnum#fx>	6
o|    scheme#char=?	4
o|contracted procedure: k3857 
o|contracted procedure: k3923 
o|contracted procedure: k3939 
o|contracted procedure: k3942 
o|contracted procedure: k3954 
o|contracted procedure: k4132 
o|contracted procedure: k4044 
o|contracted procedure: k3971 
o|contracted procedure: k3975 
o|contracted procedure: k4098 
o|contracted procedure: k4114 
o|contracted procedure: k4123 
o|contracted procedure: k4004 
o|contracted procedure: k4016 
o|contracted procedure: k4029 
o|contracted procedure: k4033 
o|contracted procedure: k4137 
o|contracted procedure: k4171 
o|contracted procedure: k4144 
o|contracted procedure: k4147 
o|contracted procedure: k4153 
o|contracted procedure: k4157 
o|contracted procedure: k4160 
o|contracted procedure: k4168 
o|contracted procedure: k4258 
o|contracted procedure: k4249 
o|contracted procedure: k4375 
o|contracted procedure: k4334 
o|contracted procedure: k4337 
o|contracted procedure: k4340 
o|contracted procedure: k4343 
o|contracted procedure: k4358 
o|contracted procedure: k4369 
o|contracted procedure: k4365 
o|contracted procedure: k4392 
o|contracted procedure: k4404 
o|contracted procedure: k4407 
o|contracted procedure: k4415 
o|contracted procedure: k4430 
o|contracted procedure: k4453 
o|contracted procedure: k4471 
o|contracted procedure: k4486 
o|contracted procedure: k4501 
o|contracted procedure: k4522 
o|contracted procedure: k4531 
o|contracted procedure: k4540 
o|contracted procedure: k4558 
o|contracted procedure: k4568 
o|contracted procedure: k4572 
o|contracted procedure: k4582 
o|contracted procedure: k4614 
o|contracted procedure: k4624 
o|contracted procedure: k4628 
o|contracted procedure: k4638 
o|contracted procedure: k4687 
o|contracted procedure: k4700 
o|contracted procedure: k4706 
o|contracted procedure: k4722 
o|contracted procedure: k4715 
o|contracted procedure: k4744 
o|contracted procedure: k4187 
o|propagated global variable: r4188 ##sys#undefined-value 
o|contracted procedure: k4756 
o|contracted procedure: k4202 
o|contracted procedure: k4227 
o|contracted procedure: k4237 
o|contracted procedure: k4768 
o|contracted procedure: k4780 
o|contracted procedure: k7146 
o|contracted procedure: k7098 
o|contracted procedure: k7119 
o|contracted procedure: k7123 
o|contracted procedure: k7115 
o|contracted procedure: k7108 
o|contracted procedure: k7126 
o|contracted procedure: k7132 
o|contracted procedure: k7142 
o|contracted procedure: k4796 
o|contracted procedure: k7152 
o|contracted procedure: k7155 
o|contracted procedure: k7164 
o|contracted procedure: k7177 
o|contracted procedure: k7181 
o|contracted procedure: k7173 
o|contracted procedure: k7206 
o|propagated global variable: r7207 ##sys#undefined-value 
o|contracted procedure: k7218 
o|contracted procedure: k7224 
o|contracted procedure: k7227 
o|contracted procedure: k7230 
o|contracted procedure: k7233 
o|contracted procedure: k7244 
o|contracted procedure: k7258 
o|contracted procedure: k7268 
o|contracted procedure: k7292 
o|contracted procedure: k7300 
o|contracted procedure: k7296 
o|contracted procedure: k7306 
o|contracted procedure: k7309 
o|contracted procedure: k7312 
o|contracted procedure: k7315 
o|contracted procedure: k7318 
o|contracted procedure: k7362 
o|contracted procedure: k7337 
o|contracted procedure: k7347 
o|contracted procedure: k7351 
o|contracted procedure: k7355 
o|contracted procedure: k7359 
o|contracted procedure: k7371 
o|contracted procedure: k7380 
o|contracted procedure: k4809 
o|contracted procedure: k4822 
o|contracted procedure: k4828 
o|contracted procedure: k4850 
o|contracted procedure: k4865 
o|contracted procedure: k4875 
o|contracted procedure: k4879 
o|contracted procedure: k4836 
o|propagated global variable: g10061008 chicken.csi#command-table 
o|contracted procedure: k4944 
o|contracted procedure: k4951 
o|contracted procedure: k5350 
o|contracted procedure: k5111 
o|contracted procedure: k5138 
o|contracted procedure: k5152 
o|contracted procedure: k5165 
o|contracted procedure: k5179 
o|contracted procedure: k5185 
o|contracted procedure: k5188 
o|contracted procedure: k5244 
o|contracted procedure: k5248 
o|contracted procedure: k5252 
o|contracted procedure: k5256 
o|contracted procedure: k5260 
o|contracted procedure: k5264 
o|contracted procedure: k5272 
o|contracted procedure: k5276 
o|contracted procedure: k5289 
o|contracted procedure: k5299 
o|contracted procedure: k5303 
o|contracted procedure: k5307 
o|contracted procedure: k5310 
o|contracted procedure: k5322 
o|contracted procedure: k5325 
o|contracted procedure: k5328 
o|contracted procedure: k5336 
o|contracted procedure: k5344 
o|propagated global variable: g11171121 ##sys#features 
o|contracted procedure: k6453 
o|contracted procedure: k5427 
o|contracted procedure: k5433 
o|contracted procedure: k5445 
o|contracted procedure: k5454 
o|contracted procedure: k5461 
o|contracted procedure: k5547 
o|contracted procedure: k5471 
o|contracted procedure: k5480 
o|contracted procedure: k5493 
o|contracted procedure: k5496 
o|contracted procedure: k5503 
o|contracted procedure: k5510 
o|contracted procedure: k5525 
o|contracted procedure: k5532 
o|contracted procedure: k5536 
o|contracted procedure: k5551 
o|contracted procedure: k5570 
o|contracted procedure: k5573 
o|contracted procedure: k5582 
o|contracted procedure: k5591 
o|contracted procedure: k5600 
o|contracted procedure: k5609 
o|contracted procedure: k5618 
o|contracted procedure: k6440 
o|contracted procedure: k5627 
o|propagated global variable: r6441 ##sys#undefined-value 
o|contracted procedure: k5636 
o|contracted procedure: k5651 
o|contracted procedure: k5660 
o|contracted procedure: k5675 
o|contracted procedure: k5684 
o|contracted procedure: k5693 
o|contracted procedure: k5703 
o|contracted procedure: k5709 
o|contracted procedure: k5718 
o|contracted procedure: k5727 
o|contracted procedure: k5749 
o|contracted procedure: k5758 
o|contracted procedure: k5764 
o|contracted procedure: k5779 
o|contracted procedure: k5795 
o|contracted procedure: k5805 
o|contracted procedure: k5809 
o|contracted procedure: k5813 
o|contracted procedure: k5845 
o|contracted procedure: k5854 
o|contracted procedure: k5857 
o|contracted procedure: k5901 
o|contracted procedure: k5866 
o|contracted procedure: k5895 
o|contracted procedure: k5875 
o|contracted procedure: k5887 
o|contracted procedure: k5910 
o|contracted procedure: k5919 
o|contracted procedure: k5932 
o|contracted procedure: k5974 
o|contracted procedure: k5959 
o|contracted procedure: k5963 
o|contracted procedure: k5967 
o|contracted procedure: k5971 
o|contracted procedure: k5980 
o|contracted procedure: k6000 
o|contracted procedure: k6004 
o|contracted procedure: k6010 
o|contracted procedure: k6016 
o|contracted procedure: k6022 
o|contracted procedure: k6028 
o|contracted procedure: k6034 
o|contracted procedure: k6040 
o|contracted procedure: k6046 
o|contracted procedure: k6052 
o|contracted procedure: k6058 
o|contracted procedure: k6064 
o|contracted procedure: k6070 
o|contracted procedure: k6076 
o|contracted procedure: k6106 
o|contracted procedure: k6122 
o|contracted procedure: k6144 
o|contracted procedure: k6147 
o|contracted procedure: k6156 
o|contracted procedure: k6159 
o|contracted procedure: k6171 
o|contracted procedure: k6180 
o|contracted procedure: k6184 
o|contracted procedure: k6187 
o|contracted procedure: k6190 
o|contracted procedure: k6200 
o|contracted procedure: k6209 
o|contracted procedure: k6219 
o|contracted procedure: k6223 
o|contracted procedure: k6227 
o|contracted procedure: k6238 
o|contracted procedure: k6231 
o|contracted procedure: k6235 
o|contracted procedure: k6244 
o|contracted procedure: k6259 
o|contracted procedure: k6268 
o|contracted procedure: k6278 
o|contracted procedure: k6305 
o|contracted procedure: k6281 
o|contracted procedure: k6297 
o|contracted procedure: k6301 
o|contracted procedure: k62789546 
o|contracted procedure: k6308 
o|contracted procedure: k6311 
o|contracted procedure: k6323 
o|contracted procedure: k6333 
o|contracted procedure: k6337 
o|contracted procedure: k6341 
o|contracted procedure: k6347 
o|contracted procedure: k6350 
o|contracted procedure: k6353 
o|contracted procedure: k6369 
o|contracted procedure: k6372 
o|contracted procedure: k6375 
o|contracted procedure: k6382 
o|contracted procedure: k6391 
o|contracted procedure: k6394 
o|contracted procedure: k6397 
o|contracted procedure: k6405 
o|contracted procedure: k6413 
o|contracted procedure: k6429 
o|contracted procedure: k5421 
o|contracted procedure: k5402 
o|contracted procedure: k5417 
o|contracted procedure: k5405 
o|contracted procedure: k5367 
o|contracted procedure: k5374 
o|contracted procedure: k5378 
o|contracted procedure: k5381 
o|contracted procedure: k6443 
o|contracted procedure: k6476 
o|contracted procedure: k6496 
o|contracted procedure: k6502 
o|contracted procedure: k6505 
o|contracted procedure: k6520 
o|contracted procedure: k6516 
o|contracted procedure: k6572 
o|contracted procedure: k6565 
o|contracted procedure: k6526 
o|contracted procedure: k6538 
o|contracted procedure: k6549 
o|contracted procedure: k6555 
o|contracted procedure: k6562 
o|contracted procedure: k6588 
o|contracted procedure: k6594 
o|contracted procedure: k6601 
o|contracted procedure: k6607 
o|contracted procedure: k6627 
o|contracted procedure: k6639 
o|contracted procedure: k6653 
o|contracted procedure: k6678 
o|contracted procedure: k6687 
o|contracted procedure: k6690 
o|contracted procedure: k6703 
o|contracted procedure: k6707 
o|contracted procedure: k6723 
o|contracted procedure: k6710 
o|contracted procedure: k6738 
o|contracted procedure: k6741 
o|contracted procedure: k6747 
o|contracted procedure: k6750 
o|contracted procedure: k6756 
o|contracted procedure: k6763 
o|contracted procedure: k6772 
o|contracted procedure: k6782 
o|contracted procedure: k6795 
o|contracted procedure: k6799 
o|contracted procedure: k6832 
o|contracted procedure: k6835 
o|contracted procedure: k6839 
o|contracted procedure: k6849 
o|contracted procedure: k6858 
o|contracted procedure: k6861 
o|contracted procedure: k6864 
o|contracted procedure: k6867 
o|contracted procedure: k6870 
o|contracted procedure: k6873 
o|contracted procedure: k6876 
o|contracted procedure: k6921 
o|contracted procedure: k6924 
o|contracted procedure: k6932 
o|contracted procedure: k6947 
o|contracted procedure: k6972 
o|contracted procedure: k6978 
o|contracted procedure: k6982 
o|contracted procedure: k6985 
o|contracted procedure: k6988 
o|contracted procedure: k6991 
o|contracted procedure: k6994 
o|contracted procedure: k7031 
o|contracted procedure: k7006 
o|contracted procedure: k7016 
o|contracted procedure: k7020 
o|contracted procedure: k7024 
o|contracted procedure: k7028 
o|contracted procedure: k7053 
o|contracted procedure: k7067 
o|contracted procedure: k7080 
o|contracted procedure: k7087 
o|contracted procedure: k7386 
o|contracted procedure: k7401 
o|contracted procedure: k7413 
o|contracted procedure: k7420 
o|contracted procedure: k7435 
o|contracted procedure: k7439 
o|contracted procedure: k7426 
o|contracted procedure: k7456 
o|contracted procedure: k7459 
o|contracted procedure: k7465 
o|contracted procedure: k7620 
o|contracted procedure: k7612 
o|contracted procedure: k7471 
o|contracted procedure: k7477 
o|contracted procedure: k7526 
o|contracted procedure: k7549 
o|contracted procedure: k7571 
o|contracted procedure: k7567 
o|contracted procedure: k7552 
o|contracted procedure: k7555 
o|contracted procedure: k7563 
o|contracted procedure: k7632 
o|contracted procedure: k7650 
o|contracted procedure: k7641 
o|contracted procedure: k7593 
o|contracted procedure: k7607 
o|contracted procedure: k7807 
o|contracted procedure: k7819 
o|contracted procedure: k7851 
o|contracted procedure: k7830 
o|contracted procedure: k7840 
o|contracted procedure: k7966 
o|contracted procedure: k7924 
o|contracted procedure: k7943 
o|contracted procedure: k7998 
o|contracted procedure: k8007 
o|contracted procedure: k8016 
o|contracted procedure: k8059 
o|contracted procedure: k4273 
o|contracted procedure: k4276 
o|contracted procedure: k4287 
o|contracted procedure: k8074 
o|contracted procedure: k8077 
o|contracted procedure: k8087 
o|contracted procedure: k80879596 
o|contracted procedure: k8093 
o|contracted procedure: k8097 
o|contracted procedure: k80879600 
o|contracted procedure: k8105 
o|contracted procedure: k8112 
o|contracted procedure: k80879604 
o|contracted procedure: k8116 
o|contracted procedure: k8124 
o|contracted procedure: k7773 
o|contracted procedure: k7718 
o|contracted procedure: k7662 
o|contracted procedure: k7671 
o|contracted procedure: k7706 
o|contracted procedure: k7677 
o|contracted procedure: k7700 
o|contracted procedure: k7688 
o|contracted procedure: k8132 
o|contracted procedure: k8139 
o|contracted procedure: k80879610 
o|contracted procedure: k8143 
o|contracted procedure: k8151 
o|contracted procedure: k8158 
o|contracted procedure: k80879614 
o|contracted procedure: k8162 
o|contracted procedure: k8176 
o|contracted procedure: k8183 
o|contracted procedure: k80879618 
o|contracted procedure: k8187 
o|contracted procedure: k8196 
o|contracted procedure: k8205 
o|contracted procedure: k8240 
o|contracted procedure: k8227 
o|contracted procedure: k8237 
o|contracted procedure: k80879622 
o|contracted procedure: k8250 
o|contracted procedure: k8280 
o|contracted procedure: k8283 
o|contracted procedure: k8296 
o|contracted procedure: k82969626 
o|contracted procedure: k8325 
o|contracted procedure: k7899 
o|contracted procedure: k7918 
o|contracted procedure: k8344 
o|contracted procedure: k8348 
o|contracted procedure: k8426 
o|contracted procedure: k8422 
o|contracted procedure: k8384 
o|contracted procedure: k8395 
o|contracted procedure: k3152 
o|contracted procedure: k3155 
o|contracted procedure: k3165 
o|contracted procedure: k3077 
o|contracted procedure: k3103 
o|contracted procedure: k3083 
o|contracted procedure: k8434 
o|contracted procedure: k8440 
o|contracted procedure: k8447 
o|contracted procedure: k8453 
o|contracted procedure: k8465 
o|contracted procedure: k8468 
o|contracted procedure: k8471 
o|contracted procedure: k8479 
o|contracted procedure: k8487 
o|contracted procedure: k8499 
o|contracted procedure: k8502 
o|contracted procedure: k8505 
o|contracted procedure: k8513 
o|contracted procedure: k8521 
o|contracted procedure: k8533 
o|contracted procedure: k8543 
o|contracted procedure: k8547 
o|contracted procedure: k8556 
o|contracted procedure: k8566 
o|contracted procedure: k8570 
o|contracted procedure: k8579 
o|contracted procedure: k8589 
o|contracted procedure: k8593 
o|contracted procedure: k8621 
o|contracted procedure: k8634 
o|contracted procedure: k8638 
o|contracted procedure: k3907 
o|contracted procedure: k3903 
o|contracted procedure: k3899 
o|contracted procedure: k8677 
o|contracted procedure: k8695 
o|contracted procedure: k8705 
o|contracted procedure: k8744 
o|contracted procedure: k8740 
o|contracted procedure: k8708 
o|contracted procedure: k8736 
o|contracted procedure: k8732 
o|contracted procedure: k8717 
o|contracted procedure: k8725 
o|contracted procedure: k8751 
o|contracted procedure: k8772 
o|contracted procedure: k4966 
o|contracted procedure: k4992 
o|contracted procedure: k5004 
o|contracted procedure: k5010 
o|contracted procedure: k5018 
o|contracted procedure: k5026 
o|contracted procedure: k4974 
o|contracted procedure: k5072 
o|contracted procedure: k5086 
o|contracted procedure: k8819 
o|contracted procedure: k8892 
o|contracted procedure: k8896 
o|contracted procedure: k8900 
o|contracted procedure: k8904 
o|simplifications: ((if . 8) (let . 224)) 
o|removed binding forms: 498 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest860863 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest860863 0 
o|contracted procedure: k4401 
o|inlining procedure: k7261 
o|contracted procedure: k6535 
o|inlining procedure: k6912 
o|contracted procedure: k7060 
(o x)|known list op on rest arg sublist: ##core#rest-null? rs2089 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rs2089 0 
o|substituted constant variable: r8893 
o|substituted constant variable: r8897 
o|substituted constant variable: r8901 
o|substituted constant variable: r8905 
o|replaced variables: 12 
o|removed binding forms: 3 
o|removed binding forms: 8 
o|direct leaf routine/allocation: g875876 6 
o|direct leaf routine/allocation: lp1183 0 
o|direct leaf routine/allocation: lp1169 0 
o|direct leaf routine/allocation: loop1755 0 
o|contracted procedure: "(csi.scm:281) k4346" 
o|contracted procedure: k5832 
o|converted assignments to bindings: (lp1183) 
o|converted assignments to bindings: (lp1169) 
o|contracted procedure: k7519 
o|converted assignments to bindings: (loop1755) 
o|simplifications: ((let . 3)) 
o|removed binding forms: 3 
o|customizable procedures: (k3879 g10301031 doloop10691070 k5007 map-loop10421075 chicken.csi#canonicalize-args chicken.csi#lookup-script-file k7795 k7801 k7983 k7989 for-each-loop18471929 for-each-loop18571936 for-each-loop18671943 map-loop19501967 collect-options1842 map-loop19761993 loop392 loop412 chicken.csi#member* k8047 doloop20762077 evalstring1844 loop1779 doloop18752022 chicken.csi#history-ref doloop19161917 g18851886 loop1877 k7498 map-loop17191744 loop1706 find1685 loop1682 k6842 g15101518 for-each-loop15091539 prin11465 doloop15231524 doloop14721478 justify1417 doloop14261428 doloop14351436 doloop14271443 doloop14161424 def-len13791402 def-out13801400 body13771386 bestlen1393 k5835 g13391340 map-loop13441361 g13101317 for-each-loop13091326 loop1320 g12881295 for-each-loop12871298 doloop12821283 chicken.csi#hexdump loop-print1257 doloop12441245 loop21227 loop11217 map-loop11051122 g11321139 for-each-loop11311153 shorten1099 k5159 for-each-loop9991011 k7158 g16071615 for-each-loop16061630 compare1588 doloop16201621 doloop15921597 fail1593 k7101 chicken.csi#show-frameinfo doloop810811 chicken.csi#history-add g953960 for-each-loop952972 for-each-loop933943 chicken.csi#report chicken.csi#dump chicken.csi#describe k4150 loop768 loop787 addext760) 
o|shared closure containers: 53 
o|shared closure users: 73 
o|calls to known targets: 249 
o|unused rest argument: rest860863 f_4332 
o|identified direct recursive calls: f_7213 1 
o|identified direct recursive calls: f_5362 1 
o|identified direct recursive calls: f_6263 1 
o|identified direct recursive calls: f_5397 1 
o|identified direct recursive calls: f_7408 1 
o|identified direct recursive calls: f_7630 1 
o|identified direct recursive calls: f_7544 1 
o|identified direct recursive calls: f_7451 1 
o|unused rest argument: _1913 f_7969 
o|identified direct recursive calls: f_7666 2 
o|unused rest argument: rs2089 f_8225 
o|identified direct recursive calls: f_8054 2 
o|identified direct recursive calls: f_3072 2 
o|fast box initializations: 49 
o|fast global references: 78 
o|fast global assignments: 25 
o|dropping unused closure argument: f_3982 
o|dropping unused closure argument: f_4241 
o|dropping unused closure argument: f_5127 
o|dropping unused closure argument: f_5362 
o|dropping unused closure argument: f_5397 
o|dropping unused closure argument: f_6460 
o|dropping unused closure argument: f_6615 
o|dropping unused closure argument: f_6618 
o|dropping unused closure argument: f_6818 
o|dropping unused closure argument: f_6821 
o|dropping unused closure argument: f_7390 
o|dropping unused closure argument: f_7445 
o|dropping unused closure argument: f_7630 
o|dropping unused closure argument: f_7922 
*/
/* end of file */
