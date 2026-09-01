/* Generated from r7lib.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: r7lib.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file r7lib.c -emit-import-library scheme.write -emit-import-library scheme.time -emit-import-library scheme.file -emit-import-library scheme.process-context
   unit: r7lib
   uses: file library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_file_toplevel)
C_extern void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[36];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,27),40,115,99,104,101,109,101,46,119,114,105,116,101,35,105,110,116,101,114,101,115,116,105,110,103,63,41,0,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,33),40,115,99,104,101,109,101,46,119,114,105,116,101,35,100,105,115,112,108,97,121,45,115,116,114,105,110,103,32,115,32,112,41,0,0,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,15),40,97,115,115,105,103,110,45,108,97,98,101,108,33,41,0};
static C_char li3[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,111,41};
static C_char li4[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,57,52,32,105,41,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,9),40,102,95,56,48,54,32,111,41,0,0,0,0,0,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,9),40,102,95,57,51,53,32,111,41,0,0,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,7),40,115,101,101,110,63,41,0};
static C_char li8[] C_aligned={C_lihdr(0,0,7),40,115,101,101,110,33,41,0};
static C_char li9[] C_aligned={C_lihdr(0,0,20),40,102,111,108,100,108,49,50,49,32,103,49,50,50,32,103,49,50,48,41,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,49,51,57,32,105,41,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,9),40,119,97,108,107,33,32,111,41,0,0,0,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,71),40,115,99,104,101,109,101,46,119,114,105,116,101,35,119,114,105,116,101,45,119,105,116,104,45,115,104,97,114,101,100,45,115,116,114,117,99,116,117,114,101,32,119,114,105,116,101,114,32,111,98,106,32,99,121,99,108,101,115,45,111,110,108,121,63,32,112,111,114,116,41,0};
static C_char li13[] C_aligned={C_lihdr(0,0,31),40,115,99,104,101,109,101,46,119,114,105,116,101,35,100,105,115,112,108,97,121,32,111,32,46,32,114,101,115,116,41,0};
static C_char li14[] C_aligned={C_lihdr(0,0,29),40,115,99,104,101,109,101,46,119,114,105,116,101,35,119,114,105,116,101,32,111,32,46,32,114,101,115,116,41,0,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,36),40,115,99,104,101,109,101,46,119,114,105,116,101,35,119,114,105,116,101,45,115,104,97,114,101,100,32,111,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,28),40,115,99,104,101,109,101,46,116,105,109,101,35,99,117,114,114,101,110,116,45,115,101,99,111,110,100,41,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,27),40,115,99,104,101,109,101,46,116,105,109,101,35,99,117,114,114,101,110,116,45,106,105,102,102,121,41,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,32),40,115,99,104,101,109,101,46,116,105,109,101,35,106,105,102,102,105,101,115,45,112,101,114,45,115,101,99,111,110,100,41};
static C_char li19[] C_aligned={C_lihdr(0,0,49),40,115,99,104,101,109,101,46,102,105,108,101,35,111,112,101,110,45,98,105,110,97,114,121,45,105,110,112,117,116,45,102,105,108,101,32,102,110,97,109,101,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,50),40,115,99,104,101,109,101,46,102,105,108,101,35,111,112,101,110,45,98,105,110,97,114,121,45,111,117,116,112,117,116,45,102,105,108,101,32,102,110,97,109,101,32,46,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,32),40,115,99,104,101,109,101,46,102,105,108,101,35,102,105,108,101,45,101,120,105,115,116,115,63,32,102,110,97,109,101,41};
static C_char li22[] C_aligned={C_lihdr(0,0,37),40,115,99,104,101,109,101,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,35,99,111,109,109,97,110,100,45,108,105,110,101,41,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,8),40,117,110,119,105,110,100,41};
static C_char li24[] C_aligned={C_lihdr(0,0,36),40,115,99,104,101,109,101,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,35,101,120,105,116,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from scheme.time#jiffies-per-second in k524 */
C_regparm static C_word stub296(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_long_to_num(&C_a,C_jiffies_per_second());
return C_r;}

/* from scheme.time#current-jiffy in k524 */
C_regparm static C_word stub292(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_long_to_num(&C_a,C_current_jiffy());
return C_r;}

C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word *av) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word *av) C_noret;
C_noret_decl(f_1040)
static void C_ccall f_1040(C_word c,C_word *av) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word *av) C_noret;
C_noret_decl(f_1050)
static void C_ccall f_1050(C_word c,C_word *av) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word *av) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word *av) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word *av) C_noret;
C_noret_decl(f_1063)
static void C_ccall f_1063(C_word c,C_word *av) C_noret;
C_noret_decl(f_1068)
static void C_ccall f_1068(C_word c,C_word *av) C_noret;
C_noret_decl(f_1072)
static void C_ccall f_1072(C_word c,C_word *av) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word *av) C_noret;
C_noret_decl(f_1084)
static void C_ccall f_1084(C_word c,C_word *av) C_noret;
C_noret_decl(f_1086)
static void C_ccall f_1086(C_word c,C_word *av) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word *av) C_noret;
C_noret_decl(f_1098)
static void C_ccall f_1098(C_word c,C_word *av) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word *av) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word *av) C_noret;
C_noret_decl(f_1129)
static void f_1129(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word *av) C_noret;
C_noret_decl(f_526)
static void C_ccall f_526(C_word c,C_word *av) C_noret;
C_noret_decl(f_528)
static C_word f_528(C_word t0);
C_noret_decl(f_573)
static void f_573(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_601)
static C_word f_601(C_word t0,C_word t1);
C_noret_decl(f_607)
static C_word f_607(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_619)
static void C_ccall f_619(C_word c,C_word *av) C_noret;
C_noret_decl(f_657)
static void f_657(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_681)
static void f_681(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_694)
static void C_ccall f_694(C_word c,C_word *av) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word *av) C_noret;
C_noret_decl(f_765)
static void f_765(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word *av) C_noret;
C_noret_decl(f_788)
static void f_788(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_792)
static C_word f_792(C_word t0,C_word t1);
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word *av) C_noret;
C_noret_decl(f_806)
static void C_ccall f_806(C_word c,C_word *av) C_noret;
C_noret_decl(f_816)
static void C_ccall f_816(C_word c,C_word *av) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word *av) C_noret;
C_noret_decl(f_826)
static void f_826(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_842)
static void f_842(C_word t0,C_word t1) C_noret;
C_noret_decl(f_845)
static void C_ccall f_845(C_word c,C_word *av) C_noret;
C_noret_decl(f_848)
static void C_ccall f_848(C_word c,C_word *av) C_noret;
C_noret_decl(f_860)
static void C_ccall f_860(C_word c,C_word *av) C_noret;
C_noret_decl(f_863)
static void C_ccall f_863(C_word c,C_word *av) C_noret;
C_noret_decl(f_891)
static void C_ccall f_891(C_word c,C_word *av) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word *av) C_noret;
C_noret_decl(f_902)
static void f_902(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word *av) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918(C_word c,C_word *av) C_noret;
C_noret_decl(f_935)
static void C_ccall f_935(C_word c,C_word *av) C_noret;
C_noret_decl(f_969)
static void C_ccall f_969(C_word c,C_word *av) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word *av) C_noret;
C_noret_decl(f_978)
static void C_ccall f_978(C_word c,C_word *av) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word *av) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word *av) C_noret;
C_noret_decl(f_995)
static void C_ccall f_995(C_word c,C_word *av) C_noret;
C_noret_decl(C_r7lib_toplevel)
C_extern void C_ccall C_r7lib_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1129)
static void C_ccall trf_1129(C_word c,C_word *av) C_noret;
static void C_ccall trf_1129(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1129(t0,t1);}

C_noret_decl(trf_573)
static void C_ccall trf_573(C_word c,C_word *av) C_noret;
static void C_ccall trf_573(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_573(t0,t1,t2);}

C_noret_decl(trf_657)
static void C_ccall trf_657(C_word c,C_word *av) C_noret;
static void C_ccall trf_657(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_657(t0,t1,t2,t3);}

C_noret_decl(trf_681)
static void C_ccall trf_681(C_word c,C_word *av) C_noret;
static void C_ccall trf_681(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_681(t0,t1,t2);}

C_noret_decl(trf_765)
static void C_ccall trf_765(C_word c,C_word *av) C_noret;
static void C_ccall trf_765(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_765(t0,t1,t2);}

C_noret_decl(trf_788)
static void C_ccall trf_788(C_word c,C_word *av) C_noret;
static void C_ccall trf_788(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_788(t0,t1,t2,t3,t4);}

C_noret_decl(trf_826)
static void C_ccall trf_826(C_word c,C_word *av) C_noret;
static void C_ccall trf_826(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_826(t0,t1,t2);}

C_noret_decl(trf_842)
static void C_ccall trf_842(C_word c,C_word *av) C_noret;
static void C_ccall trf_842(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_842(t0,t1);}

C_noret_decl(trf_902)
static void C_ccall trf_902(C_word c,C_word *av) C_noret;
static void C_ccall trf_902(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_902(t0,t1,t2);}

/* scheme.write#write in k524 */
static void C_ccall f_1010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1010,c,av);}
if(C_truep(C_rest_nullp(c,3))){
t3=*((C_word*)lf[9]+1);
/* r7lib.scm:161: write-with-shared-structure */
f_788(t1,*((C_word*)lf[12]+1),t2,C_SCHEME_TRUE,*((C_word*)lf[9]+1));}
else{
/* r7lib.scm:161: write-with-shared-structure */
f_788(t1,*((C_word*)lf[12]+1),t2,C_SCHEME_TRUE,C_get_rest_arg(c,3,av,3,t0));}}

/* scheme.write#write-shared in k524 */
static void C_ccall f_1025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1025,c,av);}
if(C_truep(C_rest_nullp(c,3))){
t3=*((C_word*)lf[9]+1);
/* r7lib.scm:168: write-with-shared-structure */
f_788(t1,*((C_word*)lf[12]+1),t2,C_SCHEME_FALSE,*((C_word*)lf[9]+1));}
else{
/* r7lib.scm:168: write-with-shared-structure */
f_788(t1,*((C_word*)lf[12]+1),t2,C_SCHEME_FALSE,C_get_rest_arg(c,3,av,3,t0));}}

/* scheme.time#current-second in k524 */
static void C_ccall f_1040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1040,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1048,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* r7lib.scm:187: chicken.time#current-seconds */
t3=C_fast_retrieve(lf[17]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1046 in scheme.time#current-second in k524 */
static void C_ccall f_1048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_1048,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_s_a_i_plus(&a,2,t1,lf[16]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* scheme.time#current-jiffy in k524 */
static void C_ccall f_1050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_1050,c,av);}
a=C_alloc(8);
t2=C_a_i_bytevector(&a,1,C_fix(6));
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub292(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scheme.time#jiffies-per-second in k524 */
static void C_ccall f_1053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_1053,c,av);}
a=C_alloc(8);
t2=C_a_i_bytevector(&a,1,C_fix(6));
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub296(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1055 in k524 */
static void C_ccall f_1057(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_1057,c,av);}
a=C_alloc(23);
t2=C_mutate((C_word*)lf[21]+1 /* (set! scheme.file#open-binary-input-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1059,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[25]+1 /* (set! scheme.file#open-binary-output-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1068,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[27]+1 /* (set! scheme.file#file-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1077,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t5=C_a_i_provide(&a,1,lf[29]);
t6=C_mutate((C_word*)lf[30]+1 /* (set! scheme.process-context#command-line ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1086,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[33]+1 /* (set! scheme.process-context#exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1113,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* scheme.file#open-binary-input-file in k1055 in k524 */
static void C_ccall f_1059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_1059,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1063,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[23]+1);
av2[3]=t2;
av2[4]=lf[24];
av2[5]=t3;
C_apply(6,av2);}}

/* k1061 in scheme.file#open-binary-input-file in k1055 in k524 */
static void C_ccall f_1063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1063,c,av);}
t2=C_i_setslot(t1,C_fix(14),lf[22]);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scheme.file#open-binary-output-file in k1055 in k524 */
static void C_ccall f_1068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +3,c,5)))){
C_save_and_reclaim((void*)f_1068,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+3);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1072,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[26]+1);
av2[3]=t2;
av2[4]=lf[24];
av2[5]=t3;
C_apply(6,av2);}}

/* k1070 in scheme.file#open-binary-output-file in k1055 in k524 */
static void C_ccall f_1072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1072,c,av);}
t2=C_i_setslot(t1,C_fix(14),lf[22]);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scheme.file#file-exists? in k1055 in k524 */
static void C_ccall f_1077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1077,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1084,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* r7lib.scm:215: chicken.file#file-exists? */
t4=C_fast_retrieve(lf[28]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1082 in scheme.file#file-exists? in k1055 in k524 */
static void C_ccall f_1084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1084,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* scheme.process-context#command-line in k1055 in k524 */
static void C_ccall f_1086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1086,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1094,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* r7lib.scm:231: chicken.process-context#program-name */
t3=C_fast_retrieve(lf[32]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1092 in scheme.process-context#command-line in k1055 in k524 */
static void C_ccall f_1094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1094,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1098,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* r7lib.scm:231: chicken.process-context#command-line-arguments */
t4=C_fast_retrieve(lf[31]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1096 in k1092 in scheme.process-context#command-line in k1055 in k524 */
static void C_ccall f_1098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1098,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t2)[3],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scheme.process-context#exit in k1055 in k524 */
static void C_ccall f_1113(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1113,c,av);}
a=C_alloc(10);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_fix(0):C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1120,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1129,a[2]=t6,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1129(t8,t4);}

/* k1118 in scheme.process-context#exit in k1055 in k524 */
static void C_ccall f_1120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1120,c,av);}
if(C_truep(C_i_integerp(((C_word*)t0)[2]))){
/* r7lib.scm:248: chicken.base#exit */
t2=C_fast_retrieve(lf[34]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_eqp(((C_word*)t0)[2],C_SCHEME_FALSE);
if(C_truep(t2)){
/* r7lib.scm:248: chicken.base#exit */
t3=C_fast_retrieve(lf[34]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
/* r7lib.scm:248: chicken.base#exit */
t3=C_fast_retrieve(lf[34]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* unwind in scheme.process-context#exit in k1055 in k524 */
static void f_1129(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1129,2,t0,t1);}
a=C_alloc(4);
if(C_truep(C_i_nullp(C_fast_retrieve(lf[35])))){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_i_cdar(C_fast_retrieve(lf[35]));
t3=C_i_cdr(C_fast_retrieve(lf[35]));
t4=C_mutate((C_word*)lf[35]+1 /* (set! ##sys#dynamic-winds ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1146,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* r7lib.scm:245: after */
t6=t2;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}}

/* k1144 in unwind in scheme.process-context#exit in k1055 in k524 */
static void C_ccall f_1146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1146,c,av);}
/* r7lib.scm:246: unwind */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1129(t2,((C_word*)t0)[3]);}

/* k524 */
static void C_ccall f_526(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(46,c,6)))){
C_save_and_reclaim((void *)f_526,c,av);}
a=C_alloc(46);
t2=C_mutate(&lf[2] /* (set! scheme.write#interesting? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_528,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[3] /* (set! scheme.write#display-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_573,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[4] /* (set! scheme.write#write-with-shared-structure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_788,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[8]+1 /* (set! scheme.write#display ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_995,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[11]+1 /* (set! scheme.write#write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1010,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[13]+1 /* (set! scheme.write#write-shared ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1025,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t8=C_a_i_provide(&a,1,lf[14]);
t9=C_mutate((C_word*)lf[15]+1 /* (set! scheme.time#current-second ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1040,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[18]+1 /* (set! scheme.time#current-jiffy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1050,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[19]+1 /* (set! scheme.time#jiffies-per-second ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1053,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t12=C_a_i_provide(&a,1,lf[20]);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1057,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t13;
C_file_toplevel(2,av2);}}

/* scheme.write#interesting? in k524 */
static C_word f_528(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_pairp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_vectorp(t1);
return((C_truep(t3)?C_fixnum_less_or_equal_p(C_fix(1),C_block_size(t1)):C_SCHEME_FALSE));}}

/* scheme.write#display-string in k524 */
static void f_573(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_573,3,t1,t2,t3);}
t4=C_slot(t2,C_fix(0));
t5=C_slot(t3,C_fix(2));
t6=C_slot(t5,C_fix(3));
t7=C_block_size(t4);
/* r7lib.scm:52: g107 */
t8=t6;{
C_word av2[6];
av2[0]=t8;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=C_fix(0);
av2[5]=C_fixnum_difference(t7,C_fix(1));
((C_proc)C_fast_retrieve_proc(t8))(6,av2);}}

/* seen? in scheme.write#write-with-shared-structure in k524 */
static C_word f_601(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)((C_word*)t0)[2])[1]));}

/* seen! in scheme.write#write-with-shared-structure in k524 */
static C_word f_607(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,C_fix(1));
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
return(t4);}

/* k617 in scheme.write#write-with-shared-structure in k524 */
static void C_ccall f_619(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_619,c,av);}
a=C_alloc(6);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[7]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_657,a[2]=t5,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_657(t7,((C_word*)t0)[3],t2,C_SCHEME_END_OF_LIST);}

/* foldl121 in k617 in scheme.write#write-with-shared-structure in k524 */
static void f_657(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_657,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_i_cdr(t5);
if(C_truep(C_fixnum_less_or_equal_p(t6,C_fix(1)))){
t7=C_u_i_car(t5);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_FALSE);
t9=C_a_i_cons(&a,2,t8,t3);
t11=t1;
t12=t4;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t7=C_u_i_car(t5);
t8=C_a_i_cons(&a,2,t7,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,t8,t3);
t11=t1;
t12=t4;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* walk! in scheme.write#write-with-shared-structure in k524 */
static void f_681(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_681,3,t0,t1,t2);}
a=C_alloc(21);
t3=(
/* r7lib.scm:67: interesting? */
  f_528(t2)
);
if(C_truep(t3)){
t4=(
/* r7lib.scm:68: seen? */
  f_601(((C_word*)((C_word*)t0)[2])[1],t2)
);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_694,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=C_i_cdr(t4);
t7=t5;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_i_set_i_slot(t4,C_fix(1),C_fixnum_plus(t6,C_fix(1)));
f_694(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t6=(
/* r7lib.scm:72: seen! */
  f_607(C_a_i(&a,6),((C_word*)((C_word*)t0)[4])[1],t2)
);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_741,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* r7lib.scm:73: walk! */
t12=t7;
t13=C_u_i_car(t2);
t1=t12;
t2=t13;
goto loop;}
else{
if(C_truep(C_i_vectorp(t2))){
t6=(
/* r7lib.scm:76: seen! */
  f_607(C_a_i(&a,6),((C_word*)((C_word*)t0)[4])[1],t2)
);
t7=C_block_size(t2);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_765,a[2]=t7,a[3]=t9,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word)li10),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_765(t11,t5,C_fix(0));}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_694(2,av2);}}}}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k692 in walk! in scheme.write#write-with-shared-structure in k524 */
static void C_ccall f_694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_694,c,av);}
if(C_truep(((C_word*)t0)[2])){
t2=(
/* r7lib.scm:85: seen? */
  f_601(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[4])
);
t3=C_i_cdr(t2);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(1)))){
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_set_i_slot(t2,C_fix(1),C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k739 in walk! in scheme.write#write-with-shared-structure in k524 */
static void C_ccall f_741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_741,c,av);}
/* r7lib.scm:74: walk! */
t2=((C_word*)((C_word*)t0)[2])[1];
f_681(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* doloop139 in walk! in scheme.write#write-with-shared-structure in k524 */
static void f_765(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_765,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_775,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* r7lib.scm:80: walk! */
t5=((C_word*)((C_word*)t0)[4])[1];
f_681(t5,t4,C_slot(((C_word*)t0)[5],t2));}}

/* k773 in doloop139 in walk! in scheme.write#write-with-shared-structure in k524 */
static void C_ccall f_775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_775,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_765(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* scheme.write#write-with-shared-structure in k524 */
static void f_788(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(52,0,3)))){
C_save_and_reclaim_args((void *)trf_788,5,t1,t2,t3,t4,t5);}
a=C_alloc(52);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t7,0,C_fix(0));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_792,a[2]=t7,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t18=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_804,a[2]=t11,a[3]=t13,a[4]=t5,a[5]=t15,a[6]=t2,a[7]=t9,a[8]=t7,a[9]=t1,a[10]=t3,tmp=(C_word)a,a+=11,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_set_block_item(t20,0,C_SCHEME_END_OF_LIST);
t26=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_601,a[2]=t20,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t27=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_607,a[2]=t20,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t28=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_619,a[2]=t20,a[3]=t18,tmp=(C_word)a,a+=4,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_681,a[2]=t22,a[3]=t4,a[4]=t24,a[5]=t30,a[6]=((C_word)li11),tmp=(C_word)a,a+=7,tmp));
t32=((C_word*)t30)[1];
f_681(t32,t28,t3);}

/* assign-label! in scheme.write#write-with-shared-structure in k524 */
static C_word f_792(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_i_setslot(t1,C_fix(1),((C_word*)((C_word*)t0)[2])[1]);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_set_block_item(((C_word*)t0)[2],0,t3);
return(t4);}

/* k802 in scheme.write#write-with-shared-structure in k524 */
static void C_ccall f_804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_804,c,av);}
a=C_alloc(15);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_806,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_935,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li6),tmp=(C_word)a,a+=9,tmp));
/* r7lib.scm:151: write/shared */
t5=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[9];
av2[2]=((C_word*)t0)[10];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* f_806 in k802 in scheme.write#write-with-shared-structure in k524 */
static void C_ccall f_806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_806,c,av);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_816,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(2));
/* r7lib.scm:48: g101 */
t5=C_slot(t4,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=C_make_character(40);
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}
else{
if(C_truep(C_i_vectorp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_891,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* r7lib.scm:124: display-string */
f_573(t3,lf[6],((C_word*)t0)[2]);}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k814 */
static void C_ccall f_816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_816,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_819,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* r7lib.scm:110: write/shared */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k817 in k814 */
static void C_ccall f_819(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_819,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(((C_word*)t2)[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_826,a[2]=((C_word*)t2)[3],a[3]=t5,a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word)li3),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_826(t7,((C_word*)t2)[6],t3);}

/* loop in k817 in k814 */
static void f_826(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_826,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t3=C_slot(((C_word*)t0)[2],C_fix(2));
/* r7lib.scm:48: g101 */
t4=C_slot(t3,C_fix(2));{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_make_character(41);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_842,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[5])[1]);
t5=t3;
f_842(t5,C_i_not(C_i_cdr(t4)));}
else{
t4=t3;
f_842(t4,C_SCHEME_FALSE);}}}

/* k840 in loop in k817 in k814 */
static void f_842(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_842,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_845,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(2));
/* r7lib.scm:48: g101 */
t4=C_slot(t3,C_fix(2));{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_make_character(32);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_860,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* r7lib.scm:120: display-string */
f_573(t2,lf[5],((C_word*)t0)[6]);}}

/* k843 in k840 in loop in k817 in k814 */
static void C_ccall f_845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_845,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* r7lib.scm:117: write/shared */
t3=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[4]);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k846 in k843 in k840 in loop in k817 in k814 */
static void C_ccall f_848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_848,c,av);}
/* r7lib.scm:118: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_826(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k858 in k840 in loop in k817 in k814 */
static void C_ccall f_860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_860,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* r7lib.scm:121: write/shared */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k861 in k858 in k840 in loop in k817 in k814 */
static void C_ccall f_863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_863,c,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
/* r7lib.scm:48: g101 */
t3=C_slot(t2,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_make_character(41);
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k889 */
static void C_ccall f_891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_891,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_894,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* r7lib.scm:125: write/shared */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[2],C_fix(0));
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k892 in k889 */
static void C_ccall f_894(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_894,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_block_size(((C_word*)t2)[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_902,a[2]=t3,a[3]=((C_word*)t2)[3],a[4]=t5,a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[2],a[7]=((C_word)li4),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_902(t7,((C_word*)t2)[5],C_fix(1));}

/* doloop194 in k892 in k889 */
static void f_902(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_902,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_slot(((C_word*)t0)[3],C_fix(2));
/* r7lib.scm:48: g101 */
t5=C_slot(t4,C_fix(2));{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_make_character(41);
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_915,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(2));
/* r7lib.scm:48: g101 */
t6=C_slot(t5,C_fix(2));{
C_word av2[4];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=C_make_character(32);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k913 in doloop194 in k892 in k889 */
static void C_ccall f_915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_915,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* r7lib.scm:131: write/shared */
t3=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[6],((C_word*)t0)[4]);
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k916 in k913 in doloop194 in k892 in k889 */
static void C_ccall f_918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_918,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_902(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* f_935 in k802 in scheme.write#write-with-shared-structure in k524 */
static void C_ccall f_935(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_935,c,av);}
a=C_alloc(10);
t3=(
/* r7lib.scm:46: interesting? */
  f_528(t2)
);
if(C_truep(C_i_not(t3))){
/* r7lib.scm:135: writer */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}
else{
t4=C_i_assq(t2,((C_word*)((C_word*)t0)[4])[1]);
t5=C_i_cdr(t4);
if(C_truep(C_i_not(t5))){
/* r7lib.scm:139: write-interesting/shared */
t6=((C_word*)((C_word*)t0)[5])[1];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
if(C_truep(C_i_numberp(t5))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_969,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(((C_word*)t0)[3],C_fix(2));
/* r7lib.scm:48: g101 */
t8=C_slot(t7,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=C_make_character(35);
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_978,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t7=C_slot(((C_word*)t0)[3],C_fix(2));
/* r7lib.scm:48: g101 */
t8=C_slot(t7,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=C_make_character(35);
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}}}}

/* k967 */
static void C_ccall f_969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_969,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* r7lib.scm:142: writer */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k970 in k967 */
static void C_ccall f_972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_972,c,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
/* r7lib.scm:48: g101 */
t3=C_slot(t2,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_make_character(35);
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k976 */
static void C_ccall f_978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_978,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* r7lib.scm:146: writer */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[9])[1];
av2[3]=((C_word*)t0)[7];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k979 in k976 */
static void C_ccall f_981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_981,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_slot(((C_word*)t0)[7],C_fix(2));
/* r7lib.scm:48: g101 */
t4=C_slot(t3,C_fix(2));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_make_character(61);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}

/* k982 in k979 in k976 */
static void C_ccall f_984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_984,c,av);}
t2=(
/* r7lib.scm:148: assign-label! */
  f_792(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3])
);
/* r7lib.scm:149: write-interesting/shared */
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* scheme.write#display in k524 */
static void C_ccall f_995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_995,c,av);}
if(C_truep(C_rest_nullp(c,3))){
t3=*((C_word*)lf[9]+1);
/* r7lib.scm:154: write-with-shared-structure */
f_788(t1,*((C_word*)lf[10]+1),t2,C_SCHEME_TRUE,*((C_word*)lf[9]+1));}
else{
/* r7lib.scm:154: write-with-shared-structure */
f_788(t1,*((C_word*)lf[10]+1),t2,C_SCHEME_TRUE,C_get_rest_arg(c,3,av,3,t0));}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_r7lib_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("r7lib"));
C_check_nursery_minimum(C_calculate_demand(19,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void*)C_r7lib_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(214))){
C_save(t1);
C_rereclaim2(214*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(19);
C_initialize_lf(lf,36);
lf[0]=C_h_intern(&lf[0],5, C_text("r7lib"));
lf[1]=C_h_intern(&lf[1],13, C_text("scheme.write#"));
lf[5]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\056\040\000"));
lf[6]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\043\050\000"));
lf[7]=C_h_intern(&lf[7],5, C_text("foldl"));
lf[8]=C_h_intern(&lf[8],20, C_text("scheme.write#display"));
lf[9]=C_h_intern(&lf[9],21, C_text("##sys#standard-output"));
lf[10]=C_h_intern(&lf[10],14, C_text("scheme#display"));
lf[11]=C_h_intern(&lf[11],18, C_text("scheme.write#write"));
lf[12]=C_h_intern(&lf[12],12, C_text("scheme#write"));
lf[13]=C_h_intern(&lf[13],25, C_text("scheme.write#write-shared"));
lf[14]=C_h_intern(&lf[14],12, C_text("scheme.time#"));
lf[15]=C_h_intern(&lf[15],26, C_text("scheme.time#current-second"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376\12537.0\000"));
lf[17]=C_h_intern(&lf[17],28, C_text("chicken.time#current-seconds"));
lf[18]=C_h_intern(&lf[18],25, C_text("scheme.time#current-jiffy"));
lf[19]=C_h_intern(&lf[19],30, C_text("scheme.time#jiffies-per-second"));
lf[20]=C_h_intern(&lf[20],12, C_text("scheme.file#"));
lf[21]=C_h_intern(&lf[21],34, C_text("scheme.file#open-binary-input-file"));
lf[22]=C_h_intern(&lf[22],6, C_text("binary"));
lf[23]=C_h_intern(&lf[23],22, C_text("scheme#open-input-file"));
lf[24]=C_h_intern_kw(&lf[24],6, C_text("binary"));
lf[25]=C_h_intern(&lf[25],35, C_text("scheme.file#open-binary-output-file"));
lf[26]=C_h_intern(&lf[26],23, C_text("scheme#open-output-file"));
lf[27]=C_h_intern(&lf[27],24, C_text("scheme.file#file-exists?"));
lf[28]=C_h_intern(&lf[28],25, C_text("chicken.file#file-exists?"));
lf[29]=C_h_intern(&lf[29],23, C_text("scheme.process-context#"));
lf[30]=C_h_intern(&lf[30],35, C_text("scheme.process-context#command-line"));
lf[31]=C_h_intern(&lf[31],46, C_text("chicken.process-context#command-line-arguments"));
lf[32]=C_h_intern(&lf[32],36, C_text("chicken.process-context#program-name"));
lf[33]=C_h_intern(&lf[33],27, C_text("scheme.process-context#exit"));
lf[34]=C_h_intern(&lf[34],17, C_text("chicken.base#exit"));
lf[35]=C_h_intern(&lf[35],19, C_text("##sys#dynamic-winds"));
C_register_lf2(lf,36,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_526,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[58] = {
{C_text("f_1010:r7lib_2escm"),(void*)f_1010},
{C_text("f_1025:r7lib_2escm"),(void*)f_1025},
{C_text("f_1040:r7lib_2escm"),(void*)f_1040},
{C_text("f_1048:r7lib_2escm"),(void*)f_1048},
{C_text("f_1050:r7lib_2escm"),(void*)f_1050},
{C_text("f_1053:r7lib_2escm"),(void*)f_1053},
{C_text("f_1057:r7lib_2escm"),(void*)f_1057},
{C_text("f_1059:r7lib_2escm"),(void*)f_1059},
{C_text("f_1063:r7lib_2escm"),(void*)f_1063},
{C_text("f_1068:r7lib_2escm"),(void*)f_1068},
{C_text("f_1072:r7lib_2escm"),(void*)f_1072},
{C_text("f_1077:r7lib_2escm"),(void*)f_1077},
{C_text("f_1084:r7lib_2escm"),(void*)f_1084},
{C_text("f_1086:r7lib_2escm"),(void*)f_1086},
{C_text("f_1094:r7lib_2escm"),(void*)f_1094},
{C_text("f_1098:r7lib_2escm"),(void*)f_1098},
{C_text("f_1113:r7lib_2escm"),(void*)f_1113},
{C_text("f_1120:r7lib_2escm"),(void*)f_1120},
{C_text("f_1129:r7lib_2escm"),(void*)f_1129},
{C_text("f_1146:r7lib_2escm"),(void*)f_1146},
{C_text("f_526:r7lib_2escm"),(void*)f_526},
{C_text("f_528:r7lib_2escm"),(void*)f_528},
{C_text("f_573:r7lib_2escm"),(void*)f_573},
{C_text("f_601:r7lib_2escm"),(void*)f_601},
{C_text("f_607:r7lib_2escm"),(void*)f_607},
{C_text("f_619:r7lib_2escm"),(void*)f_619},
{C_text("f_657:r7lib_2escm"),(void*)f_657},
{C_text("f_681:r7lib_2escm"),(void*)f_681},
{C_text("f_694:r7lib_2escm"),(void*)f_694},
{C_text("f_741:r7lib_2escm"),(void*)f_741},
{C_text("f_765:r7lib_2escm"),(void*)f_765},
{C_text("f_775:r7lib_2escm"),(void*)f_775},
{C_text("f_788:r7lib_2escm"),(void*)f_788},
{C_text("f_792:r7lib_2escm"),(void*)f_792},
{C_text("f_804:r7lib_2escm"),(void*)f_804},
{C_text("f_806:r7lib_2escm"),(void*)f_806},
{C_text("f_816:r7lib_2escm"),(void*)f_816},
{C_text("f_819:r7lib_2escm"),(void*)f_819},
{C_text("f_826:r7lib_2escm"),(void*)f_826},
{C_text("f_842:r7lib_2escm"),(void*)f_842},
{C_text("f_845:r7lib_2escm"),(void*)f_845},
{C_text("f_848:r7lib_2escm"),(void*)f_848},
{C_text("f_860:r7lib_2escm"),(void*)f_860},
{C_text("f_863:r7lib_2escm"),(void*)f_863},
{C_text("f_891:r7lib_2escm"),(void*)f_891},
{C_text("f_894:r7lib_2escm"),(void*)f_894},
{C_text("f_902:r7lib_2escm"),(void*)f_902},
{C_text("f_915:r7lib_2escm"),(void*)f_915},
{C_text("f_918:r7lib_2escm"),(void*)f_918},
{C_text("f_935:r7lib_2escm"),(void*)f_935},
{C_text("f_969:r7lib_2escm"),(void*)f_969},
{C_text("f_972:r7lib_2escm"),(void*)f_972},
{C_text("f_978:r7lib_2escm"),(void*)f_978},
{C_text("f_981:r7lib_2escm"),(void*)f_981},
{C_text("f_984:r7lib_2escm"),(void*)f_984},
{C_text("f_995:r7lib_2escm"),(void*)f_995},
{C_text("toplevel:r7lib_2escm"),(void*)C_r7lib_toplevel},
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
o|hiding unexported module binding: scheme.write#interesting? 
o|hiding unexported module binding: scheme.write#uninteresting? 
o|hiding unexported module binding: scheme.write#display-char 
o|hiding unexported module binding: scheme.write#display-string 
o|hiding unexported module binding: scheme.write#find-shared 
o|hiding unexported module binding: scheme.write#write-with-shared-structure 
o|hiding unexported module binding: scheme.process-context#->exit-status 
S|applied compiler syntax:
S|  chicken.base#foldl		1
o|eliminated procedure checks: 13 
o|specializations:
o|  1 (scheme#integer? *)
o|  3 (scheme#cdr pair)
o|  4 (scheme#car pair)
(o e)|safe calls: 99 
(o e)|assignments to immediate values: 3 
o|safe globals: (scheme.process-context#exit scheme.process-context#->exit-status scheme.process-context#command-line scheme.file#file-exists? scheme.file#open-binary-output-file scheme.file#open-binary-input-file scheme.time#jiffies-per-second scheme.time#current-jiffy scheme.time#current-second scheme.write#write-shared scheme.write#write scheme.write#display scheme.write#write-with-shared-structure scheme.write#find-shared scheme.write#display-string scheme.write#display-char scheme.write#uninteresting? scheme.write#interesting?) 
o|inlining procedure: k533 
o|inlining procedure: k533 
o|inlining procedure: k808 
o|inlining procedure: k828 
o|inlining procedure: k828 
o|inlining procedure: k808 
o|inlining procedure: k904 
o|inlining procedure: k904 
o|inlining procedure: k937 
o|inlining procedure: k937 
o|inlining procedure: k961 
o|inlining procedure: k961 
o|contracted procedure: "(r7lib.scm:134) scheme.write#uninteresting?" 
o|contracted procedure: "(r7lib.scm:105) scheme.write#find-shared" 
o|inlining procedure: k659 
o|contracted procedure: "(r7lib.scm:90) g119149" 
o|inlining procedure: k622 
o|inlining procedure: k622 
o|inlining procedure: k659 
o|substituted constant variable: g120148 
o|inlining procedure: k683 
o|inlining procedure: k701 
o|inlining procedure: k701 
o|contracted procedure: "(r7lib.scm:68) g133134" 
o|inlining procedure: k730 
o|inlining procedure: k730 
o|inlining procedure: k767 
o|inlining procedure: k767 
o|inlining procedure: k683 
o|inlining procedure: k1079 
o|inlining procedure: k1079 
o|contracted procedure: "(r7lib.scm:248) scheme.process-context#->exit-status" 
o|inlining procedure: k1102 
o|inlining procedure: k1102 
o|inlining procedure: k1131 
o|inlining procedure: k1131 
o|replaced variables: 127 
o|removed binding forms: 74 
o|substituted constant variable: r10801180 
o|substituted constant variable: r10801181 
o|replaced variables: 24 
o|removed binding forms: 122 
o|inlining procedure: k997 
o|propagated global variable: r9981218 ##sys#standard-output 
o|inlining procedure: k1012 
o|propagated global variable: r10131219 ##sys#standard-output 
o|inlining procedure: k1027 
o|propagated global variable: r10281220 ##sys#standard-output 
o|inlining procedure: k1125 
o|inlining procedure: k1125 
o|inlining procedure: k1125 
o|removed binding forms: 17 
o|substituted constant variable: r11261222 
o|substituted constant variable: r11261223 
o|replaced variables: 1 
o|removed binding forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 2) (let . 4) (##core#call . 74)) 
o|  call simplifications:
o|    scheme#cdar
o|    scheme#eq?
o|    scheme#apply	2
o|    scheme#+
o|    ##sys#setislot	2
o|    ##sys#check-list
o|    scheme#cons	7
o|    scheme#number?
o|    chicken.fixnum#fx=	2
o|    scheme#null?	6
o|    scheme#assq	3
o|    scheme#cdr	6
o|    scheme#not	3
o|    scheme#car	5
o|    ##sys#setslot	3
o|    chicken.fixnum#fx+	4
o|    chicken.fixnum#fx-
o|    ##sys#slot	10
o|    scheme#pair?	5
o|    scheme#vector?	3
o|    ##sys#size	4
o|    chicken.fixnum#fx<=	3
o|contracted procedure: k530 
o|contracted procedure: k539 
o|contracted procedure: k546 
o|contracted procedure: k569 
o|contracted procedure: k562 
o|contracted procedure: k575 
o|contracted procedure: k593 
o|contracted procedure: k578 
o|contracted procedure: k589 
o|contracted procedure: k585 
o|contracted procedure: k794 
o|contracted procedure: k798 
o|contracted procedure: k811 
o|contracted procedure: k831 
o|contracted procedure: k855 
o|contracted procedure: k867 
o|contracted procedure: k878 
o|contracted procedure: k874 
o|contracted procedure: k886 
o|contracted procedure: k895 
o|contracted procedure: k907 
o|contracted procedure: k923 
o|contracted procedure: k927 
o|contracted procedure: k931 
o|contracted procedure: k940 
o|contracted procedure: k946 
o|contracted procedure: k949 
o|contracted procedure: k955 
o|contracted procedure: k964 
o|contracted procedure: k614 
o|contracted procedure: k610 
o|contracted procedure: k650 
o|contracted procedure: k662 
o|contracted procedure: k669 
o|contracted procedure: k677 
o|contracted procedure: k647 
o|contracted procedure: k625 
o|contracted procedure: k632 
o|inlining procedure: k673 
o|contracted procedure: k641 
o|inlining procedure: k673 
o|contracted procedure: k711 
o|contracted procedure: k704 
o|contracted procedure: k724 
o|contracted procedure: k720 
o|contracted procedure: k733 
o|contracted procedure: k752 
o|contracted procedure: k758 
o|contracted procedure: k770 
o|contracted procedure: k780 
o|contracted procedure: k784 
o|contracted procedure: k1003 
o|contracted procedure: k997 
o|contracted procedure: k1018 
o|contracted procedure: k1012 
o|contracted procedure: k1033 
o|contracted procedure: k1027 
o|contracted procedure: k1064 
o|contracted procedure: k1073 
o|contracted procedure: k1150 
o|contracted procedure: k1115 
o|contracted procedure: k1109 
o|contracted procedure: k1134 
o|contracted procedure: k1137 
o|contracted procedure: k1141 
o|simplifications: ((if . 1) (let . 30)) 
o|removed binding forms: 63 
o|inlining procedure: "(r7lib.scm:113) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:116) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:122) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:109) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:129) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:130) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:143) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:141) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:147) scheme.write#display-char" 
o|inlining procedure: "(r7lib.scm:145) scheme.write#display-char" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest224226 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest224226 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest236238 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest236238 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest248250 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest248250 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest360361 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest360361 0 
o|removed binding forms: 1 
o|removed side-effect free assignment to unused variable: scheme.write#display-char 
o|substituted constant variable: c991289 
o|substituted constant variable: c991293 
o|substituted constant variable: c991297 
o|substituted constant variable: c991303 
o|substituted constant variable: c991307 
o|substituted constant variable: c991311 
o|substituted constant variable: c991317 
o|substituted constant variable: c991321 
o|substituted constant variable: c991325 
o|substituted constant variable: c991329 
o|replaced variables: 30 
o|removed binding forms: 31 
o|direct leaf routine/allocation: scheme.write#interesting? 0 
o|direct leaf routine/allocation: assign-label!168 0 
o|direct leaf routine/allocation: seen?113 0 
o|direct leaf routine/allocation: seen!114 6 
o|contracted procedure: "(r7lib.scm:46) k556" 
o|contracted procedure: "(r7lib.scm:148) k985" 
o|contracted procedure: "(r7lib.scm:67) k686" 
o|contracted procedure: "(r7lib.scm:68) k689" 
o|contracted procedure: "(r7lib.scm:85) k698" 
o|contracted procedure: "(r7lib.scm:72) k736" 
o|contracted procedure: "(r7lib.scm:76) k755" 
o|removed binding forms: 7 
o|customizable procedures: (unwind367 scheme.write#write-with-shared-structure doloop139140 walk!125 foldl121153 doloop194195 k840 scheme.write#display-string loop179) 
o|shared closure containers: 3 
o|shared closure users: 3 
o|calls to known targets: 27 
o|identified direct recursive calls: f_657 2 
o|identified direct recursive calls: f_681 1 
o|unused rest argument: rest224226 f_995 
o|unused rest argument: rest236238 f_1010 
o|unused rest argument: rest248250 f_1025 
o|unused rest argument: rest360361 f_1113 
o|fast box initializations: 9 
o|fast global references: 10 
o|fast global assignments: 3 
o|dropping unused closure argument: f_528 
o|dropping unused closure argument: f_573 
o|dropping unused closure argument: f_788 
*/
/* end of file */
