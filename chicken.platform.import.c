/* Generated from chicken.platform.import.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken.platform.import.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -feature chicken-compile-shared -dynamic -no-trace -output-file chicken.platform.import.c
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
static C_char li0[] C_aligned={C_lihdr(0,0,6),40,97,49,50,56,41,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_121)
static void C_ccall f_121(C_word c,C_word *av) C_noret;
C_noret_decl(f_124)
static void C_ccall f_124(C_word c,C_word *av) C_noret;
C_noret_decl(f_127)
static void C_ccall f_127(C_word c,C_word *av) C_noret;
C_noret_decl(f_129)
static void C_ccall f_129(C_word c,C_word *av) C_noret;
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
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_124,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_127,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_129,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken.platform.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[4]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t2;
av2[2]=t3;
tp(3,av2);}}

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

/* a128 in k122 in k119 */
static void C_ccall f_129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_129,c,av);}
/* chicken.platform.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[0]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[0]+1);
av2[1]=t1;
av2[2]=lf[1];
av2[3]=lf[2];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[3];
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
if(C_unlikely(!C_demand_2(348))){
C_save(t1);
C_rereclaim2(348*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],30, C_text("##sys#register-compiled-module"));
lf[1]=C_h_intern(&lf[1],16, C_text("chicken.platform"));
lf[2]=C_h_intern(&lf[2],7, C_text("library"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\142\165\151\154\144\055\160\154\141\164\146\157\162\155\376\001\000\000\037\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\142\165\151\154\144\055\160\154\141\164\146\157\162\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\143\150\151\143\153\145\156\055\166\145\162\163\151\157\156\376\001\000\000\040\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\143\150\151\143\153\145\156\055\166\145\162\163\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\143\150\151\143\153\145\156\055\150\157\155\145\376\001\000\000\035\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\143\150\151\143\153\145\156\055\150\157\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\146\145\141\164\165\162\145\077\376\001\000\000\031\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\146\145\141\164\165\162\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\155\141\143\150\151\156\145\055\142\171\164\145\055\157\162\144\145\162\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\155\141\143\150\151\156\145\055\142\171\164\145\055\157\162\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\155\141\143\150\151\156\145\055\164\171\160\145\376\001\000\000\035\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\155\141\143\150\151\156\145\055\164\171\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\162\145\160\157\163\151\164\157\162\171\055\160\141\164\150\376\001\000\000\040\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\162\145\160\157\163\151\164\157\162\171\055\160\141\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\151\156\163\164\141\154\154\141\164\151\157\156\055\162\145\160\157\163\151\164\157\162\171\376\001\000\000\050\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\151\156\163\164\141\154\154\141\164\151\157\156\055\162\145\160\157\163\151\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\162\145\147\151\163\164\145\162\055\146\145\141\164\165\162\145\041\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\162\145\147\151\163\164\145\162\055\146\145\141\164\165\162\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\165\156\162\145\147\151\163\164\145\162\055\146\145\141\164\165\162\145\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\165\156\162\145\147\151\163\164\145\162\055\146\145\141\164\165\162\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\151\156\143\154\165\144\145\055\160\141\164\150\376\001\000\000\035\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\151\156\143\154\165\144\145\055\160\141\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\157\146\164\167\141\162\145\055\164\171\160\145\376\001\000\000\036\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\163\157\146\164\167\141\162\145\055\164\171\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\157\146\164\167\141\162\145\055\166\145\162\163\151\157\156\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\163\157\146\164\167\141\162\145\055\166\145\162\163\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\162\145\164\165\162\156\055\164\157\055\150\157\163\164\376\001\000\000\037\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\162\145\164\165\162\156\055\164\157\055\150\157\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\163\171\163\164\145\155\055\143\157\156\146\151\147\055\144\151\162\145\143\164\157\162\171\376\001\000\000\050\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\163\171\163\164\145\155\055\143\157\156\146\151\147\055\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\163\171\163\164\145\155\055\143\141\143\150\145\055\144\151\162\145\143\164\157\162\171\376\001\000\000\047\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\163\171\163\164\145\155\055\143\141\143\150\145\055\144\151\162\145\143\164\157\162\171\376\377\016"));
lf[4]=C_h_intern(&lf[4],22, C_text("##sys#with-environment"));
C_register_lf2(lf,5,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_121,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[6] = {
{C_text("f_121:chicken_2eplatform_2eimport_2escm"),(void*)f_121},
{C_text("f_124:chicken_2eplatform_2eimport_2escm"),(void*)f_124},
{C_text("f_127:chicken_2eplatform_2eimport_2escm"),(void*)f_127},
{C_text("f_129:chicken_2eplatform_2eimport_2escm"),(void*)f_129},
{C_text("toplevel:chicken_2eplatform_2eimport_2escm"),(void*)C_toplevel},
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
(o e)|safe calls: 4 
o|replaced variables: 5 
o|removed binding forms: 3 
o|removed binding forms: 5 
o|simplifications: ((##core#call . 4)) 
o|  call simplifications:
o|    scheme#list	4
o|contracted procedure: k135 
o|contracted procedure: k139 
o|contracted procedure: k143 
o|contracted procedure: k147 
o|removed binding forms: 4 
o|substituted constant variable: r136 
o|substituted constant variable: r140 
o|substituted constant variable: r144 
o|substituted constant variable: r148 
o|removed binding forms: 4 
*/
/* end of file */
