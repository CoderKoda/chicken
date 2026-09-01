/* Generated from chicken-ffi-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken-ffi-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file chicken-ffi-syntax.c
   unit: chicken-ffi-syntax
   uses: data-structures expand internal extras library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[98];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,16),40,97,50,55,48,50,32,102,111,114,109,32,114,32,99,41};
static C_char li1[] C_aligned={C_lihdr(0,0,42),40,99,111,109,112,105,108,101,114,45,111,110,108,121,45,101,114,45,116,114,97,110,115,102,111,114,109,101,114,32,116,114,97,110,115,102,111,114,109,101,114,41,0,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,51,49,32,103,56,52,51,41,0,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,45),40,97,110,110,111,116,97,116,101,45,102,111,114,101,105,103,110,45,112,114,111,99,101,100,117,114,101,32,101,32,97,114,103,116,121,112,101,115,32,114,116,121,112,101,41,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,16),40,97,50,56,55,57,32,102,111,114,109,32,114,32,99,41};
static C_char li6[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,56,55,32,103,57,57,57,41,0,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,16),40,97,50,57,50,51,32,102,111,114,109,32,114,32,99,41};
static C_char li8[] C_aligned={C_lihdr(0,0,16),40,97,50,57,57,53,32,102,111,114,109,32,114,32,99,41};
static C_char li9[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,52,55,32,103,57,53,57,41,0,0,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,16),40,97,51,48,50,51,32,102,111,114,109,32,114,32,99,41};
static C_char li11[] C_aligned={C_lihdr(0,0,16),40,97,51,48,57,53,32,102,111,114,109,32,114,32,99,41};
static C_char li12[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,48,52,32,103,57,49,54,41,0,0,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,16),40,97,51,49,50,51,32,102,111,114,109,32,114,32,99,41};
static C_char li14[] C_aligned={C_lihdr(0,0,16),40,97,51,50,49,57,32,102,111,114,109,32,114,32,99,41};
static C_char li15[] C_aligned={C_lihdr(0,0,16),40,97,51,50,51,54,32,102,111,114,109,32,114,32,99,41};
static C_char li16[] C_aligned={C_lihdr(0,0,16),40,97,51,50,53,51,32,102,111,114,109,32,114,32,99,41};
static C_char li17[] C_aligned={C_lihdr(0,0,16),40,97,51,50,55,52,32,102,111,114,109,32,114,32,99,41};
static C_char li18[] C_aligned={C_lihdr(0,0,16),40,97,51,51,52,48,32,102,111,114,109,32,114,32,99,41};
static C_char li19[] C_aligned={C_lihdr(0,0,6),40,103,55,51,55,41,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,98,105,110,100,105,110,103,115,32,97,108,105,97,115,101,115,41,0};
static C_char li21[] C_aligned={C_lihdr(0,0,11),40,97,51,53,49,53,32,98,32,97,41,0,0,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,10),40,103,49,55,53,32,120,32,114,41,0,0,0,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,15),40,102,111,108,100,114,49,55,48,32,103,49,55,49,41,0};
static C_char li24[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,50,49,50,32,103,50,50,52,41,0,0,0,0,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,49,56,53,32,103,49,57,55,41,0,0,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,115,116,115,41,0,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,51,49,32,103,55,52,51,41,0,0,0,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,16),40,97,51,52,49,51,32,102,111,114,109,32,114,32,99,41};
static C_char li30[] C_aligned={C_lihdr(0,0,16),40,97,51,53,56,48,32,102,111,114,109,32,114,32,99,41};
static C_char li31[] C_aligned={C_lihdr(0,0,13),40,97,51,54,54,54,32,120,32,114,32,99,41,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,54,57,32,103,54,56,49,41,0,0,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,52,50,32,103,54,53,52,41,0,0,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,16),40,97,51,54,56,55,32,102,111,114,109,32,114,32,99,41};
static C_char li35[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1401)
static void C_ccall f_1401(C_word c,C_word *av) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word *av) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407(C_word c,C_word *av) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word *av) C_noret;
C_noret_decl(f_1413)
static void C_ccall f_1413(C_word c,C_word *av) C_noret;
C_noret_decl(f_1629)
static void f_1629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1637)
static void f_1637(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1645)
static void C_ccall f_1645(C_word c,C_word *av) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word *av) C_noret;
C_noret_decl(f_1669)
static void f_1669(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word *av) C_noret;
C_noret_decl(f_1687)
static void C_ccall f_1687(C_word c,C_word *av) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word *av) C_noret;
C_noret_decl(f_1701)
static void f_1701(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1748)
static void C_ccall f_1748(C_word c,C_word *av) C_noret;
C_noret_decl(f_1750)
static void f_1750(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1790)
static C_word f_1790(C_word t0);
C_noret_decl(f_1824)
static C_word f_1824(C_word t0);
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word *av) C_noret;
C_noret_decl(f_2697)
static void f_2697(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2710)
static void C_ccall f_2710(C_word c,C_word *av) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word *av) C_noret;
C_noret_decl(f_2726)
static void C_ccall f_2726(C_word c,C_word *av) C_noret;
C_noret_decl(f_2729)
static void C_ccall f_2729(C_word c,C_word *av) C_noret;
C_noret_decl(f_2732)
static void C_ccall f_2732(C_word c,C_word *av) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word *av) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word *av) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word *av) C_noret;
C_noret_decl(f_2743)
static void f_2743(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word *av) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word *av) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word *av) C_noret;
C_noret_decl(f_2770)
static void f_2770(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2813)
static void C_ccall f_2813(C_word c,C_word *av) C_noret;
C_noret_decl(f_2815)
static void f_2815(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word *av) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word *av) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word *av) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word *av) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word *av) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word *av) C_noret;
C_noret_decl(f_2871)
static void C_ccall f_2871(C_word c,C_word *av) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word *av) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word *av) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word *av) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word *av) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word *av) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word *av) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word *av) C_noret;
C_noret_decl(f_2908)
static void C_ccall f_2908(C_word c,C_word *av) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word *av) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word *av) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word *av) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word *av) C_noret;
C_noret_decl(f_2954)
static void f_2954(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word *av) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word *av) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word *av) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word *av) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word *av) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word *av) C_noret;
C_noret_decl(f_3054)
static void f_3054(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word *av) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word *av) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word *av) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word *av) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word *av) C_noret;
C_noret_decl(f_3128)
static void C_ccall f_3128(C_word c,C_word *av) C_noret;
C_noret_decl(f_3131)
static void f_3131(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3146)
static void C_ccall f_3146(C_word c,C_word *av) C_noret;
C_noret_decl(f_3157)
static void f_3157(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3218)
static void C_ccall f_3218(C_word c,C_word *av) C_noret;
C_noret_decl(f_3220)
static void C_ccall f_3220(C_word c,C_word *av) C_noret;
C_noret_decl(f_3224)
static void C_ccall f_3224(C_word c,C_word *av) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word *av) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word *av) C_noret;
C_noret_decl(f_3241)
static void C_ccall f_3241(C_word c,C_word *av) C_noret;
C_noret_decl(f_3252)
static void C_ccall f_3252(C_word c,C_word *av) C_noret;
C_noret_decl(f_3254)
static void C_ccall f_3254(C_word c,C_word *av) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word *av) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word *av) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275(C_word c,C_word *av) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word *av) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word *av) C_noret;
C_noret_decl(f_3292)
static void f_3292(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word *av) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word *av) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word *av) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word *av) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word *av) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word *av) C_noret;
C_noret_decl(f_3348)
static void C_ccall f_3348(C_word c,C_word *av) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word *av) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word *av) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word *av) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word *av) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word *av) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word *av) C_noret;
C_noret_decl(f_3389)
static void C_ccall f_3389(C_word c,C_word *av) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word *av) C_noret;
C_noret_decl(f_3396)
static void C_ccall f_3396(C_word c,C_word *av) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word *av) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word *av) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word *av) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word *av) C_noret;
C_noret_decl(f_3427)
static void f_3427(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word *av) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word *av) C_noret;
C_noret_decl(f_3448)
static void C_ccall f_3448(C_word c,C_word *av) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word *av) C_noret;
C_noret_decl(f_3454)
static void f_3454(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word *av) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516(C_word c,C_word *av) C_noret;
C_noret_decl(f_3539)
static void f_3539(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word *av) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word *av) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word *av) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word *av) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word *av) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word *av) C_noret;
C_noret_decl(f_3643)
static void C_ccall f_3643(C_word c,C_word *av) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word *av) C_noret;
C_noret_decl(f_3661)
static void C_ccall f_3661(C_word c,C_word *av) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word *av) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word *av) C_noret;
C_noret_decl(f_3671)
static void C_ccall f_3671(C_word c,C_word *av) C_noret;
C_noret_decl(f_3686)
static void C_ccall f_3686(C_word c,C_word *av) C_noret;
C_noret_decl(f_3688)
static void C_ccall f_3688(C_word c,C_word *av) C_noret;
C_noret_decl(f_3698)
static void f_3698(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word *av) C_noret;
C_noret_decl(f_3714)
static void C_ccall f_3714(C_word c,C_word *av) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word *av) C_noret;
C_noret_decl(f_3774)
static void C_ccall f_3774(C_word c,C_word *av) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word *av) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word *av) C_noret;
C_noret_decl(f_3832)
static void f_3832(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3879)
static void C_ccall f_3879(C_word c,C_word *av) C_noret;
C_noret_decl(f_3881)
static void f_3881(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3978)
static void C_ccall f_3978(C_word c,C_word *av) C_noret;
C_noret_decl(f_3982)
static void C_ccall f_3982(C_word c,C_word *av) C_noret;
C_noret_decl(f_3986)
static void C_ccall f_3986(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dffi_2dsyntax_toplevel)
C_extern void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1629)
static void C_ccall trf_1629(C_word c,C_word *av) C_noret;
static void C_ccall trf_1629(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1629(t0,t1,t2);}

C_noret_decl(trf_1637)
static void C_ccall trf_1637(C_word c,C_word *av) C_noret;
static void C_ccall trf_1637(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1637(t0,t1,t2,t3);}

C_noret_decl(trf_1669)
static void C_ccall trf_1669(C_word c,C_word *av) C_noret;
static void C_ccall trf_1669(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1669(t0,t1,t2);}

C_noret_decl(trf_1701)
static void C_ccall trf_1701(C_word c,C_word *av) C_noret;
static void C_ccall trf_1701(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1701(t0,t1,t2);}

C_noret_decl(trf_1750)
static void C_ccall trf_1750(C_word c,C_word *av) C_noret;
static void C_ccall trf_1750(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1750(t0,t1,t2);}

C_noret_decl(trf_2697)
static void C_ccall trf_2697(C_word c,C_word *av) C_noret;
static void C_ccall trf_2697(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2697(t0,t1);}

C_noret_decl(trf_2743)
static void C_ccall trf_2743(C_word c,C_word *av) C_noret;
static void C_ccall trf_2743(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2743(t0,t1,t2,t3);}

C_noret_decl(trf_2770)
static void C_ccall trf_2770(C_word c,C_word *av) C_noret;
static void C_ccall trf_2770(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2770(t0,t1);}

C_noret_decl(trf_2815)
static void C_ccall trf_2815(C_word c,C_word *av) C_noret;
static void C_ccall trf_2815(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2815(t0,t1,t2);}

C_noret_decl(trf_2954)
static void C_ccall trf_2954(C_word c,C_word *av) C_noret;
static void C_ccall trf_2954(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2954(t0,t1,t2);}

C_noret_decl(trf_3054)
static void C_ccall trf_3054(C_word c,C_word *av) C_noret;
static void C_ccall trf_3054(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3054(t0,t1,t2);}

C_noret_decl(trf_3131)
static void C_ccall trf_3131(C_word c,C_word *av) C_noret;
static void C_ccall trf_3131(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3131(t0,t1);}

C_noret_decl(trf_3157)
static void C_ccall trf_3157(C_word c,C_word *av) C_noret;
static void C_ccall trf_3157(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3157(t0,t1,t2);}

C_noret_decl(trf_3292)
static void C_ccall trf_3292(C_word c,C_word *av) C_noret;
static void C_ccall trf_3292(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3292(t0,t1);}

C_noret_decl(trf_3427)
static void C_ccall trf_3427(C_word c,C_word *av) C_noret;
static void C_ccall trf_3427(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3427(t0,t1);}

C_noret_decl(trf_3454)
static void C_ccall trf_3454(C_word c,C_word *av) C_noret;
static void C_ccall trf_3454(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3454(t0,t1,t2,t3);}

C_noret_decl(trf_3539)
static void C_ccall trf_3539(C_word c,C_word *av) C_noret;
static void C_ccall trf_3539(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3539(t0,t1,t2);}

C_noret_decl(trf_3698)
static void C_ccall trf_3698(C_word c,C_word *av) C_noret;
static void C_ccall trf_3698(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3698(t0,t1);}

C_noret_decl(trf_3832)
static void C_ccall trf_3832(C_word c,C_word *av) C_noret;
static void C_ccall trf_3832(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3832(t0,t1,t2);}

C_noret_decl(trf_3881)
static void C_ccall trf_3881(C_word c,C_word *av) C_noret;
static void C_ccall trf_3881(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3881(t0,t1,t2);}

/* k1399 */
static void C_ccall f_1401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1401,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1404,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1402 in k1399 */
static void C_ccall f_1404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1404,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1407,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k1405 in k1402 in k1399 */
static void C_ccall f_1407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1407,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1410,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_library_toplevel(2,av2);}}

/* k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1410,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1413,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1413,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2695,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:51: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word *av2=av;
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t2;
tp(2,av2);}}

/* foldr170 in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_1629(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1629,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[2],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1656,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g175 in foldr170 in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_1637(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1637,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1645,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:72: proc */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k1643 in g175 in foldr170 in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1645,c,av);}
/* mini-srfi-1.scm:72: scheme#append */
t2=*((C_word*)lf[78]+1);{
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

/* k1654 in foldr170 in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1656,c,av);}
/* mini-srfi-1.scm:72: g175 */
t2=((C_word*)t0)[2];
f_1637(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_1669(C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_1669,3,t0,t1,t2);}
a=C_alloc(25);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1824,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_1824(t2)
);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1683,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t2,lf[6]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1748,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1750,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_1750(t15,t11,t2);}}

/* k1681 in loop in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1683(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_1683,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1687,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1699,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1701,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_1701(t11,t7,((C_word*)t0)[4]);}

/* k1685 in k1681 in loop in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1687,c,av);}
/* mini-srfi-1.scm:76: scheme#append */
t2=*((C_word*)lf[78]+1);{
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

/* k1697 in k1681 in loop in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1699,c,av);}
/* mini-srfi-1.scm:77: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1669(t2,((C_word*)t0)[3],t1);}

/* map-loop212 in k1681 in loop in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_1701(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1701,3,t0,t1,t2);}
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

/* k1746 in loop in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1748,c,av);}{
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

/* map-loop185 in loop in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_1750(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1750,3,t0,t1,t2);}
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

/* loop in k2762 in k2759 in k2753 in annotate-foreign-procedure in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word f_1790(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
t4=C_eqp(lf[9],t3);
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}}}

/* loop in loop in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word f_1824(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_i_car(t1);
t3=C_i_nullp(t2);
if(C_truep(t3)){
return(t3);}
else{
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}}}

/* k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_2695,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2723,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3986,a[2]=C_SCHEME_UNDEFINED,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:66: chicken.base#alist-ref */
t5=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[88];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* compiler-only-er-transformer in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_2697(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_2697,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2703,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:57: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word av2[3];
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}

/* a2702 in compiler-only-er-transformer in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2703(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2703,c,av);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2710,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:59: chicken.platform#feature? */
t6=C_fast_retrieve(lf[3]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2708 in a2702 in compiler-only-er-transformer in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2710,c,av);}
if(C_truep(t1)){
/* chicken-ffi-syntax.scm:60: transformer */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}
else{
/* chicken-ffi-syntax.scm:61: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=C_i_car(((C_word*)t0)[4]);
av2[3]=lf[2];
tp(4,av2);}}}

/* k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_2723,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2726,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3665,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3667,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:106: compiler-only-er-transformer */
f_2697(t3,t4);}

/* k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2726,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2729,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3661,a[2]=t3,a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:113: chicken.base#alist-ref */
t5=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[80];
av2[3]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2729(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2729,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2732,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3412,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3414,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:131: compiler-only-er-transformer */
f_2697(t4,t5);}

/* k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2732,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2735,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3408,a[2]=t3,a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:166: chicken.base#alist-ref */
t5=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[59];
av2[3]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2735(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2735,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2738,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3273,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3275,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:182: compiler-only-er-transformer */
f_2697(t4,t5);}

/* k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2738(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2738,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2741,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3252,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3254,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:208: compiler-only-er-transformer */
f_2697(t4,t5);}

/* k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2741(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_2741,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2743,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2850,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3235,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3237,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:247: compiler-only-er-transformer */
f_2697(t5,t6);}

/* annotate-foreign-procedure in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_2743(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2743,4,t1,t2,t3,t4);}
a=C_alloc(12);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2755,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t7,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:218: chicken.syntax#strip-syntax */
t10=C_fast_retrieve(lf[12]);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k2753 in annotate-foreign-procedure in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2755(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2755,c,av);}
a=C_alloc(13);
t2=C_i_check_list_2(t1,lf[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2815,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word)li3),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2815(t7,t3,t1);}

/* k2759 in k2753 in annotate-foreign-procedure in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2761,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2813,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:221: chicken.syntax#strip-syntax */
t4=C_fast_retrieve(lf[12]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_2764(2,av2);}}}

/* k2762 in k2759 in k2753 in annotate-foreign-procedure in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2764,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:C_eqp(t1,lf[9]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1790,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
t6=t2;
f_2770(t6,(
  f_1790(((C_word*)t0)[5])
));}
else{
t5=t2;
f_2770(t5,C_SCHEME_FALSE);}}

/* k2768 in k2762 in k2759 in k2753 in annotate-foreign-procedure in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_2770(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,1)))){
C_save_and_reclaim_args((void *)trf_2770,2,t0,t1);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=C_a_i_list1(&a,1,((C_word*)t0)[5]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=C_a_i_cons(&a,2,lf[7],t3);
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,4,lf[8],t4,C_SCHEME_FALSE,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],lf[9]);
t3=C_a_i_cons(&a,2,lf[7],t2);
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,4,lf[8],t3,C_SCHEME_FALSE,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k2811 in k2759 in k2753 in annotate-foreign-procedure in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2813,c,av);}
/* chicken-ffi-syntax.scm:220: chicken.compiler.support#foreign-type->scrutiny-type */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[11];
tp(4,av2);}}

/* map-loop831 in k2753 in annotate-foreign-procedure in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_2815(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2815,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_fast_retrieve(lf[10]);
/* chicken-ffi-syntax.scm:217: g854 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word av2[4];
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[13];
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2838 in map-loop831 in k2753 in annotate-foreign-procedure in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2840,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_2815(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_2850,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2853,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3218,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3220,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:255: compiler-only-er-transformer */
f_2697(t3,t4);}

/* k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2853,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3122,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3124,a[2]=((C_word*)t2)[5],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:263: compiler-only-er-transformer */
f_2697(t4,t5);}

/* k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2856,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2859,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3094,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3096,a[2]=((C_word*)t2)[5],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:277: compiler-only-er-transformer */
f_2697(t4,t5);}

/* k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2859,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2862,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3022,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3024,a[2]=((C_word*)t2)[5],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:287: compiler-only-er-transformer */
f_2697(t4,t5);}

/* k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2862,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2865,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2994,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2996,a[2]=((C_word*)t2)[5],a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:297: compiler-only-er-transformer */
f_2697(t4,t5);}

/* k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_2865,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2868,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2922,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2924,a[2]=((C_word*)t2)[5],a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:307: compiler-only-er-transformer */
f_2697(t4,t5);}

/* k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2868,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2878,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2880,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:317: compiler-only-er-transformer */
f_2697(t3,t4);}

/* k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2871,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2874,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:332: chicken.internal#macro-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k2872 in k2869 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 in ... */
static void C_ccall f_2874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2874,c,av);}
t2=C_mutate((C_word*)lf[14]+1 /* (set! ##sys#chicken-ffi-macro-environment ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2876 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2878,c,av);}
/* chicken-ffi-syntax.scm:314: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[17];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a2879 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2880(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2880,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2884,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:319: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[17];
av2[3]=t2;
av2[4]=lf[30];
tp(5,av2);}}

/* k2882 in a2879 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 in ... */
static void C_ccall f_2884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2884,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2887,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:320: chicken.syntax#strip-syntax */
t3=C_fast_retrieve(lf[12]);{
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

/* k2885 in k2882 in a2879 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in ... */
static void C_ccall f_2887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2887,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2890,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:321: chicken.base#gensym */
t4=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[28];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2888 in k2885 in k2882 in a2879 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in ... */
static void C_ccall f_2890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2890,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2893,a[2]=t1,a[3]=((C_word*)t2)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_stringp(((C_word*)t2)[3]))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t2)[3];
f_2893(2,av2);}}
else{
/* chicken-ffi-syntax.scm:326: chicken.compiler.c-backend#foreign-type-declaration */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[25]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
av2[3]=lf[26];
tp(4,av2);}}}

/* k2891 in k2888 in k2885 in k2882 in a2879 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in ... */
static void C_ccall f_2893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2893,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2908,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:328: scheme#string-append */
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
av2[3]=t1;
av2[4]=lf[24];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2906 in k2891 in k2888 in k2885 in k2882 in a2879 in k2866 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in ... */
static void C_ccall f_2908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_2908,c,av);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,4,lf[18],((C_word*)t2)[2],lf[19],t1);
t4=C_a_i_list(&a,4,lf[8],lf[20],C_SCHEME_FALSE,((C_word*)t2)[2]);
t5=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[21],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k2920 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2922,c,av);}
/* chicken-ffi-syntax.scm:304: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[31];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a2923 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2924(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2924,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2928,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:309: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[31];
av2[3]=t2;
av2[4]=lf[33];
tp(5,av2);}}

/* k2926 in a2923 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2928(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_2928,c,av);}
a=C_alloc(22);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[32],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_i_check_list_2(t8,lf[6]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2954,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_2954(t14,t10,t8);}

/* k2946 in k2926 in a2923 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 in ... */
static void C_ccall f_2948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2948,c,av);}
/* chicken-ffi-syntax.scm:310: annotate-foreign-procedure */
f_2743(((C_word*)t0)[3],((C_word*)t0)[4],t1,C_i_cadr(((C_word*)t0)[5]));}

/* map-loop987 in k2926 in a2923 in k2863 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 in ... */
static void f_2954(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_2954,3,t0,t1,t2);}
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

/* k2992 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2994,c,av);}
/* chicken-ffi-syntax.scm:294: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[34];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a2995 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2996(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_2996,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3000,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:299: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[34];
av2[3]=t2;
av2[4]=lf[36];
tp(5,av2);}}

/* k2998 in a2995 in k2860 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3000,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[35],t2);
t4=C_i_cdddr(((C_word*)t0)[2]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:300: annotate-foreign-procedure */
f_2743(((C_word*)t0)[4],t3,t4,C_u_i_car(t5));}

/* k3020 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3022,c,av);}
/* chicken-ffi-syntax.scm:284: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[37];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a3023 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3024(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3024,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3028,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:289: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[37];
av2[3]=t2;
av2[4]=lf[39];
tp(5,av2);}}

/* k3026 in a3023 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3028(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_3028,c,av);}
a=C_alloc(22);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[38],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_i_check_list_2(t8,lf[6]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3048,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3054,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li9),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3054(t14,t10,t8);}

/* k3046 in k3026 in a3023 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3048,c,av);}
/* chicken-ffi-syntax.scm:290: annotate-foreign-procedure */
f_2743(((C_word*)t0)[3],((C_word*)t0)[4],t1,C_i_cadr(((C_word*)t0)[5]));}

/* map-loop947 in k3026 in a3023 in k2857 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_3054(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3054,3,t0,t1,t2);}
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

/* k3092 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3094,c,av);}
/* chicken-ffi-syntax.scm:274: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[40];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a3095 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3096(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3096,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3100,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:279: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[40];
av2[3]=t2;
av2[4]=lf[42];
tp(5,av2);}}

/* k3098 in a3095 in k2854 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3100,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[41],t2);
t4=C_i_cdddr(((C_word*)t0)[2]);
t5=C_u_i_cdr(((C_word*)t0)[2]);
/* chicken-ffi-syntax.scm:280: annotate-foreign-procedure */
f_2743(((C_word*)t0)[4],t3,t4,C_u_i_car(t5));}

/* k3120 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3122,c,av);}
/* chicken-ffi-syntax.scm:260: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a3123 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3124(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3124,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3128,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:265: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[43];
av2[3]=t2;
av2[4]=lf[45];
tp(5,av2);}}

/* k3126 in a3123 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3128,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3131,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_i_caddr(((C_word*)t0)[2]);
t5=t2;
f_3131(t5,C_i_not(C_i_stringp(t4)));}
else{
t4=t2;
f_3131(t4,C_SCHEME_FALSE);}}

/* k3129 in k3126 in a3123 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_3131(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,3)))){
C_save_and_reclaim_args((void *)trf_3131,2,t0,t1);}
a=C_alloc(19);
t2=((C_word*)t0)[2];
t3=(C_truep(t1)?C_u_i_car(C_u_i_cdr(((C_word*)t2)[2])):C_SCHEME_FALSE);
t4=(C_truep(t1)?C_i_caddr(((C_word*)t2)[2]):C_u_i_car(C_u_i_cdr(((C_word*)t2)[2])));
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t4,lf[6]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3146,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3157,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_3157(t14,t10,t4);}

/* k3144 in k3129 in k3126 in a3123 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3146,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[44],t2);
/* chicken-ffi-syntax.scm:270: annotate-foreign-procedure */
f_2743(((C_word*)t0)[4],t3,t1,((C_word*)t0)[5]);}

/* map-loop904 in k3129 in k3126 in a3123 in k2851 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_3157(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3157,3,t0,t1,t2);}
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

/* k3216 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3218,c,av);}
/* chicken-ffi-syntax.scm:252: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[46];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a3219 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3220(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3220,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3224,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:257: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[46];
av2[3]=t2;
av2[4]=lf[47];
tp(5,av2);}}

/* k3222 in a3219 in k2848 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3224,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[18],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3233 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3235,c,av);}
/* chicken-ffi-syntax.scm:244: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[48];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a3236 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3237(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3237,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3241,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:249: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[48];
av2[3]=t2;
av2[4]=lf[50];
tp(5,av2);}}

/* k3239 in a3236 in k2739 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3241,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[49],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3250 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3252,c,av);}
/* chicken-ffi-syntax.scm:205: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[51];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a3253 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3254(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3254,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3258,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:210: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[51];
av2[3]=t2;
av2[4]=lf[53];
tp(5,av2);}}

/* k3256 in a3253 in k2736 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3258,c,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[51],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[52],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3271 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3273,c,av);}
/* chicken-ffi-syntax.scm:179: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[54];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a3274 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3275(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3275,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3279,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:184: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[54];
av2[3]=t2;
av2[4]=lf[58];
tp(5,av2);}}

/* k3277 in a3274 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3279,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3282,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:185: chicken.base#gensym */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[57];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3280 in k3277 in a3274 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3282(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_3282,c,av);}
a=C_alloc(22);
t2=((C_word*)t0)[2];
t3=C_i_cadr(((C_word*)t2)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3292,a[2]=t1,a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_i_caddr(((C_word*)t2)[2]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3316,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t3))){
t7=t4;
f_3292(t7,C_a_i_list(&a,4,lf[18],t1,t5,t3));}
else{
if(C_truep(C_i_symbolp(t3))){
/* chicken-ffi-syntax.scm:191: scheme#symbol->string */
t7=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
/* chicken-ffi-syntax.scm:193: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t6;
av2[2]=lf[54];
av2[3]=lf[56];
av2[4]=t3;
tp(5,av2);}}}}

/* k3290 in k3280 in k3277 in a3274 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_3292(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3292,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3304,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:198: chicken.syntax#strip-syntax */
t4=C_fast_retrieve(lf[12]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3298 in k3290 in k3280 in k3277 in a3274 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_3300,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[8],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[21],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3302 in k3290 in k3280 in k3277 in a3274 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3304,c,av);}
/* chicken-ffi-syntax.scm:197: chicken.compiler.support#foreign-type->scrutiny-type */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[11];
tp(4,av2);}}

/* k3314 in k3280 in k3277 in a3274 in k2733 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_3316,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
f_3292(t2,C_a_i_list(&a,4,lf[18],((C_word*)t0)[3],((C_word*)t0)[4],t1));}

/* k3337 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3339,c,av);}
/* chicken-ffi-syntax.scm:164: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[60];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3341(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3341,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3345,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:169: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[60];
av2[3]=t2;
av2[4]=lf[72];
tp(5,av2);}}

/* k3343 in a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3345,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3348,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:170: chicken.base#gensym */
t3=*((C_word*)lf[27]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[71];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3346 in k3343 in a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3348,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3363,a[2]=C_SCHEME_UNDEFINED,a[3]=t1,a[4]=((C_word*)t2)[2],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t2)[3],tmp=(C_word)a,a+=7,tmp);
/* chicken-ffi-syntax.scm:172: r */
t4=((C_word*)t2)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[59];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3361 in k3346 in k3343 in a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3363,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3371,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:174: scheme#open-output-string */
t4=C_fast_retrieve(lf[70]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3369 in k3361 in k3346 in k3343 in a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3371,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=C_i_check_port_2(((C_word*)t2)[5],C_fix(2),C_SCHEME_TRUE,lf[61]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3377,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t6=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[69];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k3375 in k3369 in k3361 in k3346 in k3343 in a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3377,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3380,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t4=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3378 in k3375 in k3369 in k3361 in k3346 in k3343 in a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3380,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3383,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t4=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[68];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3381 in k3378 in k3375 in k3369 in k3361 in k3346 in k3343 in a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3383,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3386,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3396,a[2]=t3,a[3]=((C_word*)t2)[5],tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:176: chicken.string#string-intersperse */
t5=C_fast_retrieve(lf[66]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_cdr(((C_word*)t2)[6]);
av2[3]=lf[67];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3384 in k3381 in k3378 in k3375 in k3369 in k3361 in k3346 in k3343 in a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3386,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3389,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:174: ##sys#print */
t3=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[65];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3387 in k3384 in k3381 in k3378 in k3375 in k3369 in k3361 in k3346 in k3343 in a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3389,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3392,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:174: scheme#get-output-string */
t4=C_fast_retrieve(lf[63]);{
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

/* k3390 in k3387 in k3384 in k3381 in k3378 in k3375 in k3369 in k3361 in k3346 in k3343 in a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 in ... */
static void C_ccall f_3392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_3392,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,lf[51],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,lf[62],((C_word*)t0)[3]);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[21],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3394 in k3381 in k3378 in k3375 in k3369 in k3361 in k3346 in k3343 in a3340 in k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3396,c,av);}
/* chicken-ffi-syntax.scm:174: ##sys#print */
t2=*((C_word*)lf[64]+1);{
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
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3406 in k2730 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_3408,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[59],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3339,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3341,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:167: compiler-only-er-transformer */
f_2697(t4,t5);}

/* k3410 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3412,c,av);}
/* chicken-ffi-syntax.scm:128: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[74];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3414(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3414,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3418,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:133: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[74];
av2[3]=t2;
av2[4]=lf[79];
tp(5,av2);}}

/* k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3418(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_3418,c,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3427,a[2]=((C_word*)t0)[3],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp);
t10=C_i_check_list_2(t2,lf[6]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3441,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3539,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li28),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_3539(t15,t11,t2);}

/* g737 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_3427(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3427,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3435,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:136: chicken.base#gensym */
t4=*((C_word*)lf[27]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3433 in g737 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3435,c,av);}
t2=((C_word*)t0)[2];
/* chicken-ffi-syntax.scm:136: r */
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

/* k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3441(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_3441,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3516,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list(&a,1,t1);
if(C_truep(C_i_nullp(t4))){
t5=C_i_check_list_2(((C_word*)t0)[4],lf[77]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1629,a[2]=t3,a[3]=t7,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1629(t9,t2,((C_word*)t0)[4]);}
else{
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1669,a[2]=t7,a[3]=t3,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1669(t9,t2,t5);}}

/* k3446 in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3448,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3454,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3454(t6,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k3450 in k3446 in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3452,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[75],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k3446 in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_3454(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3454,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[75],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3477,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:149: loop */
t8=t6;
t9=C_u_i_cdr(t2);
t10=C_u_i_cdr(t3);
t1=t8;
t2=t9;
t3=t10;
goto loop;}}

/* k3475 in loop in k3446 in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_3477,c,av);}
a=C_alloc(15);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(3),t2);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_cadr(((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,5,lf[76],t4,t5,((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_cadr(((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,4,lf[76],t4,t5,t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* a3515 in k3439 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3516(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3516,c,av);}
a=C_alloc(6);
t4=C_i_cddr(t2);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_cdr(t2);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list1(&a,1,t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* map-loop731 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_3539(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3539,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3564,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:136: g737 */
t4=((C_word*)t0)[4];
f_3427(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3562 in map-loop731 in k3416 in a3413 in k2727 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3564,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3539(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k3577 in k3659 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3579,c,av);}
/* chicken-ffi-syntax.scm:111: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[81];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a3580 in k3659 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3581(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3581,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3585,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:116: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[81];
av2[3]=t2;
av2[4]=lf[84];
tp(5,av2);}}

/* k3583 in a3580 in k3659 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3585(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3585,c,av);}
a=C_alloc(11);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t6));
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3600,a[2]=t2,a[3]=t3,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3647,a[2]=((C_word*)t0)[4],a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:120: chicken.base#gensym */
t11=*((C_word*)lf[27]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* k3598 in k3583 in a3580 in k3659 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3600,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=8,tmp);
/* chicken-ffi-syntax.scm:121: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[80];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k3605 in k3598 in k3583 in a3580 in k3659 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3607,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+7,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3643,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:122: scheme#symbol->string */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3641 in k3605 in k3598 in k3583 in a3580 in k3659 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3643(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(48,c,1)))){
C_save_and_reclaim((void *)f_3643,c,av);}
a=C_alloc(48);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,4,lf[18],((C_word*)t2)[2],((C_word*)t2)[3],t1);
t4=C_a_i_list(&a,5,lf[82],((C_word*)t2)[2],((C_word*)t2)[3],C_SCHEME_FALSE,((C_word*)t2)[4]);
if(C_truep(C_i_pairp(((C_word*)t2)[5]))){
t5=C_u_i_car(((C_word*)t2)[5]);
t6=C_a_i_list(&a,3,lf[83],((C_word*)t2)[2],t5);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_cons(&a,2,t4,t7);
t9=C_a_i_cons(&a,2,t3,t8);
t10=((C_word*)t2)[6];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_cons(&a,2,((C_word*)t2)[7],t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_a_i_cons(&a,2,t3,t5);
t7=((C_word*)t2)[6];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_cons(&a,2,((C_word*)t2)[7],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3645 in k3583 in a3580 in k3659 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3647,c,av);}
/* chicken-ffi-syntax.scm:120: r */
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

/* k3659 in k2724 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_3661,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,lf[80],t1);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3579,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3581,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:114: compiler-only-er-transformer */
f_2697(t4,t5);}

/* k3663 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3665,c,av);}
/* chicken-ffi-syntax.scm:103: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[85];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a3666 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3667(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3667,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3671,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-ffi-syntax.scm:108: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t5;
av2[2]=lf[85];
av2[3]=t2;
av2[4]=lf[87];
tp(5,av2);}}

/* k3669 in a3666 in k2721 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3671,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[86],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3684 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3686,c,av);}
/* chicken-ffi-syntax.scm:64: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[90];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a3687 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3688(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3688,c,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_stringp(C_u_i_car(t5)):C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3698,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_not(t7))){
t9=C_i_pairp(t5);
t10=t8;
f_3698(t10,(C_truep(t9)?C_i_symbolp(C_u_i_car(t5)):C_SCHEME_FALSE));}
else{
t9=t8;
f_3698(t9,C_SCHEME_FALSE);}}

/* k3696 in a3687 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_3698(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3698,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:75: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t2;
av2[2]=lf[90];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[91];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3761,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* chicken-ffi-syntax.scm:85: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t2;
av2[2]=lf[90];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[95];
tp(5,av2);}}
else{
/* chicken-ffi-syntax.scm:86: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t2;
av2[2]=lf[90];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[96];
tp(5,av2);}}}}

/* k3702 in k3696 in a3687 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3704,c,av);}
a=C_alloc(5);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3714,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-ffi-syntax.scm:77: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[80];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3712 in k3702 in k3696 in a3687 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3714(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_3714,c,av);}
a=C_alloc(42);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[18],((C_word*)t0)[3],t2);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_car(t4);
t6=C_a_i_list(&a,4,lf[82],((C_word*)t0)[3],t5,C_SCHEME_TRUE);
t7=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(C_u_i_cdr(t7)))){
t8=C_i_caddr(((C_word*)t0)[2]);
t9=C_a_i_list(&a,3,lf[83],((C_word*)t0)[3],t8);
t10=C_a_i_list(&a,1,t9);
t11=C_a_i_cons(&a,2,t6,t10);
t12=C_a_i_cons(&a,2,t3,t11);
t13=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_cons(&a,2,t1,t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t8=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t9=C_a_i_cons(&a,2,t3,t8);
t10=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_cons(&a,2,t1,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* k3759 in k3696 in a3687 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3761(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3761,c,av);}
a=C_alloc(3);
t2=(C_truep(((C_word*)t0)[3])?C_i_cadr(((C_word*)t0)[4]):C_i_car(((C_word*)t0)[4]));
t3=C_mutate(((C_word *)t0)+2,t2);
t4=C_i_cdr(((C_word*)t0)[2]);
t5=C_mutate(((C_word *)t0)+5,t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3774,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:89: r */
t7=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[88];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k3772 in k3759 in k3696 in a3687 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3774(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_3774,c,av);}
a=C_alloc(37);
t2=((C_word*)t0)[2];
t3=C_u_i_car(((C_word*)t2)[2]);
t4=C_u_i_car(((C_word*)t2)[2]);
t5=C_a_i_list(&a,2,lf[92],t4);
t6=(C_truep(((C_word*)t2)[3])?C_i_car(((C_word*)t2)[4]):lf[93]);
t7=(C_truep(((C_word*)t2)[3])?C_i_caddr(((C_word*)t2)[4]):C_i_cadr(((C_word*)t2)[4]));
t8=C_a_i_list(&a,2,lf[92],t7);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=C_i_check_list_2(((C_word*)t2)[5],lf[6]);
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3879,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=t5,a[5]=t6,a[6]=t8,a[7]=((C_word*)t2)[6],a[8]=t1,a[9]=t3,a[10]=((C_word*)t2)[5],a[11]=((C_word*)t2)[7],tmp=(C_word)a,a+=12,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3881,a[2]=t11,a[3]=t16,a[4]=t12,a[5]=((C_word)li33),tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_3881(t18,t14,((C_word*)t2)[5]);}

/* k3802 in k3877 in k3772 in k3759 in k3696 in a3687 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3804(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_3804,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3832,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3832(t10,t6,((C_word*)t0)[11]);}

/* k3818 in k3802 in k3877 in k3772 in k3759 in k3696 in a3687 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_3820,c,av);}
a=C_alloc(33);
t2=(C_truep(((C_word*)t0)[2])?C_i_cdddr(((C_word*)t0)[3]):C_i_cddr(((C_word*)t0)[3]));
t3=C_a_i_cons(&a,2,t1,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,6,lf[94],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],t4);
t6=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[10],((C_word*)t0)[11],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop669 in k3802 in k3877 in k3772 in k3759 in k3696 in a3687 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_3832(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3832,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* k3877 in k3772 in k3759 in k3696 in a3687 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3879,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,lf[92],t1);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-ffi-syntax.scm:95: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[89];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* map-loop642 in k3772 in k3759 in k3696 in a3687 in k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void f_3881(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3881,3,t0,t1,t2);}
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

/* k3976 in k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,5)))){
C_save_and_reclaim((void *)f_3978,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,lf[89],t1);
t3=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3686,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3688,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:69: compiler-only-er-transformer */
f_2697(t4,t5);}

/* k3980 in k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3982,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,lf[80],t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3978,a[2]=((C_word*)t2)[2],a[3]=t3,a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-ffi-syntax.scm:68: chicken.base#alist-ref */
t5=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[89];
av2[3]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3984 in k2693 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3986,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[88],t1);
t3=C_mutate(((C_word *)t0)+2,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3982,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-ffi-syntax.scm:67: chicken.base#alist-ref */
t5=*((C_word*)lf[73]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[80];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_chicken_2dffi_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("chicken-ffi-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_chicken_2dffi_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1118))){
C_save(t1);
C_rereclaim2(1118*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,98);
lf[0]=C_h_intern(&lf[0],18, C_text("chicken-ffi-syntax"));
lf[1]=C_h_intern(&lf[1],18, C_text("##sys#syntax-error"));
lf[2]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\055\124\150\145\040\106\106\111\040\151\163\040\156\157\164\040\163\165\160\160\157\162\164\145\144\040\151\156\040\151\156\164\145\162\160\162\145\164\145\144\040\155\157\144\145\000"));
lf[3]=C_h_intern(&lf[3],25, C_text("chicken.platform#feature?"));
lf[4]=C_h_intern(&lf[4],9, C_text("compiling"));
lf[5]=C_h_intern(&lf[5],20, C_text("##sys#er-transformer"));
lf[6]=C_h_intern(&lf[6],3, C_text("map"));
lf[7]=C_h_intern(&lf[7],9, C_text("procedure"));
lf[8]=C_h_intern(&lf[8],10, C_text("##core#the"));
lf[9]=C_h_intern(&lf[9],1, C_text("*"));
lf[10]=C_h_intern(&lf[10],52, C_text("chicken.compiler.support#foreign-type->scrutiny-type"));
lf[11]=C_h_intern(&lf[11],6, C_text("result"));
lf[12]=C_h_intern(&lf[12],27, C_text("chicken.syntax#strip-syntax"));
lf[13]=C_h_intern(&lf[13],3, C_text("arg"));
lf[14]=C_h_intern(&lf[14],35, C_text("##sys#chicken-ffi-macro-environment"));
lf[15]=C_h_intern(&lf[15],29, C_text("chicken.internal#macro-subset"));
lf[16]=C_h_intern(&lf[16],30, C_text("##sys#extend-macro-environment"));
lf[17]=C_h_intern(&lf[17],17, C_text("foreign-type-size"));
lf[18]=C_h_intern(&lf[18],30, C_text("##core#define-foreign-variable"));
lf[19]=C_h_intern(&lf[19],6, C_text("size_t"));
lf[20]=C_h_intern(&lf[20],6, C_text("fixnum"));
lf[21]=C_h_intern(&lf[21],12, C_text("##core#begin"));
lf[22]=C_h_intern(&lf[22],20, C_text("scheme#string-append"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\163\151\172\145\157\146\050\000"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\051\000"));
lf[25]=C_h_intern(&lf[25],51, C_text("chicken.compiler.c-backend#foreign-type-declaration"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[27]=C_h_intern(&lf[27],19, C_text("chicken.base#gensym"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\143\157\144\145\137\000"));
lf[29]=C_h_intern(&lf[29],18, C_text("##sys#check-syntax"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[31]=C_h_intern(&lf[31],20, C_text("foreign-safe-lambda*"));
lf[32]=C_h_intern(&lf[32],27, C_text("##core#foreign-safe-lambda*"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[34]=C_h_intern(&lf[34],19, C_text("foreign-safe-lambda"));
lf[35]=C_h_intern(&lf[35],26, C_text("##core#foreign-safe-lambda"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[37]=C_h_intern(&lf[37],15, C_text("foreign-lambda*"));
lf[38]=C_h_intern(&lf[38],22, C_text("##core#foreign-lambda*"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[40]=C_h_intern(&lf[40],14, C_text("foreign-lambda"));
lf[41]=C_h_intern(&lf[41],21, C_text("##core#foreign-lambda"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[43]=C_h_intern(&lf[43],17, C_text("foreign-primitive"));
lf[44]=C_h_intern(&lf[44],24, C_text("##core#foreign-primitive"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[46]=C_h_intern(&lf[46],23, C_text("define-foreign-variable"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\003\376\001\000\000\006\001\163\164\162\151\156\147\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[48]=C_h_intern(&lf[48],19, C_text("define-foreign-type"));
lf[49]=C_h_intern(&lf[49],26, C_text("##core#define-foreign-type"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\003\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\377\001\000\000\000\002"));
lf[51]=C_h_intern(&lf[51],15, C_text("foreign-declare"));
lf[52]=C_h_intern(&lf[52],14, C_text("##core#declare"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\001\000\000\000\000"));
lf[54]=C_h_intern(&lf[54],13, C_text("foreign-value"));
lf[55]=C_h_intern(&lf[55],21, C_text("scheme#symbol->string"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\053\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\163\164\162\151\156\147\040\157\162\040\163\171\155\142\157\154\000"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\143\157\144\145\137\000"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[59]=C_h_intern(&lf[59],7, C_text("declare"));
lf[60]=C_h_intern(&lf[60],12, C_text("foreign-code"));
lf[61]=C_h_intern(&lf[61],6, C_text("format"));
lf[62]=C_h_intern(&lf[62],13, C_text("##core#inline"));
lf[63]=C_h_intern(&lf[63],24, C_text("scheme#get-output-string"));
lf[64]=C_h_intern(&lf[64],11, C_text("##sys#print"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\012\073\040\162\145\164\165\162\156\040\103\137\123\103\110\105\115\105\137\125\116\104\105\106\111\116\105\104\073\040\175\012\000"));
lf[66]=C_h_intern(&lf[66],33, C_text("chicken.string#string-intersperse"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\012\000"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\050\051\040\173\040\000"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\163\164\141\164\151\143\040\103\137\167\157\162\144\040\000"));
lf[70]=C_h_intern(&lf[70],25, C_text("scheme#open-output-string"));
lf[71]=C_h_intern(&lf[71],5, C_text("code_"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\001\000\000\000\000"));
lf[73]=C_h_intern(&lf[73],22, C_text("chicken.base#alist-ref"));
lf[74]=C_h_intern(&lf[74],12, C_text("let-location"));
lf[75]=C_h_intern(&lf[75],10, C_text("##core#let"));
lf[76]=C_h_intern(&lf[76],19, C_text("##core#let-location"));
lf[77]=C_h_intern(&lf[77],5, C_text("foldr"));
lf[78]=C_h_intern(&lf[78],13, C_text("scheme#append"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\003\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\377\001\000\000\000\001\376\377\001\000\000\000\000\376\001\000\000\001\001\137"));
lf[80]=C_h_intern(&lf[80],5, C_text("begin"));
lf[81]=C_h_intern(&lf[81],15, C_text("define-location"));
lf[82]=C_h_intern(&lf[82],31, C_text("##core#define-external-variable"));
lf[83]=C_h_intern(&lf[83],11, C_text("##core#set!"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\003\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[85]=C_h_intern(&lf[85],8, C_text("location"));
lf[86]=C_h_intern(&lf[86],15, C_text("##core#location"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001\154\157\143\141\164\151\157\156\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[88]=C_h_intern(&lf[88],6, C_text("define"));
lf[89]=C_h_intern(&lf[89],6, C_text("lambda"));
lf[90]=C_h_intern(&lf[90],15, C_text("define-external"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\003\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[92]=C_h_intern(&lf[92],12, C_text("##core#quote"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[94]=C_h_intern(&lf[94],31, C_text("##core#foreign-callback-wrapper"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\016\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[97]=C_h_intern(&lf[97],23, C_text("##sys#macro-environment"));
C_register_lf2(lf,98,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1401,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[147] = {
{C_text("f_1401:chicken_2dffi_2dsyntax_2escm"),(void*)f_1401},
{C_text("f_1404:chicken_2dffi_2dsyntax_2escm"),(void*)f_1404},
{C_text("f_1407:chicken_2dffi_2dsyntax_2escm"),(void*)f_1407},
{C_text("f_1410:chicken_2dffi_2dsyntax_2escm"),(void*)f_1410},
{C_text("f_1413:chicken_2dffi_2dsyntax_2escm"),(void*)f_1413},
{C_text("f_1629:chicken_2dffi_2dsyntax_2escm"),(void*)f_1629},
{C_text("f_1637:chicken_2dffi_2dsyntax_2escm"),(void*)f_1637},
{C_text("f_1645:chicken_2dffi_2dsyntax_2escm"),(void*)f_1645},
{C_text("f_1656:chicken_2dffi_2dsyntax_2escm"),(void*)f_1656},
{C_text("f_1669:chicken_2dffi_2dsyntax_2escm"),(void*)f_1669},
{C_text("f_1683:chicken_2dffi_2dsyntax_2escm"),(void*)f_1683},
{C_text("f_1687:chicken_2dffi_2dsyntax_2escm"),(void*)f_1687},
{C_text("f_1699:chicken_2dffi_2dsyntax_2escm"),(void*)f_1699},
{C_text("f_1701:chicken_2dffi_2dsyntax_2escm"),(void*)f_1701},
{C_text("f_1748:chicken_2dffi_2dsyntax_2escm"),(void*)f_1748},
{C_text("f_1750:chicken_2dffi_2dsyntax_2escm"),(void*)f_1750},
{C_text("f_1790:chicken_2dffi_2dsyntax_2escm"),(void*)f_1790},
{C_text("f_1824:chicken_2dffi_2dsyntax_2escm"),(void*)f_1824},
{C_text("f_2695:chicken_2dffi_2dsyntax_2escm"),(void*)f_2695},
{C_text("f_2697:chicken_2dffi_2dsyntax_2escm"),(void*)f_2697},
{C_text("f_2703:chicken_2dffi_2dsyntax_2escm"),(void*)f_2703},
{C_text("f_2710:chicken_2dffi_2dsyntax_2escm"),(void*)f_2710},
{C_text("f_2723:chicken_2dffi_2dsyntax_2escm"),(void*)f_2723},
{C_text("f_2726:chicken_2dffi_2dsyntax_2escm"),(void*)f_2726},
{C_text("f_2729:chicken_2dffi_2dsyntax_2escm"),(void*)f_2729},
{C_text("f_2732:chicken_2dffi_2dsyntax_2escm"),(void*)f_2732},
{C_text("f_2735:chicken_2dffi_2dsyntax_2escm"),(void*)f_2735},
{C_text("f_2738:chicken_2dffi_2dsyntax_2escm"),(void*)f_2738},
{C_text("f_2741:chicken_2dffi_2dsyntax_2escm"),(void*)f_2741},
{C_text("f_2743:chicken_2dffi_2dsyntax_2escm"),(void*)f_2743},
{C_text("f_2755:chicken_2dffi_2dsyntax_2escm"),(void*)f_2755},
{C_text("f_2761:chicken_2dffi_2dsyntax_2escm"),(void*)f_2761},
{C_text("f_2764:chicken_2dffi_2dsyntax_2escm"),(void*)f_2764},
{C_text("f_2770:chicken_2dffi_2dsyntax_2escm"),(void*)f_2770},
{C_text("f_2813:chicken_2dffi_2dsyntax_2escm"),(void*)f_2813},
{C_text("f_2815:chicken_2dffi_2dsyntax_2escm"),(void*)f_2815},
{C_text("f_2840:chicken_2dffi_2dsyntax_2escm"),(void*)f_2840},
{C_text("f_2850:chicken_2dffi_2dsyntax_2escm"),(void*)f_2850},
{C_text("f_2853:chicken_2dffi_2dsyntax_2escm"),(void*)f_2853},
{C_text("f_2856:chicken_2dffi_2dsyntax_2escm"),(void*)f_2856},
{C_text("f_2859:chicken_2dffi_2dsyntax_2escm"),(void*)f_2859},
{C_text("f_2862:chicken_2dffi_2dsyntax_2escm"),(void*)f_2862},
{C_text("f_2865:chicken_2dffi_2dsyntax_2escm"),(void*)f_2865},
{C_text("f_2868:chicken_2dffi_2dsyntax_2escm"),(void*)f_2868},
{C_text("f_2871:chicken_2dffi_2dsyntax_2escm"),(void*)f_2871},
{C_text("f_2874:chicken_2dffi_2dsyntax_2escm"),(void*)f_2874},
{C_text("f_2878:chicken_2dffi_2dsyntax_2escm"),(void*)f_2878},
{C_text("f_2880:chicken_2dffi_2dsyntax_2escm"),(void*)f_2880},
{C_text("f_2884:chicken_2dffi_2dsyntax_2escm"),(void*)f_2884},
{C_text("f_2887:chicken_2dffi_2dsyntax_2escm"),(void*)f_2887},
{C_text("f_2890:chicken_2dffi_2dsyntax_2escm"),(void*)f_2890},
{C_text("f_2893:chicken_2dffi_2dsyntax_2escm"),(void*)f_2893},
{C_text("f_2908:chicken_2dffi_2dsyntax_2escm"),(void*)f_2908},
{C_text("f_2922:chicken_2dffi_2dsyntax_2escm"),(void*)f_2922},
{C_text("f_2924:chicken_2dffi_2dsyntax_2escm"),(void*)f_2924},
{C_text("f_2928:chicken_2dffi_2dsyntax_2escm"),(void*)f_2928},
{C_text("f_2948:chicken_2dffi_2dsyntax_2escm"),(void*)f_2948},
{C_text("f_2954:chicken_2dffi_2dsyntax_2escm"),(void*)f_2954},
{C_text("f_2994:chicken_2dffi_2dsyntax_2escm"),(void*)f_2994},
{C_text("f_2996:chicken_2dffi_2dsyntax_2escm"),(void*)f_2996},
{C_text("f_3000:chicken_2dffi_2dsyntax_2escm"),(void*)f_3000},
{C_text("f_3022:chicken_2dffi_2dsyntax_2escm"),(void*)f_3022},
{C_text("f_3024:chicken_2dffi_2dsyntax_2escm"),(void*)f_3024},
{C_text("f_3028:chicken_2dffi_2dsyntax_2escm"),(void*)f_3028},
{C_text("f_3048:chicken_2dffi_2dsyntax_2escm"),(void*)f_3048},
{C_text("f_3054:chicken_2dffi_2dsyntax_2escm"),(void*)f_3054},
{C_text("f_3094:chicken_2dffi_2dsyntax_2escm"),(void*)f_3094},
{C_text("f_3096:chicken_2dffi_2dsyntax_2escm"),(void*)f_3096},
{C_text("f_3100:chicken_2dffi_2dsyntax_2escm"),(void*)f_3100},
{C_text("f_3122:chicken_2dffi_2dsyntax_2escm"),(void*)f_3122},
{C_text("f_3124:chicken_2dffi_2dsyntax_2escm"),(void*)f_3124},
{C_text("f_3128:chicken_2dffi_2dsyntax_2escm"),(void*)f_3128},
{C_text("f_3131:chicken_2dffi_2dsyntax_2escm"),(void*)f_3131},
{C_text("f_3146:chicken_2dffi_2dsyntax_2escm"),(void*)f_3146},
{C_text("f_3157:chicken_2dffi_2dsyntax_2escm"),(void*)f_3157},
{C_text("f_3218:chicken_2dffi_2dsyntax_2escm"),(void*)f_3218},
{C_text("f_3220:chicken_2dffi_2dsyntax_2escm"),(void*)f_3220},
{C_text("f_3224:chicken_2dffi_2dsyntax_2escm"),(void*)f_3224},
{C_text("f_3235:chicken_2dffi_2dsyntax_2escm"),(void*)f_3235},
{C_text("f_3237:chicken_2dffi_2dsyntax_2escm"),(void*)f_3237},
{C_text("f_3241:chicken_2dffi_2dsyntax_2escm"),(void*)f_3241},
{C_text("f_3252:chicken_2dffi_2dsyntax_2escm"),(void*)f_3252},
{C_text("f_3254:chicken_2dffi_2dsyntax_2escm"),(void*)f_3254},
{C_text("f_3258:chicken_2dffi_2dsyntax_2escm"),(void*)f_3258},
{C_text("f_3273:chicken_2dffi_2dsyntax_2escm"),(void*)f_3273},
{C_text("f_3275:chicken_2dffi_2dsyntax_2escm"),(void*)f_3275},
{C_text("f_3279:chicken_2dffi_2dsyntax_2escm"),(void*)f_3279},
{C_text("f_3282:chicken_2dffi_2dsyntax_2escm"),(void*)f_3282},
{C_text("f_3292:chicken_2dffi_2dsyntax_2escm"),(void*)f_3292},
{C_text("f_3300:chicken_2dffi_2dsyntax_2escm"),(void*)f_3300},
{C_text("f_3304:chicken_2dffi_2dsyntax_2escm"),(void*)f_3304},
{C_text("f_3316:chicken_2dffi_2dsyntax_2escm"),(void*)f_3316},
{C_text("f_3339:chicken_2dffi_2dsyntax_2escm"),(void*)f_3339},
{C_text("f_3341:chicken_2dffi_2dsyntax_2escm"),(void*)f_3341},
{C_text("f_3345:chicken_2dffi_2dsyntax_2escm"),(void*)f_3345},
{C_text("f_3348:chicken_2dffi_2dsyntax_2escm"),(void*)f_3348},
{C_text("f_3363:chicken_2dffi_2dsyntax_2escm"),(void*)f_3363},
{C_text("f_3371:chicken_2dffi_2dsyntax_2escm"),(void*)f_3371},
{C_text("f_3377:chicken_2dffi_2dsyntax_2escm"),(void*)f_3377},
{C_text("f_3380:chicken_2dffi_2dsyntax_2escm"),(void*)f_3380},
{C_text("f_3383:chicken_2dffi_2dsyntax_2escm"),(void*)f_3383},
{C_text("f_3386:chicken_2dffi_2dsyntax_2escm"),(void*)f_3386},
{C_text("f_3389:chicken_2dffi_2dsyntax_2escm"),(void*)f_3389},
{C_text("f_3392:chicken_2dffi_2dsyntax_2escm"),(void*)f_3392},
{C_text("f_3396:chicken_2dffi_2dsyntax_2escm"),(void*)f_3396},
{C_text("f_3408:chicken_2dffi_2dsyntax_2escm"),(void*)f_3408},
{C_text("f_3412:chicken_2dffi_2dsyntax_2escm"),(void*)f_3412},
{C_text("f_3414:chicken_2dffi_2dsyntax_2escm"),(void*)f_3414},
{C_text("f_3418:chicken_2dffi_2dsyntax_2escm"),(void*)f_3418},
{C_text("f_3427:chicken_2dffi_2dsyntax_2escm"),(void*)f_3427},
{C_text("f_3435:chicken_2dffi_2dsyntax_2escm"),(void*)f_3435},
{C_text("f_3441:chicken_2dffi_2dsyntax_2escm"),(void*)f_3441},
{C_text("f_3448:chicken_2dffi_2dsyntax_2escm"),(void*)f_3448},
{C_text("f_3452:chicken_2dffi_2dsyntax_2escm"),(void*)f_3452},
{C_text("f_3454:chicken_2dffi_2dsyntax_2escm"),(void*)f_3454},
{C_text("f_3477:chicken_2dffi_2dsyntax_2escm"),(void*)f_3477},
{C_text("f_3516:chicken_2dffi_2dsyntax_2escm"),(void*)f_3516},
{C_text("f_3539:chicken_2dffi_2dsyntax_2escm"),(void*)f_3539},
{C_text("f_3564:chicken_2dffi_2dsyntax_2escm"),(void*)f_3564},
{C_text("f_3579:chicken_2dffi_2dsyntax_2escm"),(void*)f_3579},
{C_text("f_3581:chicken_2dffi_2dsyntax_2escm"),(void*)f_3581},
{C_text("f_3585:chicken_2dffi_2dsyntax_2escm"),(void*)f_3585},
{C_text("f_3600:chicken_2dffi_2dsyntax_2escm"),(void*)f_3600},
{C_text("f_3607:chicken_2dffi_2dsyntax_2escm"),(void*)f_3607},
{C_text("f_3643:chicken_2dffi_2dsyntax_2escm"),(void*)f_3643},
{C_text("f_3647:chicken_2dffi_2dsyntax_2escm"),(void*)f_3647},
{C_text("f_3661:chicken_2dffi_2dsyntax_2escm"),(void*)f_3661},
{C_text("f_3665:chicken_2dffi_2dsyntax_2escm"),(void*)f_3665},
{C_text("f_3667:chicken_2dffi_2dsyntax_2escm"),(void*)f_3667},
{C_text("f_3671:chicken_2dffi_2dsyntax_2escm"),(void*)f_3671},
{C_text("f_3686:chicken_2dffi_2dsyntax_2escm"),(void*)f_3686},
{C_text("f_3688:chicken_2dffi_2dsyntax_2escm"),(void*)f_3688},
{C_text("f_3698:chicken_2dffi_2dsyntax_2escm"),(void*)f_3698},
{C_text("f_3704:chicken_2dffi_2dsyntax_2escm"),(void*)f_3704},
{C_text("f_3714:chicken_2dffi_2dsyntax_2escm"),(void*)f_3714},
{C_text("f_3761:chicken_2dffi_2dsyntax_2escm"),(void*)f_3761},
{C_text("f_3774:chicken_2dffi_2dsyntax_2escm"),(void*)f_3774},
{C_text("f_3804:chicken_2dffi_2dsyntax_2escm"),(void*)f_3804},
{C_text("f_3820:chicken_2dffi_2dsyntax_2escm"),(void*)f_3820},
{C_text("f_3832:chicken_2dffi_2dsyntax_2escm"),(void*)f_3832},
{C_text("f_3879:chicken_2dffi_2dsyntax_2escm"),(void*)f_3879},
{C_text("f_3881:chicken_2dffi_2dsyntax_2escm"),(void*)f_3881},
{C_text("f_3978:chicken_2dffi_2dsyntax_2escm"),(void*)f_3978},
{C_text("f_3982:chicken_2dffi_2dsyntax_2escm"),(void*)f_3982},
{C_text("f_3986:chicken_2dffi_2dsyntax_2escm"),(void*)f_3986},
{C_text("toplevel:chicken_2dffi_2dsyntax_2escm"),(void*)C_chicken_2dffi_2dsyntax_toplevel},
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
S|  chicken.format#sprintf		1
S|  chicken.base#foldl		3
S|  scheme#map		10
S|  chicken.base#foldr		3
o|eliminated procedure checks: 114 
o|specializations:
o|  1 (##sys#check-output-port * * *)
o|  1 (scheme#= fixnum fixnum)
o|  1 (scheme#cdddr (pair * (pair * pair)))
o|  3 (scheme#cddr (pair * pair))
o|  5 (scheme#cadr (pair * pair))
o|  1 (scheme#eqv? * *)
o|  4 (##sys#check-list (or pair list) *)
o|  25 (scheme#cdr pair)
o|  12 (scheme#car pair)
(o e)|safe calls: 387 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: split-at 
o|inlining procedure: k1795 
o|inlining procedure: k1795 
o|inlining procedure: k1826 
o|inlining procedure: k1826 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k2043 
o|inlining procedure: k2043 
o|inlining procedure: k2035 
o|inlining procedure: k2035 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k2434 
o|inlining procedure: k2434 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k2705 
o|inlining procedure: k2705 
o|inlining procedure: k2765 
o|inlining procedure: k2765 
o|inlining procedure: k2783 
o|inlining procedure: k2783 
o|inlining procedure: k2817 
o|contracted procedure: "(chicken-ffi-syntax.scm:217) g837846" 
o|propagated global variable: g854855 chicken.compiler.support#foreign-type->scrutiny-type 
o|inlining procedure: k2817 
o|inlining procedure: k2956 
o|inlining procedure: k2956 
o|inlining procedure: k3056 
o|inlining procedure: k3056 
o|inlining procedure: k3159 
o|inlining procedure: k3159 
o|inlining procedure: k3314 
o|inlining procedure: k3314 
o|substituted constant variable: a3373 
o|substituted constant variable: a3374 
o|removed unused formal parameters: (_748) 
o|inlining procedure: k3456 
o|inlining procedure: k3456 
o|substituted constant variable: a3506 
o|inlining procedure: k3518 
o|inlining procedure: k3518 
o|contracted procedure: "(chicken-ffi-syntax.scm:138) append-map" 
o|inlining procedure: k1616 
o|inlining procedure: k1631 
o|inlining procedure: k1631 
o|inlining procedure: k1616 
o|inlining procedure: k1671 
o|inlining procedure: k1671 
o|inlining procedure: k1703 
o|contracted procedure: "(mini-srfi-1.scm:77) g218227" 
o|inlining procedure: k1703 
o|inlining procedure: k1752 
o|contracted procedure: "(mini-srfi-1.scm:76) g191200" 
o|inlining procedure: k1752 
o|inlining procedure: k3541 
o|removed unused parameter to known procedure: _748 "(chicken-ffi-syntax.scm:136) g737746" 
o|inlining procedure: k3541 
o|inlining procedure: k3625 
o|inlining procedure: k3625 
o|inlining procedure: k3699 
o|inlining procedure: k3732 
o|inlining procedure: k3732 
o|inlining procedure: k3699 
o|inlining procedure: k3822 
o|inlining procedure: k3822 
o|inlining procedure: k3834 
o|contracted procedure: "(chicken-ffi-syntax.scm:96) g675684" 
o|inlining procedure: k3834 
o|inlining procedure: k3883 
o|contracted procedure: "(chicken-ffi-syntax.scm:94) g648657" 
o|inlining procedure: k3883 
o|inlining procedure: k3915 
o|inlining procedure: k3915 
o|inlining procedure: k3944 
o|inlining procedure: k3944 
o|replaced variables: 425 
o|removed binding forms: 139 
o|removed side-effect free assignment to unused variable: filter 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r27844003 
o|substituted constant variable: r27844003 
o|contracted procedure: "(chicken-ffi-syntax.scm:232) every" 
o|converted assignments to bindings: (annotate-foreign-procedure823) 
o|substituted constant variable: r35194020 
o|substituted constant variable: r16324024 
o|substituted constant variable: r16724026 
o|contracted procedure: "(mini-srfi-1.scm:74) any" 
o|substituted constant variable: r18273989 
o|substituted constant variable: r36264036 
o|substituted constant variable: r36264036 
o|substituted constant variable: r37334041 
o|substituted constant variable: r37334041 
o|substituted constant variable: r39454057 
o|converted assignments to bindings: (compiler-only-er-transformer607) 
o|simplifications: ((let . 2)) 
o|replaced variables: 21 
o|removed binding forms: 374 
o|removed call to pure procedure with unused result: "(chicken-ffi-syntax.scm:136) ##sys#slot" 
o|replaced variables: 5 
o|removed binding forms: 32 
o|inlining procedure: "(mini-srfi-1.scm:82) a2798" 
o|contracted procedure: k3566 
o|removed binding forms: 7 
o|replaced variables: 2 
o|removed binding forms: 2 
o|removed binding forms: 2 
o|simplifications: ((if . 10) (let . 11) (##core#call . 220)) 
o|  call simplifications:
o|    scheme#apply
o|    scheme#length
o|    scheme#symbol?	2
o|    scheme#cddr	3
o|    scheme#cdddr	3
o|    scheme#cdr	11
o|    scheme#caddr	9
o|    scheme#cadr	13
o|    scheme#string?	4
o|    ##sys#check-list	8
o|    scheme#pair?	16
o|    scheme#cons	20
o|    ##sys#setslot	9
o|    ##sys#slot	28
o|    scheme#null?	6
o|    scheme#eq?	3
o|    scheme#not	4
o|    scheme#list	2
o|    ##sys#cons	28
o|    ##sys#list	33
o|    scheme#car	16
o|contracted procedure: k2718 
o|contracted procedure: k2745 
o|contracted procedure: k2756 
o|contracted procedure: k2775 
o|contracted procedure: k2783 
o|contracted procedure: k2789 
o|contracted procedure: k2792 
o|contracted procedure: k1792 
o|contracted procedure: k1814 
o|contracted procedure: k1810 
o|contracted procedure: k1801 
o|contracted procedure: k2820 
o|contracted procedure: k2823 
o|contracted procedure: k2826 
o|contracted procedure: k2834 
o|contracted procedure: k2842 
o|contracted procedure: k2898 
o|contracted procedure: k2902 
o|contracted procedure: k2909 
o|contracted procedure: k2916 
o|contracted procedure: k2988 
o|contracted procedure: k2933 
o|contracted procedure: k2937 
o|contracted procedure: k2940 
o|contracted procedure: k2943 
o|contracted procedure: k2950 
o|contracted procedure: k2959 
o|contracted procedure: k2981 
o|contracted procedure: k2977 
o|contracted procedure: k2962 
o|contracted procedure: k2965 
o|contracted procedure: k2973 
o|contracted procedure: k3016 
o|contracted procedure: k3005 
o|contracted procedure: k3009 
o|contracted procedure: k3088 
o|contracted procedure: k3033 
o|contracted procedure: k3037 
o|contracted procedure: k3040 
o|contracted procedure: k3043 
o|contracted procedure: k3050 
o|contracted procedure: k3059 
o|contracted procedure: k3081 
o|contracted procedure: k3077 
o|contracted procedure: k3062 
o|contracted procedure: k3065 
o|contracted procedure: k3073 
o|contracted procedure: k3116 
o|contracted procedure: k3105 
o|contracted procedure: k3109 
o|contracted procedure: k3132 
o|contracted procedure: k3135 
o|contracted procedure: k3138 
o|contracted procedure: k3141 
o|contracted procedure: k3151 
o|contracted procedure: k3162 
o|contracted procedure: k3184 
o|contracted procedure: k3180 
o|contracted procedure: k3165 
o|contracted procedure: k3168 
o|contracted procedure: k3176 
o|contracted procedure: k3212 
o|contracted procedure: k3197 
o|contracted procedure: k3208 
o|contracted procedure: k3204 
o|contracted procedure: k3229 
o|contracted procedure: k3246 
o|contracted procedure: k3267 
o|contracted procedure: k3263 
o|contracted procedure: k3283 
o|contracted procedure: k3294 
o|contracted procedure: k3306 
o|contracted procedure: k3310 
o|contracted procedure: k3317 
o|contracted procedure: k3323 
o|contracted procedure: k3402 
o|contracted procedure: k3333 
o|contracted procedure: k3365 
o|contracted procedure: k3353 
o|contracted procedure: k3357 
o|contracted procedure: k3398 
o|contracted procedure: k3419 
o|contracted procedure: k3424 
o|contracted procedure: k3436 
o|contracted procedure: k3459 
o|contracted procedure: k3466 
o|contracted procedure: k3469 
o|contracted procedure: k3472 
o|contracted procedure: k3508 
o|contracted procedure: k3481 
o|contracted procedure: k3488 
o|contracted procedure: k3492 
o|contracted procedure: k3499 
o|contracted procedure: k3503 
o|contracted procedure: k3535 
o|contracted procedure: k3521 
o|contracted procedure: k3528 
o|contracted procedure: k1619 
o|contracted procedure: k1622 
o|contracted procedure: k1634 
o|contracted procedure: k1650 
o|contracted procedure: k1658 
o|contracted procedure: k1665 
o|contracted procedure: k1689 
o|contracted procedure: k1706 
o|contracted procedure: k1728 
o|contracted procedure: k1724 
o|contracted procedure: k1709 
o|contracted procedure: k1712 
o|contracted procedure: k1720 
o|contracted procedure: k1735 
o|contracted procedure: k1743 
o|contracted procedure: k1755 
o|contracted procedure: k1777 
o|contracted procedure: k1773 
o|contracted procedure: k1758 
o|contracted procedure: k1761 
o|contracted procedure: k1769 
o|contracted procedure: k1829 
o|contracted procedure: k1844 
o|contracted procedure: k1832 
o|contracted procedure: k3544 
o|contracted procedure: k3547 
o|contracted procedure: k3550 
o|contracted procedure: k3558 
o|contracted procedure: k3655 
o|contracted procedure: k3573 
o|contracted procedure: k3586 
o|contracted procedure: k3589 
o|contracted procedure: k3648 
o|contracted procedure: k3595 
o|contracted procedure: k3613 
o|contracted procedure: k3609 
o|contracted procedure: k3621 
o|contracted procedure: k3628 
o|contracted procedure: k3635 
o|contracted procedure: k3625 
o|contracted procedure: k3676 
o|contracted procedure: k3964 
o|contracted procedure: k3968 
o|contracted procedure: k3972 
o|contracted procedure: k3680 
o|contracted procedure: k3690 
o|contracted procedure: k3955 
o|contracted procedure: k3693 
o|contracted procedure: k3705 
o|contracted procedure: k3756 
o|contracted procedure: k3720 
o|contracted procedure: k3716 
o|contracted procedure: k3728 
o|contracted procedure: k3735 
o|contracted procedure: k3746 
o|contracted procedure: k3742 
o|contracted procedure: k3732 
o|contracted procedure: k3762 
o|contracted procedure: k3765 
o|contracted procedure: k3782 
o|contracted procedure: k3786 
o|contracted procedure: k3915 
o|contracted procedure: k3790 
o|contracted procedure: k3866 
o|contracted procedure: k3874 
o|contracted procedure: k3794 
o|contracted procedure: k3810 
o|contracted procedure: k3822 
o|contracted procedure: k3806 
o|contracted procedure: k3798 
o|contracted procedure: k3778 
o|contracted procedure: k3837 
o|contracted procedure: k3859 
o|contracted procedure: k3855 
o|contracted procedure: k3840 
o|contracted procedure: k3843 
o|contracted procedure: k3851 
o|contracted procedure: k3886 
o|contracted procedure: k3908 
o|contracted procedure: k3904 
o|contracted procedure: k3889 
o|contracted procedure: k3892 
o|contracted procedure: k3900 
o|contracted procedure: k3941 
o|contracted procedure: k3947 
o|simplifications: ((let . 39)) 
o|removed binding forms: 182 
o|inlining procedure: k2779 
o|inlining procedure: k2779 
o|inlining procedure: k3617 
o|inlining procedure: k3617 
o|inlining procedure: k3724 
o|inlining procedure: k3724 
o|removed binding forms: 3 
o|direct leaf routine/allocation: loop241 0 
o|direct leaf routine/allocation: loop254 0 
o|converted assignments to bindings: (loop241) 
o|contracted procedure: k1674 
o|converted assignments to bindings: (loop254) 
o|simplifications: ((let . 2)) 
o|removed binding forms: 1 
o|customizable procedures: (k3696 map-loop642660 map-loop669687 g737746 map-loop731749 map-loop185203 map-loop212230 loop181 foldr170173 g175176 loop761 k3290 k3129 map-loop904921 map-loop947964 map-loop9871004 annotate-foreign-procedure823 compiler-only-er-transformer607 map-loop831856 k2768) 
o|shared closure containers: 13 
o|shared closure users: 25 
o|calls to known targets: 56 
o|identified direct recursive calls: f_1790 1 
o|identified direct recursive calls: f_2954 1 
o|identified direct recursive calls: f_3054 1 
o|identified direct recursive calls: f_3157 1 
o|identified direct recursive calls: f_3454 1 
o|identified direct recursive calls: f_1629 1 
o|identified direct recursive calls: f_1824 1 
o|identified direct recursive calls: f_1701 1 
o|identified direct recursive calls: f_1750 1 
o|identified direct recursive calls: f_3832 1 
o|identified direct recursive calls: f_3881 1 
o|fast box initializations: 12 
o|dropping unused closure argument: f_1790 
o|dropping unused closure argument: f_1824 
o|dropping unused closure argument: f_2697 
o|dropping unused closure argument: f_2743 
*/
/* end of file */
