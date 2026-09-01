/* Generated from profiler.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: profiler.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file profiler.c
   unit: profiler
   uses: library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[25];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,6),40,97,51,52,54,41,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,13),40,97,51,53,53,32,46,32,97,114,103,115,41,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,111,102,105,108,101,45,105,110,102,111,32,115,105,122,101,32,102,105,108,101,110,97,109,101,41,0,0,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,115,101,116,45,112,114,111,102,105,108,101,45,105,110,102,111,45,118,101,99,116,111,114,33,32,118,101,99,32,105,32,120,41};
static C_char li4[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,110,116,114,121,32,105,110,100,101,120,32,118,101,99,41,0};
static C_char li5[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,112,114,111,102,105,108,101,45,101,120,105,116,32,105,110,100,101,120,32,118,101,99,41,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,54,52,32,105,41,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,53,49,32,103,49,53,56,41,0};
static C_char li8[] C_aligned={C_lihdr(0,0,6),40,97,53,49,56,41,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,22),40,35,35,115,121,115,35,102,105,110,105,115,104,45,112,114,111,102,105,108,101,41,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from cpu-ms */
C_regparm static C_word stub116(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_uint64_to_num(&C_a,C_cpu_milliseconds());
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word stub92(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word p=(C_word )(C_a0);
C_return(ftell(C_port_file(p)) == 0);
C_ret:
#undef return

return C_r;}

C_noret_decl(f_306)
static void C_ccall f_306(C_word c,C_word *av) C_noret;
C_noret_decl(f_314)
static void C_ccall f_314(C_word c,C_word *av) C_noret;
C_noret_decl(f_318)
static void C_ccall f_318(C_word c,C_word *av) C_noret;
C_noret_decl(f_321)
static void C_ccall f_321(C_word c,C_word *av) C_noret;
C_noret_decl(f_333)
static void C_ccall f_333(C_word c,C_word *av) C_noret;
C_noret_decl(f_336)
static void C_ccall f_336(C_word c,C_word *av) C_noret;
C_noret_decl(f_339)
static void C_ccall f_339(C_word c,C_word *av) C_noret;
C_noret_decl(f_342)
static void C_ccall f_342(C_word c,C_word *av) C_noret;
C_noret_decl(f_347)
static void C_ccall f_347(C_word c,C_word *av) C_noret;
C_noret_decl(f_351)
static void C_ccall f_351(C_word c,C_word *av) C_noret;
C_noret_decl(f_356)
static void C_ccall f_356(C_word c,C_word *av) C_noret;
C_noret_decl(f_360)
static void C_ccall f_360(C_word c,C_word *av) C_noret;
C_noret_decl(f_374)
static void C_ccall f_374(C_word c,C_word *av) C_noret;
C_noret_decl(f_377)
static void C_ccall f_377(C_word c,C_word *av) C_noret;
C_noret_decl(f_390)
static void C_ccall f_390(C_word c,C_word *av) C_noret;
C_noret_decl(f_412)
static void f_412(C_word t0,C_word t1) C_noret;
C_noret_decl(f_450)
static void C_ccall f_450(C_word c,C_word *av) C_noret;
C_noret_decl(f_510)
static void C_ccall f_510(C_word c,C_word *av) C_noret;
C_noret_decl(f_514)
static void C_ccall f_514(C_word c,C_word *av) C_noret;
C_noret_decl(f_519)
static void C_ccall f_519(C_word c,C_word *av) C_noret;
C_noret_decl(f_523)
static void C_ccall f_523(C_word c,C_word *av) C_noret;
C_noret_decl(f_533)
static void f_533(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_543)
static void C_ccall f_543(C_word c,C_word *av) C_noret;
C_noret_decl(f_546)
static void C_ccall f_546(C_word c,C_word *av) C_noret;
C_noret_decl(f_549)
static void C_ccall f_549(C_word c,C_word *av) C_noret;
C_noret_decl(f_552)
static void C_ccall f_552(C_word c,C_word *av) C_noret;
C_noret_decl(f_555)
static void C_ccall f_555(C_word c,C_word *av) C_noret;
C_noret_decl(f_558)
static void C_ccall f_558(C_word c,C_word *av) C_noret;
C_noret_decl(f_561)
static void C_ccall f_561(C_word c,C_word *av) C_noret;
C_noret_decl(f_564)
static void C_ccall f_564(C_word c,C_word *av) C_noret;
C_noret_decl(f_596)
static void f_596(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_606)
static void C_ccall f_606(C_word c,C_word *av) C_noret;
C_noret_decl(f_623)
static void C_ccall f_623(C_word c,C_word *av) C_noret;
C_noret_decl(C_profiler_toplevel)
C_extern void C_ccall C_profiler_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_412)
static void C_ccall trf_412(C_word c,C_word *av) C_noret;
static void C_ccall trf_412(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_412(t0,t1);}

C_noret_decl(trf_533)
static void C_ccall trf_533(C_word c,C_word *av) C_noret;
static void C_ccall trf_533(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_533(t0,t1,t2);}

C_noret_decl(trf_596)
static void C_ccall trf_596(C_word c,C_word *av) C_noret;
static void C_ccall trf_596(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_596(t0,t1,t2);}

/* k304 */
static void C_ccall f_306(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_306,c,av);}
a=C_alloc(17);
t2=lf[1] /* ##sys#profile-vector-list */ =C_SCHEME_END_OF_LIST;;
t3=lf[2] /* ##sys#profile-name */ =C_SCHEME_FALSE;;
t4=C_set_block_item(lf[3] /* ##sys#profile-append-mode */,0,C_SCHEME_FALSE);
t5=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#register-profile-info ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_314,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[12]+1 /* (set! ##sys#set-profile-info-vector! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_377,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[13]+1);
t8=C_mutate((C_word*)lf[14]+1 /* (set! ##sys#profile-entry ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_390,a[2]=t7,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[15]+1 /* (set! ##sys#profile-exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_450,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t10=*((C_word*)lf[16]+1);
t11=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#finish-profile ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_510,a[2]=t10,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}

/* ##sys#register-profile-info in k304 */
static void C_ccall f_314(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_314,c,av);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_318,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_333,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t3))){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t3;
f_333(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_374,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_fix((C_word)C_getpid());
/* ##sys#fixnum->string */
t8=*((C_word*)lf[11]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_318(2,av2);}}}

/* k316 in ##sys#register-profile-info in k304 */
static void C_ccall f_318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_318,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:74: scheme#make-vector */
t3=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fixnum_times(((C_word*)t0)[3],C_fix(5));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k319 in k316 in ##sys#register-profile-info in k304 */
static void C_ccall f_321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_321,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,lf[1]);
t3=C_mutate(&lf[1] /* (set! ##sys#profile-vector-list ...) */,t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k331 in ##sys#register-profile-info in k304 */
static void C_ccall f_333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_333,c,av);}
a=C_alloc(4);
t2=C_mutate(&lf[2] /* (set! ##sys#profile-name ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_336,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:63: chicken.base#exit-handler */
t4=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k334 in k331 in ##sys#register-profile-info in k304 */
static void C_ccall f_336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_336,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_339,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:64: chicken.base#implicit-exit-handler */
t4=*((C_word*)lf[7]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k337 in k334 in k331 in ##sys#register-profile-info in k304 */
static void C_ccall f_339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_339,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_342,a[2]=t1,a[3]=((C_word*)t2)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_356,a[2]=((C_word*)t2)[3],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:65: chicken.base#exit-handler */
t5=*((C_word*)lf[8]+1);{
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

/* k340 in k337 in k334 in k331 in ##sys#register-profile-info in k304 */
static void C_ccall f_342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_342,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_347,a[2]=((C_word*)t0)[2],a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:69: chicken.base#implicit-exit-handler */
t3=*((C_word*)lf[7]+1);{
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

/* a346 in k340 in k337 in k334 in k331 in ##sys#register-profile-info in k304 */
static void C_ccall f_347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_347,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_351,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* profiler.scm:71: ##sys#finish-profile */
t3=*((C_word*)lf[6]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k349 in a346 in k340 in k337 in k334 in k331 in ##sys#register-profile-info in k304 */
static void C_ccall f_351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_351,c,av);}
/* profiler.scm:72: oldieh */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a355 in k337 in k334 in k331 in ##sys#register-profile-info in k304 */
static void C_ccall f_356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_356,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_360,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* profiler.scm:67: ##sys#finish-profile */
t4=*((C_word*)lf[6]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k358 in a355 in k337 in k334 in k331 in ##sys#register-profile-info in k304 */
static void C_ccall f_360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_360,c,av);}{
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

/* k372 in ##sys#register-profile-info in k304 */
static void C_ccall f_374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_374,c,av);}
/* ##sys#string-append */
t2=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[10];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* ##sys#set-profile-info-vector! in k304 */
static void C_ccall f_377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_377,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_setslot(t2,C_fixnum_times(t3,C_fix(5)),t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* ##sys#profile-entry in k304 */
static void C_ccall f_390(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_390,c,av);}
a=C_alloc(7);
t4=C_fixnum_times(t2,C_fix(5));
t5=C_u_fixnum_plus(t4,C_fix(1));
t6=C_slot(t3,t5);
t7=C_u_fixnum_plus(t4,C_fix(2));
t8=C_u_fixnum_plus(t4,C_fix(4));
t9=C_slot(t3,t8);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_412,a[2]=t9,a[3]=t3,a[4]=t7,a[5]=t1,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_not(t6))){
t11=t10;
f_412(t11,C_i_set_i_slot(t3,t5,C_SCHEME_FALSE));}
else{
t11=C_eqp(((C_word*)t0)[2],t6);
t12=t10;
f_412(t12,(C_truep(t11)?C_i_set_i_slot(t3,t5,C_SCHEME_FALSE):C_i_set_i_slot(t3,t5,C_u_fixnum_plus(t6,C_fix(1)))));}}

/* k410 in ##sys#profile-entry in k304 */
static void f_412(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,1)))){
C_save_and_reclaim_args((void *)trf_412,2,t0,t1);}
a=C_alloc(9);
t2=C_eqp(C_fix(0),((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_a_i_bytevector(&a,1,C_fix(7));
t4=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],stub116(t3));
t5=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],((C_word*)t0)[6],C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1)));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_i_set_i_slot(((C_word*)t0)[3],((C_word*)t0)[6],C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#profile-exit in k304 */
static void C_ccall f_450(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(67,c,1)))){
C_save_and_reclaim((void *)f_450,c,av);}
a=C_alloc(67);
t4=C_fixnum_times(t2,C_fix(5));
t5=C_u_fixnum_plus(t4,C_fix(2));
t6=C_u_fixnum_plus(t4,C_fix(3));
t7=C_u_fixnum_plus(t4,C_fix(4));
t8=C_slot(t3,t7);
t9=C_u_fixnum_difference(t8,C_fix(1));
t10=C_i_set_i_slot(t3,t7,t9);
t11=C_eqp(C_fix(0),t9);
if(C_truep(t11)){
t12=C_slot(t3,t6);
t13=C_eqp(t12,C_fix(0));
t14=(C_truep(t13)?C_fix(0):t12);
t15=C_a_i_bytevector(&a,1,C_fix(7));
t16=stub116(t15);
t17=C_slot(t3,t5);
t18=C_s_a_i_minus(&a,2,t16,t17);
t19=C_s_a_i_plus(&a,2,t14,t18);
t20=t1;{
C_word *av2=av;
av2[0]=t20;
av2[1]=C_i_setslot(t3,t6,t19);
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}
else{
t12=C_SCHEME_UNDEFINED;
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}

/* ##sys#finish-profile in k304 */
static void C_ccall f_510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_510,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_514,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_debug_modep())){
/* profiler.scm:127: ##sys#print */
t3=*((C_word*)lf[22]+1);{
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
av2[4]=*((C_word*)lf[24]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_514(2,av2);}}}

/* k512 in ##sys#finish-profile in k304 */
static void C_ccall f_514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_514,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_519,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
if(C_truep(*((C_word*)lf[3]+1))){
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[2];
av2[3]=t2;
av2[4]=lf[21];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_519,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_523,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[18]+1);
if(C_truep(stub92(C_SCHEME_UNDEFINED,*((C_word*)lf[18]+1)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_623,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:132: write */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[20];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_523(2,av2);}}}

/* k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_523(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_523,c,av);}
a=C_alloc(6);
t2=lf[1];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_596,a[2]=t4,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_596(t6,((C_word*)t0)[2],lf[1]);}

/* doloop164 in for-each-loop151 in k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void f_533(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_533,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_543,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#write-char/port */
t4=*((C_word*)lf[17]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(40);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k541 in doloop164 in for-each-loop151 in k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_543,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_546,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* profiler.scm:140: write */
t3=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[5],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k544 in k541 in doloop164 in for-each-loop151 in k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_546,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_549,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#write-char/port */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(32);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k547 in k544 in k541 in doloop164 in for-each-loop151 in k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_549,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_552,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_u_fixnum_plus(((C_word*)t2)[4],C_fix(1));
/* profiler.scm:142: write */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_slot(((C_word*)t2)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k550 in k547 in k544 in k541 in doloop164 in for-each-loop151 in k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_552,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_555,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#write-char/port */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(32);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k553 in k550 in k547 in k544 in k541 in doloop164 in for-each-loop151 in k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_555,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_558,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_u_fixnum_plus(((C_word*)t2)[4],C_fix(3));
/* profiler.scm:144: write */
t5=*((C_word*)lf[19]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_slot(((C_word*)t2)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k556 in k553 in k550 in k547 in k544 in k541 in doloop164 in for-each-loop151 in k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_558,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_561,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* ##sys#write-char/port */
t3=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(41);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k559 in k556 in k553 in k550 in k547 in k544 in k541 in doloop164 in for-each-loop151 in k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_561,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_564,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#write-char/port */
t4=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k562 in k559 in k556 in k553 in k550 in k547 in k544 in k541 in doloop164 in for-each-loop151 in k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_564,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t2)[2])[1];
f_533(t3,((C_word*)t2)[3],C_u_fixnum_plus(((C_word*)t2)[4],C_fix(5)));}

/* for-each-loop151 in k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void f_596(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_596,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_606,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_533,a[2]=t5,a[3]=t7,a[4]=t4,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_533(t9,t3,C_fix(0));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k604 in for-each-loop151 in k521 in a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_606,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_596(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k621 in a518 in k512 in ##sys#finish-profile in k304 */
static void C_ccall f_623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_623,c,av);}
/* ##sys#write-char/port */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_profiler_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("profiler"));
C_check_nursery_minimum(C_calculate_demand(11,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void*)C_profiler_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(147))){
C_save(t1);
C_rereclaim2(147*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(11);
C_initialize_lf(lf,25);
lf[0]=C_h_intern(&lf[0],8, C_text("profiler"));
lf[3]=C_h_intern(&lf[3],25, C_text("##sys#profile-append-mode"));
lf[4]=C_h_intern(&lf[4],27, C_text("##sys#register-profile-info"));
lf[5]=C_h_intern(&lf[5],18, C_text("scheme#make-vector"));
lf[6]=C_h_intern(&lf[6],20, C_text("##sys#finish-profile"));
lf[7]=C_h_intern(&lf[7],34, C_text("chicken.base#implicit-exit-handler"));
lf[8]=C_h_intern(&lf[8],25, C_text("chicken.base#exit-handler"));
lf[9]=C_h_intern(&lf[9],19, C_text("##sys#string-append"));
lf[10]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\120\122\117\106\111\114\105\056\000"));
lf[11]=C_h_intern(&lf[11],20, C_text("##sys#fixnum->string"));
lf[12]=C_h_intern(&lf[12],30, C_text("##sys#set-profile-info-vector!"));
lf[13]=C_h_intern(&lf[13],35, C_text("chicken.fixnum#most-positive-fixnum"));
lf[14]=C_h_intern(&lf[14],19, C_text("##sys#profile-entry"));
lf[15]=C_h_intern(&lf[15],18, C_text("##sys#profile-exit"));
lf[16]=C_h_intern(&lf[16],26, C_text("scheme#with-output-to-file"));
lf[17]=C_h_intern(&lf[17],21, C_text("##sys#write-char/port"));
lf[18]=C_h_intern(&lf[18],21, C_text("##sys#standard-output"));
lf[19]=C_h_intern(&lf[19],12, C_text("scheme#write"));
lf[20]=C_h_intern(&lf[20],12, C_text("instrumented"));
lf[21]=C_h_intern_kw(&lf[21],6, C_text("append"));
lf[22]=C_h_intern(&lf[22],11, C_text("##sys#print"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\133\144\145\142\165\147\135\040\167\162\151\164\151\156\147\040\160\162\157\146\151\154\145\056\056\056\012\000"));
lf[24]=C_h_intern(&lf[24],20, C_text("##sys#standard-error"));
C_register_lf2(lf,25,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_306,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[35] = {
{C_text("f_306:profiler_2escm"),(void*)f_306},
{C_text("f_314:profiler_2escm"),(void*)f_314},
{C_text("f_318:profiler_2escm"),(void*)f_318},
{C_text("f_321:profiler_2escm"),(void*)f_321},
{C_text("f_333:profiler_2escm"),(void*)f_333},
{C_text("f_336:profiler_2escm"),(void*)f_336},
{C_text("f_339:profiler_2escm"),(void*)f_339},
{C_text("f_342:profiler_2escm"),(void*)f_342},
{C_text("f_347:profiler_2escm"),(void*)f_347},
{C_text("f_351:profiler_2escm"),(void*)f_351},
{C_text("f_356:profiler_2escm"),(void*)f_356},
{C_text("f_360:profiler_2escm"),(void*)f_360},
{C_text("f_374:profiler_2escm"),(void*)f_374},
{C_text("f_377:profiler_2escm"),(void*)f_377},
{C_text("f_390:profiler_2escm"),(void*)f_390},
{C_text("f_412:profiler_2escm"),(void*)f_412},
{C_text("f_450:profiler_2escm"),(void*)f_450},
{C_text("f_510:profiler_2escm"),(void*)f_510},
{C_text("f_514:profiler_2escm"),(void*)f_514},
{C_text("f_519:profiler_2escm"),(void*)f_519},
{C_text("f_523:profiler_2escm"),(void*)f_523},
{C_text("f_533:profiler_2escm"),(void*)f_533},
{C_text("f_543:profiler_2escm"),(void*)f_543},
{C_text("f_546:profiler_2escm"),(void*)f_546},
{C_text("f_549:profiler_2escm"),(void*)f_549},
{C_text("f_552:profiler_2escm"),(void*)f_552},
{C_text("f_555:profiler_2escm"),(void*)f_555},
{C_text("f_558:profiler_2escm"),(void*)f_558},
{C_text("f_561:profiler_2escm"),(void*)f_561},
{C_text("f_564:profiler_2escm"),(void*)f_564},
{C_text("f_596:profiler_2escm"),(void*)f_596},
{C_text("f_606:profiler_2escm"),(void*)f_606},
{C_text("f_623:profiler_2escm"),(void*)f_623},
{C_text("toplevel:profiler_2escm"),(void*)C_profiler_toplevel},
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
S|applied compiler syntax:
S|  scheme#for-each		1
o|eliminated procedure checks: 14 
o|specializations:
o|  1 (scheme#current-output-port)
o|  1 (##sys#debug-mode?)
o|  1 (scheme#string-append string string)
o|  1 (scheme#number->string fixnum)
(o e)|safe calls: 64 
(o e)|assignments to immediate values: 1 
o|substituted constant variable: a370 
o|inlining procedure: "(profiler.scm:101) cpu-ms" 
o|inlining procedure: k434 
o|inlining procedure: k434 
o|inlining procedure: k470 
o|inlining procedure: "(profiler.scm:116) cpu-ms" 
o|inlining procedure: k470 
o|inlining procedure: k535 
o|inlining procedure: k535 
o|inlining procedure: k598 
o|inlining procedure: k598 
o|propagated global variable: g158161 ##sys#profile-vector-list 
o|contracted procedure: "(profiler.scm:131) empty-file?" 
o|propagated global variable: p9194 ##sys#standard-output 
o|inlining procedure: k628 
o|inlining procedure: k628 
o|replaced variables: 73 
o|removed binding forms: 36 
o|removed side-effect free assignment to unused variable: cpu-ms 
o|substituted constant variable: r435636 
o|substituted constant variable: r435636 
o|inlining procedure: k434 
o|contracted procedure: "(profiler.scm:134) g152160" 
o|substituted constant variable: r629648 
o|substituted constant variable: r629648 
o|substituted constant variable: r629650 
o|substituted constant variable: r629650 
o|replaced variables: 3 
o|removed binding forms: 62 
o|inlining procedure: k430 
o|substituted constant variable: r435652 
o|replaced variables: 5 
o|removed binding forms: 11 
o|contracted procedure: k495 
o|contracted procedure: k618 
o|simplifications: ((let . 1)) 
o|removed binding forms: 6 
o|simplifications: ((if . 1) (let . 1) (##core#call . 55)) 
o|  call simplifications:
o|    scheme#pair?
o|    ##sys#size
o|    chicken.fixnum#fx>=
o|    scheme#write-char	6
o|    chicken.fixnum#fx-
o|    scheme#-
o|    scheme#+
o|    ##sys#slot	10
o|    scheme#not
o|    scheme#eq?	4
o|    chicken.fixnum#fx+	11
o|    ##sys#setislot	5
o|    ##sys#setslot	3
o|    scheme#string?
o|    scheme#apply	3
o|    chicken.fixnum#fx*	4
o|    scheme#cons
o|contracted procedure: k323 
o|contracted procedure: k327 
o|contracted procedure: k364 
o|contracted procedure: k383 
o|contracted procedure: k392 
o|contracted procedure: k395 
o|contracted procedure: k398 
o|contracted procedure: k401 
o|contracted procedure: k404 
o|contracted procedure: k407 
o|contracted procedure: k420 
o|contracted procedure: k423 
o|contracted procedure: k437 
o|contracted procedure: k443 
o|contracted procedure: k434 
o|contracted procedure: k452 
o|contracted procedure: k455 
o|contracted procedure: k458 
o|contracted procedure: k461 
o|contracted procedure: k506 
o|contracted procedure: k464 
o|contracted procedure: k467 
o|contracted procedure: k473 
o|contracted procedure: k476 
o|contracted procedure: k502 
o|contracted procedure: k487 
o|contracted procedure: k499 
o|contracted procedure: k491 
o|contracted procedure: k483 
o|contracted procedure: k601 
o|contracted procedure: k611 
o|contracted procedure: k615 
o|contracted procedure: k526 
o|contracted procedure: k538 
o|contracted procedure: k569 
o|contracted procedure: k577 
o|contracted procedure: k573 
o|contracted procedure: k585 
o|contracted procedure: k581 
o|contracted procedure: k589 
o|simplifications: ((if . 1) (let . 13)) 
o|removed binding forms: 40 
o|inlining procedure: k413 
o|inlining procedure: k413 
o|removed binding forms: 2 
o|customizable procedures: (doloop164165 for-each-loop151176 k410) 
o|shared closure containers: 3 
o|shared closure users: 7 
o|calls to known targets: 10 
o|fast box initializations: 2 
o|fast global references: 5 
o|fast global assignments: 4 
*/
/* end of file */
