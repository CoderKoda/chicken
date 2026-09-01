/* Generated from internal.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: internal.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file internal.c -emit-import-library chicken.internal
   unit: internal
   uses: library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[44];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,53,56,50,32,105,41,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,115,116,114,105,110,103,45,62,99,45,105,100,101,110,116,105,102,105,101,114,32,115,116,114,41,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,118,97,108,105,100,45,108,105,98,114,97,114,121,45,115,112,101,99,105,102,105,101,114,63,32,120,41,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,6),40,102,97,105,108,41,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,24),40,108,105,98,114,97,114,121,45,112,97,114,116,45,62,115,116,114,105,110,103,32,120,41};
static C_char li6[] C_aligned={C_lihdr(0,0,19),40,100,111,108,111,111,112,54,50,52,32,108,115,116,32,115,116,114,41,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,108,105,98,114,97,114,121,45,105,100,32,108,105,98,41,0,0,0,0,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,109,111,100,117,108,101,45,114,101,113,117,105,114,101,109,101,110,116,32,105,100,41};
static C_char li9[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,98,115,32,115,101,101,110,32,119,97,114,110,101,100,41,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,64),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,99,104,101,99,107,45,102,111,114,45,109,117,108,116,105,112,108,101,45,98,105,110,100,105,110,103,115,32,98,105,110,100,105,110,103,115,32,102,111,114,109,32,108,111,99,41};
static C_char li11[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,109,101,41,0,0,0,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,109,97,99,114,111,45,115,117,98,115,101,116,32,109,101,48,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,11),40,103,54,56,55,32,115,100,101,102,41,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,54,56,54,32,103,54,57,51,41,0};
static C_char li15[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,102,105,120,117,112,45,109,97,99,114,111,45,101,110,118,105,114,111,110,109,101,110,116,32,115,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,115,121,109,98,111,108,32,110,41};
static C_char li17[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,109,97,107,101,45,104,97,115,104,45,116,97,98,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,114,101,102,32,104,116,32,107,101,121,41};
static C_char li20[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,98,117,99,107,101,116,41,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,115,101,116,33,32,104,116,32,107,101,121,32,118,97,108,41,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,117,112,100,97,116,101,33,32,104,116,32,107,101,121,32,117,112,100,116,102,117,110,99,32,118,97,108,117,102,117,110,99,41,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,13),40,103,55,53,55,32,98,117,99,107,101,116,41,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,55,53,54,32,103,55,54,51,41,0};
static C_char li25[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,55,53,49,32,105,41,0,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,102,111,114,45,101,97,99,104,32,112,32,104,116,41,0,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,108,101,110,32,98,107,116,32,115,105,122,101,41,0,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,105,110,116,101,114,110,97,108,35,104,97,115,104,45,116,97,98,108,101,45,115,105,122,101,32,104,116,41,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1033)
static void C_ccall f_1033(C_word c,C_word *av) C_noret;
C_noret_decl(f_1410)
static C_word f_1410(C_word t0);
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word *av) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word *av) C_noret;
C_noret_decl(f_2325)
static void f_2325(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2341)
static void C_ccall f_2341(C_word c,C_word *av) C_noret;
C_noret_decl(f_2351)
static void f_2351(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word *av) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word *av) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word *av) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word *av) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word *av) C_noret;
C_noret_decl(f_2443)
static void f_2443(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2486)
static void f_2486(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2538)
static void f_2538(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word *av) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word *av) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word *av) C_noret;
C_noret_decl(f_2566)
static void f_2566(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word *av) C_noret;
C_noret_decl(f_2591)
static void C_ccall f_2591(C_word c,C_word *av) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word *av) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word *av) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word *av) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word *av) C_noret;
C_noret_decl(f_2621)
static void f_2621(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2634)
static void f_2634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word *av) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word *av) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word *av) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word *av) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2705)
static void f_2705(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2726)
static void C_ccall f_2726(C_word c,C_word *av) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word *av) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word *av) C_noret;
C_noret_decl(f_2747)
static void f_2747(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2763)
static void C_ccall f_2763(C_word c,C_word *av) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word *av) C_noret;
C_noret_decl(f_2788)
static void f_2788(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word *av) C_noret;
C_noret_decl(f_2820)
static C_word f_2820(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word *av) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word *av) C_noret;
C_noret_decl(f_2867)
static C_word f_2867(C_word t0,C_word t1);
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word *av) C_noret;
C_noret_decl(f_2928)
static void f_2928(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word *av) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word *av) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word *av) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word *av) C_noret;
C_noret_decl(f_3006)
static void f_3006(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3014)
static void f_3014(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word *av) C_noret;
C_noret_decl(f_3044)
static void f_3044(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word *av) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word *av) C_noret;
C_noret_decl(f_3077)
static void f_3077(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2325)
static void C_ccall trf_2325(C_word c,C_word *av) C_noret;
static void C_ccall trf_2325(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2325(t0,t1,t2);}

C_noret_decl(trf_2351)
static void C_ccall trf_2351(C_word c,C_word *av) C_noret;
static void C_ccall trf_2351(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2351(t0,t1);}

C_noret_decl(trf_2443)
static void C_ccall trf_2443(C_word c,C_word *av) C_noret;
static void C_ccall trf_2443(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2443(t0,t1);}

C_noret_decl(trf_2486)
static void C_ccall trf_2486(C_word c,C_word *av) C_noret;
static void C_ccall trf_2486(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2486(t0,t1,t2);}

C_noret_decl(trf_2538)
static void C_ccall trf_2538(C_word c,C_word *av) C_noret;
static void C_ccall trf_2538(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2538(t0,t1);}

C_noret_decl(trf_2566)
static void C_ccall trf_2566(C_word c,C_word *av) C_noret;
static void C_ccall trf_2566(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2566(t0,t1,t2,t3);}

C_noret_decl(trf_2621)
static void C_ccall trf_2621(C_word c,C_word *av) C_noret;
static void C_ccall trf_2621(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2621(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2634)
static void C_ccall trf_2634(C_word c,C_word *av) C_noret;
static void C_ccall trf_2634(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2634(t0,t1);}

C_noret_decl(trf_2705)
static void C_ccall trf_2705(C_word c,C_word *av) C_noret;
static void C_ccall trf_2705(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2705(t0,t1,t2);}

C_noret_decl(trf_2747)
static void C_ccall trf_2747(C_word c,C_word *av) C_noret;
static void C_ccall trf_2747(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2747(t0,t1,t2);}

C_noret_decl(trf_2788)
static void C_ccall trf_2788(C_word c,C_word *av) C_noret;
static void C_ccall trf_2788(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2788(t0,t1,t2);}

C_noret_decl(trf_2928)
static void C_ccall trf_2928(C_word c,C_word *av) C_noret;
static void C_ccall trf_2928(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2928(t0,t1,t2);}

C_noret_decl(trf_3006)
static void C_ccall trf_3006(C_word c,C_word *av) C_noret;
static void C_ccall trf_3006(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3006(t0,t1,t2);}

C_noret_decl(trf_3014)
static void C_ccall trf_3014(C_word c,C_word *av) C_noret;
static void C_ccall trf_3014(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3014(t0,t1,t2);}

C_noret_decl(trf_3044)
static void C_ccall trf_3044(C_word c,C_word *av) C_noret;
static void C_ccall trf_3044(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3044(t0,t1,t2);}

C_noret_decl(trf_3077)
static void C_ccall trf_3077(C_word c,C_word *av) C_noret;
static void C_ccall trf_3077(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3077(t0,t1,t2,t3,t4);}

/* k1031 */
static void C_ccall f_1033(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(49,c,6)))){
C_save_and_reclaim((void *)f_1033,c,av);}
a=C_alloc(49);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.internal#string->c-identifier ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2313,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[8]+1 /* (set! chicken.internal#valid-library-specifier? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2400,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[9]+1 /* (set! chicken.internal#library-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2440,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[20]+1 /* (set! chicken.internal#module-requirement ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2601,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[22]+1 /* (set! chicken.internal#check-for-multiple-bindings ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2615,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[26]+1 /* (set! chicken.internal#macro-subset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2689,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[27]+1 /* (set! chicken.internal#fixup-macro-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2739,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_rand(C_fix(65536));
t14=C_mutate(&lf[31] /* (set! chicken.internal#hash-symbol ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2820,a[2]=t10,a[3]=t12,a[4]=t13,a[5]=((C_word)li16),tmp=(C_word)a,a+=6,tmp));
t15=C_mutate((C_word*)lf[32]+1 /* (set! chicken.internal#make-hash-table ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2842,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[34]+1 /* (set! chicken.internal#hash-table-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2857,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[35]+1 /* (set! chicken.internal#hash-table-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2916,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[36]+1 /* (set! chicken.internal#hash-table-update! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2980,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[37]+1 /* (set! chicken.internal#hash-table-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3000,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[38]+1 /* (set! chicken.internal#hash-table-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3067,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[40]+1 /* (set! chicken.internal#default-imports ...) */,lf[41]);
t22=C_mutate((C_word*)lf[42]+1 /* (set! chicken.internal#default-syntax-imports ...) */,lf[43]);
t23=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t23;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* loop in chicken.internal#valid-library-specifier? in k1031 */
static C_word f_1410(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
t4=C_i_symbolp(t3);
if(C_truep(t4)){
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}
else{
t5=C_fixnump(t3);
if(C_truep(C_i_not(t5))){
return(C_SCHEME_FALSE);}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}}}

/* chicken.internal#string->c-identifier in k1031 */
static void C_ccall f_2313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2313,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2317,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:69: scheme#open-output-string */
t4=C_fast_retrieve(lf[7]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2315 in chicken.internal#string->c-identifier in k1031 */
static void C_ccall f_2317(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2317,c,av);}
a=C_alloc(9);
t2=C_i_string_length(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2325,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word)li0),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2325(t6,((C_word*)t0)[3],C_fix(0));}

/* doloop582 in k2315 in chicken.internal#string->c-identifier in k1031 */
static void f_2325(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_2325,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* internal.scm:72: scheme#get-output-string */
t3=C_fast_retrieve(lf[3]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=C_i_string_ref(((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2341,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2351,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_char_alphabeticp(t3);
if(C_truep(C_i_not(t6))){
t7=C_u_i_char_numericp(t3);
t8=C_i_not(t7);
t9=t5;
f_2351(t9,(C_truep(t8)?t8:C_eqp(t2,C_fix(0))));}
else{
t7=t5;
f_2351(t7,C_SCHEME_FALSE);}}}

/* k2339 in doloop582 in k2315 in chicken.internal#string->c-identifier in k1031 */
static void C_ccall f_2341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2341,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2325(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k2349 in doloop582 in k2315 in chicken.internal#string->c-identifier in k1031 */
static void f_2351(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2351,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_fix(C_character_code(((C_word*)t0)[2]));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2357,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#write-char/port */
t4=C_fast_retrieve(lf[6]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_make_character(95);
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* ##sys#write-char/port */
t2=C_fast_retrieve(lf[6]);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2355 in k2349 in doloop582 in k2315 in chicken.internal#string->c-identifier in k1031 */
static void C_ccall f_2357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2357,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2360,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],C_fix(16)))){
/* ##sys#write-char/port */
t3=C_fast_retrieve(lf[6]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_make_character(48);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2360(2,av2);}}}

/* k2358 in k2355 in k2349 in doloop582 in k2315 in chicken.internal#string->c-identifier in k1031 */
static void C_ccall f_2360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2360,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2367,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#fixnum->string */
t4=C_fast_retrieve(lf[5]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2365 in k2358 in k2355 in k2349 in doloop582 in k2315 in chicken.internal#string->c-identifier in k1031 */
static void C_ccall f_2367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2367,c,av);}
/* internal.scm:79: scheme#display */
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

/* chicken.internal#valid-library-specifier? in k1031 */
static void C_ccall f_2400(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2400,c,av);}
a=C_alloc(3);
t3=C_i_symbolp(t2);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(t2))){
t4=C_i_nullp(t2);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1410,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(
  f_1410(t2)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* chicken.internal#library-id in k1031 */
static void C_ccall f_2440(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2440,c,av);}
a=C_alloc(17);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2443,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2486,a[2]=t4,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
if(C_truep(C_i_symbolp(t2))){
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t2))){
/* internal.scm:105: fail */
t9=((C_word*)t4)[1];
f_2443(t9,t1);}
else{
t9=C_i_listp(t2);
if(C_truep(C_i_not(t9))){
/* internal.scm:106: fail */
t10=((C_word*)t4)[1];
f_2443(t10,t1);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2538,a[2]=t1,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t11=C_i_cdr(t2);
if(C_truep(C_i_pairp(t11))){
t12=C_i_cddr(t2);
if(C_truep(C_i_nullp(t12))){
t13=C_eqp(lf[19],C_u_i_car(t2));
if(C_truep(t13)){
t14=C_u_i_cdr(t2);
t15=t10;
f_2538(t15,C_fixnump(C_u_i_car(t14)));}
else{
t14=t10;
f_2538(t14,C_SCHEME_FALSE);}}
else{
t13=t10;
f_2538(t13,C_SCHEME_FALSE);}}
else{
t12=t10;
f_2538(t12,C_SCHEME_FALSE);}}}}}

/* fail in chicken.internal#library-id in k1031 */
static void f_2443(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2443,2,t0,t1);}
/* internal.scm:93: ##sys#error */
t2=*((C_word*)lf[10]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[11];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* library-part->string in chicken.internal#library-id in k1031 */
static void f_2486(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_2486,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
/* internal.scm:100: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
if(C_truep(C_fixnump(t2))){
/* internal.scm:101: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
/* internal.scm:102: fail */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2443(t3,t1);}}}

/* k2536 in chicken.internal#library-id in k1031 */
static void f_2538(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2538,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2549,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* internal.scm:109: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
tp(3,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2564,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:112: library-part->string */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2486(t4,t3,C_u_i_car(((C_word*)t0)[3]));}}

/* k2543 in k2536 in chicken.internal#library-id in k1031 */
static void C_ccall f_2545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2545,c,av);}
/* internal.scm:108: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k2547 in k2536 in chicken.internal#library-id in k1031 */
static void C_ccall f_2549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2549,c,av);}
/* internal.scm:109: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[16];
av2[3]=t1;
tp(4,av2);}}

/* k2562 in k2536 in chicken.internal#library-id in k1031 */
static void C_ccall f_2564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2564,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2566,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2566(t5,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* doloop624 in k2562 in k2536 in chicken.internal#library-id in k1031 */
static void f_2566(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2566,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
/* internal.scm:115: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word av2[3];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2591,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:113: library-part->string */
t7=((C_word*)((C_word*)t0)[3])[1];
f_2486(t7,t6,C_u_i_car(t2));}}

/* k2585 in doloop624 in k2562 in k2536 in chicken.internal#library-id in k1031 */
static void C_ccall f_2587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2587,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2566(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2589 in doloop624 in k2562 in k2536 in chicken.internal#library-id in k1031 */
static void C_ccall f_2591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2591,c,av);}
/* internal.scm:113: scheme#string-append */
t2=*((C_word*)lf[17]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[18];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.internal#module-requirement in k1031 */
static void C_ccall f_2601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2601,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2609,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2613,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* internal.scm:122: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k2607 in chicken.internal#module-requirement in k1031 */
static void C_ccall f_2609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2609,c,av);}
/* internal.scm:121: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k2611 in chicken.internal#module-requirement in k1031 */
static void C_ccall f_2613(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2613,c,av);}
/* internal.scm:122: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[21];
tp(4,av2);}}

/* chicken.internal#check-for-multiple-bindings in k1031 */
static void C_ccall f_2615(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2615,c,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2621,a[2]=t6,a[3]=t3,a[4]=t4,a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2621(t8,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in chicken.internal#check-for-multiple-bindings in k1031 */
static void f_2621(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_2621,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_i_nullp(t2);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2634,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t7=C_i_caar(t2);
if(C_truep(C_i_memq(t7,t3))){
t8=C_u_i_car(t2);
t9=t6;
f_2634(t9,C_i_not(C_i_memq(C_u_i_car(t8),t4)));}
else{
t8=t6;
f_2634(t8,C_SCHEME_FALSE);}}}

/* k2632 in loop in chicken.internal#check-for-multiple-bindings in k1031 */
static void f_2634(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_2634,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2654,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* internal.scm:134: scheme#string-append */
t4=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[24];
av2[3]=((C_word*)t0)[8];
av2[4]=lf[25];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_caar(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[6]);
/* internal.scm:138: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2621(t5,((C_word*)t0)[5],t2,t4,((C_word*)t0)[3]);}}

/* k2635 in k2632 in loop in chicken.internal#check-for-multiple-bindings in k1031 */
static void C_ccall f_2637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2637,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_caar(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* internal.scm:137: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2621(t5,((C_word*)t0)[5],t2,((C_word*)t0)[6],t4);}

/* k2652 in k2632 in loop in chicken.internal#check-for-multiple-bindings in k1031 */
static void C_ccall f_2654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2654,c,av);}
t2=C_u_i_car(((C_word*)t0)[2]);
/* internal.scm:133: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_u_i_car(t2);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* chicken.internal#macro-subset in k1031 */
static void C_ccall f_2689(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2689,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2696,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2703,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:143: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2=av;
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t6;
tp(2,av2);}}

/* k2694 in chicken.internal#macro-subset in k1031 */
static void C_ccall f_2696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2696,c,av);}
/* internal.scm:147: fixup-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2701 in chicken.internal#macro-subset in k1031 */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2703,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2705,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2705(t5,((C_word*)t0)[3],t1);}

/* loop in k2701 in chicken.internal#macro-subset in k1031 */
static void f_2705(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2705,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?t3:C_eqp(t2,((C_word*)t0)[2]));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2726,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* internal.scm:146: loop */
t8=t6;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}

/* k2724 in loop in k2701 in chicken.internal#macro-subset in k1031 */
static void C_ccall f_2726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2726,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.internal#fixup-macro-environment in k1031 */
static void C_ccall f_2739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2739,c,av);}
a=C_alloc(4);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2746,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* internal.scm:151: ##sys#append */
t6=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
f_2746(2,av2);}}}

/* k2744 in chicken.internal#fixup-macro-environment in k1031 */
static void C_ccall f_2746(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2746,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2747,a[2]=t1,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[30]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2786,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2788,a[2]=t6,a[3]=t2,a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2788(t8,t4,((C_word*)t0)[2]);}

/* g687 in k2744 in chicken.internal#fixup-macro-environment in k1031 */
static void f_2747(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_2747,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2763,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cadr(t2);
if(C_truep(C_i_nullp(t6))){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_set_car(t4,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_u_i_cdr(t2);
/* internal.scm:159: ##sys#append */
t8=*((C_word*)lf[29]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t5;
av2[2]=C_u_i_car(t7);
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2761 in g687 in k2744 in chicken.internal#fixup-macro-environment in k1031 */
static void C_ccall f_2763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2763,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2784 in k2744 in chicken.internal#fixup-macro-environment in k1031 */
static void C_ccall f_2786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2786,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* for-each-loop686 in k2744 in chicken.internal#fixup-macro-environment in k1031 */
static void f_2788(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2788,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2798,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:152: g687 */
t4=((C_word*)t0)[3];
f_2747(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2796 in for-each-loop686 in k2744 in chicken.internal#fixup-macro-environment in k1031 */
static void C_ccall f_2798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2798,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2788(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.internal#hash-symbol in k1031 */
static C_word f_2820(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;{}
t3=C_eqp(t1,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
return(C_fixnum_modulo(((C_word*)((C_word*)t0)[3])[1],t2));}
else{
t4=C_slot(t1,C_fix(1));
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t6=C_block_size(t4);
t7=C_fixnum_difference(t6,C_fix(1));
t8=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_u_i_bytevector_hash(t4,C_fix(0),t7,((C_word*)t0)[4]));
return(C_fixnum_modulo(((C_word*)((C_word*)t0)[3])[1],t2));}}

/* chicken.internal#make-hash-table in k1031 */
static void C_ccall f_2842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2842,c,av);}
if(C_truep(C_rest_nullp(c,2))){
/* internal.scm:180: scheme#make-vector */
t2=*((C_word*)lf[33]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=C_fix(301);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* internal.scm:180: scheme#make-vector */
t2=*((C_word*)lf[33]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=C_get_rest_arg(c,2,av,2,t0);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* chicken.internal#hash-table-ref in k1031 */
static void C_ccall f_2857(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2857,c,av);}
a=C_alloc(4);
t4=(
/* internal.scm:183: hash-symbol */
  f_2820(lf[31],t3,C_block_size(t2))
);
t5=C_slot(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2867,a[2]=t3,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
  f_2867(t6,t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* loop in chicken.internal#hash-table-ref in k1031 */
static C_word f_2867(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
t2=C_eqp(C_SCHEME_END_OF_LIST,t1);
if(C_truep(C_i_not(t2))){
t3=C_slot(t1,C_fix(0));
t4=C_slot(t3,C_fix(0));
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
return(C_slot(C_slot(t1,C_fix(0)),C_fix(1)));}
else{
t7=C_slot(t1,C_fix(1));
t1=t7;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* chicken.internal#hash-table-set! in k1031 */
static void C_ccall f_2916(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2916,c,av);}
a=C_alloc(11);
t5=(
/* internal.scm:190: hash-symbol */
  f_2820(lf[31],t3,C_block_size(t2))
);
t6=C_slot(t2,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2928,a[2]=t3,a[3]=t4,a[4]=t6,a[5]=t2,a[6]=t5,a[7]=t8,a[8]=((C_word)li20),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_2928(t10,t1,t6);}

/* loop in chicken.internal#hash-table-set! in k1031 */
static void f_2928(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2928,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_eqp(C_SCHEME_END_OF_LIST,t2);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[4]);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[6],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t4,C_fix(0));
t6=C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_setslot(C_slot(t2,C_fix(0)),C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* internal.scm:197: loop */
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}}}

/* chicken.internal#hash-table-update! in k1031 */
static void C_ccall f_2980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2980,c,av);}
a=C_alloc(10);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2988,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2992,a[2]=t4,a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:200: hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[34]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}

/* k2986 in chicken.internal#hash-table-update! in k1031 */
static void C_ccall f_2988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2988,c,av);}
/* internal.scm:200: hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[35]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k2990 in chicken.internal#hash-table-update! in k1031 */
static void C_ccall f_2992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2992,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
/* internal.scm:200: updtfunc */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
/* internal.scm:200: valufunc */
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}}

/* k2993 in k2990 in chicken.internal#hash-table-update! in k1031 */
static void C_ccall f_2995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2995,c,av);}
/* internal.scm:200: updtfunc */
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

/* chicken.internal#hash-table-for-each in k1031 */
static void C_ccall f_3000(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3000,c,av);}
a=C_alloc(9);
t4=C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3006,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=((C_word)li25),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3006(t8,t1,C_fix(0));}

/* doloop751 in chicken.internal#hash-table-for-each in k1031 */
static void f_3006(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3006,3,t0,t1,t2);}
a=C_alloc(16);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[3],a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
t5=C_i_check_list_2(t4,lf[30]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3044,a[2]=t8,a[3]=t3,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3044(t10,t6,t4);}}

/* g757 in doloop751 in chicken.internal#hash-table-for-each in k1031 */
static void f_3014(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3014,3,t0,t1,t2);}
/* internal.scm:206: p */
t3=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t3;
av2[1]=t1;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_slot(t2,C_fix(1));
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k3033 in doloop751 in chicken.internal#hash-table-for-each in k1031 */
static void C_ccall f_3035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3035,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3006(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop756 in doloop751 in chicken.internal#hash-table-for-each in k1031 */
static void f_3044(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3044,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* internal.scm:206: g757 */
t4=((C_word*)t0)[3];
f_3014(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3052 in for-each-loop756 in doloop751 in chicken.internal#hash-table-for-each in k1031 */
static void C_ccall f_3054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3054,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3044(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.internal#hash-table-size in k1031 */
static void C_ccall f_3067(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_3067,c,av);}
a=C_alloc(7);
t3=C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3077,a[2]=t5,a[3]=t2,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3077(t7,t1,t3,C_fix(0),C_fix(0));}

/* loop in chicken.internal#hash-table-size in k1031 */
static void f_3077(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3077,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eqp(t3,t2);
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_fixnum_plus(t3,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3099,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t6,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* internal.scm:213: ##sys#length */
t8=C_fast_retrieve(lf[39]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_slot(((C_word*)t0)[3],t3);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k3097 in loop in chicken.internal#hash-table-size in k1031 */
static void C_ccall f_3099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3099,c,av);}
/* internal.scm:213: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3077(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[6],t1));}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_internal_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("internal"));
C_check_nursery_minimum(C_calculate_demand(19,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void*)C_internal_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(305))){
C_save(t1);
C_rereclaim2(305*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(19);
C_initialize_lf(lf,44);
lf[0]=C_h_intern(&lf[0],8, C_text("internal"));
lf[1]=C_h_intern(&lf[1],17, C_text("chicken.internal#"));
lf[2]=C_h_intern(&lf[2],37, C_text("chicken.internal#string->c-identifier"));
lf[3]=C_h_intern(&lf[3],24, C_text("scheme#get-output-string"));
lf[4]=C_h_intern(&lf[4],14, C_text("scheme#display"));
lf[5]=C_h_intern(&lf[5],20, C_text("##sys#fixnum->string"));
lf[6]=C_h_intern(&lf[6],21, C_text("##sys#write-char/port"));
lf[7]=C_h_intern(&lf[7],25, C_text("scheme#open-output-string"));
lf[8]=C_h_intern(&lf[8],41, C_text("chicken.internal#valid-library-specifier?"));
lf[9]=C_h_intern(&lf[9],27, C_text("chicken.internal#library-id"));
lf[10]=C_h_intern(&lf[10],11, C_text("##sys#error"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\151\156\166\141\154\151\144\040\154\151\142\162\141\162\171\040\163\160\145\143\151\146\151\145\162\000"));
lf[12]=C_h_intern(&lf[12],27, C_text("##sys#symbol->string/shared"));
lf[13]=C_h_intern(&lf[13],20, C_text("##sys#number->string"));
lf[14]=C_h_intern(&lf[14],20, C_text("##sys#string->symbol"));
lf[15]=C_h_intern(&lf[15],19, C_text("##sys#string-append"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\163\162\146\151\055\000"));
lf[17]=C_h_intern(&lf[17],20, C_text("scheme#string-append"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[19]=C_h_intern(&lf[19],4, C_text("srfi"));
lf[20]=C_h_intern(&lf[20],35, C_text("chicken.internal#module-requirement"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\043\000"));
lf[22]=C_h_intern(&lf[22],44, C_text("chicken.internal#check-for-multiple-bindings"));
lf[23]=C_h_intern(&lf[23],10, C_text("##sys#warn"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\166\141\162\151\141\142\154\145\040\142\157\165\156\144\040\155\165\154\164\151\160\154\145\040\164\151\155\145\163\040\151\156\040\000"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\040\143\157\156\163\164\162\165\143\164\000"));
lf[26]=C_h_intern(&lf[26],29, C_text("chicken.internal#macro-subset"));
lf[27]=C_h_intern(&lf[27],40, C_text("chicken.internal#fixup-macro-environment"));
lf[28]=C_h_intern(&lf[28],23, C_text("##sys#macro-environment"));
lf[29]=C_h_intern(&lf[29],12, C_text("##sys#append"));
lf[30]=C_h_intern(&lf[30],8, C_text("for-each"));
lf[32]=C_h_intern(&lf[32],32, C_text("chicken.internal#make-hash-table"));
lf[33]=C_h_intern(&lf[33],18, C_text("scheme#make-vector"));
lf[34]=C_h_intern(&lf[34],31, C_text("chicken.internal#hash-table-ref"));
lf[35]=C_h_intern(&lf[35],32, C_text("chicken.internal#hash-table-set!"));
lf[36]=C_h_intern(&lf[36],35, C_text("chicken.internal#hash-table-update!"));
lf[37]=C_h_intern(&lf[37],36, C_text("chicken.internal#hash-table-for-each"));
lf[38]=C_h_intern(&lf[38],32, C_text("chicken.internal#hash-table-size"));
lf[39]=C_h_intern(&lf[39],12, C_text("##sys#length"));
lf[40]=C_h_intern(&lf[40],32, C_text("chicken.internal#default-imports"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001\163\143\150\145\155\145\376\003\000\000\002\376\001\000\000\014\001\143\150\151\143\153\145\156\056\142\141\163\145\376\003\000\000\002\376\001\000\000\016\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\376\377\016"));
lf[42]=C_h_intern(&lf[42],39, C_text("chicken.internal#default-syntax-imports"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001\163\143\150\145\155\145\376\003\000\000\002\376\001\000\000\014\001\143\150\151\143\153\145\156\056\142\141\163\145\376\003\000\000\002\376\001\000\000\016\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\376\377\016"));
C_register_lf2(lf,44,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1033,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[62] = {
{C_text("f_1033:internal_2escm"),(void*)f_1033},
{C_text("f_1410:internal_2escm"),(void*)f_1410},
{C_text("f_2313:internal_2escm"),(void*)f_2313},
{C_text("f_2317:internal_2escm"),(void*)f_2317},
{C_text("f_2325:internal_2escm"),(void*)f_2325},
{C_text("f_2341:internal_2escm"),(void*)f_2341},
{C_text("f_2351:internal_2escm"),(void*)f_2351},
{C_text("f_2357:internal_2escm"),(void*)f_2357},
{C_text("f_2360:internal_2escm"),(void*)f_2360},
{C_text("f_2367:internal_2escm"),(void*)f_2367},
{C_text("f_2400:internal_2escm"),(void*)f_2400},
{C_text("f_2440:internal_2escm"),(void*)f_2440},
{C_text("f_2443:internal_2escm"),(void*)f_2443},
{C_text("f_2486:internal_2escm"),(void*)f_2486},
{C_text("f_2538:internal_2escm"),(void*)f_2538},
{C_text("f_2545:internal_2escm"),(void*)f_2545},
{C_text("f_2549:internal_2escm"),(void*)f_2549},
{C_text("f_2564:internal_2escm"),(void*)f_2564},
{C_text("f_2566:internal_2escm"),(void*)f_2566},
{C_text("f_2587:internal_2escm"),(void*)f_2587},
{C_text("f_2591:internal_2escm"),(void*)f_2591},
{C_text("f_2601:internal_2escm"),(void*)f_2601},
{C_text("f_2609:internal_2escm"),(void*)f_2609},
{C_text("f_2613:internal_2escm"),(void*)f_2613},
{C_text("f_2615:internal_2escm"),(void*)f_2615},
{C_text("f_2621:internal_2escm"),(void*)f_2621},
{C_text("f_2634:internal_2escm"),(void*)f_2634},
{C_text("f_2637:internal_2escm"),(void*)f_2637},
{C_text("f_2654:internal_2escm"),(void*)f_2654},
{C_text("f_2689:internal_2escm"),(void*)f_2689},
{C_text("f_2696:internal_2escm"),(void*)f_2696},
{C_text("f_2703:internal_2escm"),(void*)f_2703},
{C_text("f_2705:internal_2escm"),(void*)f_2705},
{C_text("f_2726:internal_2escm"),(void*)f_2726},
{C_text("f_2739:internal_2escm"),(void*)f_2739},
{C_text("f_2746:internal_2escm"),(void*)f_2746},
{C_text("f_2747:internal_2escm"),(void*)f_2747},
{C_text("f_2763:internal_2escm"),(void*)f_2763},
{C_text("f_2786:internal_2escm"),(void*)f_2786},
{C_text("f_2788:internal_2escm"),(void*)f_2788},
{C_text("f_2798:internal_2escm"),(void*)f_2798},
{C_text("f_2820:internal_2escm"),(void*)f_2820},
{C_text("f_2842:internal_2escm"),(void*)f_2842},
{C_text("f_2857:internal_2escm"),(void*)f_2857},
{C_text("f_2867:internal_2escm"),(void*)f_2867},
{C_text("f_2916:internal_2escm"),(void*)f_2916},
{C_text("f_2928:internal_2escm"),(void*)f_2928},
{C_text("f_2980:internal_2escm"),(void*)f_2980},
{C_text("f_2988:internal_2escm"),(void*)f_2988},
{C_text("f_2992:internal_2escm"),(void*)f_2992},
{C_text("f_2995:internal_2escm"),(void*)f_2995},
{C_text("f_3000:internal_2escm"),(void*)f_3000},
{C_text("f_3006:internal_2escm"),(void*)f_3006},
{C_text("f_3014:internal_2escm"),(void*)f_3014},
{C_text("f_3035:internal_2escm"),(void*)f_3035},
{C_text("f_3044:internal_2escm"),(void*)f_3044},
{C_text("f_3054:internal_2escm"),(void*)f_3054},
{C_text("f_3067:internal_2escm"),(void*)f_3067},
{C_text("f_3077:internal_2escm"),(void*)f_3077},
{C_text("f_3099:internal_2escm"),(void*)f_3099},
{C_text("toplevel:internal_2escm"),(void*)C_internal_toplevel},
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
o|hiding unexported module binding: chicken.internal#d 
o|hiding unexported module binding: chicken.internal#define-alias 
o|hiding unexported module binding: chicken.internal#partition 
o|hiding unexported module binding: chicken.internal#span 
o|hiding unexported module binding: chicken.internal#take 
o|hiding unexported module binding: chicken.internal#drop 
o|hiding unexported module binding: chicken.internal#split-at 
o|hiding unexported module binding: chicken.internal#append-map 
o|hiding unexported module binding: chicken.internal#every 
o|hiding unexported module binding: chicken.internal#any 
o|hiding unexported module binding: chicken.internal#cons* 
o|hiding unexported module binding: chicken.internal#concatenate 
o|hiding unexported module binding: chicken.internal#delete 
o|hiding unexported module binding: chicken.internal#first 
o|hiding unexported module binding: chicken.internal#second 
o|hiding unexported module binding: chicken.internal#third 
o|hiding unexported module binding: chicken.internal#fourth 
o|hiding unexported module binding: chicken.internal#fifth 
o|hiding unexported module binding: chicken.internal#delete-duplicates 
o|hiding unexported module binding: chicken.internal#alist-cons 
o|hiding unexported module binding: chicken.internal#filter 
o|hiding unexported module binding: chicken.internal#filter-map 
o|hiding unexported module binding: chicken.internal#remove 
o|hiding unexported module binding: chicken.internal#unzip1 
o|hiding unexported module binding: chicken.internal#last 
o|hiding unexported module binding: chicken.internal#list-index 
o|hiding unexported module binding: chicken.internal#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.internal#lset-difference/eq? 
o|hiding unexported module binding: chicken.internal#lset-union/eq? 
o|hiding unexported module binding: chicken.internal#lset-intersection/eq? 
o|hiding unexported module binding: chicken.internal#list-tabulate 
o|hiding unexported module binding: chicken.internal#lset<=/eq? 
o|hiding unexported module binding: chicken.internal#lset=/eq? 
o|hiding unexported module binding: chicken.internal#length+ 
o|hiding unexported module binding: chicken.internal#find 
o|hiding unexported module binding: chicken.internal#find-tail 
o|hiding unexported module binding: chicken.internal#iota 
o|hiding unexported module binding: chicken.internal#make-list 
o|hiding unexported module binding: chicken.internal#posq 
o|hiding unexported module binding: chicken.internal#posv 
o|hiding unexported module binding: chicken.internal#hash-symbol 
S|applied compiler syntax:
S|  ##sys#for-each		1
S|  scheme#for-each		1
S|  chicken.base#foldl		3
S|  scheme#map		3
S|  chicken.base#foldr		3
o|eliminated procedure checks: 49 
o|specializations:
o|  2 (scheme#caar (pair pair *))
o|  2 (scheme#cadr (pair * pair))
o|  1 (scheme#number->string fixnum fixnum)
o|  1 (scheme#eqv? * *)
o|  3 (##sys#check-list (or pair list) *)
o|  26 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 292 
o|safe globals: (chicken.internal#default-syntax-imports chicken.internal#default-imports chicken.internal#hash-table-size chicken.internal#hash-table-for-each chicken.internal#hash-table-update! chicken.internal#hash-table-set! chicken.internal#hash-table-ref chicken.internal#make-hash-table chicken.internal#hash-symbol chicken.internal#fixup-macro-environment chicken.internal#macro-subset chicken.internal#check-for-multiple-bindings chicken.internal#module-requirement chicken.internal#library-id chicken.internal#valid-library-specifier? chicken.internal#string->c-identifier chicken.internal#posv chicken.internal#posq chicken.internal#make-list chicken.internal#iota chicken.internal#find-tail chicken.internal#find chicken.internal#length+ chicken.internal#lset=/eq? chicken.internal#lset<=/eq? chicken.internal#list-tabulate chicken.internal#lset-intersection/eq? chicken.internal#lset-union/eq? chicken.internal#lset-difference/eq? chicken.internal#lset-adjoin/eq? chicken.internal#list-index chicken.internal#last chicken.internal#unzip1 chicken.internal#remove chicken.internal#filter-map chicken.internal#filter chicken.internal#alist-cons chicken.internal#delete-duplicates chicken.internal#fifth chicken.internal#fourth chicken.internal#third chicken.internal#second chicken.internal#first chicken.internal#delete chicken.internal#concatenate chicken.internal#cons* chicken.internal#any chicken.internal#every chicken.internal#append-map chicken.internal#split-at chicken.internal#drop chicken.internal#take chicken.internal#span chicken.internal#partition) 
o|removed side-effect free assignment to unused variable: chicken.internal#partition 
o|removed side-effect free assignment to unused variable: chicken.internal#span 
o|removed side-effect free assignment to unused variable: chicken.internal#drop 
o|removed side-effect free assignment to unused variable: chicken.internal#split-at 
o|removed side-effect free assignment to unused variable: chicken.internal#append-map 
o|inlining procedure: k1415 
o|inlining procedure: k1415 
o|inlining procedure: k1446 
o|inlining procedure: k1446 
o|removed side-effect free assignment to unused variable: chicken.internal#cons* 
o|removed side-effect free assignment to unused variable: chicken.internal#concatenate 
o|removed side-effect free assignment to unused variable: chicken.internal#first 
o|removed side-effect free assignment to unused variable: chicken.internal#second 
o|removed side-effect free assignment to unused variable: chicken.internal#third 
o|removed side-effect free assignment to unused variable: chicken.internal#fourth 
o|removed side-effect free assignment to unused variable: chicken.internal#fifth 
o|removed side-effect free assignment to unused variable: chicken.internal#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.internal#alist-cons 
o|inlining procedure: k1663 
o|inlining procedure: k1663 
o|inlining procedure: k1655 
o|inlining procedure: k1655 
o|removed side-effect free assignment to unused variable: chicken.internal#filter-map 
o|removed side-effect free assignment to unused variable: chicken.internal#remove 
o|removed side-effect free assignment to unused variable: chicken.internal#unzip1 
o|removed side-effect free assignment to unused variable: chicken.internal#last 
o|removed side-effect free assignment to unused variable: chicken.internal#list-index 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset-intersection/eq? 
o|inlining procedure: k2054 
o|inlining procedure: k2054 
o|removed side-effect free assignment to unused variable: chicken.internal#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.internal#length+ 
o|removed side-effect free assignment to unused variable: chicken.internal#find 
o|removed side-effect free assignment to unused variable: chicken.internal#find-tail 
o|removed side-effect free assignment to unused variable: chicken.internal#iota 
o|removed side-effect free assignment to unused variable: chicken.internal#make-list 
o|removed side-effect free assignment to unused variable: chicken.internal#posq 
o|removed side-effect free assignment to unused variable: chicken.internal#posv 
o|inlining procedure: k2327 
o|inlining procedure: k2327 
o|substituted constant variable: a2369 
o|inlining procedure: k2385 
o|inlining procedure: k2385 
o|inlining procedure: k2405 
o|inlining procedure: k2405 
o|inlining procedure: k2414 
o|inlining procedure: k2429 
o|inlining procedure: k2429 
o|inlining procedure: k2414 
o|inlining procedure: k2488 
o|inlining procedure: k2488 
o|inlining procedure: k2509 
o|inlining procedure: k2509 
o|inlining procedure: k2524 
o|inlining procedure: k2524 
o|inlining procedure: k2568 
o|inlining procedure: k2568 
o|contracted procedure: "(internal.scm:107) srfi?613" 
o|inlining procedure: k2451 
o|inlining procedure: k2463 
o|inlining procedure: k2463 
o|inlining procedure: k2451 
o|inlining procedure: k2626 
o|inlining procedure: k2626 
o|inlining procedure: k2707 
o|inlining procedure: k2707 
o|inlining procedure: k2749 
o|inlining procedure: k2761 
o|inlining procedure: k2761 
o|inlining procedure: k2749 
o|inlining procedure: k2790 
o|inlining procedure: k2790 
o|inlining procedure: k2822 
o|inlining procedure: k2822 
o|inlining procedure: k2844 
o|inlining procedure: k2844 
o|inlining procedure: k2869 
o|inlining procedure: k2869 
o|inlining procedure: k2930 
o|inlining procedure: k2930 
o|inlining procedure: k2993 
o|inlining procedure: k2993 
o|inlining procedure: k3008 
o|inlining procedure: k3008 
o|inlining procedure: k3046 
o|inlining procedure: k3046 
o|inlining procedure: k3079 
o|inlining procedure: k3079 
o|replaced variables: 226 
o|removed binding forms: 89 
o|removed side-effect free assignment to unused variable: chicken.internal#any 
o|removed side-effect free assignment to unused variable: chicken.internal#filter 
o|removed side-effect free assignment to unused variable: chicken.internal#list-tabulate 
o|contracted procedure: "(internal.scm:89) chicken.internal#every" 
o|substituted constant variable: r24153125 
o|substituted constant variable: r24643136 
o|substituted constant variable: r24523137 
o|substituted constant variable: r27083140 
o|substituted constant variable: r28453152 
o|substituted constant variable: r28453152 
o|substituted constant variable: r28703163 
o|replaced variables: 20 
o|removed binding forms: 221 
o|replaced variables: 3 
o|removed binding forms: 25 
o|removed binding forms: 3 
o|contracted procedure: "(mini-srfi-1.scm:82) a2423" 
o|removed binding forms: 1 
o|replaced variables: 4 
o|inlining procedure: k1430 
o|removed binding forms: 2 
o|replaced variables: 1 
o|removed binding forms: 1 
o|simplifications: ((let . 11) (if . 4) (##core#call . 109)) 
o|  call simplifications:
o|    ##sys#setslot	2
o|    ##sys#size	4
o|    chicken.fixnum#fx-
o|    ##sys#check-list	2
o|    ##sys#slot	20
o|    scheme#set-car!	2
o|    scheme#memq	2
o|    scheme#caar	3
o|    scheme#cons	5
o|    scheme#pair?	4
o|    scheme#cddr
o|    scheme#eq?	7
o|    scheme#cdr	4
o|    scheme#cadr	2
o|    scheme#list?	2
o|    scheme#null?	11
o|    scheme#car	5
o|    scheme#symbol?	4
o|    chicken.base#fixnum?	3
o|    scheme#string-length
o|    chicken.fixnum#fx>=	2
o|    scheme#string-ref
o|    scheme#char-alphabetic?
o|    scheme#char-numeric?
o|    scheme#not	8
o|    chicken.fixnum#fx=	2
o|    scheme#char->integer
o|    chicken.fixnum#fx<
o|    scheme#write-char	3
o|    chicken.fixnum#fx+	4
o|contracted procedure: k2318 
o|contracted procedure: k2330 
o|contracted procedure: k2336 
o|contracted procedure: k2346 
o|contracted procedure: k2352 
o|contracted procedure: k2370 
o|contracted procedure: k2396 
o|contracted procedure: k2379 
o|contracted procedure: k2392 
o|contracted procedure: k2382 
o|contracted procedure: k2402 
o|contracted procedure: k2411 
o|contracted procedure: k2436 
o|contracted procedure: k2417 
o|contracted procedure: k1412 
o|contracted procedure: k1434 
o|contracted procedure: k2426 
o|inlining procedure: k1421 
o|contracted procedure: k1430 
o|inlining procedure: k1421 
o|contracted procedure: k2491 
o|contracted procedure: k2500 
o|contracted procedure: k2512 
o|contracted procedure: k2518 
o|contracted procedure: k2597 
o|contracted procedure: k2527 
o|contracted procedure: k2551 
o|contracted procedure: k2558 
o|contracted procedure: k2571 
o|contracted procedure: k2581 
o|contracted procedure: k2482 
o|contracted procedure: k2454 
o|contracted procedure: k2478 
o|contracted procedure: k2460 
o|contracted procedure: k2466 
o|contracted procedure: k2623 
o|contracted procedure: k2648 
o|contracted procedure: k2644 
o|contracted procedure: k2668 
o|contracted procedure: k2664 
o|contracted procedure: k2685 
o|contracted procedure: k2671 
o|contracted procedure: k2678 
o|contracted procedure: k2732 
o|contracted procedure: k2691 
o|contracted procedure: k2710 
o|contracted procedure: k2713 
o|contracted procedure: k2720 
o|contracted procedure: k2813 
o|contracted procedure: k2741 
o|contracted procedure: k2778 
o|contracted procedure: k2752 
o|contracted procedure: k2774 
o|contracted procedure: k2764 
o|contracted procedure: k2781 
o|contracted procedure: k2793 
o|contracted procedure: k2803 
o|contracted procedure: k2807 
o|contracted procedure: k2825 
o|contracted procedure: k2828 
o|contracted procedure: k2838 
o|contracted procedure: k2834 
o|contracted procedure: k2850 
o|contracted procedure: k2844 
o|contracted procedure: k2863 
o|contracted procedure: k2904 
o|contracted procedure: k2872 
o|contracted procedure: k2900 
o|contracted procedure: k2896 
o|contracted procedure: k2878 
o|contracted procedure: k2885 
o|contracted procedure: k2892 
o|contracted procedure: k2912 
o|contracted procedure: k2921 
o|contracted procedure: k2933 
o|contracted procedure: k2944 
o|contracted procedure: k2940 
o|contracted procedure: k2972 
o|contracted procedure: k2968 
o|contracted procedure: k2950 
o|contracted procedure: k2957 
o|contracted procedure: k2964 
o|contracted procedure: k2976 
o|contracted procedure: k3011 
o|contracted procedure: k3020 
o|contracted procedure: k3024 
o|contracted procedure: k3027 
o|contracted procedure: k3030 
o|contracted procedure: k3040 
o|contracted procedure: k3049 
o|contracted procedure: k3059 
o|contracted procedure: k3063 
o|contracted procedure: k3073 
o|contracted procedure: k3082 
o|contracted procedure: k3089 
o|contracted procedure: k3093 
o|contracted procedure: k3101 
o|simplifications: ((let . 40)) 
o|removed binding forms: 95 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest656658 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest656658 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest675677 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest675677 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest716717 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest716717 0 
o|simplifications: ((let . 2)) 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop214 0 
o|direct leaf routine/allocation: chicken.internal#hash-symbol 0 
o|direct leaf routine/allocation: loop726 0 
o|converted assignments to bindings: (loop214) 
o|contracted procedure: "(internal.scm:183) k2908" 
o|converted assignments to bindings: (loop726) 
o|contracted procedure: "(internal.scm:190) k2918" 
o|simplifications: ((let . 2)) 
o|removed binding forms: 2 
o|customizable procedures: (loop776 g757764 for-each-loop756767 doloop751752 loop736 g687694 for-each-loop686697 loop665 k2632 loop638 k2536 library-part->string614 doloop624625 fail612 k2349 doloop582583) 
o|shared closure containers: 2 
o|shared closure users: 2 
o|calls to known targets: 36 
o|identified direct recursive calls: f_1410 2 
o|identified direct recursive calls: f_2705 1 
o|unused rest argument: rest656658 f_2689 
o|unused rest argument: rest675677 f_2739 
o|unused rest argument: rest716717 f_2842 
o|identified direct recursive calls: f_2867 1 
o|identified direct recursive calls: f_2928 1 
o|fast box initializations: 11 
o|fast global references: 2 
o|fast global assignments: 1 
o|dropping unused closure argument: f_1410 
*/
/* end of file */
