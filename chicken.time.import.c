/* Generated from chicken.time.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken.time.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.time.import.c
   uses: eval library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[5];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_121)
static void C_ccall f_121(C_word c,C_word *av) C_noret;
C_noret_decl(f_124)
static void C_ccall f_124(C_word c,C_word *av) C_noret;
C_noret_decl(f_127)
static void C_ccall f_127(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_extern void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

/* k119 */
static void C_ccall f_121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_121,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_124,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k122 in k119 */
static void C_ccall f_124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_124,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_127,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.time.import.scm:26: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[0]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[0]+1);
av2[1]=t2;
av2[2]=lf[1];
av2[3]=lf[2];
av2[4]=lf[3];
av2[5]=C_fast_retrieve(lf[4]);
tp(6,av2);}}

/* k125 in k122 in k119 */
static void C_ccall f_127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_127,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

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
if(C_unlikely(!C_demand_2(108))){
C_save(t1);
C_rereclaim2(108*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],26, C_text("##sys#register-core-module"));
lf[1]=C_h_intern(&lf[1],12, C_text("chicken.time"));
lf[2]=C_h_intern(&lf[2],7, C_text("library"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\160\165\055\164\151\155\145\376\001\000\000\025\001\143\150\151\143\153\145\156\056\164\151\155\145\043\143\160\165\055\164\151\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\143\165\162\162\145\156\164\055\155\151\154\154\151\163\145\143\157\156\144\163\376\001\000\000\041\001\143\150\151\143\153\145\156\056\164\151\155\145\043\143\165\162\162\145\156\164\055\155\151\154\154\151\163\145\143\157\156\144\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\143\165\162\162\145\156\164\055\160\162\157\143\145\163\163\055\155\151\154\154\151\163\145\143\157\156\144\163\376\001\000\000\051\001\143\150\151\143\153\145\156\056\164\151\155\145\043\143\165\162\162\145\156\164\055\160\162\157\143\145\163\163\055\155\151\154\154\151\163\145\143\157\156\144\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\143\165\162\162\145\156\164\055\163\145\143\157\156\144\163\376\001\000\000\034\001\143\150\151\143\153\145\156\056\164\151\155\145\043\143\165\162\162\145\156\164\055\163\145\143\157\156\144\163\376\377\016"));
lf[4]=C_h_intern(&lf[4],36, C_text("##sys#chicken.time-macro-environment"));
C_register_lf2(lf,5,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_121,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[5] = {
{C_text("f_121:chicken_2etime_2eimport_2escm"),(void*)f_121},
{C_text("f_124:chicken_2etime_2eimport_2escm"),(void*)f_124},
{C_text("f_127:chicken_2etime_2eimport_2escm"),(void*)f_127},
{C_text("toplevel:chicken_2etime_2eimport_2escm"),(void*)C_toplevel},
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
o|removed binding forms: 3 
*/
/* end of file */
