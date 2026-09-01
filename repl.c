/* Generated from repl.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: repl.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file repl.c -emit-import-library chicken.repl
   unit: repl
   uses: expand eval library
*/
#include "chicken.h"

static C_word code_278() { C_clear_trace_buffer();
; return C_SCHEME_UNDEFINED; }


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[59];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,6),40,97,52,57,57,41,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,114,101,112,108,45,112,114,105,110,116,45,104,111,111,107,32,120,32,112,111,114,116,41,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,114,101,112,108,35,113,117,105,116,45,104,111,111,107,32,114,101,115,117,108,116,41,0};
static C_char li3[] C_aligned={C_lihdr(0,0,26),40,99,104,105,99,107,101,110,46,114,101,112,108,35,113,117,105,116,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,20),40,99,104,105,99,107,101,110,46,114,101,112,108,35,114,101,115,101,116,41,0,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,114,101,97,100,45,112,114,111,109,112,116,45,104,111,111,107,41};
static C_char li6[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,114,101,115,105,122,101,45,116,114,97,99,101,45,98,117,102,102,101,114,32,105,41,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,49,32,103,49,55,56,41,0};
static C_char li8[] C_aligned={C_lihdr(0,0,14),40,119,114,105,116,101,45,101,114,114,32,120,115,41,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,114,101,112,108,35,113,117,105,116,45,104,111,111,107,32,114,101,115,117,108,116,41,0};
static C_char li10[] C_aligned={C_lihdr(0,0,17),40,97,55,51,50,32,109,115,103,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,6),40,97,55,49,50,41,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,6),40,97,56,52,56,41,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,49,32,103,50,48,56,41,0};
static C_char li14[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,57,49,32,103,50,57,56,41,0};
static C_char li15[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,118,97,114,115,32,117,41,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,15),40,97,56,53,52,32,46,32,114,101,115,117,108,116,41,0};
static C_char li17[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,50,41,0};
static C_char li18[] C_aligned={C_lihdr(0,0,9),40,97,49,48,48,54,32,99,41,0,0,0,0,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,6),40,97,56,49,49,41,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,7),40,97,49,48,50,50,41,0};
static C_char li22[] C_aligned={C_lihdr(0,0,8),40,97,55,48,54,32,107,41};
static C_char li23[] C_aligned={C_lihdr(0,0,26),40,99,104,105,99,107,101,110,46,114,101,112,108,35,114,101,112,108,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,7),40,97,49,48,52,51,41,0};
static C_char li25[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word *av) C_noret;
C_noret_decl(f_1007)
static void C_ccall f_1007(C_word c,C_word *av) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word *av) C_noret;
C_noret_decl(f_1023)
static void C_ccall f_1023(C_word c,C_word *av) C_noret;
C_noret_decl(f_1027)
static void C_ccall f_1027(C_word c,C_word *av) C_noret;
C_noret_decl(f_1033)
static void C_ccall f_1033(C_word c,C_word *av) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word *av) C_noret;
C_noret_decl(f_480)
static void C_ccall f_480(C_word c,C_word *av) C_noret;
C_noret_decl(f_483)
static void C_ccall f_483(C_word c,C_word *av) C_noret;
C_noret_decl(f_486)
static void C_ccall f_486(C_word c,C_word *av) C_noret;
C_noret_decl(f_491)
static void C_ccall f_491(C_word c,C_word *av) C_noret;
C_noret_decl(f_495)
static void C_ccall f_495(C_word c,C_word *av) C_noret;
C_noret_decl(f_500)
static void C_ccall f_500(C_word c,C_word *av) C_noret;
C_noret_decl(f_506)
static void C_ccall f_506(C_word c,C_word *av) C_noret;
C_noret_decl(f_512)
static void C_ccall f_512(C_word c,C_word *av) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word *av) C_noret;
C_noret_decl(f_532)
static void C_ccall f_532(C_word c,C_word *av) C_noret;
C_noret_decl(f_539)
static void C_ccall f_539(C_word c,C_word *av) C_noret;
C_noret_decl(f_541)
static void C_ccall f_541(C_word c,C_word *av) C_noret;
C_noret_decl(f_545)
static void C_ccall f_545(C_word c,C_word *av) C_noret;
C_noret_decl(f_552)
static void C_ccall f_552(C_word c,C_word *av) C_noret;
C_noret_decl(f_555)
static void C_ccall f_555(C_word c,C_word *av) C_noret;
C_noret_decl(f_557)
static void C_ccall f_557(C_word c,C_word *av) C_noret;
C_noret_decl(f_563)
static void C_ccall f_563(C_word c,C_word *av) C_noret;
C_noret_decl(f_569)
static void f_569(C_word t0,C_word t1) C_noret;
C_noret_decl(f_583)
static void f_583(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_593)
static void C_ccall f_593(C_word c,C_word *av) C_noret;
C_noret_decl(f_630)
static void C_ccall f_630(C_word c,C_word *av) C_noret;
C_noret_decl(f_643)
static void C_ccall f_643(C_word c,C_word *av) C_noret;
C_noret_decl(f_647)
static void C_ccall f_647(C_word c,C_word *av) C_noret;
C_noret_decl(f_655)
static void f_655(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_665)
static void C_ccall f_665(C_word c,C_word *av) C_noret;
C_noret_decl(f_687)
static void C_ccall f_687(C_word c,C_word *av) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690(C_word c,C_word *av) C_noret;
C_noret_decl(f_692)
static C_word f_692(C_word t0);
C_noret_decl(f_698)
static C_word f_698(C_word t0);
C_noret_decl(f_707)
static void C_ccall f_707(C_word c,C_word *av) C_noret;
C_noret_decl(f_713)
static void C_ccall f_713(C_word c,C_word *av) C_noret;
C_noret_decl(f_718)
static void C_ccall f_718(C_word c,C_word *av) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720(C_word c,C_word *av) C_noret;
C_noret_decl(f_727)
static void C_ccall f_727(C_word c,C_word *av) C_noret;
C_noret_decl(f_733)
static void C_ccall f_733(C_word c,C_word *av) C_noret;
C_noret_decl(f_740)
static void C_ccall f_740(C_word c,C_word *av) C_noret;
C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word *av) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word *av) C_noret;
C_noret_decl(f_750)
static void f_750(C_word t0,C_word t1) C_noret;
C_noret_decl(f_753)
static void C_ccall f_753(C_word c,C_word *av) C_noret;
C_noret_decl(f_756)
static void C_ccall f_756(C_word c,C_word *av) C_noret;
C_noret_decl(f_787)
static void C_ccall f_787(C_word c,C_word *av) C_noret;
C_noret_decl(f_793)
static void C_ccall f_793(C_word c,C_word *av) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word *av) C_noret;
C_noret_decl(f_812)
static void C_ccall f_812(C_word c,C_word *av) C_noret;
C_noret_decl(f_818)
static void f_818(C_word t0,C_word t1) C_noret;
C_noret_decl(f_825)
static void C_ccall f_825(C_word c,C_word *av) C_noret;
C_noret_decl(f_828)
static void C_ccall f_828(C_word c,C_word *av) C_noret;
C_noret_decl(f_834)
static void C_ccall f_834(C_word c,C_word *av) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word *av) C_noret;
C_noret_decl(f_849)
static void C_ccall f_849(C_word c,C_word *av) C_noret;
C_noret_decl(f_855)
static void C_ccall f_855(C_word c,C_word *av) C_noret;
C_noret_decl(f_859)
static void C_ccall f_859(C_word c,C_word *av) C_noret;
C_noret_decl(f_862)
static void C_ccall f_862(C_word c,C_word *av) C_noret;
C_noret_decl(f_873)
static void f_873(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_877)
static void C_ccall f_877(C_word c,C_word *av) C_noret;
C_noret_decl(f_892)
static void C_ccall f_892(C_word c,C_word *av) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word *av) C_noret;
C_noret_decl(f_900)
static void C_ccall f_900(C_word c,C_word *av) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word *av) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word *av) C_noret;
C_noret_decl(f_913)
static void C_ccall f_913(C_word c,C_word *av) C_noret;
C_noret_decl(f_925)
static void C_ccall f_925(C_word c,C_word *av) C_noret;
C_noret_decl(f_930)
static void f_930(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_940)
static void C_ccall f_940(C_word c,C_word *av) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word *av) C_noret;
C_noret_decl(C_repl_toplevel)
C_extern void C_ccall C_repl_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_569)
static void C_ccall trf_569(C_word c,C_word *av) C_noret;
static void C_ccall trf_569(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_569(t0,t1);}

C_noret_decl(trf_583)
static void C_ccall trf_583(C_word c,C_word *av) C_noret;
static void C_ccall trf_583(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_583(t0,t1,t2);}

C_noret_decl(trf_655)
static void C_ccall trf_655(C_word c,C_word *av) C_noret;
static void C_ccall trf_655(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_655(t0,t1,t2);}

C_noret_decl(trf_750)
static void C_ccall trf_750(C_word c,C_word *av) C_noret;
static void C_ccall trf_750(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_750(t0,t1);}

C_noret_decl(trf_818)
static void C_ccall trf_818(C_word c,C_word *av) C_noret;
static void C_ccall trf_818(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_818(t0,t1);}

C_noret_decl(trf_873)
static void C_ccall trf_873(C_word c,C_word *av) C_noret;
static void C_ccall trf_873(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_873(t0,t1,t2,t3);}

C_noret_decl(trf_930)
static void C_ccall trf_930(C_word c,C_word *av) C_noret;
static void C_ccall trf_930(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_930(t0,t1,t2);}

/* k1003 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_1005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1005,c,av);}
t2=C_eqp(C_make_character(10),t1);
if(C_truep(t2)){
/* repl.scm:159: ##sys#read-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[52]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[24]+1);
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_843(2,av2);}}}

/* a1006 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_1007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1007,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1013,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li17),tmp=(C_word)a,a+=5,tmp);
/* repl.scm:149: ##sys#reset-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}

/* a1012 in a1006 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_1013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1013,c,av);}
t2=C_set_block_item(lf[54] /* ##sys#read-error-with-line-number */,0,C_SCHEME_FALSE);
t3=(
/* repl.scm:152: resetports */
  f_698(((C_word*)((C_word*)t0)[2])[1])
);
/* repl.scm:153: c */
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1022 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_1023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1023,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* repl.scm:190: chicken.load#load-verbose */
t3=C_fast_retrieve(lf[39]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1025 in a1022 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_1027(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1027,c,av);}
a=C_alloc(4);
t2=C_mutate(&lf[9] /* (set! chicken.repl#quit-hook ...) */,((C_word*)t0)[2]);
t3=C_mutate((C_word*)lf[25]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)t0)[3]);
t4=C_mutate((C_word*)lf[26]+1 /* (set! ##sys#unbound-in-eval ...) */,((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1033,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* repl.scm:194: ##sys#error-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}

/* k1031 in k1025 in a1022 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_1033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1033,c,av);}
/* repl.scm:195: ##sys#reset-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* a1043 in k484 in k481 in k478 */
static void C_ccall f_1044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1044,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[57];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k478 */
static void C_ccall f_480(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_480,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_483,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k481 in k478 */
static void C_ccall f_483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_483,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_486,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k484 in k481 in k478 */
static void C_ccall f_486(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_486,c,av);}
a=C_alloc(18);
t2=C_set_block_item(lf[2] /* ##sys#repl-print-length-limit */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[3] /* ##sys#repl-read-hook */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[4] /* ##sys#repl-recent-call-chain */,0,C_SCHEME_FALSE);
t5=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#repl-print-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_491,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[9] /* (set! chicken.repl#quit-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_506,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[11]+1 /* (set! chicken.repl#quit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_512,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[12]+1 /* (set! chicken.repl#reset-handler ...) */,C_fast_retrieve(lf[13]));
t9=C_mutate((C_word*)lf[14]+1 /* (set! chicken.repl#reset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_528,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_539,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1044,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* repl.scm:60: scheme#make-parameter */
t12=C_fast_retrieve(lf[58]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* ##sys#repl-print-hook in k484 in k481 in k478 */
static void C_ccall f_491(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_491,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_495,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_500,a[2]=t2,a[3]=t3,a[4]=((C_word)li0),tmp=(C_word)a,a+=5,tmp);
/* repl.scm:50: ##sys#with-print-length-limit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t4;
av2[2]=*((C_word*)lf[2]+1);
av2[3]=t5;
tp(4,av2);}}

/* k493 in ##sys#repl-print-hook in k484 in k481 in k478 */
static void C_ccall f_495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_495,c,av);}
/* repl.scm:51: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a499 in ##sys#repl-print-hook in k484 in k481 in k478 */
static void C_ccall f_500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_500,c,av);}
t2=*((C_word*)lf[7]+1);
/* repl.scm:50: g123 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* chicken.repl#quit-hook in k484 in k481 in k478 */
static void C_ccall f_506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_506,c,av);}
/* repl.scm:53: chicken.base#exit */
t3=C_fast_retrieve(lf[10]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.repl#quit in k484 in k481 in k478 */
static void C_ccall f_512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_512,c,av);}
if(C_truep(C_rest_nullp(c,2))){
/* repl.scm:54: quit-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[9]);
C_word av2[3];
av2[0]=lf[9];
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}
else{
/* repl.scm:54: quit-hook */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[9]);
C_word av2[3];
av2[0]=lf[9];
av2[1]=t1;
av2[2]=C_get_rest_arg(c,2,av,2,t0);
tp(3,av2);}}}

/* chicken.repl#reset in k484 in k481 in k478 */
static void C_ccall f_528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_528,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_532,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:57: reset-handler */
t3=*((C_word*)lf[12]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k530 in chicken.repl#reset in k484 in k481 in k478 */
static void C_ccall f_532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_532,c,av);}
/* repl.scm:57: g141 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k537 in k484 in k481 in k478 */
static void C_ccall f_539(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_539,c,av);}
a=C_alloc(11);
t2=C_mutate((C_word*)lf[15]+1 /* (set! chicken.repl#repl-prompt ...) */,t1);
t3=C_fast_retrieve(lf[15]);
t4=C_mutate((C_word*)lf[16]+1 /* (set! ##sys#read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_541,a[2]=t3,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#resize-trace-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_557,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[20]+1);
t7=C_mutate((C_word*)lf[21]+1 /* (set! chicken.repl#repl ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_563,a[2]=t6,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* ##sys#read-prompt-hook in k537 in k484 in k481 in k478 */
static void C_ccall f_541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_541,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_545,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_552,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:65: repl-prompt */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k543 in ##sys#read-prompt-hook in k537 in k484 in k481 in k478 */
static void C_ccall f_545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_545,c,av);}
/* repl.scm:66: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[17]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[18]+1);
tp(3,av2);}}

/* k550 in ##sys#read-prompt-hook in k537 in k484 in k481 in k478 */
static void C_ccall f_552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_552,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_555,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* repl.scm:65: g146 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k553 in k550 in ##sys#read-prompt-hook in k537 in k484 in k481 in k478 */
static void C_ccall f_555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_555,c,av);}
/* repl.scm:65: ##sys#print */
t2=*((C_word*)lf[7]+1);{
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
av2[4]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* ##sys#resize-trace-buffer in k537 in k484 in k481 in k478 */
static void C_ccall f_557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_557,c,av);}
t3=C_i_check_fixnum(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_resize_trace_buffer(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_563(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_563,c,av);}
a=C_alloc(18);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?((C_word*)t0)[2]:C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_569,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t5=*((C_word*)lf[24]+1);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[18]+1);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[23]+1);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_687,a[2]=t6,a[3]=t8,a[4]=t10,a[5]=t4,a[6]=t3,a[7]=C_SCHEME_UNDEFINED,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* repl.scm:94: ##sys#error-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2=av;
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t11;
tp(2,av2);}}

/* write-err in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void f_569(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_569,2,t1,t2);}
a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[22]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_583,a[2]=t5,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_583(t7,t1,t2);}

/* for-each-loop171 in write-err in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void f_583(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_583,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_593,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[5]+1);
/* repl.scm:79: g187 */
t6=t5;{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[23]+1);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k591 in for-each-loop171 in write-err in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_593,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_583(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k628 in k857 in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_630,c,av);}
a=C_alloc(6);
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_643,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_647,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:88: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t3;
av2[2]=C_i_length(((C_word*)t0)[2]);
tp(3,av2);}}
else{
/* repl.scm:188: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_818(t2,((C_word*)t0)[5]);}}

/* k641 in k628 in k857 in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_643,c,av);}
/* repl.scm:87: ##sys#print */
t2=*((C_word*)lf[7]+1);{
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
av2[4]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k645 in k628 in k857 in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_647,c,av);}
/* repl.scm:88: string-append */
t2=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
av2[3]=t1;
av2[4]=lf[44];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* for-each-loop201 in k857 in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void f_655(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_655,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_665,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[5]+1);
/* repl.scm:85: g217 */
t6=t5;{
C_word av2[4];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[18]+1);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k663 in for-each-loop201 in k857 in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_665,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_655(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_687,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+7,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_690,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:95: ##sys#reset-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
tp(2,av2);}}

/* k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_690(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_690,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
t3=C_fast_retrieve(lf[25]);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=lf[9];
t7=C_fast_retrieve(lf[26]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_692,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp));
t13=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_698,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp));
t14=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_707,a[2]=t5,a[3]=t11,a[4]=((C_word*)t2)[5],a[5]=t9,a[6]=((C_word*)t2)[6],a[7]=t6,a[8]=t3,a[9]=t7,a[10]=t1,a[11]=((C_word*)t2)[7],a[12]=((C_word)li22),tmp=(C_word)a,a+=13,tmp);
/* repl.scm:111: call-with-current-continuation */
t15=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t15;
av2[1]=((C_word*)t2)[8];
av2[2]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}

/* saveports in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static C_word f_692(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[24]+1));
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[18]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[23]+1));
return(t3);}

/* resetports in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static C_word f_698(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[2])[1]);
t2=C_mutate((C_word*)lf[18]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate((C_word*)lf[23]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[4])[1]);
return(t3);}

/* a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_707(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_707,c,av);}
a=C_alloc(22);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_713,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li11),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_812,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1023,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[2],a[8]=((C_word)li21),tmp=(C_word)a,a+=9,tmp);
/* repl.scm:113: ##sys#dynamic-wind */
t6=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_713,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_718,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* repl.scm:115: chicken.load#load-verbose */
t3=C_fast_retrieve(lf[39]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_718,c,av);}
a=C_alloc(9);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(&lf[9] /* (set! chicken.repl#quit-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_720,a[2]=((C_word*)t0)[3],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_727,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* repl.scm:117: chicken.load#load-verbose */
t5=C_fast_retrieve(lf[39]);{
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

/* chicken.repl#quit-hook in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_720,c,av);}
/* repl.scm:116: k */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k725 in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_727,c,av);}
a=C_alloc(5);
t2=C_set_block_item(lf[25] /* ##sys#notices-enabled */,0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
/* repl.scm:119: ##sys#error-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
tp(3,av2);}}

/* a732 in k725 in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,4)))){
C_save_and_reclaim((void*)f_733,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(
/* repl.scm:121: resetports */
  f_698(((C_word*)((C_word*)t0)[2])[1])
);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_740,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* repl.scm:122: ##sys#print */
t6=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[37];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[23]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k738 in a732 in k725 in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_740,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_807,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* repl.scm:124: ##sys#print */
t4=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[36];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[23]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_743(2,av2);}}}

/* k741 in k738 in a732 in k725 in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_743(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_743,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_746,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_pairp(((C_word*)t0)[3]);
t4=(C_truep(t3)?C_i_nullp(C_u_i_cdr(((C_word*)t0)[3])):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_787,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* repl.scm:128: ##sys#print */
t6=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[35];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[23]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_793,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* repl.scm:131: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t5;
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[23]+1);
tp(4,av2);}}}

/* k744 in k741 in k738 in a732 in k725 in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_746(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_746,c,av);}
a=C_alloc(3);
t2=C_fast_retrieve(lf[27]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fast_retrieve(lf[27]))){
if(C_truep(C_i_structurep(C_fast_retrieve(lf[27]),lf[33]))){
t4=C_slot(C_fast_retrieve(lf[27]),C_fix(2));
t5=C_i_member(lf[34],t4);
t6=t3;
f_750(t6,(C_truep(t5)?C_i_cadr(t5):C_SCHEME_FALSE));}
else{
t4=t3;
f_750(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_750(t4,C_SCHEME_FALSE);}}

/* k748 in k744 in k741 in k738 in a732 in k725 in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void f_750(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_750,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_753,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
f_753(2,av2);}}
else{
/* repl.scm:138: chicken.base#get-call-chain */
t3=C_fast_retrieve(lf[31]);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(0);
av2[3]=C_fast_retrieve(lf[32]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k751 in k748 in k744 in k741 in k738 in a732 in k725 in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_753,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_756,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:139: ##sys#really-print-call-chain */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
av2[2]=*((C_word*)lf[23]+1);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[30];
tp(5,av2);}}

/* k754 in k751 in k748 in k744 in k741 in k738 in a732 in k725 in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_756,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#repl-recent-call-chain ...) */,((C_word*)t2)[2]);
/* repl.scm:143: chicken.base#flush-output */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t2)[3];
av2[2]=*((C_word*)lf[23]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k785 in k741 in k738 in a732 in k725 in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_787,c,av);}
/* repl.scm:129: write-err */
f_569(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k791 in k741 in k738 in a732 in k725 in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_793,c,av);}
/* repl.scm:132: write-err */
f_569(((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k805 in k738 in a732 in k725 in k716 in a712 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_807,c,av);}
/* repl.scm:125: ##sys#print */
t2=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[23]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_812(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_812,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_818,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li19),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_818(t5,t1);}

/* loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void f_818(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_818,2,t0,t1);}
a=C_alloc(9);
t2=(
/* repl.scm:146: saveports */
  f_692(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_825,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1007,a[2]=((C_word*)t0)[5],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
/* repl.scm:147: call-with-current-continuation */
t5=*((C_word*)lf[55]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_825,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_828,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:154: ##sys#read-prompt-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2=av;
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
tp(2,av2);}}

/* k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_828(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_828,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=*((C_word*)lf[3]+1);
t4=(C_truep(t3)?t3:C_fast_retrieve(lf[40]));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_834,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:156: g273 */
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}

/* k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_834(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_834,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
if(C_truep(C_eofp(t1))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_843,a[2]=((C_word*)t2)[3],a[3]=t1,a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[2],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1005,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:158: ##sys#peek-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[53]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[53]+1);
av2[1]=t4;
av2[2]=*((C_word*)lf[24]+1);
tp(3,av2);}}}

/* k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_843(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_843,c,av);}
a=C_alloc(9);
t2=code_278();
t3=C_set_block_item(lf[26] /* ##sys#unbound-in-eval */,0,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_855,a[2]=((C_word*)t0)[4],a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
/* repl.scm:162: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a848 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_849,c,av);}
/* repl.scm:162: evaluator */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +11,c,4)))){
C_save_and_reclaim((void*)f_855,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+11);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_859,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_fast_retrieve(lf[46]))?C_i_pairp(C_fast_retrieve(lf[26])):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_873,a[2]=t6,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_873(t8,t3,C_fast_retrieve(lf[26]),C_SCHEME_END_OF_LIST);}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_859(2,av2);}}}

/* k857 in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_859(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_859,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
/* repl.scm:83: ##sys#print */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[41];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[18]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=C_i_car(((C_word*)t0)[4]);
t4=C_eqp(C_SCHEME_UNDEFINED,t3);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_630,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_655,a[2]=t7,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_655(t9,t5,((C_word*)t0)[4]);}
else{
/* repl.scm:188: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_818(t5,((C_word*)t0)[3]);}}}

/* k860 in k857 in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_862,c,av);}
/* repl.scm:188: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_818(t2,((C_word*)t0)[3]);}

/* loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void f_873(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_873,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_877,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_pairp(t3))){
if(C_truep(C_fast_retrieve(lf[25]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_892,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* repl.scm:169: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word av2[3];
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t5;
av2[2]=lf[50];
tp(3,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fix(9);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_fix(9);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t3);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_960,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=t6;
f_960(2,av2);}}
else{
t8=C_u_i_car(t2);
t9=C_u_i_car(t8);
t10=C_u_i_namespaced_symbolp(t9);
if(C_truep(t10)){
t11=t7;{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
f_960(2,av2);}}
else{
t11=C_u_i_car(t2);
/* repl.scm:184: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[51]);
C_word av2[3];
av2[0]=*((C_word*)lf[51]+1);
av2[1]=t7;
av2[2]=C_u_i_car(t11);
tp(3,av2);}}}}}

/* k875 in loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_877,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(9);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k890 in loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_892(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_892,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_925,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_930,a[2]=t4,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_930(t6,t2,((C_word*)t0)[3]);}

/* k895 in for-each-loop291 in k890 in loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_897,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_900,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* repl.scm:174: ##sys#print */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[3]);
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[23]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k898 in k895 in for-each-loop291 in k890 in loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_900(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_900,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_903,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_u_i_cdr(((C_word*)t2)[3]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_910,a[2]=t3,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
/* repl.scm:176: ##sys#print */
t5=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[47];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[23]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
/* repl.scm:179: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[23]+1);
tp(4,av2);}}}

/* k901 in k898 in k895 in for-each-loop291 in k890 in loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_903,c,av);}
/* repl.scm:179: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=*((C_word*)lf[23]+1);
tp(4,av2);}}

/* k908 in k898 in k895 in for-each-loop291 in k890 in loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_910,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* repl.scm:177: ##sys#print */
t3=*((C_word*)lf[7]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_cdr(((C_word*)t0)[3]);
av2[3]=C_SCHEME_TRUE;
av2[4]=*((C_word*)lf[23]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k911 in k908 in k898 in k895 in for-each-loop291 in k890 in loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 in ... */
static void C_ccall f_913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_913,c,av);}
/* repl.scm:178: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[6]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(41);
av2[3]=*((C_word*)lf[23]+1);
tp(4,av2);}}

/* k923 in k890 in loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_925,c,av);}
/* repl.scm:181: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[17]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[23]+1);
tp(3,av2);}}

/* for-each-loop291 in k890 in loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void f_930(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_930,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_940,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_897,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* repl.scm:173: ##sys#print */
t6=*((C_word*)lf[7]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[48];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[23]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k938 in for-each-loop291 in k890 in loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_940,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_930(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k958 in loop in a854 in k841 in k832 in k826 in k823 in loop in a811 in a706 in k688 in k685 in chicken.repl#repl in k537 in k484 in k481 in k478 */
static void C_ccall f_960(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_960,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
/* repl.scm:185: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_873(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[5]);}
else{
t2=C_u_i_cdr(((C_word*)t0)[4]);
t3=C_u_i_car(((C_word*)t0)[4]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[5]);
/* repl.scm:186: loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_873(t5,((C_word*)t0)[3],t2,t4);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_repl_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("repl"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_repl_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(339))){
C_save(t1);
C_rereclaim2(339*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,59);
lf[0]=C_h_intern(&lf[0],4, C_text("repl"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.repl#"));
lf[2]=C_h_intern(&lf[2],29, C_text("##sys#repl-print-length-limit"));
lf[3]=C_h_intern(&lf[3],20, C_text("##sys#repl-read-hook"));
lf[4]=C_h_intern(&lf[4],28, C_text("##sys#repl-recent-call-chain"));
lf[5]=C_h_intern(&lf[5],21, C_text("##sys#repl-print-hook"));
lf[6]=C_h_intern(&lf[6],18, C_text("##sys#write-char-0"));
lf[7]=C_h_intern(&lf[7],11, C_text("##sys#print"));
lf[8]=C_h_intern(&lf[8],29, C_text("##sys#with-print-length-limit"));
lf[10]=C_h_intern(&lf[10],17, C_text("chicken.base#exit"));
lf[11]=C_h_intern(&lf[11],17, C_text("chicken.repl#quit"));
lf[12]=C_h_intern(&lf[12],26, C_text("chicken.repl#reset-handler"));
lf[13]=C_h_intern(&lf[13],19, C_text("##sys#reset-handler"));
lf[14]=C_h_intern(&lf[14],18, C_text("chicken.repl#reset"));
lf[15]=C_h_intern(&lf[15],24, C_text("chicken.repl#repl-prompt"));
lf[16]=C_h_intern(&lf[16],22, C_text("##sys#read-prompt-hook"));
lf[17]=C_h_intern(&lf[17],18, C_text("##sys#flush-output"));
lf[18]=C_h_intern(&lf[18],21, C_text("##sys#standard-output"));
lf[19]=C_h_intern(&lf[19],25, C_text("##sys#resize-trace-buffer"));
lf[20]=C_h_intern(&lf[20],11, C_text("scheme#eval"));
lf[21]=C_h_intern(&lf[21],17, C_text("chicken.repl#repl"));
lf[22]=C_h_intern(&lf[22],8, C_text("for-each"));
lf[23]=C_h_intern(&lf[23],20, C_text("##sys#standard-error"));
lf[24]=C_h_intern(&lf[24],20, C_text("##sys#standard-input"));
lf[25]=C_h_intern(&lf[25],21, C_text("##sys#notices-enabled"));
lf[26]=C_h_intern(&lf[26],21, C_text("##sys#unbound-in-eval"));
lf[27]=C_h_intern(&lf[27],20, C_text("##sys#last-exception"));
lf[28]=C_h_intern(&lf[28],25, C_text("chicken.base#flush-output"));
lf[29]=C_h_intern(&lf[29],29, C_text("##sys#really-print-call-chain"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\012\011\103\141\154\154\040\150\151\163\164\157\162\171\072\012\000"));
lf[31]=C_h_intern(&lf[31],27, C_text("chicken.base#get-call-chain"));
lf[32]=C_h_intern(&lf[32],20, C_text("##sys#current-thread"));
lf[33]=C_h_intern(&lf[33],9, C_text("condition"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001\145\170\156\376\001\000\000\012\001\143\141\154\154\055\143\150\141\151\156"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\072\040\000"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\072\040\000"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\012\105\162\162\157\162\000"));
lf[38]=C_h_intern(&lf[38],19, C_text("##sys#error-handler"));
lf[39]=C_h_intern(&lf[39],25, C_text("chicken.load#load-verbose"));
lf[40]=C_h_intern(&lf[40],36, C_text("chicken.syntax#read-with-source-info"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\073\040\156\157\040\166\141\154\165\145\163\012\000"));
lf[42]=C_h_intern(&lf[42],20, C_text("scheme#string-append"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\073\040\000"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\040\166\141\154\165\145\163\012\000"));
lf[45]=C_h_intern(&lf[45],20, C_text("##sys#number->string"));
lf[46]=C_h_intern(&lf[46],22, C_text("##sys#warnings-enabled"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\040\050\151\156\040\000"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\040\040\000"));
lf[49]=C_h_intern(&lf[49],12, C_text("##sys#notice"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\076\164\150\145\040\146\157\154\154\157\167\151\156\147\040\164\157\160\154\145\166\145\154\040\166\141\162\151\141\142\154\145\163\040\141\162\145\040\162\145\146\145\162\145\156\143\145\144\040\142\165\164\040\165\156\142\157\165\156\144\072\012\000"));
lf[51]=C_h_intern(&lf[51],34, C_text("##sys#symbol-has-toplevel-binding?"));
lf[52]=C_h_intern(&lf[52],17, C_text("##sys#read-char-0"));
lf[53]=C_h_intern(&lf[53],17, C_text("##sys#peek-char-0"));
lf[54]=C_h_intern(&lf[54],33, C_text("##sys#read-error-with-line-number"));
lf[55]=C_h_intern(&lf[55],37, C_text("scheme#call-with-current-continuation"));
lf[56]=C_h_intern(&lf[56],18, C_text("##sys#dynamic-wind"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\043\073\076\040\000"));
lf[58]=C_h_intern(&lf[58],21, C_text("scheme#make-parameter"));
C_register_lf2(lf,59,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_480,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[75] = {
{C_text("f_1005:repl_2escm"),(void*)f_1005},
{C_text("f_1007:repl_2escm"),(void*)f_1007},
{C_text("f_1013:repl_2escm"),(void*)f_1013},
{C_text("f_1023:repl_2escm"),(void*)f_1023},
{C_text("f_1027:repl_2escm"),(void*)f_1027},
{C_text("f_1033:repl_2escm"),(void*)f_1033},
{C_text("f_1044:repl_2escm"),(void*)f_1044},
{C_text("f_480:repl_2escm"),(void*)f_480},
{C_text("f_483:repl_2escm"),(void*)f_483},
{C_text("f_486:repl_2escm"),(void*)f_486},
{C_text("f_491:repl_2escm"),(void*)f_491},
{C_text("f_495:repl_2escm"),(void*)f_495},
{C_text("f_500:repl_2escm"),(void*)f_500},
{C_text("f_506:repl_2escm"),(void*)f_506},
{C_text("f_512:repl_2escm"),(void*)f_512},
{C_text("f_528:repl_2escm"),(void*)f_528},
{C_text("f_532:repl_2escm"),(void*)f_532},
{C_text("f_539:repl_2escm"),(void*)f_539},
{C_text("f_541:repl_2escm"),(void*)f_541},
{C_text("f_545:repl_2escm"),(void*)f_545},
{C_text("f_552:repl_2escm"),(void*)f_552},
{C_text("f_555:repl_2escm"),(void*)f_555},
{C_text("f_557:repl_2escm"),(void*)f_557},
{C_text("f_563:repl_2escm"),(void*)f_563},
{C_text("f_569:repl_2escm"),(void*)f_569},
{C_text("f_583:repl_2escm"),(void*)f_583},
{C_text("f_593:repl_2escm"),(void*)f_593},
{C_text("f_630:repl_2escm"),(void*)f_630},
{C_text("f_643:repl_2escm"),(void*)f_643},
{C_text("f_647:repl_2escm"),(void*)f_647},
{C_text("f_655:repl_2escm"),(void*)f_655},
{C_text("f_665:repl_2escm"),(void*)f_665},
{C_text("f_687:repl_2escm"),(void*)f_687},
{C_text("f_690:repl_2escm"),(void*)f_690},
{C_text("f_692:repl_2escm"),(void*)f_692},
{C_text("f_698:repl_2escm"),(void*)f_698},
{C_text("f_707:repl_2escm"),(void*)f_707},
{C_text("f_713:repl_2escm"),(void*)f_713},
{C_text("f_718:repl_2escm"),(void*)f_718},
{C_text("f_720:repl_2escm"),(void*)f_720},
{C_text("f_727:repl_2escm"),(void*)f_727},
{C_text("f_733:repl_2escm"),(void*)f_733},
{C_text("f_740:repl_2escm"),(void*)f_740},
{C_text("f_743:repl_2escm"),(void*)f_743},
{C_text("f_746:repl_2escm"),(void*)f_746},
{C_text("f_750:repl_2escm"),(void*)f_750},
{C_text("f_753:repl_2escm"),(void*)f_753},
{C_text("f_756:repl_2escm"),(void*)f_756},
{C_text("f_787:repl_2escm"),(void*)f_787},
{C_text("f_793:repl_2escm"),(void*)f_793},
{C_text("f_807:repl_2escm"),(void*)f_807},
{C_text("f_812:repl_2escm"),(void*)f_812},
{C_text("f_818:repl_2escm"),(void*)f_818},
{C_text("f_825:repl_2escm"),(void*)f_825},
{C_text("f_828:repl_2escm"),(void*)f_828},
{C_text("f_834:repl_2escm"),(void*)f_834},
{C_text("f_843:repl_2escm"),(void*)f_843},
{C_text("f_849:repl_2escm"),(void*)f_849},
{C_text("f_855:repl_2escm"),(void*)f_855},
{C_text("f_859:repl_2escm"),(void*)f_859},
{C_text("f_862:repl_2escm"),(void*)f_862},
{C_text("f_873:repl_2escm"),(void*)f_873},
{C_text("f_877:repl_2escm"),(void*)f_877},
{C_text("f_892:repl_2escm"),(void*)f_892},
{C_text("f_897:repl_2escm"),(void*)f_897},
{C_text("f_900:repl_2escm"),(void*)f_900},
{C_text("f_903:repl_2escm"),(void*)f_903},
{C_text("f_910:repl_2escm"),(void*)f_910},
{C_text("f_913:repl_2escm"),(void*)f_913},
{C_text("f_925:repl_2escm"),(void*)f_925},
{C_text("f_930:repl_2escm"),(void*)f_930},
{C_text("f_940:repl_2escm"),(void*)f_940},
{C_text("f_960:repl_2escm"),(void*)f_960},
{C_text("toplevel:repl_2escm"),(void*)C_repl_toplevel},
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
o|hiding unexported module binding: chicken.repl#d 
o|hiding unexported module binding: chicken.repl#define-alias 
o|hiding unexported module binding: chicken.repl#quit-hook 
S|applied compiler syntax:
S|  scheme#for-each		3
o|eliminated procedure checks: 21 
o|specializations:
o|  1 (scheme#car pair)
o|  2 (scheme#caar (pair pair *))
o|  6 (scheme#cdr pair)
o|  2 (##sys#check-list (or pair list) *)
(o e)|safe calls: 53 
(o e)|assignments to immediate values: 1 
o|safe globals: (chicken.repl#reset chicken.repl#reset-handler chicken.repl#quit chicken.repl#quit-hook ##sys#repl-print-hook ##sys#repl-recent-call-chain ##sys#repl-read-hook ##sys#repl-print-length-limit) 
o|propagated global variable: g123124 ##sys#print 
o|inlining procedure: k514 
o|inlining procedure: k514 
o|inlining procedure: k585 
o|contracted procedure: "(repl.scm:79) g172179" 
o|inlining procedure: k585 
o|inlining procedure: k608 
o|inlining procedure: k608 
o|inlining procedure: k631 
o|inlining procedure: k631 
o|inlining procedure: k657 
o|contracted procedure: "(repl.scm:85) g202209" 
o|inlining procedure: k657 
o|propagated global variable: lexn254 ##sys#last-exception 
o|inlining procedure: k766 
o|inlining procedure: k766 
o|propagated global variable: lexn254 ##sys#last-exception 
o|inlining procedure: k835 
o|inlining procedure: k835 
o|inlining procedure: k875 
o|inlining procedure: k887 
o|inlining procedure: k932 
o|contracted procedure: "(repl.scm:171) g292299" 
o|inlining procedure: k901 
o|inlining procedure: k901 
o|inlining procedure: k932 
o|inlining procedure: k887 
o|inlining procedure: k875 
o|inlining procedure: k980 
o|inlining procedure: k980 
o|replaced variables: 107 
o|removed binding forms: 83 
o|substituted constant variable: r5151046 
o|substituted constant variable: r5151046 
o|substituted constant variable: r7671065 
o|contracted procedure: "(repl.scm:187) write-results167" 
o|inlining procedure: k875 
o|inlining procedure: k875 
o|converted assignments to bindings: (write-err166) 
o|simplifications: ((let . 1)) 
o|replaced variables: 12 
o|removed binding forms: 104 
o|replaced variables: 9 
o|removed binding forms: 16 
o|inlining procedure: k860 
o|inlining procedure: k860 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|removed binding forms: 1 
o|simplifications: ((let . 5) (if . 5) (##core#call . 37)) 
o|  call simplifications:
o|    scheme#eof-object?
o|    ##sys#call-with-values
o|    scheme#caar
o|    scheme#memq
o|    scheme#cons
o|    scheme#eq?	2
o|    scheme#not
o|    scheme#length
o|    ##sys#structure?
o|    scheme#member
o|    scheme#cadr
o|    ##sys#check-list
o|    scheme#pair?	7
o|    ##sys#slot	7
o|    ##sys#check-fixnum
o|    scheme#null?	5
o|    scheme#car	4
o|contracted procedure: k520 
o|contracted procedure: k514 
o|contracted procedure: k559 
o|contracted procedure: k1037 
o|contracted procedure: k565 
o|contracted procedure: k576 
o|contracted procedure: k588 
o|contracted procedure: k598 
o|contracted procedure: k602 
o|contracted procedure: k763 
o|contracted procedure: k779 
o|propagated global variable: lexn254 ##sys#last-exception 
o|contracted procedure: k769 
o|contracted procedure: k797 
o|contracted procedure: k782 
o|contracted procedure: k829 
o|contracted procedure: k838 
o|contracted procedure: k611 
o|contracted procedure: k682 
o|contracted procedure: k678 
o|contracted procedure: k620 
o|contracted procedure: k634 
o|contracted procedure: k649 
o|contracted procedure: k660 
o|contracted procedure: k670 
o|contracted procedure: k674 
o|contracted procedure: k866 
o|contracted procedure: k878 
o|contracted procedure: k884 
o|contracted procedure: k935 
o|contracted procedure: k945 
o|contracted procedure: k949 
o|contracted procedure: k920 
o|contracted procedure: k990 
o|contracted procedure: k955 
o|contracted procedure: k972 
o|contracted procedure: k996 
o|simplifications: ((let . 17)) 
o|removed binding forms: 36 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest132133 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest132133 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest159160 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest159160 0 
o|direct leaf routine/allocation: saveports234 0 
o|direct leaf routine/allocation: resetports235 0 
o|contracted procedure: "(repl.scm:121) k735" 
o|contracted procedure: "(repl.scm:146) k820" 
o|contracted procedure: "(repl.scm:152) k1016" 
o|removed binding forms: 3 
o|customizable procedures: (loop282 for-each-loop291307 for-each-loop201219 loop268 write-err166 k748 for-each-loop171189) 
o|shared closure containers: 4 
o|shared closure users: 5 
o|calls to known targets: 24 
o|unused rest argument: rest132133 f_512 
o|unused rest argument: rest159160 f_563 
o|fast box initializations: 7 
o|fast global references: 3 
o|fast global assignments: 3 
o|dropping unused closure argument: f_569 
*/
/* end of file */
