/* Generated from read-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: read-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file read-syntax.c -emit-import-library chicken.read-syntax
   unit: read-syntax
   uses: internal library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[32];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,16),40,102,95,51,54,50,32,99,104,114,32,112,114,111,99,41};
static C_char li1[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,114,101,97,100,45,115,121,110,116,97,120,35,115,121,110,116,97,120,45,115,101,116,116,101,114,32,108,111,99,32,115,108,111,116,32,119,114,97,112,41,0,0,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,49,51,57,32,103,49,53,49,41,0,0,0,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,10),40,99,111,112,121,32,108,115,116,41,0,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,114,101,97,100,45,115,121,110,116,97,120,35,99,111,112,121,45,114,101,97,100,45,116,97,98,108,101,32,114,116,41};
static C_char li5[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,114,101,97,100,45,115,121,110,116,97,120,35,100,101,102,105,110,101,45,114,101,97,100,101,114,45,99,116,111,114,32,115,112,101,99,32,112,114,111,99,41,0,0,0,0,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,5),40,101,114,114,41,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,117,115,101,114,45,114,101,97,100,45,104,111,111,107,32,99,104,97,114,32,112,111,114,116,41};
static C_char li8[] C_aligned={C_lihdr(0,0,18),40,102,95,54,49,53,32,95,32,112,111,114,116,32,110,117,109,41,0,0,0,0,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,11),40,97,54,49,50,32,112,114,111,99,41,0,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,14),40,102,95,54,50,54,32,95,32,112,111,114,116,41,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,11),40,97,54,50,51,32,112,114,111,99,41,0,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,14),40,102,95,54,51,55,32,95,32,112,111,114,116,41,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,11),40,97,54,51,52,32,112,114,111,99,41,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_334)
static void C_ccall f_334(C_word c,C_word *av) C_noret;
C_noret_decl(f_337)
static void C_ccall f_337(C_word c,C_word *av) C_noret;
C_noret_decl(f_360)
static void f_360(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_362)
static void C_ccall f_362(C_word c,C_word *av) C_noret;
C_noret_decl(f_375)
static void C_ccall f_375(C_word c,C_word *av) C_noret;
C_noret_decl(f_387)
static void f_387(C_word t0,C_word t1) C_noret;
C_noret_decl(f_411)
static void C_ccall f_411(C_word c,C_word *av) C_noret;
C_noret_decl(f_415)
static void C_ccall f_415(C_word c,C_word *av) C_noret;
C_noret_decl(f_423)
static void C_ccall f_423(C_word c,C_word *av) C_noret;
C_noret_decl(f_427)
static void C_ccall f_427(C_word c,C_word *av) C_noret;
C_noret_decl(f_431)
static void C_ccall f_431(C_word c,C_word *av) C_noret;
C_noret_decl(f_433)
static void C_ccall f_433(C_word c,C_word *av) C_noret;
C_noret_decl(f_436)
static void f_436(C_word t0,C_word t1) C_noret;
C_noret_decl(f_459)
static void f_459(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_501)
static void C_ccall f_501(C_word c,C_word *av) C_noret;
C_noret_decl(f_505)
static void C_ccall f_505(C_word c,C_word *av) C_noret;
C_noret_decl(f_509)
static void C_ccall f_509(C_word c,C_word *av) C_noret;
C_noret_decl(f_525)
static void C_ccall f_525(C_word c,C_word *av) C_noret;
C_noret_decl(f_527)
static void C_ccall f_527(C_word c,C_word *av) C_noret;
C_noret_decl(f_536)
static void C_ccall f_536(C_word c,C_word *av) C_noret;
C_noret_decl(f_546)
static void C_ccall f_546(C_word c,C_word *av) C_noret;
C_noret_decl(f_549)
static void C_ccall f_549(C_word c,C_word *av) C_noret;
C_noret_decl(f_550)
static void f_550(C_word t0,C_word t1) C_noret;
C_noret_decl(f_581)
static void C_ccall f_581(C_word c,C_word *av) C_noret;
C_noret_decl(f_611)
static void C_ccall f_611(C_word c,C_word *av) C_noret;
C_noret_decl(f_613)
static void C_ccall f_613(C_word c,C_word *av) C_noret;
C_noret_decl(f_615)
static void C_ccall f_615(C_word c,C_word *av) C_noret;
C_noret_decl(f_619)
static void C_ccall f_619(C_word c,C_word *av) C_noret;
C_noret_decl(f_624)
static void C_ccall f_624(C_word c,C_word *av) C_noret;
C_noret_decl(f_626)
static void C_ccall f_626(C_word c,C_word *av) C_noret;
C_noret_decl(f_630)
static void C_ccall f_630(C_word c,C_word *av) C_noret;
C_noret_decl(f_635)
static void C_ccall f_635(C_word c,C_word *av) C_noret;
C_noret_decl(f_637)
static void C_ccall f_637(C_word c,C_word *av) C_noret;
C_noret_decl(f_641)
static void C_ccall f_641(C_word c,C_word *av) C_noret;
C_noret_decl(C_read_2dsyntax_toplevel)
C_extern void C_ccall C_read_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_360)
static void C_ccall trf_360(C_word c,C_word *av) C_noret;
static void C_ccall trf_360(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_360(t0,t1,t2,t3);}

C_noret_decl(trf_387)
static void C_ccall trf_387(C_word c,C_word *av) C_noret;
static void C_ccall trf_387(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_387(t0,t1);}

C_noret_decl(trf_436)
static void C_ccall trf_436(C_word c,C_word *av) C_noret;
static void C_ccall trf_436(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_436(t0,t1);}

C_noret_decl(trf_459)
static void C_ccall trf_459(C_word c,C_word *av) C_noret;
static void C_ccall trf_459(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_459(t0,t1,t2);}

C_noret_decl(trf_550)
static void C_ccall trf_550(C_word c,C_word *av) C_noret;
static void C_ccall trf_550(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_550(t0,t1);}

/* k332 */
static void C_ccall f_334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_334,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_337,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k335 in k332 */
static void C_ccall f_337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_337,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.read-syntax#current-read-table ...) */,C_fast_retrieve(lf[3]));
t3=C_mutate(&lf[4] /* (set! chicken.read-syntax#syntax-setter ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_360,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_423,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_635,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:64: syntax-setter */
f_360(t4,lf[31],C_fix(1),t5);}

/* chicken.read-syntax#syntax-setter in k335 in k332 */
static void f_360(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_360,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_362,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_362 in chicken.read-syntax#syntax-setter in k335 in k332 */
static void C_ccall f_362(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_362,c,av);}
a=C_alloc(10);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_i_symbolp(t2))){
t5=((C_word*)t4)[1];
t6=C_i_assq(t2,C_fast_retrieve(lf[5]));
if(C_truep(t6)){
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_i_setslot(t6,C_fix(1),t5);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_a_i_cons(&a,2,t2,t5);
t8=C_a_i_cons(&a,2,t7,C_fast_retrieve(lf[5]));
t9=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#read-marks ...) */,t8);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_375,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* read-syntax.scm:51: current-read-table */
t6=*((C_word*)lf[2]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k373 */
static void C_ccall f_375(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_375,c,av);}
a=C_alloc(13);
t2=C_i_check_char_2(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fix(C_character_code(((C_word*)t0)[2]));
t4=C_slot(t1,((C_word*)t0)[4]);
t5=C_i_assq(((C_word*)t0)[2],t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_387,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_411,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:56: ##sys#check-closure */
t8=C_fast_retrieve(lf[6]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t7=t6;
f_387(t7,C_SCHEME_UNDEFINED);}}

/* k385 in k373 */
static void f_387(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,1)))){
C_save_and_reclaim_args((void *)trf_387,2,t0,t1);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)((C_word*)t0)[4])[1]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t3=C_slot(((C_word*)t0)[6],((C_word*)t0)[7]);
t4=C_a_i_cons(&a,2,t2,t3);
t5=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[7],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k409 in k373 */
static void C_ccall f_411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_411,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* read-syntax.scm:57: wrap */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k413 in k409 in k373 */
static void C_ccall f_415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_415,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_387(t3,t2);}

/* k421 in k335 in k332 */
static void C_ccall f_423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_423,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[7]+1 /* (set! chicken.read-syntax#set-read-syntax! ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_427,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_624,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:72: syntax-setter */
f_360(t3,lf[30],C_fix(2),t4);}

/* k425 in k421 in k335 in k332 */
static void C_ccall f_427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_427,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[8]+1 /* (set! chicken.read-syntax#set-sharp-read-syntax! ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_431,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_613,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:80: syntax-setter */
f_360(t3,lf[29],C_fix(3),t4);}

/* k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_431,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[9]+1 /* (set! chicken.read-syntax#set-parameterized-read-syntax! ...) */,t1);
t3=C_mutate((C_word*)lf[10]+1 /* (set! chicken.read-syntax#copy-read-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_433,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_525,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:102: scheme#make-vector */
t5=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fix(301);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.read-syntax#copy-read-table in k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_433(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_433,c,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_436,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
t4=C_i_check_structure_2(t2,lf[12],lf[13]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_501,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* read-syntax.scm:95: copy */
f_436(t5,C_slot(t2,C_fix(1)));}

/* copy in chicken.read-syntax#copy-read-table in k429 in k425 in k421 in k335 in k332 */
static void f_436(C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_436,2,t1,t2);}
a=C_alloc(13);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(t2,lf[11]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_459,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_459(t11,t1,t2);}

/* map-loop139 in copy in chicken.read-syntax#copy-read-table in k429 in k425 in k421 in k335 in k332 */
static void f_459(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_459,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_u_i_cdr(t3);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k499 in chicken.read-syntax#copy-read-table in k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_501,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_505,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:96: copy */
f_436(t3,C_slot(((C_word*)t0)[5],C_fix(2)));}

/* k503 in k499 in chicken.read-syntax#copy-read-table in k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_505,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_509,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:97: copy */
f_436(t3,C_slot(((C_word*)t2)[5],C_fix(3)));}

/* k507 in k503 in k499 in chicken.read-syntax#copy-read-table in k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_509,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_record4(&a,4,lf[12],((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k523 in k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_525(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_525,c,av);}
a=C_alloc(10);
t2=C_mutate(&lf[14] /* (set! chicken.read-syntax#sharp-comma-reader-ctors ...) */,t1);
t3=C_mutate((C_word*)lf[15]+1 /* (set! chicken.read-syntax#define-reader-ctor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_527,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t4=C_fast_retrieve(lf[18]);
t5=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_536,a[2]=t4,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_611,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:128: chicken.platform#register-feature! */
t7=C_fast_retrieve(lf[25]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[26];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* chicken.read-syntax#define-reader-ctor in k523 in k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_527,c,av);}
t4=C_i_check_symbol_2(t2,lf[16]);
/* read-syntax.scm:106: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[17]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[14],C_text("chicken.read-syntax#sharp-comma-reader-ctors"));
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* ##sys#user-read-hook in k523 in k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_536,c,av);}
a=C_alloc(4);
if(C_truep(C_i_char_equalp(t2,C_make_character(44)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_546,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* ##sys#read-char/port */
t5=C_fast_retrieve(lf[24]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* read-syntax.scm:126: old */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k544 in ##sys#user-read-hook in k523 in k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_546,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_549,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* read-syntax.scm:115: read */
t3=*((C_word*)lf[23]+1);{
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

/* k547 in k544 in ##sys#user-read-hook in k523 in k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_549(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_549,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_550,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
t4=C_i_nullp(t1);
t5=(C_truep(t4)?t4:C_i_not(C_i_listp(t1)));
if(C_truep(t5)){
/* read-syntax.scm:118: err */
t6=t3;
f_550(t6,((C_word*)t2)[3]);}
else{
t6=C_slot(t1,C_fix(0));
t7=C_i_symbolp(t6);
if(C_truep(C_i_not(t7))){
/* read-syntax.scm:121: err */
t8=t3;
f_550(t8,((C_word*)t2)[3]);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_581,a[2]=((C_word*)t2)[3],a[3]=t1,a[4]=((C_word*)t2)[2],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* read-syntax.scm:122: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t8;
av2[2]=C_retrieve2(lf[14],C_text("chicken.read-syntax#sharp-comma-reader-ctors"));
av2[3]=t6;
tp(4,av2);}}}}

/* err in k547 in k544 in ##sys#user-read-hook in k523 in k429 in k425 in k421 in k335 in k332 */
static void f_550(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_550,2,t0,t1);}
/* read-syntax.scm:116: ##sys#read-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word av2[5];
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[20];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k579 in k547 in k544 in ##sys#user-read-hook in k523 in k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_581,c,av);}
if(C_truep(t1)){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_slot(((C_word*)t0)[3],C_fix(1));
C_apply(4,av2);}}
else{
/* read-syntax.scm:125: ##sys#read-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[21];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}}

/* k609 in k523 in k429 in k425 in k421 in k335 in k332 */
static void C_ccall f_611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_611,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a612 in k425 in k421 in k335 in k332 */
static void C_ccall f_613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_613,c,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_615,a[2]=t2,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_615 in a612 in k425 in k421 in k335 in k332 */
static void C_ccall f_615(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_615,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_619,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* read-syntax.scm:84: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}

/* k617 */
static void C_ccall f_619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_619,c,av);}
/* read-syntax.scm:85: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* a623 in k421 in k335 in k332 */
static void C_ccall f_624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_624,c,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_626,a[2]=t2,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_626 in a623 in k421 in k335 in k332 */
static void C_ccall f_626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_626,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_630,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:76: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k628 */
static void C_ccall f_630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_630,c,av);}
/* read-syntax.scm:77: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a634 in k335 in k332 */
static void C_ccall f_635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_635,c,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_637,a[2]=t2,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_637 in a634 in k335 in k332 */
static void C_ccall f_637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_637,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_641,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* read-syntax.scm:68: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k639 */
static void C_ccall f_641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_641,c,av);}
/* read-syntax.scm:69: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_read_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("read-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_read_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(196))){
C_save(t1);
C_rereclaim2(196*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,32);
lf[0]=C_h_intern(&lf[0],11, C_text("read-syntax"));
lf[1]=C_h_intern(&lf[1],20, C_text("chicken.read-syntax#"));
lf[2]=C_h_intern(&lf[2],38, C_text("chicken.read-syntax#current-read-table"));
lf[3]=C_h_intern(&lf[3],24, C_text("##sys#current-read-table"));
lf[5]=C_h_intern(&lf[5],16, C_text("##sys#read-marks"));
lf[6]=C_h_intern(&lf[6],19, C_text("##sys#check-closure"));
lf[7]=C_h_intern(&lf[7],36, C_text("chicken.read-syntax#set-read-syntax!"));
lf[8]=C_h_intern(&lf[8],42, C_text("chicken.read-syntax#set-sharp-read-syntax!"));
lf[9]=C_h_intern(&lf[9],50, C_text("chicken.read-syntax#set-parameterized-read-syntax!"));
lf[10]=C_h_intern(&lf[10],35, C_text("chicken.read-syntax#copy-read-table"));
lf[11]=C_h_intern(&lf[11],3, C_text("map"));
lf[12]=C_h_intern(&lf[12],10, C_text("read-table"));
lf[13]=C_h_intern(&lf[13],15, C_text("copy-read-table"));
lf[15]=C_h_intern(&lf[15],38, C_text("chicken.read-syntax#define-reader-ctor"));
lf[16]=C_h_intern(&lf[16],18, C_text("define-reader-ctor"));
lf[17]=C_h_intern(&lf[17],32, C_text("chicken.internal#hash-table-set!"));
lf[18]=C_h_intern(&lf[18],20, C_text("##sys#user-read-hook"));
lf[19]=C_h_intern(&lf[19],16, C_text("##sys#read-error"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\151\156\166\141\154\151\144\040\163\150\141\162\160\055\143\157\155\155\141\040\145\170\164\145\162\156\141\154\040\146\157\162\155\000"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\165\156\144\145\146\151\156\145\144\040\163\150\141\162\160\055\143\157\155\155\141\040\143\157\156\163\164\162\165\143\164\157\162\000"));
lf[22]=C_h_intern(&lf[22],31, C_text("chicken.internal#hash-table-ref"));
lf[23]=C_h_intern(&lf[23],11, C_text("scheme#read"));
lf[24]=C_h_intern(&lf[24],20, C_text("##sys#read-char/port"));
lf[25]=C_h_intern(&lf[25],34, C_text("chicken.platform#register-feature!"));
lf[26]=C_h_intern(&lf[26],7, C_text("srfi-10"));
lf[27]=C_h_intern(&lf[27],18, C_text("scheme#make-vector"));
lf[28]=C_h_intern(&lf[28],17, C_text("##sys#read-char-0"));
lf[29]=C_h_intern(&lf[29],30, C_text("set-parameterized-read-syntax!"));
lf[30]=C_h_intern(&lf[30],22, C_text("set-sharp-read-syntax!"));
lf[31]=C_h_intern(&lf[31],16, C_text("set-read-syntax!"));
C_register_lf2(lf,32,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_334,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[36] = {
{C_text("f_334:read_2dsyntax_2escm"),(void*)f_334},
{C_text("f_337:read_2dsyntax_2escm"),(void*)f_337},
{C_text("f_360:read_2dsyntax_2escm"),(void*)f_360},
{C_text("f_362:read_2dsyntax_2escm"),(void*)f_362},
{C_text("f_375:read_2dsyntax_2escm"),(void*)f_375},
{C_text("f_387:read_2dsyntax_2escm"),(void*)f_387},
{C_text("f_411:read_2dsyntax_2escm"),(void*)f_411},
{C_text("f_415:read_2dsyntax_2escm"),(void*)f_415},
{C_text("f_423:read_2dsyntax_2escm"),(void*)f_423},
{C_text("f_427:read_2dsyntax_2escm"),(void*)f_427},
{C_text("f_431:read_2dsyntax_2escm"),(void*)f_431},
{C_text("f_433:read_2dsyntax_2escm"),(void*)f_433},
{C_text("f_436:read_2dsyntax_2escm"),(void*)f_436},
{C_text("f_459:read_2dsyntax_2escm"),(void*)f_459},
{C_text("f_501:read_2dsyntax_2escm"),(void*)f_501},
{C_text("f_505:read_2dsyntax_2escm"),(void*)f_505},
{C_text("f_509:read_2dsyntax_2escm"),(void*)f_509},
{C_text("f_525:read_2dsyntax_2escm"),(void*)f_525},
{C_text("f_527:read_2dsyntax_2escm"),(void*)f_527},
{C_text("f_536:read_2dsyntax_2escm"),(void*)f_536},
{C_text("f_546:read_2dsyntax_2escm"),(void*)f_546},
{C_text("f_549:read_2dsyntax_2escm"),(void*)f_549},
{C_text("f_550:read_2dsyntax_2escm"),(void*)f_550},
{C_text("f_581:read_2dsyntax_2escm"),(void*)f_581},
{C_text("f_611:read_2dsyntax_2escm"),(void*)f_611},
{C_text("f_613:read_2dsyntax_2escm"),(void*)f_613},
{C_text("f_615:read_2dsyntax_2escm"),(void*)f_615},
{C_text("f_619:read_2dsyntax_2escm"),(void*)f_619},
{C_text("f_624:read_2dsyntax_2escm"),(void*)f_624},
{C_text("f_626:read_2dsyntax_2escm"),(void*)f_626},
{C_text("f_630:read_2dsyntax_2escm"),(void*)f_630},
{C_text("f_635:read_2dsyntax_2escm"),(void*)f_635},
{C_text("f_637:read_2dsyntax_2escm"),(void*)f_637},
{C_text("f_641:read_2dsyntax_2escm"),(void*)f_641},
{C_text("toplevel:read_2dsyntax_2escm"),(void*)C_read_2dsyntax_toplevel},
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
o|hiding unexported module binding: chicken.read-syntax#d 
o|hiding unexported module binding: chicken.read-syntax#define-alias 
o|hiding unexported module binding: chicken.read-syntax#set-read-mark! 
o|hiding unexported module binding: chicken.read-syntax#syntax-setter 
o|hiding unexported module binding: chicken.read-syntax#sharp-comma-reader-ctors 
S|applied compiler syntax:
S|  scheme#map		1
o|eliminated procedure checks: 14 
o|specializations:
o|  1 (scheme#cdr pair)
(o e)|safe calls: 53 
o|safe globals: (chicken.read-syntax#syntax-setter chicken.read-syntax#current-read-table chicken.read-syntax#set-read-mark!) 
o|inlining procedure: k364 
o|contracted procedure: "(read-syntax.scm:50) chicken.read-syntax#set-read-mark!" 
o|inlining procedure: k344 
o|inlining procedure: k344 
o|inlining procedure: k364 
o|inlining procedure: k461 
o|contracted procedure: "(read-syntax.scm:91) g145154" 
o|inlining procedure: k461 
o|inlining procedure: k538 
o|inlining procedure: k570 
o|inlining procedure: k570 
o|inlining procedure: k538 
o|replaced variables: 70 
o|removed binding forms: 32 
o|converted assignments to bindings: (copy135) 
o|simplifications: ((let . 1)) 
o|replaced variables: 8 
o|removed binding forms: 59 
o|removed binding forms: 5 
o|simplifications: ((##core#call . 40)) 
o|  call simplifications:
o|    scheme#char=?
o|    scheme#read-char
o|    scheme#null?
o|    scheme#list?
o|    scheme#not	2
o|    scheme#apply
o|    ##sys#check-symbol
o|    ##sys#check-structure
o|    ##sys#make-structure
o|    ##sys#check-list
o|    scheme#pair?
o|    scheme#car
o|    scheme#symbol?	2
o|    ##sys#check-char
o|    scheme#char->integer
o|    ##sys#slot	10
o|    scheme#assq	2
o|    scheme#cons	7
o|    ##sys#setslot	4
o|contracted procedure: k367 
o|contracted procedure: k341 
o|contracted procedure: k355 
o|contracted procedure: k351 
o|contracted procedure: k376 
o|contracted procedure: k379 
o|contracted procedure: k417 
o|contracted procedure: k382 
o|contracted procedure: k402 
o|contracted procedure: k406 
o|contracted procedure: k398 
o|contracted procedure: k438 
o|contracted procedure: k452 
o|contracted procedure: k464 
o|contracted procedure: k486 
o|contracted procedure: k447 
o|contracted procedure: k482 
o|contracted procedure: k467 
o|contracted procedure: k470 
o|contracted procedure: k478 
o|contracted procedure: k492 
o|contracted procedure: k511 
o|contracted procedure: k515 
o|contracted procedure: k519 
o|contracted procedure: k529 
o|contracted procedure: k541 
o|contracted procedure: k558 
o|contracted procedure: k567 
o|contracted procedure: k596 
o|contracted procedure: k573 
o|contracted procedure: k589 
o|contracted procedure: k603 
o|simplifications: ((if . 1) (let . 10)) 
o|removed binding forms: 32 
o|contracted procedure: k561 
o|removed binding forms: 1 
o|customizable procedures: (chicken.read-syntax#syntax-setter err181 copy135 map-loop139157 k385) 
o|shared closure containers: 2 
o|shared closure users: 2 
o|calls to known targets: 12 
o|identified direct recursive calls: f_459 1 
o|fast box initializations: 1 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_360 
o|dropping unused closure argument: f_436 
*/
/* end of file */
