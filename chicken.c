/* Generated from chicken.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -no-lambda-info -emit-import-library chicken.compiler.chicken -output-file chicken.c
   uses: c-backend scrutinizer compiler-syntax lfa2 optimizer compiler lolevel extras srfi-4 chicken-ffi-syntax chicken-syntax eval data-structures user-pass support c-platform batch-driver library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_c_2dbackend_toplevel)
C_extern void C_ccall C_c_2dbackend_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scrutinizer_toplevel)
C_extern void C_ccall C_scrutinizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_extern void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_extern void C_ccall C_lfa2_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_extern void C_ccall C_optimizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_extern void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_extern void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_extern void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_extern void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_extern void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_user_2dpass_toplevel)
C_extern void C_ccall C_user_2dpass_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_extern void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dplatform_toplevel)
C_extern void C_ccall C_c_2dplatform_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_batch_2ddriver_toplevel)
C_extern void C_ccall C_batch_2ddriver_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[46];
static double C_possibly_force_alignment;


C_noret_decl(f_1022)
static void f_1022(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1040)
static void C_ccall f_1040(C_word c,C_word *av) C_noret;
C_noret_decl(f_1054)
static C_word f_1054(C_word t0,C_word t1);
C_noret_decl(f_1347)
static void f_1347(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1353)
static void f_1353(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word *av) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word *av) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word *av) C_noret;
C_noret_decl(f_2205)
static void f_2205(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word *av) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word *av) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word *av) C_noret;
C_noret_decl(f_2297)
static void C_ccall f_2297(C_word c,C_word *av) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word *av) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word *av) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word *av) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word *av) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word *av) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word *av) C_noret;
C_noret_decl(f_2329)
static void f_2329(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word *av) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word *av) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word *av) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word *av) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word *av) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word *av) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word *av) C_noret;
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word *av) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word *av) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word *av) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word *av) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word *av) C_noret;
C_noret_decl(f_2550)
static void C_ccall f_2550(C_word c,C_word *av) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word *av) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word *av) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word *av) C_noret;
C_noret_decl(f_861)
static void C_ccall f_861(C_word c,C_word *av) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word *av) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word *av) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word *av) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873(C_word c,C_word *av) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word *av) C_noret;
C_noret_decl(f_879)
static void C_ccall f_879(C_word c,C_word *av) C_noret;
C_noret_decl(f_882)
static void C_ccall f_882(C_word c,C_word *av) C_noret;
C_noret_decl(f_885)
static void C_ccall f_885(C_word c,C_word *av) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word *av) C_noret;
C_noret_decl(f_891)
static void C_ccall f_891(C_word c,C_word *av) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word *av) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word *av) C_noret;
C_noret_decl(f_900)
static void C_ccall f_900(C_word c,C_word *av) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word *av) C_noret;
C_noret_decl(f_906)
static void C_ccall f_906(C_word c,C_word *av) C_noret;
C_noret_decl(f_909)
static void C_ccall f_909(C_word c,C_word *av) C_noret;
C_noret_decl(f_912)
static void C_ccall f_912(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_extern void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1022)
static void C_ccall trf_1022(C_word c,C_word *av) C_noret;
static void C_ccall trf_1022(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1022(t0,t1,t2);}

C_noret_decl(trf_1347)
static void C_ccall trf_1347(C_word c,C_word *av) C_noret;
static void C_ccall trf_1347(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1347(t0,t1,t2);}

C_noret_decl(trf_1353)
static void C_ccall trf_1353(C_word c,C_word *av) C_noret;
static void C_ccall trf_1353(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1353(t0,t1,t2,t3);}

C_noret_decl(trf_2205)
static void C_ccall trf_2205(C_word c,C_word *av) C_noret;
static void C_ccall trf_2205(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2205(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2329)
static void C_ccall trf_2329(C_word c,C_word *av) C_noret;
static void C_ccall trf_2329(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2329(t0,t1,t2);}

/* chicken.compiler.chicken#take in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void f_1022(C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_1022,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1040,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:56: take"));
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k1038 in chicken.compiler.chicken#take in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_1040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1040,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k2552 in k2548 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 in ... */
static C_word f_1054(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
return(t1);}
else{
t4=C_i_cdr(t1);
t5=C_fixnum_difference(t2,C_fix(1));
t1=t4;
t2=t5;
goto loop;}}

/* chicken.compiler.chicken#cons* in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void f_1347(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1347,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1353,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_1353(t7,t1,t2,t3);}

/* loop in chicken.compiler.chicken#cons* in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void f_1353(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_1353,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1367,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:95: loop"));
t6=t4;
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
t1=t6;
t2=t7;
t3=t8;
goto loop;}}

/* k1365 in loop in chicken.compiler.chicken#cons* in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_1367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1367,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_2197(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2197,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[3] /* (set! chicken.compiler.chicken#compiler-arguments ...) */,t1);
t3=C_mutate(&lf[4] /* (set! chicken.compiler.chicken#process-command-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2199,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2297,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2305,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2317,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("chicken.scm:85: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t4;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}

/* chicken.compiler.chicken#process-command-line in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_2199(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_2199,c,av);}
a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2205,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2205(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in chicken.compiler.chicken#process-command-line in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 in ... */
static void f_2205(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t17;
C_word t18;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2205,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2219,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken.scm:70: scheme#reverse"));
t6=*((C_word*)lf[5]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=C_i_string_length(t5);
t7=C_i_string_ref(t5,C_fix(0));
t8=(C_truep(C_u_i_char_equalp(C_make_character(45),t7))?C_fixnum_greaterp(t6,C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_fixnum_greaterp(t6,C_fix(1));
t10=(C_truep(t9)?C_u_i_char_equalp(C_make_character(58),C_i_string_ref(t5,C_fix(1))):C_SCHEME_FALSE);
if(C_truep(t10)){
C_trace(C_text("chicken.scm:76: loop"));
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t18=t4;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}
else{
t11=C_u_i_cdr(t2);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2257,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t11,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2261,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.scm:77: scheme#substring"));
t14=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=t5;
av2[3]=C_fix(1);
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}
else{
if(C_truep(t4)){
t9=C_u_i_cdr(t2);
t10=C_a_i_cons(&a,2,t5,t3);
C_trace(C_text("chicken.scm:79: loop"));
t15=t1;
t16=t9;
t17=t10;
t18=t4;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}
else{
C_trace(C_text("chicken.scm:80: loop"));
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t18=t5;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}}}}

/* k2217 in loop in chicken.compiler.chicken#process-command-line in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in ... */
static void C_ccall f_2219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2219,c,av);}
C_trace(C_text("chicken.scm:70: scheme#values"));{
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

/* k2255 in loop in chicken.compiler.chicken#process-command-line in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in ... */
static void C_ccall f_2257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2257,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
C_trace(C_text("chicken.scm:77: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2205(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,((C_word*)t0)[6]);}

/* k2259 in loop in chicken.compiler.chicken#process-command-line in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in ... */
static void C_ccall f_2261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2261,c,av);}
C_trace(C_text("chicken.scm:77: scheme#string->symbol"));
t2=*((C_word*)lf[6]+1);{
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

/* k2295 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_2297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2297,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t3=C_fast_retrieve(lf[8]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2301 in k2295 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 in ... */
static void C_ccall f_2303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2303,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2304 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_2305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2305,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2309,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.scm:85: chicken.compiler.user-pass#user-options-pass"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k2307 in a2304 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 in ... */
static void C_ccall f_2309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2309,c,av);}
if(C_truep(t1)){
C_trace(C_text("chicken.scm:85: g585"));
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[3],C_text("chicken.compiler.chicken#compiler-arguments"));
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}
else{
t2=C_retrieve2(lf[4],C_text("chicken.compiler.chicken#process-command-line"));
t3=C_retrieve2(lf[4],C_text("chicken.compiler.chicken#process-command-line"));
C_trace(C_text("chicken.scm:85: g585"));
t4=C_retrieve2(lf[4],C_text("chicken.compiler.chicken#process-command-line"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[3],C_text("chicken.compiler.chicken#compiler-arguments"));
f_2199(3,av2);}}}

/* a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_2317(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2317,c,av);}
a=C_alloc(13);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2321,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2329,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2329(t9,t5,((C_word*)t4)[1]);}

/* k2319 in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 in ... */
static void C_ccall f_2321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2321,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[11]);
av2[3]=((C_word*)t0)[3];
av2[4]=C_retrieve2(lf[3],C_text("chicken.compiler.chicken#compiler-arguments"));
av2[5]=((C_word*)((C_word*)t0)[4])[1];
C_apply(6,av2);}}

/* k2322 in k2319 in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in ... */
static void C_ccall f_2324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2324,c,av);}
C_trace(C_text("chicken.scm:168: chicken.base#exit"));
t2=C_fast_retrieve(lf[10]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 in ... */
static void f_2329(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2329,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_eqp(lf[12],t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken.scm:92: scheme#string->number"));
t7=*((C_word*)lf[28]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_i_car(t4);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=C_eqp(lf[29],t3);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2437,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken.scm:150: scheme#string->number"));
t8=*((C_word*)lf[28]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_i_car(t4);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
if(C_truep(C_i_memq(t3,C_fast_retrieve(lf[33])))){
C_trace(C_text("chicken.scm:157: loop"));
t10=t1;
t11=t4;
t1=t10;
t2=t11;
goto loop;}
else{
if(C_truep(C_i_memq(t3,C_fast_retrieve(lf[34])))){
if(C_truep(C_i_pairp(t4))){
C_trace(C_text("chicken.scm:160: loop"));
t10=t1;
t11=C_u_i_cdr(t4);
t1=t10;
t2=t11;
goto loop;}
else{
C_trace(C_text("chicken.scm:161: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word av2[4];
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t1;
av2[2]=lf[35];
av2[3]=t3;
tp(4,av2);}}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2534,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
C_trace(C_text("chicken.scm:163: chicken.base#warning"));
t9=C_fast_retrieve(lf[36]);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=lf[37];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
C_trace(C_text("chicken.scm:165: chicken.string#conc"));
t9=C_fast_retrieve(lf[38]);{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[39];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}}}}}}

/* k2347 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in ... */
static void C_ccall f_2349(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,3)))){
C_save_and_reclaim((void *)f_2349,c,av);}
a=C_alloc(42);
switch(t1){
case C_fix(0):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2364,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.scm:96: cons*"));
f_1347(t2,lf[13],C_a_i_list(&a,2,lf[14],((C_word*)((C_word*)t0)[2])[1]));
case C_fix(1):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken.scm:99: cons*"));
f_1347(t2,lf[15],C_a_i_list(&a,2,lf[16],((C_word*)((C_word*)t0)[2])[1]));
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken.scm:104: cons*"));
f_1347(t2,lf[15],C_a_i_list(&a,4,lf[17],lf[18],lf[19],((C_word*)((C_word*)t0)[2])[1]));
case C_fix(3):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken.scm:111: cons*"));
f_1347(t2,lf[15],C_a_i_list(&a,8,lf[17],lf[20],lf[21],lf[16],lf[18],lf[19],lf[22],((C_word*)((C_word*)t0)[2])[1]));
case C_fix(4):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken.scm:122: cons*"));
f_1347(t2,lf[15],C_a_i_list(&a,9,lf[17],lf[20],lf[22],lf[16],lf[18],lf[19],lf[21],lf[23],((C_word*)((C_word*)t0)[2])[1]));
default:
if(C_truep(C_i_greater_or_equalp(t1,C_fix(5)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken.scm:135: cons*"));
f_1347(t2,lf[24],C_a_i_list(&a,12,lf[25],lf[23],lf[26],lf[22],lf[15],lf[27],lf[17],lf[20],lf[19],lf[16],lf[18],((C_word*)((C_word*)t0)[2])[1]));}
else{
C_trace(C_text("chicken.scm:148: loop"));
t2=((C_word*)((C_word*)t0)[3])[1];
f_2329(t2,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}}}

/* k2362 in k2347 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in ... */
static void C_ccall f_2364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2364,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
C_trace(C_text("chicken.scm:148: loop"));
t4=((C_word*)((C_word*)t2)[3])[1];
f_2329(t4,((C_word*)t2)[4],C_u_i_cdr(((C_word*)t2)[5]));}

/* k2372 in k2347 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in ... */
static void C_ccall f_2374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2374,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("chicken.scm:148: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2329(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2382 in k2347 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in ... */
static void C_ccall f_2384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2384,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("chicken.scm:148: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2329(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2392 in k2347 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in ... */
static void C_ccall f_2394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2394,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("chicken.scm:148: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2329(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2402 in k2347 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in ... */
static void C_ccall f_2404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2404,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("chicken.scm:148: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2329(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2412 in k2347 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in ... */
static void C_ccall f_2414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2414,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("chicken.scm:148: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2329(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]));}

/* k2435 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in ... */
static void C_ccall f_2437(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2437,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
switch(t1){
case C_fix(0):
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2452,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.scm:151: cons*"));
f_1347(t3,lf[27],C_a_i_list(&a,2,lf[25],((C_word*)((C_word*)t0)[5])[1]));
case C_fix(1):
t3=C_a_i_cons(&a,2,lf[25],((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
C_trace(C_text("chicken.scm:156: loop"));
t5=((C_word*)((C_word*)t0)[2])[1];
f_2329(t5,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));
case C_fix(2):
C_trace(C_text("chicken.scm:156: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_2329(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));
case C_fix(3):
t3=C_a_i_cons(&a,2,lf[30],((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
C_trace(C_text("chicken.scm:156: loop"));
t5=((C_word*)((C_word*)t0)[2])[1];
f_2329(t5,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));
default:
C_trace(C_text("chicken.scm:155: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=t2;
av2[2]=lf[32];
av2[3]=C_u_i_car(((C_word*)t0)[4]);
tp(4,av2);}}}

/* k2438 in k2435 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in ... */
static void C_ccall f_2440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2440,c,av);}
C_trace(C_text("chicken.scm:156: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_2329(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k2450 in k2435 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in ... */
static void C_ccall f_2452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2452,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[5])+1,t1);
C_trace(C_text("chicken.scm:156: loop"));
t4=((C_word*)((C_word*)t2)[2])[1];
f_2329(t4,((C_word*)t2)[3],C_u_i_cdr(((C_word*)t2)[4]));}

/* k2525 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in ... */
static void C_ccall f_2527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2527,c,av);}
C_trace(C_text("chicken.scm:166: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_2329(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2532 in loop in a2316 in k2195 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in ... */
static void C_ccall f_2534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2534,c,av);}
C_trace(C_text("chicken.scm:163: chicken.base#warning"));
t2=C_fast_retrieve(lf[36]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[37];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2548 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_2550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2550,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2562,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.scm:57: chicken.process-context#get-environment-variable"));
t4=C_fast_retrieve(lf[43]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[44];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2552 in k2548 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_2554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_2554,c,av);}
a=C_alloc(2);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1054,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_1054(((C_word*)t0)[2],C_fix(1))
);
C_trace(C_text("chicken.scm:56: scheme#append"));
t4=*((C_word*)lf[40]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2560 in k2548 in k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_2562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2562,c,av);}
if(C_truep(t1)){
C_trace(C_text("chicken.scm:57: chicken.string#string-split"));
t2=C_fast_retrieve(lf[41]);{
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
C_trace(C_text("chicken.scm:57: chicken.string#string-split"));
t2=C_fast_retrieve(lf[41]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[42];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k2567 in k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_2569(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2569,c,av);}
a=C_alloc(7);
t2=C_i_cdr(t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2197,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
f_2197(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2550,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken.scm:56: take"));
f_1022(t4,t2,C_fix(1));}}

/* k859 */
static void C_ccall f_861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_861,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k862 in k859 */
static void C_ccall f_864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_864,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

/* k865 in k862 in k859 */
static void C_ccall f_867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_867,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_870,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dffi_2dsyntax_toplevel(2,av2);}}

/* k868 in k865 in k862 in k859 */
static void C_ccall f_870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_870,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_873,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d4_toplevel(2,av2);}}

/* k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_873,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_876,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_879,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_882,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_882,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_885,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_885,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_toplevel(2,av2);}}

/* k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_888,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_optimizer_toplevel(2,av2);}}

/* k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_891,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_894,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lfa2_toplevel(2,av2);}}

/* k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_894,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_2dsyntax_toplevel(2,av2);}}

/* k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_897,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scrutinizer_toplevel(2,av2);}}

/* k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_900,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_batch_2ddriver_toplevel(2,av2);}}

/* k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_903,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_906,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_c_2dplatform_toplevel(2,av2);}}

/* k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_906,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_909,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_c_2dbackend_toplevel(2,av2);}}

/* k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_909,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_user_2dpass_toplevel(2,av2);}}

/* k910 in k907 in k904 in k901 in k898 in k895 in k892 in k889 in k886 in k883 in k880 in k877 in k874 in k871 in k868 in k865 in k862 in k859 */
static void C_ccall f_912(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_912,c,av);}
a=C_alloc(15);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_mutate(&lf[1] /* (set! chicken.compiler.chicken#take ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1022,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[2] /* (set! chicken.compiler.chicken#cons* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1347,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2569,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.scm:53: chicken.process-context#argv"));
t6=C_fast_retrieve(lf[45]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

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
if(C_unlikely(!C_demand_2(252))){
C_save(t1);
C_rereclaim2(252*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,46);
lf[0]=C_h_intern(&lf[0],25, C_text("chicken.compiler.chicken#"));
lf[5]=C_h_intern(&lf[5],14, C_text("scheme#reverse"));
lf[6]=C_h_intern(&lf[6],21, C_text("scheme#string->symbol"));
lf[7]=C_h_intern(&lf[7],16, C_text("scheme#substring"));
lf[8]=C_h_intern(&lf[8],34, C_text("chicken.base#implicit-exit-handler"));
lf[9]=C_h_intern(&lf[9],44, C_text("chicken.compiler.user-pass#user-options-pass"));
lf[10]=C_h_intern(&lf[10],17, C_text("chicken.base#exit"));
lf[11]=C_h_intern(&lf[11],49, C_text("chicken.compiler.batch-driver#compile-source-file"));
lf[12]=C_h_intern(&lf[12],14, C_text("optimize-level"));
lf[13]=C_h_intern(&lf[13],18, C_text("no-compiler-syntax"));
lf[14]=C_h_intern(&lf[14],21, C_text("no-usual-integrations"));
lf[15]=C_h_intern(&lf[15],22, C_text("optimize-leaf-routines"));
lf[16]=C_h_intern(&lf[16],23, C_text("merge-reusable-closures"));
lf[17]=C_h_intern(&lf[17],6, C_text("inline"));
lf[18]=C_h_intern(&lf[18],24, C_text("merge-shareable-closures"));
lf[19]=C_h_intern(&lf[19],4, C_text("lfa2"));
lf[20]=C_h_intern(&lf[20],13, C_text("inline-global"));
lf[21]=C_h_intern(&lf[21],5, C_text("local"));
lf[22]=C_h_intern(&lf[22],10, C_text("specialize"));
lf[23]=C_h_intern(&lf[23],6, C_text("unsafe"));
lf[24]=C_h_intern(&lf[24],18, C_text("disable-interrupts"));
lf[25]=C_h_intern(&lf[25],8, C_text("no-trace"));
lf[26]=C_h_intern(&lf[26],5, C_text("block"));
lf[27]=C_h_intern(&lf[27],14, C_text("no-lambda-info"));
lf[28]=C_h_intern(&lf[28],21, C_text("scheme#string->number"));
lf[29]=C_h_intern(&lf[29],11, C_text("debug-level"));
lf[30]=C_h_intern(&lf[30],10, C_text("debug-info"));
lf[31]=C_h_intern(&lf[31],39, C_text("chicken.compiler.support#quit-compiling"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\151\156\166\141\154\151\144\040\144\145\142\165\147\040\154\145\166\145\154\072\040\176\141\000"));
lf[33]=C_h_intern(&lf[33],50, C_text("chicken.compiler.c-platform#valid-compiler-options"));
lf[34]=C_h_intern(&lf[34],64, C_text("chicken.compiler.c-platform#valid-compiler-options-with-argument"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\155\151\163\163\151\156\147\040\141\162\147\165\155\145\156\164\040\164\157\040\140\055\176\163\047\040\157\160\164\151\157\156\000"));
lf[36]=C_h_intern(&lf[36],20, C_text("chicken.base#warning"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\151\156\166\141\154\151\144\040\143\157\155\160\151\154\145\162\040\157\160\164\151\157\156\040\050\151\147\156\157\162\145\144\051\000"));
lf[38]=C_h_intern(&lf[38],19, C_text("chicken.string#conc"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\055\000"));
lf[40]=C_h_intern(&lf[40],13, C_text("scheme#append"));
lf[41]=C_h_intern(&lf[41],27, C_text("chicken.string#string-split"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[43]=C_h_intern(&lf[43],48, C_text("chicken.process-context#get-environment-variable"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\110\111\103\113\105\116\137\117\120\124\111\117\116\123\000"));
lf[45]=C_h_intern(&lf[45],28, C_text("chicken.process-context#argv"));
C_register_lf2(lf,46,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_861,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[56] = {
{C_text("f_1022:chicken_2escm"),(void*)f_1022},
{C_text("f_1040:chicken_2escm"),(void*)f_1040},
{C_text("f_1054:chicken_2escm"),(void*)f_1054},
{C_text("f_1347:chicken_2escm"),(void*)f_1347},
{C_text("f_1353:chicken_2escm"),(void*)f_1353},
{C_text("f_1367:chicken_2escm"),(void*)f_1367},
{C_text("f_2197:chicken_2escm"),(void*)f_2197},
{C_text("f_2199:chicken_2escm"),(void*)f_2199},
{C_text("f_2205:chicken_2escm"),(void*)f_2205},
{C_text("f_2219:chicken_2escm"),(void*)f_2219},
{C_text("f_2257:chicken_2escm"),(void*)f_2257},
{C_text("f_2261:chicken_2escm"),(void*)f_2261},
{C_text("f_2297:chicken_2escm"),(void*)f_2297},
{C_text("f_2303:chicken_2escm"),(void*)f_2303},
{C_text("f_2305:chicken_2escm"),(void*)f_2305},
{C_text("f_2309:chicken_2escm"),(void*)f_2309},
{C_text("f_2317:chicken_2escm"),(void*)f_2317},
{C_text("f_2321:chicken_2escm"),(void*)f_2321},
{C_text("f_2324:chicken_2escm"),(void*)f_2324},
{C_text("f_2329:chicken_2escm"),(void*)f_2329},
{C_text("f_2349:chicken_2escm"),(void*)f_2349},
{C_text("f_2364:chicken_2escm"),(void*)f_2364},
{C_text("f_2374:chicken_2escm"),(void*)f_2374},
{C_text("f_2384:chicken_2escm"),(void*)f_2384},
{C_text("f_2394:chicken_2escm"),(void*)f_2394},
{C_text("f_2404:chicken_2escm"),(void*)f_2404},
{C_text("f_2414:chicken_2escm"),(void*)f_2414},
{C_text("f_2437:chicken_2escm"),(void*)f_2437},
{C_text("f_2440:chicken_2escm"),(void*)f_2440},
{C_text("f_2452:chicken_2escm"),(void*)f_2452},
{C_text("f_2527:chicken_2escm"),(void*)f_2527},
{C_text("f_2534:chicken_2escm"),(void*)f_2534},
{C_text("f_2550:chicken_2escm"),(void*)f_2550},
{C_text("f_2554:chicken_2escm"),(void*)f_2554},
{C_text("f_2562:chicken_2escm"),(void*)f_2562},
{C_text("f_2569:chicken_2escm"),(void*)f_2569},
{C_text("f_861:chicken_2escm"),(void*)f_861},
{C_text("f_864:chicken_2escm"),(void*)f_864},
{C_text("f_867:chicken_2escm"),(void*)f_867},
{C_text("f_870:chicken_2escm"),(void*)f_870},
{C_text("f_873:chicken_2escm"),(void*)f_873},
{C_text("f_876:chicken_2escm"),(void*)f_876},
{C_text("f_879:chicken_2escm"),(void*)f_879},
{C_text("f_882:chicken_2escm"),(void*)f_882},
{C_text("f_885:chicken_2escm"),(void*)f_885},
{C_text("f_888:chicken_2escm"),(void*)f_888},
{C_text("f_891:chicken_2escm"),(void*)f_891},
{C_text("f_894:chicken_2escm"),(void*)f_894},
{C_text("f_897:chicken_2escm"),(void*)f_897},
{C_text("f_900:chicken_2escm"),(void*)f_900},
{C_text("f_903:chicken_2escm"),(void*)f_903},
{C_text("f_906:chicken_2escm"),(void*)f_906},
{C_text("f_909:chicken_2escm"),(void*)f_909},
{C_text("f_912:chicken_2escm"),(void*)f_912},
{C_text("toplevel:chicken_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: chicken.compiler.chicken#partition 
o|hiding unexported module binding: chicken.compiler.chicken#span 
o|hiding unexported module binding: chicken.compiler.chicken#take 
o|hiding unexported module binding: chicken.compiler.chicken#drop 
o|hiding unexported module binding: chicken.compiler.chicken#split-at 
o|hiding unexported module binding: chicken.compiler.chicken#append-map 
o|hiding unexported module binding: chicken.compiler.chicken#every 
o|hiding unexported module binding: chicken.compiler.chicken#any 
o|hiding unexported module binding: chicken.compiler.chicken#cons* 
o|hiding unexported module binding: chicken.compiler.chicken#concatenate 
o|hiding unexported module binding: chicken.compiler.chicken#delete 
o|hiding unexported module binding: chicken.compiler.chicken#first 
o|hiding unexported module binding: chicken.compiler.chicken#second 
o|hiding unexported module binding: chicken.compiler.chicken#third 
o|hiding unexported module binding: chicken.compiler.chicken#fourth 
o|hiding unexported module binding: chicken.compiler.chicken#fifth 
o|hiding unexported module binding: chicken.compiler.chicken#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.chicken#alist-cons 
o|hiding unexported module binding: chicken.compiler.chicken#filter 
o|hiding unexported module binding: chicken.compiler.chicken#filter-map 
o|hiding unexported module binding: chicken.compiler.chicken#remove 
o|hiding unexported module binding: chicken.compiler.chicken#unzip1 
o|hiding unexported module binding: chicken.compiler.chicken#last 
o|hiding unexported module binding: chicken.compiler.chicken#list-index 
o|hiding unexported module binding: chicken.compiler.chicken#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#list-tabulate 
o|hiding unexported module binding: chicken.compiler.chicken#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.chicken#length+ 
o|hiding unexported module binding: chicken.compiler.chicken#find 
o|hiding unexported module binding: chicken.compiler.chicken#find-tail 
o|hiding unexported module binding: chicken.compiler.chicken#iota 
o|hiding unexported module binding: chicken.compiler.chicken#make-list 
o|hiding unexported module binding: chicken.compiler.chicken#posq 
o|hiding unexported module binding: chicken.compiler.chicken#posv 
o|hiding unexported module binding: chicken.compiler.chicken#compiler-arguments 
o|hiding unexported module binding: chicken.compiler.chicken#process-command-line 
S|applied compiler syntax:
S|  chicken.base#foldl		3
S|  scheme#map		3
S|  chicken.base#foldr		3
o|eliminated procedure checks: 25 
o|specializations:
o|  9 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  2 (scheme#> fixnum fixnum)
o|  2 (scheme#char=? char char)
o|  2 (scheme#string-ref string fixnum)
o|  1 (scheme#eqv? * *)
o|  3 (##sys#check-list (or pair list) *)
o|  30 (scheme#cdr pair)
o|  8 (scheme#car pair)
(o e)|safe calls: 228 
o|safe globals: (chicken.compiler.chicken#posv chicken.compiler.chicken#posq chicken.compiler.chicken#make-list chicken.compiler.chicken#iota chicken.compiler.chicken#find-tail chicken.compiler.chicken#find chicken.compiler.chicken#length+ chicken.compiler.chicken#lset=/eq? chicken.compiler.chicken#lset<=/eq? chicken.compiler.chicken#list-tabulate chicken.compiler.chicken#lset-intersection/eq? chicken.compiler.chicken#lset-union/eq? chicken.compiler.chicken#lset-difference/eq? chicken.compiler.chicken#lset-adjoin/eq? chicken.compiler.chicken#list-index chicken.compiler.chicken#last chicken.compiler.chicken#unzip1 chicken.compiler.chicken#remove chicken.compiler.chicken#filter-map chicken.compiler.chicken#filter chicken.compiler.chicken#alist-cons chicken.compiler.chicken#delete-duplicates chicken.compiler.chicken#fifth chicken.compiler.chicken#fourth chicken.compiler.chicken#third chicken.compiler.chicken#second chicken.compiler.chicken#first chicken.compiler.chicken#delete chicken.compiler.chicken#concatenate chicken.compiler.chicken#cons* chicken.compiler.chicken#any chicken.compiler.chicken#every chicken.compiler.chicken#append-map chicken.compiler.chicken#split-at chicken.compiler.chicken#drop chicken.compiler.chicken#take chicken.compiler.chicken#span chicken.compiler.chicken#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#span 
o|inlining procedure: k1024 
o|inlining procedure: k1024 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#split-at 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#append-map 
o|inlining procedure: k1294 
o|inlining procedure: k1294 
o|inlining procedure: k1325 
o|inlining procedure: k1325 
o|merged explicitly consed rest parameter: xs229 
o|inlining procedure: k1355 
o|inlining procedure: k1355 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#alist-cons 
o|inlining procedure: k1542 
o|inlining procedure: k1542 
o|inlining procedure: k1534 
o|inlining procedure: k1534 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#last 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset-intersection/eq? 
o|inlining procedure: k1933 
o|inlining procedure: k1933 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#posv 
o|inlining procedure: k2207 
o|substituted constant variable: a2227 
o|inlining procedure: k2207 
o|inlining procedure: k2234 
o|inlining procedure: k2234 
o|substituted constant variable: a2268 
o|substituted constant variable: a2265 
o|substituted constant variable: a2270 
o|inlining procedure: k2271 
o|inlining procedure: k2271 
o|substituted constant variable: a2288 
o|substituted constant variable: a2294 
o|inlining procedure: k2310 
o|inlining procedure: k2310 
o|propagated global variable: r23112595 chicken.compiler.chicken#process-command-line 
o|inlining procedure: k2331 
o|inlining procedure: k2331 
o|consed rest parameter at call site: "(chicken.scm:96) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2365 
o|consed rest parameter at call site: "(chicken.scm:99) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2365 
o|consed rest parameter at call site: "(chicken.scm:104) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2385 
o|consed rest parameter at call site: "(chicken.scm:111) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2385 
o|consed rest parameter at call site: "(chicken.scm:122) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2405 
o|consed rest parameter at call site: "(chicken.scm:135) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2405 
o|substituted constant variable: a2416 
o|substituted constant variable: a2418 
o|substituted constant variable: a2420 
o|substituted constant variable: a2422 
o|substituted constant variable: a2424 
o|inlining procedure: k2429 
o|consed rest parameter at call site: "(chicken.scm:151) chicken.compiler.chicken#cons*" 2 
o|inlining procedure: k2453 
o|inlining procedure: k2453 
o|inlining procedure: k2469 
o|inlining procedure: k2469 
o|substituted constant variable: a2485 
o|substituted constant variable: a2487 
o|substituted constant variable: a2489 
o|substituted constant variable: a2491 
o|inlining procedure: k2429 
o|inlining procedure: k2505 
o|inlining procedure: k2505 
o|inlining procedure: k2532 
o|inlining procedure: k2532 
o|contracted procedure: "(chicken.scm:58) chicken.compiler.chicken#drop" 
o|inlining procedure: k1056 
o|inlining procedure: k1056 
o|inlining procedure: k2563 
o|inlining procedure: k2563 
o|replaced variables: 163 
o|removed binding forms: 82 
o|substituted constant variable: r10252570 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#every 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#any 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#filter 
o|removed side-effect free assignment to unused variable: chicken.compiler.chicken#list-tabulate 
o|substituted constant variable: n112 
o|substituted constant variable: r25642624 
o|substituted constant variable: r25642624 
o|replaced variables: 18 
o|removed binding forms: 146 
o|inlining procedure: k2350 
o|inlining procedure: k2350 
o|inlining procedure: k2350 
o|inlining procedure: k2350 
o|inlining procedure: k2350 
o|inlining procedure: k2350 
o|inlining procedure: k2350 
o|inlining procedure: k2438 
o|inlining procedure: k2438 
o|inlining procedure: k2438 
o|inlining procedure: k2438 
o|removed binding forms: 25 
o|removed binding forms: 12 
o|removed binding forms: 1 
o|simplifications: ((if . 2) (let . 18) (##core#call . 44)) 
o|  call simplifications:
o|    scheme#cdr	2
o|    ##sys#call-with-values
o|    scheme#memq	2
o|    scheme#string?
o|    scheme#pair?
o|    scheme#eq?	11
o|    scheme#>=
o|    scheme#apply
o|    scheme#string-length
o|    chicken.fixnum#fx>	2
o|    scheme#values
o|    scheme#null?	4
o|    chicken.fixnum#fx<=	2
o|    scheme#car	6
o|    chicken.fixnum#fx-	2
o|    scheme#cons	6
o|contracted procedure: k1027 
o|contracted procedure: k1034 
o|contracted procedure: k1044 
o|contracted procedure: k1358 
o|contracted procedure: k1369 
o|contracted procedure: k2192 
o|contracted procedure: k2210 
o|contracted procedure: k2220 
o|contracted procedure: k2223 
o|contracted procedure: k2231 
o|contracted procedure: k2262 
o|contracted procedure: k2237 
o|contracted procedure: k2251 
o|contracted procedure: k2280 
o|contracted procedure: k2334 
o|contracted procedure: k2337 
o|contracted procedure: k2344 
o|contracted procedure: k2358 
o|contracted procedure: k2368 
o|contracted procedure: k2378 
o|contracted procedure: k2388 
o|contracted procedure: k2398 
o|contracted procedure: k2408 
o|contracted procedure: k2426 
o|contracted procedure: k2432 
o|contracted procedure: k2446 
o|contracted procedure: k2456 
o|contracted procedure: k2460 
o|contracted procedure: k2466 
o|contracted procedure: k2472 
o|contracted procedure: k2476 
o|contracted procedure: k2493 
o|contracted procedure: k2499 
o|contracted procedure: k2508 
o|contracted procedure: k2514 
o|contracted procedure: k2535 
o|contracted procedure: k2541 
o|contracted procedure: k1059 
o|contracted procedure: k1066 
o|contracted procedure: k1070 
o|simplifications: ((let . 25)) 
o|removed binding forms: 40 
o|direct leaf routine/allocation: loop113 0 
o|contracted procedure: k2556 
o|converted assignments to bindings: (loop113) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (chicken.compiler.chicken#cons* loop592 loop575 loop230 chicken.compiler.chicken#take) 
o|shared closure containers: 2 
o|shared closure users: 2 
o|calls to known targets: 34 
o|identified direct recursive calls: f_1022 1 
o|identified direct recursive calls: f_1353 1 
o|identified direct recursive calls: f_2205 3 
o|identified direct recursive calls: f_2329 2 
o|identified direct recursive calls: f_1054 1 
o|fast box initializations: 3 
o|fast global references: 15 
o|fast global assignments: 4 
o|dropping unused closure argument: f_1022 
o|dropping unused closure argument: f_1054 
o|dropping unused closure argument: f_1347 
*/
/* end of file */
