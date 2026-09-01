/* Generated from csc.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: csc.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -no-lambda-info -output-file csc.c
   uses: eval data-structures irregex posix pathname extras file library
*/
#include "chicken.h"

#ifndef STATICBUILD
# define STATIC_CHICKEN 0
#else
# define STATIC_CHICKEN 1
#endif
#ifndef DEBUGBUILD
# define DEBUG_CHICKEN 0
#else
# define DEBUG_CHICKEN 1
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_extern void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_extern void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_extern void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_extern void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[426];
static double C_possibly_force_alignment;


C_noret_decl(f8062)
static void C_ccall f8062(C_word c,C_word *av) C_noret;
C_noret_decl(f8098)
static void C_ccall f8098(C_word c,C_word *av) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word *av) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word *av) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word *av) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word *av) C_noret;
C_noret_decl(f_2170)
static void C_ccall f_2170(C_word c,C_word *av) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word *av) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word *av) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word *av) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word *av) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word *av) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word *av) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198(C_word c,C_word *av) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word *av) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word *av) C_noret;
C_noret_decl(f_2210)
static void C_ccall f_2210(C_word c,C_word *av) C_noret;
C_noret_decl(f_2214)
static void C_ccall f_2214(C_word c,C_word *av) C_noret;
C_noret_decl(f_2218)
static void C_ccall f_2218(C_word c,C_word *av) C_noret;
C_noret_decl(f_2222)
static void C_ccall f_2222(C_word c,C_word *av) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word *av) C_noret;
C_noret_decl(f_2230)
static void C_ccall f_2230(C_word c,C_word *av) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word *av) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word *av) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word *av) C_noret;
C_noret_decl(f_2246)
static void C_ccall f_2246(C_word c,C_word *av) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word *av) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word *av) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word *av) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word *av) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word *av) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word *av) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word *av) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word *av) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word *av) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word *av) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word *av) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word *av) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word *av) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word *av) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word *av) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word *av) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318(C_word c,C_word *av) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word *av) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word *av) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word *av) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word *av) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word *av) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word *av) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word *av) C_noret;
C_noret_decl(f_2863)
static void f_2863(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2869)
static void f_2869(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2883)
static void C_ccall f_2883(C_word c,C_word *av) C_noret;
C_noret_decl(f_2925)
static void f_2925(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word *av) C_noret;
C_noret_decl(f_3000)
static void f_3000(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word *av) C_noret;
C_noret_decl(f_3048)
static void f_3048(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3056)
static C_word f_3056(C_word *a,C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word *av) C_noret;
C_noret_decl(f_3092)
static void f_3092(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word *av) C_noret;
C_noret_decl(f_3108)
static C_word f_3108(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word *av) C_noret;
C_noret_decl(f_3205)
static C_word f_3205(C_word t0);
C_noret_decl(f_3307)
static C_word f_3307(C_word t0,C_word t1);
C_noret_decl(f_3320)
static void f_3320(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word *av) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word *av) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word *av) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word *av) C_noret;
C_noret_decl(f_3745)
static void f_3745(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word *av) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word *av) C_noret;
C_noret_decl(f_3758)
static void C_ccall f_3758(C_word c,C_word *av) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word *av) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word *av) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word *av) C_noret;
C_noret_decl(f_3776)
static void C_ccall f_3776(C_word c,C_word *av) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word *av) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word *av) C_noret;
C_noret_decl(f_3814)
static void C_ccall f_3814(C_word c,C_word *av) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word *av) C_noret;
C_noret_decl(f_3847)
static void C_ccall f_3847(C_word c,C_word *av) C_noret;
C_noret_decl(f_3851)
static void C_ccall f_3851(C_word c,C_word *av) C_noret;
C_noret_decl(f_3856)
static void f_3856(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3859)
static void f_3859(C_word t0) C_noret;
C_noret_decl(f_3867)
static void C_ccall f_3867(C_word c,C_word *av) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word *av) C_noret;
C_noret_decl(f_3906)
static void C_ccall f_3906(C_word c,C_word *av) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word *av) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word *av) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921(C_word c,C_word *av) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word *av) C_noret;
C_noret_decl(f_3958)
static void C_ccall f_3958(C_word c,C_word *av) C_noret;
C_noret_decl(f_3972)
static void C_ccall f_3972(C_word c,C_word *av) C_noret;
C_noret_decl(f_3982)
static void C_ccall f_3982(C_word c,C_word *av) C_noret;
C_noret_decl(f_3986)
static void C_ccall f_3986(C_word c,C_word *av) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word *av) C_noret;
C_noret_decl(f_4024)
static void f_4024(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4028)
static void f_4028(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word *av) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word *av) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word *av) C_noret;
C_noret_decl(f_4053)
static void f_4053(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word *av) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word *av) C_noret;
C_noret_decl(f_4106)
static void C_ccall f_4106(C_word c,C_word *av) C_noret;
C_noret_decl(f_4110)
static void C_ccall f_4110(C_word c,C_word *av) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word *av) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word *av) C_noret;
C_noret_decl(f_4137)
static void C_ccall f_4137(C_word c,C_word *av) C_noret;
C_noret_decl(f_4147)
static void f_4147(C_word t0) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word *av) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word *av) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word *av) C_noret;
C_noret_decl(f_4169)
static void C_ccall f_4169(C_word c,C_word *av) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word *av) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word *av) C_noret;
C_noret_decl(f_4181)
static void C_ccall f_4181(C_word c,C_word *av) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word *av) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word *av) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word *av) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word *av) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word *av) C_noret;
C_noret_decl(f_4231)
static void C_ccall f_4231(C_word c,C_word *av) C_noret;
C_noret_decl(f_4238)
static void C_ccall f_4238(C_word c,C_word *av) C_noret;
C_noret_decl(f_4271)
static void f_4271(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word *av) C_noret;
C_noret_decl(f_4278)
static void f_4278(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4304)
static void f_4304(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word *av) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word *av) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word *av) C_noret;
C_noret_decl(f_4334)
static void f_4334(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4350)
static void f_4350(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4361)
static void C_ccall f_4361(C_word c,C_word *av) C_noret;
C_noret_decl(f_4365)
static void C_ccall f_4365(C_word c,C_word *av) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word *av) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word *av) C_noret;
C_noret_decl(f_4374)
static void C_ccall f_4374(C_word c,C_word *av) C_noret;
C_noret_decl(f_4380)
static void C_ccall f_4380(C_word c,C_word *av) C_noret;
C_noret_decl(f_4386)
static void f_4386(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4389)
static void C_ccall f_4389(C_word c,C_word *av) C_noret;
C_noret_decl(f_4401)
static void C_ccall f_4401(C_word c,C_word *av) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word *av) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word *av) C_noret;
C_noret_decl(f_4410)
static void C_ccall f_4410(C_word c,C_word *av) C_noret;
C_noret_decl(f_4413)
static void C_ccall f_4413(C_word c,C_word *av) C_noret;
C_noret_decl(f_4416)
static void C_ccall f_4416(C_word c,C_word *av) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word *av) C_noret;
C_noret_decl(f_4438)
static void C_ccall f_4438(C_word c,C_word *av) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word *av) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word *av) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word *av) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word *av) C_noret;
C_noret_decl(f_4491)
static void f_4491(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4494)
static void f_4494(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word *av) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word *av) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word *av) C_noret;
C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word *av) C_noret;
C_noret_decl(f_4543)
static void C_ccall f_4543(C_word c,C_word *av) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word *av) C_noret;
C_noret_decl(f_4562)
static void f_4562(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4572)
static void C_ccall f_4572(C_word c,C_word *av) C_noret;
C_noret_decl(f_4591)
static void C_ccall f_4591(C_word c,C_word *av) C_noret;
C_noret_decl(f_4599)
static void f_4599(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word *av) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word *av) C_noret;
C_noret_decl(f_4636)
static void f_4636(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4646)
static void C_ccall f_4646(C_word c,C_word *av) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word *av) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word *av) C_noret;
C_noret_decl(f_4671)
static void C_ccall f_4671(C_word c,C_word *av) C_noret;
C_noret_decl(f_4683)
static void C_ccall f_4683(C_word c,C_word *av) C_noret;
C_noret_decl(f_4695)
static void C_ccall f_4695(C_word c,C_word *av) C_noret;
C_noret_decl(f_4702)
static void C_ccall f_4702(C_word c,C_word *av) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word *av) C_noret;
C_noret_decl(f_4771)
static void C_ccall f_4771(C_word c,C_word *av) C_noret;
C_noret_decl(f_4783)
static void C_ccall f_4783(C_word c,C_word *av) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word *av) C_noret;
C_noret_decl(f_4807)
static void C_ccall f_4807(C_word c,C_word *av) C_noret;
C_noret_decl(f_4830)
static void f_4830(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word *av) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word *av) C_noret;
C_noret_decl(f_4935)
static void C_ccall f_4935(C_word c,C_word *av) C_noret;
C_noret_decl(f_4938)
static void C_ccall f_4938(C_word c,C_word *av) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942(C_word c,C_word *av) C_noret;
C_noret_decl(f_4950)
static void C_ccall f_4950(C_word c,C_word *av) C_noret;
C_noret_decl(f_4967)
static void C_ccall f_4967(C_word c,C_word *av) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word *av) C_noret;
C_noret_decl(f_4990)
static void C_ccall f_4990(C_word c,C_word *av) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word *av) C_noret;
C_noret_decl(f_5060)
static void C_ccall f_5060(C_word c,C_word *av) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word *av) C_noret;
C_noret_decl(f_5087)
static void C_ccall f_5087(C_word c,C_word *av) C_noret;
C_noret_decl(f_5103)
static void C_ccall f_5103(C_word c,C_word *av) C_noret;
C_noret_decl(f_5124)
static void C_ccall f_5124(C_word c,C_word *av) C_noret;
C_noret_decl(f_5134)
static void C_ccall f_5134(C_word c,C_word *av) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word *av) C_noret;
C_noret_decl(f_5154)
static void C_ccall f_5154(C_word c,C_word *av) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word *av) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word *av) C_noret;
C_noret_decl(f_5184)
static void C_ccall f_5184(C_word c,C_word *av) C_noret;
C_noret_decl(f_5194)
static void C_ccall f_5194(C_word c,C_word *av) C_noret;
C_noret_decl(f_5204)
static void C_ccall f_5204(C_word c,C_word *av) C_noret;
C_noret_decl(f_5214)
static void C_ccall f_5214(C_word c,C_word *av) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word *av) C_noret;
C_noret_decl(f_5226)
static void C_ccall f_5226(C_word c,C_word *av) C_noret;
C_noret_decl(f_5238)
static void C_ccall f_5238(C_word c,C_word *av) C_noret;
C_noret_decl(f_5265)
static void f_5265(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5289)
static void C_ccall f_5289(C_word c,C_word *av) C_noret;
C_noret_decl(f_5306)
static void C_ccall f_5306(C_word c,C_word *av) C_noret;
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word *av) C_noret;
C_noret_decl(f_5340)
static void C_ccall f_5340(C_word c,C_word *av) C_noret;
C_noret_decl(f_5357)
static void C_ccall f_5357(C_word c,C_word *av) C_noret;
C_noret_decl(f_5361)
static void C_ccall f_5361(C_word c,C_word *av) C_noret;
C_noret_decl(f_5378)
static void C_ccall f_5378(C_word c,C_word *av) C_noret;
C_noret_decl(f_5382)
static void C_ccall f_5382(C_word c,C_word *av) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word *av) C_noret;
C_noret_decl(f_5404)
static void C_ccall f_5404(C_word c,C_word *av) C_noret;
C_noret_decl(f_5417)
static void C_ccall f_5417(C_word c,C_word *av) C_noret;
C_noret_decl(f_5421)
static void C_ccall f_5421(C_word c,C_word *av) C_noret;
C_noret_decl(f_5429)
static void C_ccall f_5429(C_word c,C_word *av) C_noret;
C_noret_decl(f_5442)
static void C_ccall f_5442(C_word c,C_word *av) C_noret;
C_noret_decl(f_5456)
static void f_5456(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word *av) C_noret;
C_noret_decl(f_5468)
static void C_ccall f_5468(C_word c,C_word *av) C_noret;
C_noret_decl(f_5472)
static void C_ccall f_5472(C_word c,C_word *av) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word *av) C_noret;
C_noret_decl(f_5500)
static void C_ccall f_5500(C_word c,C_word *av) C_noret;
C_noret_decl(f_5517)
static void C_ccall f_5517(C_word c,C_word *av) C_noret;
C_noret_decl(f_5520)
static void C_ccall f_5520(C_word c,C_word *av) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word *av) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word *av) C_noret;
C_noret_decl(f_5548)
static void f_5548(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5551)
static void f_5551(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5558)
static C_word f_5558(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word *av) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word *av) C_noret;
C_noret_decl(f_5605)
static void f_5605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word *av) C_noret;
C_noret_decl(f_5628)
static void C_ccall f_5628(C_word c,C_word *av) C_noret;
C_noret_decl(f_5651)
static void C_ccall f_5651(C_word c,C_word *av) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word *av) C_noret;
C_noret_decl(f_5682)
static void C_ccall f_5682(C_word c,C_word *av) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word *av) C_noret;
C_noret_decl(f_5706)
static void f_5706(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5710)
static void C_ccall f_5710(C_word c,C_word *av) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word *av) C_noret;
C_noret_decl(f_5750)
static void C_ccall f_5750(C_word c,C_word *av) C_noret;
C_noret_decl(f_5752)
static void f_5752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5777)
static void C_ccall f_5777(C_word c,C_word *av) C_noret;
C_noret_decl(f_5804)
static void C_ccall f_5804(C_word c,C_word *av) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word *av) C_noret;
C_noret_decl(f_5822)
static void C_ccall f_5822(C_word c,C_word *av) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word *av) C_noret;
C_noret_decl(f_5836)
static void C_ccall f_5836(C_word c,C_word *av) C_noret;
C_noret_decl(f_5842)
static void C_ccall f_5842(C_word c,C_word *av) C_noret;
C_noret_decl(f_5853)
static void C_ccall f_5853(C_word c,C_word *av) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word *av) C_noret;
C_noret_decl(f_5880)
static void C_ccall f_5880(C_word c,C_word *av) C_noret;
C_noret_decl(f_5893)
static void f_5893(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5898)
static void C_ccall f_5898(C_word c,C_word *av) C_noret;
C_noret_decl(f_5917)
static void C_ccall f_5917(C_word c,C_word *av) C_noret;
C_noret_decl(f_5929)
static void f_5929(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5933)
static void C_ccall f_5933(C_word c,C_word *av) C_noret;
C_noret_decl(f_5941)
static void C_ccall f_5941(C_word c,C_word *av) C_noret;
C_noret_decl(f_5950)
static void C_ccall f_5950(C_word c,C_word *av) C_noret;
C_noret_decl(f_5956)
static void C_ccall f_5956(C_word c,C_word *av) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983(C_word c,C_word *av) C_noret;
C_noret_decl(f_6187)
static void C_ccall f_6187(C_word c,C_word *av) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word *av) C_noret;
C_noret_decl(f_6193)
static void C_ccall f_6193(C_word c,C_word *av) C_noret;
C_noret_decl(f_6196)
static void f_6196(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6200)
static void C_ccall f_6200(C_word c,C_word *av) C_noret;
C_noret_decl(f_6204)
static void C_ccall f_6204(C_word c,C_word *av) C_noret;
C_noret_decl(f_6223)
static void C_ccall f_6223(C_word c,C_word *av) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word *av) C_noret;
C_noret_decl(f_6231)
static void C_ccall f_6231(C_word c,C_word *av) C_noret;
C_noret_decl(f_6243)
static void f_6243(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6260)
static void C_ccall f_6260(C_word c,C_word *av) C_noret;
C_noret_decl(f_6299)
static void f_6299(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6324)
static void f_6324(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6328)
static void C_ccall f_6328(C_word c,C_word *av) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word *av) C_noret;
C_noret_decl(f_6334)
static void C_ccall f_6334(C_word c,C_word *av) C_noret;
C_noret_decl(f_6350)
static void C_ccall f_6350(C_word c,C_word *av) C_noret;
C_noret_decl(f_6354)
static void C_ccall f_6354(C_word c,C_word *av) C_noret;
C_noret_decl(f_6358)
static void f_6358(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6362)
static void C_ccall f_6362(C_word c,C_word *av) C_noret;
C_noret_decl(f_6396)
static void C_ccall f_6396(C_word c,C_word *av) C_noret;
C_noret_decl(f_6399)
static void f_6399(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6400)
static void f_6400(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6404)
static void C_ccall f_6404(C_word c,C_word *av) C_noret;
C_noret_decl(f_6407)
static void C_ccall f_6407(C_word c,C_word *av) C_noret;
C_noret_decl(f_6425)
static void C_ccall f_6425(C_word c,C_word *av) C_noret;
C_noret_decl(f_6429)
static void C_ccall f_6429(C_word c,C_word *av) C_noret;
C_noret_decl(f_6438)
static void C_ccall f_6438(C_word c,C_word *av) C_noret;
C_noret_decl(f_6446)
static void f_6446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6456)
static void C_ccall f_6456(C_word c,C_word *av) C_noret;
C_noret_decl(f_6469)
static void f_6469(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6479)
static void C_ccall f_6479(C_word c,C_word *av) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word *av) C_noret;
C_noret_decl(f_6496)
static void f_6496(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6506)
static void C_ccall f_6506(C_word c,C_word *av) C_noret;
C_noret_decl(f_6520)
static void f_6520(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6523)
static void C_ccall f_6523(C_word c,C_word *av) C_noret;
C_noret_decl(f_6526)
static void C_ccall f_6526(C_word c,C_word *av) C_noret;
C_noret_decl(f_6538)
static void C_ccall f_6538(C_word c,C_word *av) C_noret;
C_noret_decl(f_6545)
static void C_ccall f_6545(C_word c,C_word *av) C_noret;
C_noret_decl(f_6547)
static void f_6547(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6557)
static void C_ccall f_6557(C_word c,C_word *av) C_noret;
C_noret_decl(f_6581)
static void C_ccall f_6581(C_word c,C_word *av) C_noret;
C_noret_decl(f_6584)
static void C_ccall f_6584(C_word c,C_word *av) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word *av) C_noret;
C_noret_decl(f_6593)
static void C_ccall f_6593(C_word c,C_word *av) C_noret;
C_noret_decl(f_6601)
static void f_6601(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6611)
static void C_ccall f_6611(C_word c,C_word *av) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word *av) C_noret;
C_noret_decl(f_6635)
static void C_ccall f_6635(C_word c,C_word *av) C_noret;
C_noret_decl(f_6643)
static void C_ccall f_6643(C_word c,C_word *av) C_noret;
C_noret_decl(f_6653)
static void C_ccall f_6653(C_word c,C_word *av) C_noret;
C_noret_decl(f_6663)
static void C_ccall f_6663(C_word c,C_word *av) C_noret;
C_noret_decl(f_6672)
static void C_ccall f_6672(C_word c,C_word *av) C_noret;
C_noret_decl(f_6680)
static void C_ccall f_6680(C_word c,C_word *av) C_noret;
C_noret_decl(f_6684)
static void C_ccall f_6684(C_word c,C_word *av) C_noret;
C_noret_decl(f_6693)
static void C_ccall f_6693(C_word c,C_word *av) C_noret;
C_noret_decl(f_6696)
static void C_ccall f_6696(C_word c,C_word *av) C_noret;
C_noret_decl(f_6703)
static void C_ccall f_6703(C_word c,C_word *av) C_noret;
C_noret_decl(f_6717)
static void C_ccall f_6717(C_word c,C_word *av) C_noret;
C_noret_decl(f_6732)
static void C_ccall f_6732(C_word c,C_word *av) C_noret;
C_noret_decl(f_6740)
static void f_6740(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6750)
static void f_6750(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6765)
static void C_ccall f_6765(C_word c,C_word *av) C_noret;
C_noret_decl(f_6774)
static void f_6774(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6799)
static void C_ccall f_6799(C_word c,C_word *av) C_noret;
C_noret_decl(f_6811)
static void f_6811(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6825)
static void C_ccall f_6825(C_word c,C_word *av) C_noret;
C_noret_decl(f_6831)
static void f_6831(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6834)
static void C_ccall f_6834(C_word c,C_word *av) C_noret;
C_noret_decl(f_6837)
static void C_ccall f_6837(C_word c,C_word *av) C_noret;
C_noret_decl(f_6844)
static void C_ccall f_6844(C_word c,C_word *av) C_noret;
C_noret_decl(f_6848)
static void C_ccall f_6848(C_word c,C_word *av) C_noret;
C_noret_decl(f_6857)
static void C_ccall f_6857(C_word c,C_word *av) C_noret;
C_noret_decl(f_6915)
static void f_6915(C_word t0) C_noret;
C_noret_decl(f_6923)
static void f_6923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6969)
static void f_6969(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6973)
static void C_ccall f_6973(C_word c,C_word *av) C_noret;
C_noret_decl(f_6976)
static void C_ccall f_6976(C_word c,C_word *av) C_noret;
C_noret_decl(f_6982)
static void C_ccall f_6982(C_word c,C_word *av) C_noret;
C_noret_decl(f_6987)
static void C_ccall f_6987(C_word c,C_word *av) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word *av) C_noret;
C_noret_decl(f_7009)
static void C_ccall f_7009(C_word c,C_word *av) C_noret;
C_noret_decl(f_7012)
static void C_ccall f_7012(C_word c,C_word *av) C_noret;
C_noret_decl(f_7015)
static void C_ccall f_7015(C_word c,C_word *av) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word *av) C_noret;
C_noret_decl(f_7021)
static void C_ccall f_7021(C_word c,C_word *av) C_noret;
C_noret_decl(f_7042)
static void C_ccall f_7042(C_word c,C_word *av) C_noret;
C_noret_decl(f_7044)
static void f_7044(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7069)
static void C_ccall f_7069(C_word c,C_word *av) C_noret;
C_noret_decl(f_7078)
static void C_ccall f_7078(C_word c,C_word *av) C_noret;
C_noret_decl(f_7082)
static void C_ccall f_7082(C_word c,C_word *av) C_noret;
C_noret_decl(f_7097)
static void C_ccall f_7097(C_word c,C_word *av) C_noret;
C_noret_decl(f_7102)
static void C_ccall f_7102(C_word c,C_word *av) C_noret;
C_noret_decl(f_7110)
static void C_ccall f_7110(C_word c,C_word *av) C_noret;
C_noret_decl(f_7128)
static void C_ccall f_7128(C_word c,C_word *av) C_noret;
C_noret_decl(f_7134)
static void C_ccall f_7134(C_word c,C_word *av) C_noret;
C_noret_decl(f_7138)
static void C_ccall f_7138(C_word c,C_word *av) C_noret;
C_noret_decl(f_7142)
static void C_ccall f_7142(C_word c,C_word *av) C_noret;
C_noret_decl(f_7146)
static void C_ccall f_7146(C_word c,C_word *av) C_noret;
C_noret_decl(f_7153)
static void f_7153(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7157)
static void C_ccall f_7157(C_word c,C_word *av) C_noret;
C_noret_decl(f_7160)
static void C_ccall f_7160(C_word c,C_word *av) C_noret;
C_noret_decl(f_7173)
static void C_ccall f_7173(C_word c,C_word *av) C_noret;
C_noret_decl(f_7178)
static void f_7178(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7203)
static void C_ccall f_7203(C_word c,C_word *av) C_noret;
C_noret_decl(f_7220)
static void C_ccall f_7220(C_word c,C_word *av) C_noret;
C_noret_decl(f_7231)
static void C_ccall f_7231(C_word c,C_word *av) C_noret;
C_noret_decl(f_7244)
static void C_ccall f_7244(C_word c,C_word *av) C_noret;
C_noret_decl(f_7248)
static void C_ccall f_7248(C_word c,C_word *av) C_noret;
C_noret_decl(f_7271)
static void C_ccall f_7271(C_word c,C_word *av) C_noret;
C_noret_decl(f_7278)
static void C_ccall f_7278(C_word c,C_word *av) C_noret;
C_noret_decl(f_7282)
static void C_ccall f_7282(C_word c,C_word *av) C_noret;
C_noret_decl(f_7286)
static void C_ccall f_7286(C_word c,C_word *av) C_noret;
C_noret_decl(f_7290)
static void C_ccall f_7290(C_word c,C_word *av) C_noret;
C_noret_decl(f_7298)
static void C_ccall f_7298(C_word c,C_word *av) C_noret;
C_noret_decl(f_7305)
static void C_ccall f_7305(C_word c,C_word *av) C_noret;
C_noret_decl(f_7308)
static void C_ccall f_7308(C_word c,C_word *av) C_noret;
C_noret_decl(f_7315)
static void C_ccall f_7315(C_word c,C_word *av) C_noret;
C_noret_decl(f_7320)
static void C_ccall f_7320(C_word c,C_word *av) C_noret;
C_noret_decl(f_7325)
static void C_ccall f_7325(C_word c,C_word *av) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word *av) C_noret;
C_noret_decl(f_7333)
static void C_ccall f_7333(C_word c,C_word *av) C_noret;
C_noret_decl(f_7340)
static void C_ccall f_7340(C_word c,C_word *av) C_noret;
C_noret_decl(f_7342)
static void C_ccall f_7342(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_extern void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2863)
static void C_ccall trf_2863(C_word c,C_word *av) C_noret;
static void C_ccall trf_2863(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2863(t0,t1,t2);}

C_noret_decl(trf_2869)
static void C_ccall trf_2869(C_word c,C_word *av) C_noret;
static void C_ccall trf_2869(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2869(t0,t1,t2,t3);}

C_noret_decl(trf_2925)
static void C_ccall trf_2925(C_word c,C_word *av) C_noret;
static void C_ccall trf_2925(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2925(t0,t1,t2);}

C_noret_decl(trf_3000)
static void C_ccall trf_3000(C_word c,C_word *av) C_noret;
static void C_ccall trf_3000(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3000(t0,t1,t2);}

C_noret_decl(trf_3048)
static void C_ccall trf_3048(C_word c,C_word *av) C_noret;
static void C_ccall trf_3048(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3048(t0,t1,t2);}

C_noret_decl(trf_3092)
static void C_ccall trf_3092(C_word c,C_word *av) C_noret;
static void C_ccall trf_3092(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3092(t0,t1,t2);}

C_noret_decl(trf_3320)
static void C_ccall trf_3320(C_word c,C_word *av) C_noret;
static void C_ccall trf_3320(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3320(t0,t1,t2,t3);}

C_noret_decl(trf_3745)
static void C_ccall trf_3745(C_word c,C_word *av) C_noret;
static void C_ccall trf_3745(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3745(t0,t1,t2);}

C_noret_decl(trf_3856)
static void C_ccall trf_3856(C_word c,C_word *av) C_noret;
static void C_ccall trf_3856(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3856(t0,t1);}

C_noret_decl(trf_3859)
static void C_ccall trf_3859(C_word c,C_word *av) C_noret;
static void C_ccall trf_3859(C_word c,C_word *av){
C_word t0=av[0];
f_3859(t0);}

C_noret_decl(trf_4024)
static void C_ccall trf_4024(C_word c,C_word *av) C_noret;
static void C_ccall trf_4024(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4024(t0,t1);}

C_noret_decl(trf_4028)
static void C_ccall trf_4028(C_word c,C_word *av) C_noret;
static void C_ccall trf_4028(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4028(t0,t1);}

C_noret_decl(trf_4053)
static void C_ccall trf_4053(C_word c,C_word *av) C_noret;
static void C_ccall trf_4053(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4053(t0,t1,t2);}

C_noret_decl(trf_4147)
static void C_ccall trf_4147(C_word c,C_word *av) C_noret;
static void C_ccall trf_4147(C_word c,C_word *av){
C_word t0=av[0];
f_4147(t0);}

C_noret_decl(trf_4271)
static void C_ccall trf_4271(C_word c,C_word *av) C_noret;
static void C_ccall trf_4271(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4271(t0,t1);}

C_noret_decl(trf_4278)
static void C_ccall trf_4278(C_word c,C_word *av) C_noret;
static void C_ccall trf_4278(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4278(t0,t1,t2,t3);}

C_noret_decl(trf_4304)
static void C_ccall trf_4304(C_word c,C_word *av) C_noret;
static void C_ccall trf_4304(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4304(t0,t1);}

C_noret_decl(trf_4334)
static void C_ccall trf_4334(C_word c,C_word *av) C_noret;
static void C_ccall trf_4334(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4334(t0,t1);}

C_noret_decl(trf_4350)
static void C_ccall trf_4350(C_word c,C_word *av) C_noret;
static void C_ccall trf_4350(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4350(t0,t1,t2);}

C_noret_decl(trf_4386)
static void C_ccall trf_4386(C_word c,C_word *av) C_noret;
static void C_ccall trf_4386(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4386(t0,t1);}

C_noret_decl(trf_4491)
static void C_ccall trf_4491(C_word c,C_word *av) C_noret;
static void C_ccall trf_4491(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4491(t0,t1);}

C_noret_decl(trf_4494)
static void C_ccall trf_4494(C_word c,C_word *av) C_noret;
static void C_ccall trf_4494(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4494(t0,t1);}

C_noret_decl(trf_4562)
static void C_ccall trf_4562(C_word c,C_word *av) C_noret;
static void C_ccall trf_4562(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4562(t0,t1,t2);}

C_noret_decl(trf_4599)
static void C_ccall trf_4599(C_word c,C_word *av) C_noret;
static void C_ccall trf_4599(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4599(t0,t1,t2);}

C_noret_decl(trf_4636)
static void C_ccall trf_4636(C_word c,C_word *av) C_noret;
static void C_ccall trf_4636(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4636(t0,t1,t2);}

C_noret_decl(trf_4830)
static void C_ccall trf_4830(C_word c,C_word *av) C_noret;
static void C_ccall trf_4830(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4830(t0,t1);}

C_noret_decl(trf_5265)
static void C_ccall trf_5265(C_word c,C_word *av) C_noret;
static void C_ccall trf_5265(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5265(t0,t1);}

C_noret_decl(trf_5456)
static void C_ccall trf_5456(C_word c,C_word *av) C_noret;
static void C_ccall trf_5456(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5456(t0,t1);}

C_noret_decl(trf_5548)
static void C_ccall trf_5548(C_word c,C_word *av) C_noret;
static void C_ccall trf_5548(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5548(t0,t1);}

C_noret_decl(trf_5551)
static void C_ccall trf_5551(C_word c,C_word *av) C_noret;
static void C_ccall trf_5551(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5551(t0,t1);}

C_noret_decl(trf_5605)
static void C_ccall trf_5605(C_word c,C_word *av) C_noret;
static void C_ccall trf_5605(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5605(t0,t1);}

C_noret_decl(trf_5706)
static void C_ccall trf_5706(C_word c,C_word *av) C_noret;
static void C_ccall trf_5706(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5706(t0,t1);}

C_noret_decl(trf_5752)
static void C_ccall trf_5752(C_word c,C_word *av) C_noret;
static void C_ccall trf_5752(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5752(t0,t1,t2);}

C_noret_decl(trf_5893)
static void C_ccall trf_5893(C_word c,C_word *av) C_noret;
static void C_ccall trf_5893(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5893(t0,t1);}

C_noret_decl(trf_5929)
static void C_ccall trf_5929(C_word c,C_word *av) C_noret;
static void C_ccall trf_5929(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5929(t0,t1);}

C_noret_decl(trf_6196)
static void C_ccall trf_6196(C_word c,C_word *av) C_noret;
static void C_ccall trf_6196(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6196(t0,t1);}

C_noret_decl(trf_6243)
static void C_ccall trf_6243(C_word c,C_word *av) C_noret;
static void C_ccall trf_6243(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6243(t0,t1);}

C_noret_decl(trf_6299)
static void C_ccall trf_6299(C_word c,C_word *av) C_noret;
static void C_ccall trf_6299(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6299(t0,t1,t2);}

C_noret_decl(trf_6324)
static void C_ccall trf_6324(C_word c,C_word *av) C_noret;
static void C_ccall trf_6324(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6324(t0,t1,t2);}

C_noret_decl(trf_6358)
static void C_ccall trf_6358(C_word c,C_word *av) C_noret;
static void C_ccall trf_6358(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6358(t0,t1);}

C_noret_decl(trf_6399)
static void C_ccall trf_6399(C_word c,C_word *av) C_noret;
static void C_ccall trf_6399(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6399(t0,t1);}

C_noret_decl(trf_6400)
static void C_ccall trf_6400(C_word c,C_word *av) C_noret;
static void C_ccall trf_6400(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6400(t0,t1,t2);}

C_noret_decl(trf_6446)
static void C_ccall trf_6446(C_word c,C_word *av) C_noret;
static void C_ccall trf_6446(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6446(t0,t1,t2);}

C_noret_decl(trf_6469)
static void C_ccall trf_6469(C_word c,C_word *av) C_noret;
static void C_ccall trf_6469(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6469(t0,t1,t2);}

C_noret_decl(trf_6496)
static void C_ccall trf_6496(C_word c,C_word *av) C_noret;
static void C_ccall trf_6496(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6496(t0,t1,t2);}

C_noret_decl(trf_6520)
static void C_ccall trf_6520(C_word c,C_word *av) C_noret;
static void C_ccall trf_6520(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6520(t0,t1);}

C_noret_decl(trf_6547)
static void C_ccall trf_6547(C_word c,C_word *av) C_noret;
static void C_ccall trf_6547(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6547(t0,t1,t2);}

C_noret_decl(trf_6601)
static void C_ccall trf_6601(C_word c,C_word *av) C_noret;
static void C_ccall trf_6601(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6601(t0,t1,t2);}

C_noret_decl(trf_6740)
static void C_ccall trf_6740(C_word c,C_word *av) C_noret;
static void C_ccall trf_6740(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6740(t0,t1,t2);}

C_noret_decl(trf_6750)
static void C_ccall trf_6750(C_word c,C_word *av) C_noret;
static void C_ccall trf_6750(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6750(t0,t1);}

C_noret_decl(trf_6774)
static void C_ccall trf_6774(C_word c,C_word *av) C_noret;
static void C_ccall trf_6774(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6774(t0,t1,t2);}

C_noret_decl(trf_6811)
static void C_ccall trf_6811(C_word c,C_word *av) C_noret;
static void C_ccall trf_6811(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6811(t0,t1,t2,t3);}

C_noret_decl(trf_6831)
static void C_ccall trf_6831(C_word c,C_word *av) C_noret;
static void C_ccall trf_6831(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6831(t0,t1);}

C_noret_decl(trf_6915)
static void C_ccall trf_6915(C_word c,C_word *av) C_noret;
static void C_ccall trf_6915(C_word c,C_word *av){
C_word t0=av[0];
f_6915(t0);}

C_noret_decl(trf_6923)
static void C_ccall trf_6923(C_word c,C_word *av) C_noret;
static void C_ccall trf_6923(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6923(t0,t1);}

C_noret_decl(trf_6969)
static void C_ccall trf_6969(C_word c,C_word *av) C_noret;
static void C_ccall trf_6969(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6969(t0,t1,t2);}

C_noret_decl(trf_7044)
static void C_ccall trf_7044(C_word c,C_word *av) C_noret;
static void C_ccall trf_7044(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7044(t0,t1,t2);}

C_noret_decl(trf_7153)
static void C_ccall trf_7153(C_word c,C_word *av) C_noret;
static void C_ccall trf_7153(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7153(t0,t1);}

C_noret_decl(trf_7178)
static void C_ccall trf_7178(C_word c,C_word *av) C_noret;
static void C_ccall trf_7178(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7178(t0,t1,t2);}

/* f8062 in k6691 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f8062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f8062,c,av);}
C_trace(C_text("csc.scm:991: chicken.file#file-exists?"));
t2=C_fast_retrieve(lf[135]);{
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

/* f8098 in k4535 in k4532 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f8098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f8098,c,av);}
C_trace(C_text("csc.scm:573: chicken.base#exit"));
t2=C_fast_retrieve(lf[45]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2156 */
static void C_ccall f_2158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2158,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2161,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k2159 in k2156 */
static void C_ccall f_2161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_2161,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2164,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7342,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("csc.scm:28: ##sys#with-environment"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[425]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[425]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k2162 in k2159 in k2156 */
static void C_ccall f_2164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2164,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2167,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2167,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2170,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2170,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2173,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2173,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2176,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2176,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2179,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2179,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2182,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2182,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[1] /* (set! main#staticbuild ...) */,C_mk_bool(STATIC_CHICKEN));
t3=C_mutate(&lf[2] /* (set! main#debugbuild ...) */,C_mk_bool(DEBUG_CHICKEN));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:43: chicken.platform#feature?"));
t5=C_fast_retrieve(lf[409]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[410];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2188(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2188,c,av);}
a=C_alloc(6);
t2=lf[3] /* main#cross-chicken */ =t1;;
t3=lf[4] /* main#binary-version */ =C_fix((C_word)C_BINARY_VERSION);;
t4=lf[5] /* main#major-version */ =C_fix((C_word)C_MAJOR_VERSION);;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2194,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t6=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_INSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2194,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[6] /* (set! main#chicken-install-program ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2198,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2198,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[7] /* (set! main#default-cc ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2202,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2202,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[8] /* (set! main#default-cxx ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2206,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2206,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2210,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2210,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[9] /* (set! main#default-cflags ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2214,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2214,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM_EXECUTABLE_OPTIONS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2218,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2222,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM_FILE_OPTIONS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2222,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2226,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2226,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[10] /* (set! main#default-libs ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2230,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2230,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[11] /* (set! main#default-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2234,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 */
static void C_ccall f_2234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2234,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[12] /* (set! main#default-runlibdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2238,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_STATIC_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in ... */
static void C_ccall f_2238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2238,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2242,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in ... */
static void C_ccall f_2242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2242,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[13] /* (set! main#default-incdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2246,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in k2162 in ... */
static void C_ccall f_2246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2246,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[14] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2250,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in k2165 in ... */
static void C_ccall f_2250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2250,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[15] /* (set! main#default-sharedir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7340,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:64: chicken.platform#software-type"));
t4=C_fast_retrieve(lf[198]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in ... */
static void C_ccall f_2258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2258,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2262,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in ... */
static void C_ccall f_2262(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2262,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[14] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2266,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7333,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t5=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in ... */
static void C_ccall f_2266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2266,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7329,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CSI_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in ... */
static void C_ccall f_2270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2270,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2274,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7325,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_DO_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in ... */
static void C_ccall f_2274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2274,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2278,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIBRARIAN);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in ... */
static void C_ccall f_2278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2278,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2282,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIBRARIAN_FLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in ... */
static void C_ccall f_2282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2282,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2286,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in ... */
static void C_ccall f_2286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2286,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2290,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_EGG_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in ... */
static void C_ccall f_2290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2290,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in ... */
static void C_ccall f_2294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2294,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[18] /* (set! main#host-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2298,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in ... */
static void C_ccall f_2298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2298,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[19] /* (set! main#host-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2302,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in ... */
static void C_ccall f_2302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2302,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[20] /* (set! main#host-incdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2306,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in ... */
static void C_ccall f_2306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2306,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[21] /* (set! main#host-sharedir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2310,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in ... */
static void C_ccall f_2310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2310,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[22] /* (set! main#host-libs ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2314,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in ... */
static void C_ccall f_2314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2314,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[23] /* (set! main#host-cflags ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in ... */
static void C_ccall f_2318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2318,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in ... */
static void C_ccall f_2322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2322,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[24] /* (set! main#host-cc ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2326,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in ... */
static void C_ccall f_2326(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2326,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[25] /* (set! main#host-cxx ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7320,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[4],C_text("main#binary-version"));
C_trace(C_text("##sys#fixnum->string"));
t6=C_fast_retrieve(lf[418]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[4],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in ... */
static void C_ccall f_2330(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2330,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[26] /* (set! main#target-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7315,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[4],C_text("main#binary-version"));
C_trace(C_text("##sys#fixnum->string"));
t6=C_fast_retrieve(lf[418]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[4],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in ... */
static void C_ccall f_2334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2334,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[27] /* (set! main#target-run-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2418,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:122: chicken.process-context#get-environment-variable"));
t4=C_fast_retrieve(lf[221]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[416];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in ... */
static void C_ccall f_2418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2418,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_2421(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7305,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:123: chicken.platform#system-cache-directory"));
t4=C_fast_retrieve(lf[415]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in ... */
static void C_ccall f_2421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2421,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[28] /* (set! main#cache-directory ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2425,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:131: scheme#string-append"));
t4=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[28],C_text("main#cache-directory"));
av2[3]=lf[412];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in ... */
static void C_ccall f_2425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_2425,c,av);}
a=C_alloc(11);
t2=C_mutate(&lf[29] /* (set! main#cons* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2863,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3710,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7298,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t5=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* main#cons* in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in ... */
static void f_2863(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_2863,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2869,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2869(t7,t1,t2,t3);}

/* loop in main#cons* in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in ... */
static void f_2869(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_2869,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2883,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:95: loop"));
t6=t4;
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
t1=t6;
t2=t7;
t3=t8;
goto loop;}}

/* k2881 in loop in main#cons* in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in ... */
static void C_ccall f_2883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2883,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in loop in k6823 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void f_2925(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2925,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2952,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:109: loop"));
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k2950 in loop in loop in k6823 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in ... */
static void C_ccall f_2952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2952,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k6823 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void f_3000(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_3000,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3014,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2925,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_2925(t10,t6,t4);}}

/* k3012 in loop in k6823 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f_3014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3014,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3025 in loop in k6823 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f_3027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3027,c,av);}
C_trace(C_text("mini-srfi-1.scm:123: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3000(t2,((C_word*)t0)[3],t1);}

/* foldr490 in foldl597 in k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void f_3048(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3048,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3056,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3077,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g495 in foldr490 in foldl597 in k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static C_word f_3056(C_word *a,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t3=(
C_trace("mini-srfi-1.scm:131: pred"),
  f_3307(((C_word*)t0)[2],t1)
);
return((C_truep(t3)?C_a_i_cons(&a,2,t1,t2):t2));}

/* k3075 in foldr490 in foldl597 in k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_3077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3077,c,av);}
a=C_alloc(3);
C_trace(C_text("mini-srfi-1.scm:131: g495"));
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
C_trace("mini-srfi-1.scm:131: g495"),
  f_3056(C_a_i(&a,3),((C_word*)t0)[3],((C_word*)t0)[4],t1)
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr508 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void f_3092(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3092,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3126,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=t4;
t7=C_slot(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3102 in k3124 in foldr508 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_3104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3104,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3108,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("mini-srfi-1.scm:135: g523"));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
C_trace("mini-srfi-1.scm:135: g523"),
  f_3108(C_a_i(&a,3),t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g523 in k3102 in k3124 in foldr508 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static C_word f_3108(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k3124 in foldr508 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_3126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3126,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3104,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:135: pred"));
t3=C_retrieve2(lf[132],C_text("main#find-object-file"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
f_4159(3,av2);}}

/* loop in k4446 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static C_word f_3205(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
return(C_u_i_car(t1));}
else{
t4=C_u_i_cdr(t1);
t1=t4;
goto loop;}}

/* a3306 in foldl597 in k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static C_word f_3307(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_not(C_i_memq(t1,((C_word*)t0)[2])));}

/* foldl597 in k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void f_3320(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_3320,4,t0,t1,t2,t3);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3338,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3307,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(t3,lf[373]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3048,a[2]=t7,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_3048(t12,t5,t3);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3336 in foldl597 in k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_3338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3338,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3320(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in ... */
static void C_ccall f_3710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3710,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[22] /* (set! main#host-libs ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7290,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:68: chicken.platform#software-version"));
t4=C_fast_retrieve(lf[227]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in ... */
static void C_ccall f_3736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3736,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[38] /* (set! main#solaris ...) */,C_u_i_memq(t1,lf[39]));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:75: chicken.platform#software-version"));
t4=C_fast_retrieve(lf[227]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in ... */
static void C_ccall f_3742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3742,c,av);}
a=C_alloc(5);
t2=C_mutate(&lf[40] /* (set! main#elf ...) */,C_u_i_memq(t1,lf[41]));
t3=C_mutate(&lf[42] /* (set! main#stop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3745,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3772,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:81: chicken.process-context#command-line-arguments"));
t5=C_fast_retrieve(lf[411]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* main#stop in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in ... */
static void f_3745(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_3745,3,t1,t2,t3);}
a=C_alloc(13);
t4=*((C_word*)lf[43]+1);
t5=*((C_word*)lf[43]+1);
t6=C_i_check_port_2(*((C_word*)lf[43]+1),C_fix(2),C_SCHEME_TRUE,lf[44]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3752,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3768,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("##sys#peek-c-string"));
t9=*((C_word*)lf[50]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k3750 in main#stop in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in ... */
static void C_ccall f_3752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3752,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3755,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:78: ##sys#print"));
t3=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[49];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3753 in k3750 in main#stop in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in ... */
static void C_ccall f_3755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3755,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3758,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[47]+1);
av2[3]=((C_word*)t2)[3];
av2[4]=((C_word*)t2)[4];
av2[5]=((C_word*)t2)[5];
C_apply(6,av2);}}

/* k3756 in k3753 in k3750 in main#stop in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in ... */
static void C_ccall f_3758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3758,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3761,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:78: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k3759 in k3756 in k3753 in k3750 in main#stop in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in ... */
static void C_ccall f_3761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3761,c,av);}
C_trace(C_text("csc.scm:79: chicken.base#exit"));
t2=C_fast_retrieve(lf[45]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(64);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k3766 in main#stop in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in ... */
static void C_ccall f_3768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3768,c,av);}
C_trace(C_text("csc.scm:78: ##sys#print"));
t2=*((C_word*)lf[48]+1);{
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

/* k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in ... */
static void C_ccall f_3772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3772,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[51] /* (set! main#arguments ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3776,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:82: chicken.platform#feature?"));
t4=C_fast_retrieve(lf[409]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[410];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in ... */
static void C_ccall f_3776(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3776,c,av);}
a=C_alloc(11);
t2=lf[3] /* main#cross-chicken */ =t1;;
t3=C_i_not(C_retrieve2(lf[3],C_text("main#cross-chicken")));
t4=(C_truep(t3)?t3:C_i_member(lf[52],C_retrieve2(lf[51],C_text("main#arguments"))));
t5=C_mutate(&lf[53] /* (set! main#host-mode ...) */,t4);
t6=C_mutate(&lf[54] /* (set! main#quotewrap ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3794,tmp=(C_word)a,a+=2,tmp));
t7=(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))?C_retrieve2(lf[21],C_text("main#host-sharedir")):C_retrieve2(lf[15],C_text("main#default-sharedir")));
t8=C_mutate(&lf[58] /* (set! main#home ...) */,t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3814,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7271,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t11=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}

/* main#quotewrap in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in ... */
static void C_ccall f_3794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3794,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3802,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3806,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csc.scm:91: chicken.pathname#normalize-pathname"));
t5=C_fast_retrieve(lf[57]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3800 in main#quotewrap in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in ... */
static void C_ccall f_3802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3802,c,av);}
C_trace(C_text("csc.scm:91: chicken.process#qs"));
t2=C_fast_retrieve(lf[55]);{
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

/* k3804 in main#quotewrap in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in ... */
static void C_ccall f_3806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3806,c,av);}
if(C_truep(C_mk_bool(C_WINDOWS_SHELL))){
C_trace(C_text("csc.scm:87: chicken.string#string-translate"));
t2=C_fast_retrieve(lf[56]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_make_character(92);
av2[4]=C_make_character(47);
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
C_trace(C_text("csc.scm:91: chicken.process#qs"));
t2=C_fast_retrieve(lf[55]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in ... */
static void C_ccall f_3814(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3814,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[59] /* (set! main#translator ...) */,t1);
t3=(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))?C_retrieve2(lf[24],C_text("main#host-cc")):C_retrieve2(lf[7],C_text("main#default-cc")));
t4=C_mutate(&lf[60] /* (set! main#compiler ...) */,t3);
t5=(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))?C_retrieve2(lf[25],C_text("main#host-cxx")):C_retrieve2(lf[8],C_text("main#default-cxx")));
t6=C_mutate(&lf[61] /* (set! main#c++-compiler ...) */,t5);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3826,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))){
C_trace(C_text("##sys#peek-c-string"));
t8=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_RC_COMPILER);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
C_trace(C_text("##sys#peek-c-string"));
t8=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RC_COMPILER);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}

/* k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in ... */
static void C_ccall f_3826(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3826,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[62] /* (set! main#rc-compiler ...) */,t1);
t3=(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))?C_retrieve2(lf[24],C_text("main#host-cc")):C_retrieve2(lf[7],C_text("main#default-cc")));
t4=C_mutate(&lf[63] /* (set! main#linker ...) */,t3);
t5=(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))?C_retrieve2(lf[25],C_text("main#host-cxx")):C_retrieve2(lf[8],C_text("main#default-cxx")));
t6=C_mutate(&lf[64] /* (set! main#c++-linker ...) */,t5);
t7=(C_truep(C_retrieve2(lf[31],C_text("main#mingw")))?lf[65]:lf[66]);
t8=C_mutate(&lf[67] /* (set! main#object-extension ...) */,t7);
t9=C_mutate(&lf[68] /* (set! main#library-extension ...) */,lf[69]);
t10=C_mutate(&lf[70] /* (set! main#executable-extension ...) */,lf[71]);
t11=C_mutate(&lf[72] /* (set! main#shared-library-extension ...) */,C_fast_retrieve(lf[73]));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:110: ##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[139]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[139]+1);
av2[1]=t12;
av2[2]=lf[408];
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
tp(4,av2);}}

/* k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in ... */
static void C_ccall f_3847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3847,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[74] /* (set! main#static-object-extension ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3851,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:111: ##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[139]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[139]+1);
av2[1]=t3;
av2[2]=lf[407];
av2[3]=C_retrieve2(lf[68],C_text("main#library-extension"));
tp(4,av2);}}

/* k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in ... */
static void C_ccall f_3851(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3851,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[75] /* (set! main#static-library-extension ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[31],C_text("main#mingw"));
if(C_truep(C_retrieve2(lf[31],C_text("main#mingw")))){
t5=C_retrieve2(lf[31],C_text("main#mingw"));
t6=t3;
f_3856(t6,(C_truep(C_retrieve2(lf[31],C_text("main#mingw")))?lf[405]:lf[406]));}
else{
t5=C_retrieve2(lf[35],C_text("main#cygwin"));
t6=t3;
f_3856(t6,(C_truep(C_retrieve2(lf[35],C_text("main#cygwin")))?lf[405]:lf[406]));}}

/* k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in ... */
static void f_3856(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3856,2,t0,t1);}
a=C_alloc(5);
t2=C_mutate(&lf[76] /* (set! main#pic-options ...) */,t1);
t3=lf[77] /* main#generate-manifest */ =C_SCHEME_FALSE;;
t4=C_mutate(&lf[78] /* (set! main#libchicken ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3859,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))){
t6=C_retrieve2(lf[23],C_text("main#host-cflags"));
t7=C_retrieve2(lf[23],C_text("main#host-cflags"));
C_trace(C_text("csc.scm:131: chicken.string#string-split"));
t8=C_fast_retrieve(lf[219]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t5;
av2[2]=C_retrieve2(lf[23],C_text("main#host-cflags"));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t6=C_retrieve2(lf[9],C_text("main#default-cflags"));
t7=C_retrieve2(lf[9],C_text("main#default-cflags"));
C_trace(C_text("csc.scm:131: chicken.string#string-split"));
t8=C_fast_retrieve(lf[219]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t5;
av2[2]=C_retrieve2(lf[9],C_text("main#default-cflags"));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* main#libchicken in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in ... */
static void f_3859(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3859,1,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3867,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_not(C_retrieve2(lf[53],C_text("main#host-mode"))))){
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[50]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k3865 in main#libchicken in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in ... */
static void C_ccall f_3867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3867,c,av);}
C_trace(C_text("csc.scm:117: scheme#string-append"));
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[80];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3900 in main#linker-libraries in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_3902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3902,c,av);}
C_trace(C_text("csc.scm:128: chicken.pathname#make-pathname"));
t2=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[108],C_text("main#library-dir"));
av2[3]=t1;
av2[4]=C_retrieve2(lf[68],C_text("main#library-extension"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3904 in main#linker-libraries in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_3906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3906,c,av);}
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[139]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[139]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[140];
tp(4,av2);}}

/* k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in ... */
static void C_ccall f_3911(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3911,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[81] /* (set! main#default-compilation-optimization-options ...) */,t1);
t3=C_mutate(&lf[82] /* (set! main#best-compilation-optimization-options ...) */,C_retrieve2(lf[81],C_text("main#default-compilation-optimization-options")));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3916,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7248,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))){
C_trace(C_text("##sys#peek-c-string"));
t6=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
C_trace(C_text("##sys#peek-c-string"));
t6=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in ... */
static void C_ccall f_3916(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3916,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[83] /* (set! main#default-linking-optimization-options ...) */,t1);
t3=C_mutate(&lf[84] /* (set! main#best-linking-optimization-options ...) */,C_retrieve2(lf[83],C_text("main#default-linking-optimization-options")));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3921,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
f_3921(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7244,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t6=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_FEATURES);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in ... */
static void C_ccall f_3921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3921,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[85] /* (set! main#extra-features ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3928,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#string->list"));
t4=C_fast_retrieve(lf[334]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[404];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in ... */
static void C_ccall f_3928(C_word c,C_word *av){
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
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3928,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[86] /* (set! main#short-options ...) */,t1);
t3=lf[87] /* main#scheme-files */ =C_SCHEME_END_OF_LIST;;
t4=lf[88] /* main#c-files */ =C_SCHEME_END_OF_LIST;;
t5=lf[89] /* main#rc-files */ =C_SCHEME_END_OF_LIST;;
t6=lf[90] /* main#generated-c-files */ =C_SCHEME_END_OF_LIST;;
t7=lf[91] /* main#generated-rc-files */ =C_SCHEME_END_OF_LIST;;
t8=lf[92] /* main#object-files */ =C_SCHEME_END_OF_LIST;;
t9=lf[93] /* main#generated-object-files */ =C_SCHEME_END_OF_LIST;;
t10=lf[94] /* main#transient-link-files */ =C_SCHEME_END_OF_LIST;;
t11=lf[95] /* main#linked-extensions */ =C_SCHEME_END_OF_LIST;;
t12=lf[96] /* main#cpp-mode */ =C_SCHEME_FALSE;;
t13=lf[97] /* main#objc-mode */ =C_SCHEME_FALSE;;
t14=lf[98] /* main#embedded */ =C_SCHEME_FALSE;;
t15=lf[99] /* main#inquiry-only */ =C_SCHEME_FALSE;;
t16=lf[100] /* main#show-cflags */ =C_SCHEME_FALSE;;
t17=lf[101] /* main#show-ldflags */ =C_SCHEME_FALSE;;
t18=lf[102] /* main#show-libs */ =C_SCHEME_FALSE;;
t19=lf[103] /* main#dry-run */ =C_SCHEME_FALSE;;
t20=lf[104] /* main#deployed */ =C_SCHEME_FALSE;;
t21=lf[105] /* main#rpath */ =C_SCHEME_FALSE;;
t22=lf[106] /* main#ignore-repository */ =C_SCHEME_FALSE;;
t23=lf[107] /* main#show-debugging-help */ =C_SCHEME_FALSE;;
t24=(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))?C_retrieve2(lf[18],C_text("main#host-libdir")):C_retrieve2(lf[11],C_text("main#default-libdir")));
t25=C_mutate(&lf[108] /* (set! main#library-dir ...) */,t24);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3958,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7231,a[2]=t26,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))){
C_trace(C_text("##sys#peek-c-string"));
t28=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t28;
av2[1]=t27;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_STATIC_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t28+1)))(4,av2);}}
else{
C_trace(C_text("##sys#peek-c-string"));
t28=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t28;
av2[1]=t27;
av2[2]=C_mpointer(&a,(void*)C_TARGET_MORE_STATIC_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t28+1)))(4,av2);}}}

/* k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in ... */
static void C_ccall f_3958(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3958,c,av);}
a=C_alloc(10);
t2=C_mutate(&lf[109] /* (set! main#extra-libraries ...) */,t1);
t3=(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))?C_retrieve2(lf[22],C_text("main#host-libs")):C_retrieve2(lf[10],C_text("main#default-libs")));
t4=C_mutate(&lf[110] /* (set! main#extra-shared-libraries ...) */,t3);
t5=lf[111] /* main#translate-options */ =C_SCHEME_END_OF_LIST;;
t6=(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))?C_retrieve2(lf[20],C_text("main#host-incdir")):C_retrieve2(lf[13],C_text("main#default-incdir")));
t7=C_i_member(t6,lf[112]);
t8=C_i_not(t7);
t9=(C_truep(t8)?t6:C_SCHEME_FALSE);
t10=C_mutate(&lf[113] /* (set! main#include-dir ...) */,t9);
t11=lf[114] /* main#compile-options */ =C_SCHEME_END_OF_LIST;;
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4005,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7153,a[2]=t12,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[113],C_text("main#include-dir")))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7220,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:247: chicken.string#conc"));
t15=C_fast_retrieve(lf[228]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=lf[403];
av2[3]=C_retrieve2(lf[113],C_text("main#include-dir"));
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
t14=t13;
f_7153(t14,C_SCHEME_END_OF_LIST);}}

/* k3970 in main#linker-libraries in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_3972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3972,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_6923(t2,C_a_i_list1(&a,1,t1));}

/* k3980 in main#linker-libraries in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_3982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3982,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_6923(t2,C_a_i_list1(&a,1,t1));}

/* k3984 in main#linker-libraries in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_3986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3986,c,av);}
C_trace(C_text("csc.scm:234: scheme#string-append"));
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[141];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in ... */
static void C_ccall f_4005(C_word c,C_word *av){
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
C_word t24;
C_word t25;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_4005,c,av);}
a=C_alloc(22);
t2=C_mutate(&lf[115] /* (set! main#builtin-compile-options ...) */,t1);
t3=C_mutate(&lf[116] /* (set! main#compilation-optimization-options ...) */,C_retrieve2(lf[81],C_text("main#default-compilation-optimization-options")));
t4=C_mutate(&lf[117] /* (set! main#linking-optimization-options ...) */,C_retrieve2(lf[83],C_text("main#default-linking-optimization-options")));
t5=lf[118] /* main#link-options */ =C_SCHEME_END_OF_LIST;;
t6=(C_truep(C_retrieve2(lf[38],C_text("main#solaris")))?lf[119]:lf[120]);
t7=C_mutate(&lf[121] /* (set! main#rpath-option ...) */,t6);
t8=lf[122] /* main#target-filename */ =C_SCHEME_FALSE;;
t9=lf[123] /* main#verbose */ =C_SCHEME_FALSE;;
t10=lf[124] /* main#keep-files */ =C_SCHEME_FALSE;;
t11=lf[125] /* main#translate-only */ =C_SCHEME_FALSE;;
t12=lf[126] /* main#compile-only */ =C_SCHEME_FALSE;;
t13=lf[127] /* main#to-stdout */ =C_SCHEME_FALSE;;
t14=lf[128] /* main#shared */ =C_SCHEME_FALSE;;
t15=lf[129] /* main#static */ =C_SCHEME_FALSE;;
t16=C_mutate(&lf[130] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4147,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate(&lf[132] /* (set! main#find-object-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4159,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate(&lf[137] /* (set! main#linker-libraries ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6915,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate(&lf[142] /* (set! main#exec ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6969,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate(&lf[152] /* (set! main#$delete-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7078,tmp=(C_word)a,a+=2,tmp));
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7128,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7138,a[2]=t21,tmp=(C_word)a,a+=3,tmp);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7142,a[2]=t22,tmp=(C_word)a,a+=3,tmp);
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7146,a[2]=t23,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:1083: chicken.process-context#get-environment-variable"));
t25=C_fast_retrieve(lf[221]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t25;
av2[1]=t24;
av2[2]=lf[399];
((C_proc)(void*)(*((C_word*)t25+1)))(3,av2);}}

/* k4022 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void f_4024(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4024,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4028,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[104],C_text("main#deployed")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4098,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:276: chicken.platform#software-version"));
t4=C_fast_retrieve(lf[227]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;
f_4028(t3,C_SCHEME_END_OF_LIST);}}

/* k4026 in k4022 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void f_4028(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4028,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4032,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:279: chicken.process-context#get-environment-variable"));
t4=C_fast_retrieve(lf[221]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[222];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4030 in k4026 in k4022 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_4032(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_4032,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4035,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4048,a[2]=t6,a[3]=t7,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:281: chicken.string#string-split"));
t9=C_fast_retrieve(lf[219]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t1;
av2[3]=lf[220];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
C_trace(C_text("csc.scm:262: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=((C_word*)t2)[4];
av2[4]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k4033 in k4030 in k4026 in k4022 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_4035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4035,c,av);}
C_trace(C_text("csc.scm:262: scheme#append"));
t2=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4046 in k4030 in k4026 in k4022 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_4048(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4048,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4053,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4053(t5,((C_word*)t0)[4],t1);}

/* map-loop947 in k4046 in k4030 in k4026 in k4022 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void f_4053(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4053,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csc.scm:281: g970"));
t4=*((C_word*)lf[79]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[218];
av2[3]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4076 in map-loop947 in k4046 in k4030 in k4026 in k4022 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_4078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4078,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4053(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4096 in k4022 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4098,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4028(t2,(C_truep((C_truep(C_eqp(t1,lf[223]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[224]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[225]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))?C_a_i_list1(&a,1,lf[226]):C_SCHEME_END_OF_LIST));}

/* k4104 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4106(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4106,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4110,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4114,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[104],C_text("main#deployed")))){
C_trace(C_text("csc.scm:266: chicken.string#conc"));
t4=C_fast_retrieve(lf[228]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=lf[229];
av2[3]=C_retrieve2(lf[121],C_text("main#rpath-option"));
av2[4]=lf[230];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
if(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))){
t4=C_retrieve2(lf[18],C_text("main#host-libdir"));
t5=C_retrieve2(lf[18],C_text("main#host-libdir"));
C_trace(C_text("csc.scm:266: chicken.string#conc"));
t6=C_fast_retrieve(lf[228]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=lf[229];
av2[3]=C_retrieve2(lf[121],C_text("main#rpath-option"));
av2[4]=C_retrieve2(lf[18],C_text("main#host-libdir"));
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* k4108 in k4104 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4110,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_4024(t2,C_a_i_list2(&a,2,((C_word*)t0)[3],t1));}

/* k4112 in k4104 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4114,c,av);}
C_trace(C_text("csc.scm:266: chicken.string#conc"));
t2=C_fast_retrieve(lf[228]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[229];
av2[3]=C_retrieve2(lf[121],C_text("main#rpath-option"));
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4128 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4130,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4024(t2,C_a_i_list1(&a,1,t1));}

/* k4135 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4137,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_4024(t2,C_a_i_list1(&a,1,t1));}

/* main#repo-path in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in ... */
static void f_4147(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_4147,1,t1);}
if(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))){
C_trace(C_text("csc.scm:298: chicken.platform#repository-path"));
t2=C_fast_retrieve(lf[131]);{
C_word av2[2];
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_retrieve2(lf[26],C_text("main#target-repo"));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(C_truep(t3)?C_retrieve2(lf[27],C_text("main#target-run-repo")):C_retrieve2(lf[26],C_text("main#target-repo")));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in ... */
static void C_ccall f_4159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4159,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4163,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csc.scm:302: chicken.pathname#make-pathname"));
t4=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=t2;
av2[4]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4161 in main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_4163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4163,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4166,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:303: chicken.pathname#make-pathname"));
t4=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[5];
av2[4]=C_retrieve2(lf[68],C_text("main#library-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4164 in k4161 in main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in ... */
static void C_ccall f_4166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4166,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4169,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:305: chicken.pathname#make-pathname"));
t5=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t2)[5];
av2[4]=C_retrieve2(lf[75],C_text("main#static-library-extension"));
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k4167 in k4164 in k4161 in main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4169,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4172,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=C_SCHEME_UNDEFINED,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("csc.scm:306: chicken.pathname#make-pathname"));
t4=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t2)[5];
av2[4]=C_retrieve2(lf[74],C_text("main#static-object-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4170 in k4167 in k4164 in k4161 in main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4172,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4175,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:307: chicken.file#file-exists?"));
t4=C_fast_retrieve(lf[135]);{
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

/* k4173 in k4170 in k4167 in k4164 in k4161 in main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_4175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4175,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4181,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:308: chicken.file#file-exists?"));
t4=C_fast_retrieve(lf[135]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k4179 in k4173 in k4170 in k4167 in k4164 in k4161 in main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_4181(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4181,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4187,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fast_retrieve(lf[134]),C_SCHEME_TRUE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4219,a[2]=t3,a[3]=((C_word*)t2)[5],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csc.scm:310: chicken.file#file-exists?"));
t6=C_fast_retrieve(lf[135]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t2)[6];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_4187(2,av2);}}}}

/* k4185 in k4179 in k4173 in k4170 in k4167 in k4164 in k4161 in main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_4187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4187,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_not(C_retrieve2(lf[106],C_text("main#ignore-repository"))))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4213,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csc.scm:313: repo-path"));
f_4147(t3);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k4197 in k4185 in k4179 in k4173 in k4170 in k4167 in k4164 in k4161 in main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_4199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4199,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4209,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:314: repo-path"));
f_4147(t2);}}

/* k4207 in k4197 in k4185 in k4179 in k4173 in k4170 in k4167 in k4164 in k4161 in main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_4209(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4209,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("csc.scm:314: chicken.load#find-file"));
t3=C_fast_retrieve(lf[133]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4211 in k4185 in k4179 in k4173 in k4170 in k4167 in k4164 in k4161 in main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_4213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4213,c,av);}
C_trace(C_text("csc.scm:313: chicken.load#find-file"));
t2=C_fast_retrieve(lf[133]);{
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

/* k4217 in k4179 in k4173 in k4170 in k4167 in k4164 in k4161 in main#find-object-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_4219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4219,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_4187(2,av2);}}
else{
C_trace(C_text("csc.scm:311: chicken.file#file-exists?"));
t2=C_fast_retrieve(lf[135]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k4229 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4231(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_4231,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4238,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[236],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,lf[237],t4);
t6=C_a_i_cons(&a,2,t1,t5);
t7=C_a_i_cons(&a,2,lf[238],t6);
t8=C_a_i_cons(&a,2,t1,t7);
t9=C_a_i_cons(&a,2,lf[239],t8);
C_trace(C_text("csc.scm:28: ##sys#print-to-string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[193]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[193]+1);
av2[1]=t2;
av2[2]=t9;
tp(3,av2);}}

/* k4236 in k4229 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4238,c,av);}
C_trace(C_text("csc.scm:321: chicken.base#print"));
t2=*((C_word*)lf[149]+1);{
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

/* t-options in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void f_4271(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4271,2,t1,t2);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4276,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:536: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[111],C_text("main#translate-options"));
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4274 in t-options in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in ... */
static void C_ccall f_4276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4276,c,av);}
t2=C_mutate(&lf[111] /* (set! main#translate-options ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* check in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void f_4278(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4278,4,t1,t2,t3,t4);}
a=C_alloc(3);
t5=C_i_length(t3);
if(C_truep(C_i_nullp(t4))){
if(C_truep(C_i_greater_or_equalp(t5,C_fix(1)))){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
C_trace(C_text("csc.scm:540: stop"));
f_3745(t1,lf[156],C_a_i_list(&a,1,t2));}}
else{
t6=C_i_car(t4);
if(C_truep(C_i_greater_or_equalp(t5,t6))){
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
C_trace(C_text("csc.scm:540: stop"));
f_3745(t1,lf[156],C_a_i_list(&a,1,t2));}}}

/* shared-build in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void f_4304(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_4304,2,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4309,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csc.scm:543: cons*"));
f_2863(t3,lf[161],C_a_i_list(&a,2,lf[162],C_retrieve2(lf[111],C_text("main#translate-options"))));}

/* k4307 in shared-build in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in ... */
static void C_ccall f_4309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4309,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[111] /* (set! main#translate-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4313,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:544: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[76],C_text("main#pic-options"));
av2[3]=lf[160];
av2[4]=C_retrieve2(lf[114],C_text("main#compile-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4311 in k4307 in shared-build in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4313(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4313,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4317,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[33],C_text("main#osx")))){
if(C_truep(((C_word*)t2)[3])){
C_trace(C_text("csc.scm:546: scheme#append"));
t5=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[157];
av2[3]=C_retrieve2(lf[118],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
C_trace(C_text("csc.scm:546: scheme#append"));
t5=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[158];
av2[3]=C_retrieve2(lf[118],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}
else{
C_trace(C_text("csc.scm:546: scheme#append"));
t5=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[159];
av2[3]=C_retrieve2(lf[118],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4315 in k4311 in k4307 in shared-build in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4317,c,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
t3=lf[128] /* main#shared */ =C_SCHEME_TRUE;;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* generate-target-filename in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void f_4334(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4334,2,t1,t2);}
if(C_truep(C_retrieve2(lf[128],C_text("main#shared")))){
t3=C_retrieve2(lf[72],C_text("main#shared-library-extension"));
t4=C_retrieve2(lf[72],C_text("main#shared-library-extension"));
C_trace(C_text("csc.scm:556: chicken.pathname#pathname-replace-extension"));
t5=C_fast_retrieve(lf[163]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_retrieve2(lf[72],C_text("main#shared-library-extension"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[126],C_text("main#compile-only")))){
t3=C_retrieve2(lf[67],C_text("main#object-extension"));
t4=C_retrieve2(lf[67],C_text("main#object-extension"));
C_trace(C_text("csc.scm:556: chicken.pathname#pathname-replace-extension"));
t5=C_fast_retrieve(lf[163]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t3=C_retrieve2(lf[70],C_text("main#executable-extension"));
C_trace(C_text("csc.scm:556: chicken.pathname#pathname-replace-extension"));
t4=C_fast_retrieve(lf[163]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_retrieve2(lf[70],C_text("main#executable-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}}

/* loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void f_4350(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_4350,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4361,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csc.scm:565: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[114],C_text("main#compile-options"));
av2[3]=C_retrieve2(lf[115],C_text("main#builtin-compile-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4668,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("csc.scm:613: scheme#string->symbol"));
t7=*((C_word*)lf[397]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in ... */
static void C_ccall f_4361(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_4361,c,av);}
a=C_alloc(12);
t2=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4365,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4661,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4024,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[40],C_text("main#elf")))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4106,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:265: chicken.string#conc"));
t7=C_fast_retrieve(lf[228]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[231];
av2[3]=C_retrieve2(lf[108],C_text("main#library-dir"));
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[37],C_text("main#aix")))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4130,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:273: chicken.string#conc"));
t7=C_fast_retrieve(lf[228]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[232];
av2[3]=C_retrieve2(lf[121],C_text("main#rpath-option"));
av2[4]=C_retrieve2(lf[108],C_text("main#library-dir"));
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4137,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:275: chicken.string#conc"));
t7=C_fast_retrieve(lf[228]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[233];
av2[3]=C_retrieve2(lf[108],C_text("main#library-dir"));
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}}

/* k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4365(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4365,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4368,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[99],C_text("main#inquiry-only")))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4534,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[100],C_text("main#show-cflags")))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4628,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:952: scheme#append"));
t7=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_retrieve2(lf[116],C_text("main#compilation-optimization-options"));
av2[3]=C_retrieve2(lf[114],C_text("main#compile-options"));
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_4534(2,av2);}}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_4368(2,av2);}}}

/* k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4368(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4368,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4371,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[126],C_text("main#compile-only")))){
t4=C_i_length(C_retrieve2(lf[87],C_text("main#scheme-files")));
t5=C_i_length(C_retrieve2(lf[88],C_text("main#c-files")));
t6=C_a_i_fixnum_plus(&a,2,t4,t5);
if(C_truep(C_i_integer_greaterp(t6,C_fix(1)))){
C_trace(C_text("csc.scm:578: stop"));
f_3745(t3,lf[215],C_SCHEME_END_OF_LIST);}
else{
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_4371(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4371(2,av2);}}}

/* k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_4371(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4371,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4374,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(C_retrieve2(lf[87],C_text("main#scheme-files"))))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4448,a[2]=t3,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_i_nullp(C_retrieve2(lf[88],C_text("main#c-files")));
t6=(C_truep(t5)?C_i_nullp(C_retrieve2(lf[92],C_text("main#object-files"))):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4472,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[107],C_text("main#show-debugging-help")))){
t8=C_a_i_cons(&a,2,lf[200],C_retrieve2(lf[111],C_text("main#translate-options")));
C_trace(C_text("csc.scm:583: exec"));
f_6969(t7,C_retrieve2(lf[59],C_text("main#translator")),t8);}
else{
C_trace(C_text("csc.scm:584: stop"));
f_3745(t4,lf[199],C_SCHEME_END_OF_LIST);}}
else{
t7=t4;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_4448(2,av2);}}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4491,a[2]=t3,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t5=(C_truep(C_retrieve2(lf[128],C_text("main#shared")))?C_i_not(C_retrieve2(lf[98],C_text("main#embedded"))):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_a_i_cons(&a,2,lf[214],C_retrieve2(lf[111],C_text("main#translate-options")));
t7=C_mutate(&lf[111] /* (set! main#translate-options ...) */,t6);
t8=t4;
f_4491(t8,t7);}
else{
t6=t4;
f_4491(t6,C_SCHEME_UNDEFINED);}}}

/* k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_4374(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_4374,c,av);}
a=C_alloc(21);
if(C_truep(C_retrieve2(lf[125],C_text("main#translate-only")))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4380,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6324,a[2]=C_SCHEME_UNDEFINED,a[3]=t4,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=6,tmp);
t6=C_retrieve2(lf[88],C_text("main#c-files"));
t7=C_i_check_list_2(C_retrieve2(lf[88],C_text("main#c-files")),lf[164]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6396,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6547,a[2]=t10,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_6547(t12,t8,C_retrieve2(lf[88],C_text("main#c-files")));}}

/* k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_4380(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4380,c,av);}
a=C_alloc(14);
if(C_truep(C_retrieve2(lf[126],C_text("main#compile-only")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4386,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[95],C_text("main#linked-extensions"))))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4438,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4442,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[132],C_text("main#find-object-file"));
t6=C_retrieve2(lf[95],C_text("main#linked-extensions"));
t7=C_retrieve2(lf[95],C_text("main#linked-extensions"));
t8=C_i_noop2(C_retrieve2(lf[95],C_text("main#linked-extensions")),C_SCHEME_UNDEFINED);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3092,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t12=((C_word*)t10)[1];
f_3092(t12,t4,C_retrieve2(lf[95],C_text("main#linked-extensions")));}
else{
t3=t2;
f_4386(t3,C_SCHEME_UNDEFINED);}}}

/* k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void f_4386(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_4386,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4389,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_member(C_retrieve2(lf[122],C_text("main#target-filename")),C_retrieve2(lf[87],C_text("main#scheme-files"))))){
t3=*((C_word*)lf[43]+1);
t4=*((C_word*)lf[43]+1);
t5=C_i_check_port_2(*((C_word*)lf[43]+1),C_fix(2),C_SCHEME_TRUE,lf[44]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4401,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csc.scm:603: ##sys#print"));
t7=*((C_word*)lf[48]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[184];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[43]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4389(2,av2);}}}

/* k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_4389(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_4389,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6581,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[92],C_text("main#object-files"));
t4=C_retrieve2(lf[93],C_text("main#generated-object-files"));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6811,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6811(t8,t2,C_retrieve2(lf[92],C_text("main#object-files")),C_retrieve2(lf[92],C_text("main#object-files")));}

/* k4399 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_4401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4401,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4404,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:603: ##sys#print"));
t3=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[122],C_text("main#target-filename"));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4402 in k4399 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_4404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4404,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4407,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:603: ##sys#print"));
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[183];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4405 in k4402 in k4399 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_4407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4407,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4410,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:603: ##sys#print"));
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[122],C_text("main#target-filename"));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4408 in k4405 in k4402 in k4399 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void C_ccall f_4410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4410,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4413,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:603: ##sys#print"));
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[182];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4411 in k4408 in k4405 in k4402 in k4399 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f_4413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4413,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4416,a[2]=((C_word*)t2)[2],a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csc.scm:603: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t2)[3];
tp(4,av2);}}

/* k4414 in k4411 in k4408 in k4405 in k4402 in k4399 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in ... */
static void C_ccall f_4416(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4416,c,av);}
a=C_alloc(3);
t2=(C_truep(C_mk_bool(C_WINDOWS_SHELL))?lf[179]:lf[180]);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4431,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:608: scheme#string-append"));
t5=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[122],C_text("main#target-filename"));
av2[3]=lf[181];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4429 in k4414 in k4411 in k4408 in k4405 in k4402 in k4399 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in ... */
static void C_ccall f_4431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4431,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_a_i_list2(&a,2,C_retrieve2(lf[122],C_text("main#target-filename")),t1);
C_trace(C_text("csc.scm:606: exec"));
f_6969(((C_word*)t2)[2],((C_word*)t2)[3],t3);}

/* k4436 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_4438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4438,c,av);}
t2=C_mutate(&lf[92] /* (set! main#object-files ...) */,t1);
t3=((C_word*)t0)[2];
f_4386(t3,t2);}

/* k4440 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_4442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4442,c,av);}
C_trace(C_text("csc.scm:601: scheme#append"));
t2=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[92],C_text("main#object-files"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4446 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_4448(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4448,c,av);}
a=C_alloc(5);
if(C_truep(C_retrieve2(lf[122],C_text("main#target-filename")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_4374(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4455,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_nullp(C_retrieve2(lf[88],C_text("main#c-files")));
t4=(C_truep(t3)?C_retrieve2(lf[92],C_text("main#object-files")):C_retrieve2(lf[88],C_text("main#c-files")));
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3205,tmp=(C_word)a,a+=2,tmp);
t6=(
  f_3205(t4)
);
C_trace(C_text("csc.scm:587: generate-target-filename"));
f_4334(t2,t6);}}

/* k4453 in k4446 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_4455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4455,c,av);}
t2=C_mutate(&lf[122] /* (set! main#target-filename ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_4374(2,av2);}}

/* k4470 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_4472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4472,c,av);}
C_trace(C_text("csc.scm:584: stop"));
f_3745(((C_word*)t0)[2],lf[199],C_SCHEME_END_OF_LIST);}

/* k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void f_4491(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4491,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[122],C_text("main#target-filename")))){
t3=t2;
f_4494(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4501,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[87],C_text("main#scheme-files"));
C_trace(C_text("csc.scm:594: generate-target-filename"));
f_4334(t3,C_i_car(C_retrieve2(lf[87],C_text("main#scheme-files"))));}}

/* k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void f_4494(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4494,2,t0,t1);}
a=C_alloc(5);
t2=C_retrieve2(lf[87],C_text("main#scheme-files"));
t3=C_i_check_list_2(C_retrieve2(lf[87],C_text("main#scheme-files")),lf[164]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6299,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6299(t7,((C_word*)t0)[2],C_retrieve2(lf[87],C_text("main#scheme-files")));}

/* k4499 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_4501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4501,c,av);}
t2=C_mutate(&lf[122] /* (set! main#target-filename ...) */,t1);
t3=((C_word*)t0)[2];
f_4494(t3,t2);}

/* k4532 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4534,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4537,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[101],C_text("main#show-ldflags")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4591,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:1014: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[117],C_text("main#linking-optimization-options"));
av2[3]=C_retrieve2(lf[118],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4537(2,av2);}}}

/* k4535 in k4532 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_4537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4537,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4540,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[102],C_text("main#show-libs")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4554,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:571: linker-libraries"));
f_6915(t3);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8098,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:572: scheme#newline"));
t4=*((C_word*)lf[216]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4538 in k4535 in k4532 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_4540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4540,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4543,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:572: scheme#newline"));
t3=*((C_word*)lf[216]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4541 in k4538 in k4535 in k4532 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_4543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4543,c,av);}
C_trace(C_text("csc.scm:573: chicken.base#exit"));
t2=C_fast_retrieve(lf[45]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4552 in k4535 in k4532 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_4554(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4554,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[164]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4562,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4562(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1097 in k4552 in k4535 in k4532 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void f_4562(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4562,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4572,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:571: g1113"));
t4=*((C_word*)lf[217]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4570 in for-each-loop1097 in k4552 in k4535 in k4532 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_4572(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4572,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4562(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4589 in k4532 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_4591(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4591,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[164]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4599,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4599(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1072 in k4589 in k4532 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void f_4599(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4599,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4609,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:570: g1088"));
t4=*((C_word*)lf[217]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4607 in for-each-loop1072 in k4589 in k4532 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_4609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4609,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4599(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4626 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4628(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4628,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[164]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4636,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4636(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1047 in k4626 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void f_4636(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4636,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4646,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:569: g1063"));
t4=*((C_word*)lf[217]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_make_character(32);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4644 in for-each-loop1047 in k4626 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_4646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4646,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4636(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4659 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4661,c,av);}
C_trace(C_text("csc.scm:566: scheme#append"));
t2=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in ... */
static void C_ccall f_4668(C_word c,C_word *av){
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
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_4668,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4671,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(t1,lf[234]);
t4=(C_truep(t3)?t3:C_eqp(t1,lf[235]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4683,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4231,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t7=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t5=C_eqp(t1,lf[240]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4695,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4702,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:619: chicken.platform#chicken-version"));
t8=C_fast_retrieve(lf[241]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t6=C_eqp(t1,lf[242]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4711,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:622: exec"));
f_6969(t7,C_retrieve2(lf[59],C_text("main#translator")),lf[243]);}
else{
t7=C_eqp(t1,lf[244]);
if(C_truep(t7)){
t8=lf[96] /* main#cpp-mode */ =C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[33],C_text("main#osx")))){
t9=C_a_i_cons(&a,2,lf[245],C_retrieve2(lf[114],C_text("main#compile-options")));
t10=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t9);
C_trace(C_text("csc.scm:858: loop"));
t11=((C_word*)((C_word*)t0)[2])[1];
f_4350(t11,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
C_trace(C_text("csc.scm:858: loop"));
t9=((C_word*)((C_word*)t0)[2])[1];
f_4350(t9,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t8=C_eqp(t1,lf[246]);
if(C_truep(t8)){
t9=lf[97] /* main#objc-mode */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t10=((C_word*)((C_word*)t0)[2])[1];
f_4350(t10,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t9=C_eqp(t1,lf[247]);
if(C_truep(t9)){
t10=C_a_i_cons(&a,2,lf[248],C_retrieve2(lf[111],C_text("main#translate-options")));
t11=C_mutate(&lf[111] /* (set! main#translate-options ...) */,t10);
t12=lf[129] /* main#static */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t13=((C_word*)((C_word*)t0)[2])[1];
f_4350(t13,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t10=C_eqp(t1,lf[249]);
if(C_truep(t10)){
t11=lf[99] /* main#inquiry-only */ =C_SCHEME_TRUE;;
t12=lf[100] /* main#show-cflags */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t13=((C_word*)((C_word*)t0)[2])[1];
f_4350(t13,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t11=C_eqp(t1,lf[250]);
if(C_truep(t11)){
t12=lf[99] /* main#inquiry-only */ =C_SCHEME_TRUE;;
t13=lf[101] /* main#show-ldflags */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t14=((C_word*)((C_word*)t0)[2])[1];
f_4350(t14,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t12=C_eqp(t1,lf[251]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4771,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:638: chicken.base#print"));
t14=*((C_word*)lf[149]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t14;
av2[1]=t13;
av2[2]=C_retrieve2(lf[60],C_text("main#compiler"));
((C_proc)(void*)(*((C_word*)t14+1)))(3,av2);}}
else{
t13=C_eqp(t1,lf[252]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4783,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:639: chicken.base#print"));
t15=*((C_word*)lf[149]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=C_retrieve2(lf[61],C_text("main#c++-compiler"));
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t14=C_eqp(t1,lf[253]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4795,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:640: chicken.base#print"));
t16=*((C_word*)lf[149]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t16;
av2[1]=t15;
av2[2]=C_retrieve2(lf[63],C_text("main#linker"));
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}
else{
t15=C_eqp(t1,lf[254]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4807,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:641: chicken.base#print"));
t17=*((C_word*)lf[149]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t17;
av2[1]=t16;
av2[2]=C_retrieve2(lf[58],C_text("main#home"));
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}
else{
t16=C_eqp(t1,lf[255]);
if(C_truep(t16)){
t17=lf[99] /* main#inquiry-only */ =C_SCHEME_TRUE;;
t18=lf[102] /* main#show-libs */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t19=((C_word*)((C_word*)t0)[2])[1];
f_4350(t19,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t17=C_eqp(t1,lf[256]);
t18=(C_truep(t17)?t17:C_eqp(t1,lf[257]));
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_numberp(C_retrieve2(lf[123],C_text("main#verbose"))))){
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4845,a[2]=t19,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:647: cons*"));
f_2863(t20,lf[260],C_a_i_list(&a,2,lf[261],C_retrieve2(lf[114],C_text("main#compile-options"))));}
else{
t20=t19;
f_4830(t20,C_SCHEME_UNDEFINED);}}
else{
t19=C_eqp(t1,lf[262]);
t20=(C_truep(t19)?t19:C_eqp(t1,lf[263]));
if(C_truep(t20)){
t21=C_a_i_cons(&a,2,lf[264],C_retrieve2(lf[114],C_text("main#compile-options")));
t22=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t21);
C_trace(C_text("csc.scm:655: t-options"));
f_4271(t2,C_a_i_list(&a,1,lf[265]));}
else{
t21=C_eqp(t1,lf[266]);
t22=(C_truep(t21)?t21:C_eqp(t1,lf[267]));
if(C_truep(t22)){
t23=lf[125] /* main#translate-only */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:658: t-options"));
f_4271(t2,C_a_i_list(&a,1,lf[268]));}
else{
t23=C_eqp(t1,lf[269]);
t24=(C_truep(t23)?t23:C_eqp(t1,lf[270]));
if(C_truep(t24)){
t25=lf[125] /* main#translate-only */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:661: t-options"));
f_4271(t2,C_a_i_list(&a,1,lf[271]));}
else{
t25=C_eqp(t1,lf[272]);
if(C_truep(t25)){
t26=lf[124] /* main#keep-files */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t27=((C_word*)((C_word*)t0)[2])[1];
f_4350(t27,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t26=C_eqp(t1,lf[273]);
if(C_truep(t26)){
t27=lf[126] /* main#compile-only */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t28=((C_word*)((C_word*)t0)[2])[1];
f_4350(t28,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t27=C_eqp(t1,lf[274]);
if(C_truep(t27)){
t28=lf[125] /* main#translate-only */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t29=((C_word*)((C_word*)t0)[2])[1];
f_4350(t29,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t28=C_eqp(t1,lf[275]);
t29=(C_truep(t28)?t28:C_eqp(t1,lf[276]));
if(C_truep(t29)){
t30=lf[98] /* main#embedded */ =C_SCHEME_TRUE;;
t31=C_a_i_cons(&a,2,lf[277],C_retrieve2(lf[114],C_text("main#compile-options")));
t32=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t31);
C_trace(C_text("csc.scm:858: loop"));
t33=((C_word*)((C_word*)t0)[2])[1];
f_4350(t33,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t30=C_eqp(t1,lf[278]);
if(C_truep(t30)){
t31=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4935,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csc.scm:669: check"));
f_4278(t31,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t31=C_eqp(t1,lf[281]);
if(C_truep(t31)){
t32=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4967,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:675: check"));
f_4278(t32,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t32=C_eqp(t1,lf[282]);
t33=(C_truep(t32)?t32:C_eqp(t1,lf[283]));
if(C_truep(t33)){
t34=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csc.scm:679: check"));
f_4278(t34,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t34=C_eqp(t1,lf[285]);
if(C_truep(t34)){
t35=C_a_i_cons(&a,2,lf[286],C_retrieve2(lf[114],C_text("main#compile-options")));
t36=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t35);
C_trace(C_text("csc.scm:858: loop"));
t37=((C_word*)((C_word*)t0)[2])[1];
f_4350(t37,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t35=C_eqp(t1,lf[287]);
if(C_truep(t35)){
t36=lf[106] /* main#ignore-repository */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:686: t-options"));
f_4271(t2,C_a_i_list(&a,1,((C_word*)t0)[7]));}
else{
t36=C_eqp(t1,lf[288]);
if(C_truep(t36)){
t37=C_set_block_item(lf[134] /* ##sys#setup-mode */,0,C_SCHEME_TRUE);
C_trace(C_text("csc.scm:689: t-options"));
f_4271(t2,C_a_i_list(&a,1,((C_word*)t0)[7]));}
else{
t37=C_eqp(t1,lf[289]);
if(C_truep(t37)){
t38=lf[77] /* main#generate-manifest */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t39=((C_word*)((C_word*)t0)[2])[1];
f_4350(t39,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t38=C_eqp(t1,lf[290]);
if(C_truep(t38)){
t39=C_a_i_cons(&a,2,lf[291],C_retrieve2(lf[114],C_text("main#compile-options")));
t40=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t39);
if(C_truep(C_retrieve2(lf[31],C_text("main#mingw")))){
t41=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:697: chicken.pathname#make-pathname"));
t42=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t42;
av2[1]=t41;
av2[2]=C_retrieve2(lf[21],C_text("main#host-sharedir"));
av2[3]=lf[296];
av2[4]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t42+1)))(5,av2);}}
else{
C_trace(C_text("csc.scm:858: loop"));
t41=((C_word*)((C_word*)t0)[2])[1];
f_4350(t41,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t39=C_eqp(t1,lf[297]);
if(C_truep(t39)){
t40=lf[104] /* main#deployed */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t41=((C_word*)((C_word*)t0)[2])[1];
f_4350(t41,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t40=C_eqp(t1,lf[298]);
if(C_truep(t40)){
t41=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5076,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:707: check"));
f_4278(t41,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t41=C_eqp(t1,lf[300]);
t42=(C_truep(t41)?t41:C_eqp(t1,lf[301]));
if(C_truep(t42)){
t43=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5103,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:712: check"));
f_4278(t43,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t43=C_eqp(t1,lf[302]);
t44=(C_truep(t43)?t43:C_eqp(t1,lf[303]));
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5124,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:716: cons*"));
f_2863(t45,lf[304],C_a_i_list(&a,2,lf[305],((C_word*)((C_word*)t0)[4])[1]));}
else{
t45=C_eqp(t1,lf[306]);
if(C_truep(t45)){
t46=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5134,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:717: cons*"));
f_2863(t46,lf[307],C_a_i_list(&a,2,lf[308],((C_word*)((C_word*)t0)[4])[1]));}
else{
t46=C_eqp(t1,lf[309]);
if(C_truep(t46)){
t47=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5144,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:718: cons*"));
f_2863(t47,lf[310],C_a_i_list(&a,2,lf[311],((C_word*)((C_word*)t0)[4])[1]));}
else{
t47=C_eqp(t1,lf[312]);
if(C_truep(t47)){
t48=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5154,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:719: cons*"));
f_2863(t48,lf[313],C_a_i_list(&a,2,lf[314],((C_word*)((C_word*)t0)[4])[1]));}
else{
t48=C_eqp(t1,lf[315]);
if(C_truep(t48)){
t49=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5164,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:720: cons*"));
f_2863(t49,lf[316],C_a_i_list(&a,2,lf[317],((C_word*)((C_word*)t0)[4])[1]));}
else{
t49=C_eqp(t1,lf[318]);
if(C_truep(t49)){
t50=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:722: cons*"));
f_2863(t50,lf[319],C_a_i_list(&a,2,lf[320],((C_word*)((C_word*)t0)[4])[1]));}
else{
t50=C_eqp(t1,lf[321]);
if(C_truep(t50)){
t51=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5184,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:723: cons*"));
f_2863(t51,lf[322],C_a_i_list(&a,2,lf[323],((C_word*)((C_word*)t0)[4])[1]));}
else{
t51=C_eqp(t1,lf[324]);
if(C_truep(t51)){
t52=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5194,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:724: cons*"));
f_2863(t52,lf[325],C_a_i_list(&a,2,lf[326],((C_word*)((C_word*)t0)[4])[1]));}
else{
t52=C_eqp(t1,lf[327]);
if(C_truep(t52)){
t53=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5204,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:725: cons*"));
f_2863(t53,lf[328],C_a_i_list(&a,2,lf[329],((C_word*)((C_word*)t0)[4])[1]));}
else{
t53=C_eqp(t1,lf[330]);
if(C_truep(t53)){
t54=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5214,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:726: cons*"));
f_2863(t54,lf[331],C_a_i_list(&a,2,lf[332],((C_word*)((C_word*)t0)[4])[1]));}
else{
t54=C_eqp(t1,lf[333]);
if(C_truep(t54)){
t55=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5223,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("csc.scm:728: check"));
f_4278(t55,t1,((C_word*)((C_word*)t0)[4])[1],C_SCHEME_END_OF_LIST);}
else{
t55=C_eqp(t1,lf[335]);
if(C_truep(t55)){
t56=lf[123] /* main#verbose */ =C_SCHEME_TRUE;;
t57=lf[103] /* main#dry-run */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t58=((C_word*)((C_word*)t0)[2])[1];
f_4350(t58,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t56=C_eqp(t1,lf[336]);
t57=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5265,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t56)){
t58=t57;
f_5265(t58,t56);}
else{
t58=C_eqp(t1,lf[395]);
t59=t57;
f_5265(t59,(C_truep(t58)?t58:C_eqp(t1,lf[396])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4669 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4671,c,av);}
C_trace(C_text("csc.scm:858: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_4350(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4681 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4683,c,av);}
C_trace(C_text("csc.scm:617: chicken.base#exit"));
t2=C_fast_retrieve(lf[45]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4693 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4695,c,av);}
C_trace(C_text("csc.scm:620: chicken.base#exit"));
t2=C_fast_retrieve(lf[45]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4700 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4702,c,av);}
C_trace(C_text("csc.scm:619: chicken.base#print"));
t2=*((C_word*)lf[149]+1);{
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

/* k4709 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4711,c,av);}
C_trace(C_text("csc.scm:623: chicken.base#exit"));
t2=C_fast_retrieve(lf[45]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4769 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4771,c,av);}
C_trace(C_text("csc.scm:638: chicken.base#exit"));
t2=C_fast_retrieve(lf[45]);{
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

/* k4781 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4783,c,av);}
C_trace(C_text("csc.scm:639: chicken.base#exit"));
t2=C_fast_retrieve(lf[45]);{
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

/* k4793 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4795,c,av);}
C_trace(C_text("csc.scm:640: chicken.base#exit"));
t2=C_fast_retrieve(lf[45]);{
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

/* k4805 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4807,c,av);}
C_trace(C_text("csc.scm:641: chicken.base#exit"));
t2=C_fast_retrieve(lf[45]);{
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

/* k4828 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void f_4830(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4830,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:649: t-options"));
f_4271(t2,C_a_i_list(&a,1,lf[258]));}

/* k4831 in k4828 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4833,c,av);}
if(C_truep(C_retrieve2(lf[123],C_text("main#verbose")))){
t2=lf[123] /* main#verbose */ =C_fix(2);;
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_4350(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=lf[123] /* main#verbose */ =C_SCHEME_TRUE;;
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_4350(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}}

/* k4843 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4845,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t1);
t3=C_a_i_cons(&a,2,lf[259],C_retrieve2(lf[118],C_text("main#link-options")));
t4=C_mutate(&lf[118] /* (set! main#link-options ...) */,t3);
t5=((C_word*)t0)[2];
f_4830(t5,t4);}

/* k4933 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4935,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("csc.scm:670: t-options"));
f_4271(t2,C_a_i_list(&a,2,lf[280],t3));}

/* k4936 in k4933 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4938,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4942,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4950,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:672: chicken.string#string-split"));
t4=C_fast_retrieve(lf[219]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
av2[3]=lf[279];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k4940 in k4936 in k4933 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_4942(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4942,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[95] /* (set! main#linked-extensions ...) */,t1);
t4=C_i_cdr(((C_word*)((C_word*)t2)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t2)[2])+1,t4);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t2)[3])[1];
f_4350(t6,((C_word*)t2)[4],((C_word*)((C_word*)t2)[2])[1]);}

/* k4948 in k4936 in k4933 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_4950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4950,c,av);}
C_trace(C_text("csc.scm:672: scheme#append"));
t2=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[95],C_text("main#linked-extensions"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4965 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4967(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4967,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[108] /* (set! main#library-dir ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t0)[3])[1];
f_4350(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k4985 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_4987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4987,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("csc.scm:680: t-options"));
f_4271(t2,C_a_i_list(&a,2,lf[284],t3));}

/* k4988 in k4985 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_4990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4990,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
C_trace(C_text("csc.scm:858: loop"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4350(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5054 in k5058 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5056,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
C_trace(C_text("csc.scm:858: loop"));
t4=((C_word*)((C_word*)t2)[2])[1];
f_4350(t4,((C_word*)t2)[3],((C_word*)((C_word*)t2)[4])[1]);}

/* k5058 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_5060,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[92],C_text("main#object-files")));
t3=C_mutate(&lf[92] /* (set! main#object-files ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5056,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:702: cons*"));
f_2863(t4,lf[292],C_a_i_list(&a,4,lf[293],lf[294],lf[295],C_retrieve2(lf[118],C_text("main#link-options"))));}

/* k5074 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5076,c,av);}
a=C_alloc(9);
if(C_truep(C_retrieve2(lf[33],C_text("main#osx")))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5087,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("csc.scm:709: cons*"));
f_2863(t2,lf[299],C_a_i_list(&a,2,t3,C_retrieve2(lf[118],C_text("main#link-options"))));}
else{
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
C_trace(C_text("csc.scm:858: loop"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4350(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}}

/* k5085 in k5074 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5087(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5087,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
t4=C_i_cdr(((C_word*)((C_word*)t2)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t2)[2])+1,t4);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t2)[3])[1];
f_4350(t6,((C_word*)t2)[4],((C_word*)((C_word*)t2)[2])[1]);}

/* k5101 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5103(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5103,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_mutate(&lf[122] /* (set! main#target-filename ...) */,t2);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t0)[3])[1];
f_4350(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5122 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5124,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4350(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5132 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5134,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4350(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5142 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5144,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4350(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5152 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5154,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4350(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5162 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5164,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4350(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5172 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5174,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4350(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5182 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5184,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4350(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5192 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5194,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4350(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5202 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5204,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4350(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5212 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5214,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4350(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5221 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_5223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5223,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("csc.scm:729: t-options"));
f_4271(t2,C_a_i_list(&a,2,((C_word*)t0)[6],t3));}

/* k5224 in k5221 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5226,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5238,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#string->list"));
t3=C_fast_retrieve(lf[334]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5236 in k5224 in k5221 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_5238(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5238,c,av);}
t2=((C_word*)t0)[2];
if(C_truep(C_u_i_memq(C_make_character(104),t1))){
t3=lf[107] /* main#show-debugging-help */ =C_SCHEME_TRUE;;
t4=lf[125] /* main#translate-only */ =C_SCHEME_TRUE;;
t5=C_i_cdr(((C_word*)((C_word*)t2)[2])[1]);
t6=C_mutate(((C_word *)((C_word*)t2)[2])+1,t5);
C_trace(C_text("csc.scm:858: loop"));
t7=((C_word*)((C_word*)t2)[3])[1];
f_4350(t7,((C_word*)t2)[4],((C_word*)((C_word*)t2)[2])[1]);}
else{
t3=C_i_cdr(((C_word*)((C_word*)t2)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t2)[2])+1,t3);
C_trace(C_text("csc.scm:858: loop"));
t5=((C_word*)((C_word*)t2)[3])[1];
f_4350(t5,((C_word*)t2)[4],((C_word*)((C_word*)t2)[2])[1]);}}

/* k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void f_5265(C_word t0,C_word t1){
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
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_5265,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
C_trace(C_text("csc.scm:738: shared-build"));
f_4304(((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[337]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[338]));
if(C_truep(t3)){
C_trace(C_text("csc.scm:740: shared-build"));
f_4304(((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[339]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5289,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:742: check"));
f_4278(t5,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[340]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5306,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:746: check"));
f_4278(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[341]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5323,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:750: check"));
f_4278(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[342]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5340,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:754: check"));
f_4278(t8,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[343]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5357,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:758: check"));
f_4278(t9,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[345]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5378,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:761: check"));
f_4278(t10,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[346]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5404,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t12=C_a_i_list1(&a,1,lf[347]);
C_trace(C_text("csc.scm:765: scheme#append"));
t13=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t13;
av2[1]=t11;
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}
else{
t11=C_eqp(((C_word*)t0)[4],lf[348]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5417,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:767: check"));
f_4278(t12,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[349]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5442,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:771: check"));
f_4278(t13,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[354]);
if(C_truep(t13)){
C_trace(C_text("csc.scm:858: loop"));
t14=((C_word*)((C_word*)t0)[6])[1];
f_4350(t14,((C_word*)t0)[7],((C_word*)((C_word*)t0)[5])[1]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[355]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5497,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csc.scm:780: check"));
f_4278(t15,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[357]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5517,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csc.scm:784: check"));
f_4278(t16,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[359]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5538,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:788: scheme#append"));
t18=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t18;
av2[1]=t17;
av2[2]=C_retrieve2(lf[87],C_text("main#scheme-files"));
av2[3]=lf[361];
((C_proc)(void*)(*((C_word*)t18+1)))(4,av2);}}
else{
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5548,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t18=C_eqp(((C_word*)t0)[4],lf[394]);
if(C_truep(t18)){
t19=lf[127] /* main#to-stdout */ =C_SCHEME_TRUE;;
t20=lf[125] /* main#translate-only */ =C_SCHEME_TRUE;;
t21=t17;
f_5548(t21,t20);}
else{
t19=t17;
f_5548(t19,C_SCHEME_UNDEFINED);}}}}}}}}}}}}}}}}}

/* k5287 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5289(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5289,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[59] /* (set! main#translator ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t0)[3])[1];
f_4350(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5304 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5306(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5306,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[60] /* (set! main#compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t0)[3])[1];
f_4350(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5321 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5323(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5323,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[61] /* (set! main#c++-compiler ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t0)[3])[1];
f_4350(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5338 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5340(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5340,c,av);}
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[63] /* (set! main#linker ...) */,t2);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t0)[3])[1];
f_4350(t6,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5355 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5357(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5357,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5361,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("csc.scm:759: cons*"));
f_2863(t2,lf[344],C_a_i_list(&a,2,t3,t4));}

/* k5359 in k5355 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_5361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5361,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t4=((C_word*)((C_word*)t2)[3])[1];
f_4350(t4,((C_word*)t2)[4],((C_word*)((C_word*)t2)[2])[1]);}

/* k5376 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5378,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5382,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5390,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:762: chicken.string#string-split"));
t4=C_fast_retrieve(lf[219]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5380 in k5376 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_5382(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5382,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t1);
t4=C_i_cdr(((C_word*)((C_word*)t2)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t2)[2])+1,t4);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t2)[3])[1];
f_4350(t6,((C_word*)t2)[4],((C_word*)((C_word*)t2)[2])[1]);}

/* k5388 in k5376 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_5390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5390,c,av);}
C_trace(C_text("csc.scm:762: scheme#append"));
t2=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[114],C_text("main#compile-options"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5402 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5404,c,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_4350(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5415 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5417,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5421,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5429,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:768: chicken.string#string-split"));
t4=C_fast_retrieve(lf[219]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5419 in k5415 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_5421(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5421,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
t4=C_i_cdr(((C_word*)((C_word*)t2)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t2)[2])+1,t4);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t2)[3])[1];
f_4350(t6,((C_word*)t2)[4],((C_word*)((C_word*)t2)[2])[1]);}

/* k5427 in k5415 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_5429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5429,c,av);}
C_trace(C_text("csc.scm:768: scheme#append"));
t2=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k5440 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5442(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5442,c,av);}
a=C_alloc(6);
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(&lf[105] /* (set! main#rpath ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5456,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5472,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:773: chicken.platform#build-platform"));
t6=C_fast_retrieve(lf[353]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k5454 in k5440 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void f_5456(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5456,2,t0,t1);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5460,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5468,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:776: scheme#string-append"));
t5=*((C_word*)lf[79]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[350];
av2[3]=C_retrieve2(lf[121],C_text("main#rpath-option"));
av2[4]=C_retrieve2(lf[105],C_text("main#rpath"));
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=C_i_cdr(((C_word*)((C_word*)t2)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t2)[2])+1,t3);
C_trace(C_text("csc.scm:858: loop"));
t5=((C_word*)((C_word*)t2)[3])[1];
f_4350(t5,((C_word*)t2)[4],((C_word*)((C_word*)t2)[2])[1]);}}

/* k5458 in k5454 in k5440 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_5460(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5460,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
t4=C_i_cdr(((C_word*)((C_word*)t2)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t2)[2])+1,t4);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t2)[3])[1];
f_4350(t6,((C_word*)t2)[4],((C_word*)((C_word*)t2)[2])[1]);}

/* k5466 in k5454 in k5440 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_5468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5468,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("csc.scm:776: scheme#append"));
t3=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k5470 in k5440 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_5472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5472,c,av);}
if(C_truep((C_truep(C_eqp(t1,lf[351]))?C_SCHEME_TRUE:(C_truep(C_eqp(t1,lf[352]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t2=C_i_not(C_retrieve2(lf[31],C_text("main#mingw")));
t3=((C_word*)t0)[2];
f_5456(t3,(C_truep(t2)?C_i_not(C_retrieve2(lf[33],C_text("main#osx"))):C_SCHEME_FALSE));}
else{
t2=((C_word*)t0)[2];
f_5456(t2,C_SCHEME_FALSE);}}

/* k5495 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5497,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("csc.scm:781: t-options"));
f_4271(t2,C_a_i_list(&a,2,lf[356],t3));}

/* k5498 in k5495 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_5500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5500,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
C_trace(C_text("csc.scm:858: loop"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4350(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5515 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5517,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("csc.scm:785: t-options"));
f_4271(t2,C_a_i_list(&a,2,lf[358],t3));}

/* k5518 in k5515 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_5520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5520,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
C_trace(C_text("csc.scm:858: loop"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4350(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5536 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_5538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5538,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[87] /* (set! main#scheme-files ...) */,t1);
if(C_truep(C_retrieve2(lf[122],C_text("main#target-filename")))){
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_4350(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5545,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:790: chicken.pathname#make-pathname"));
t4=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[360];
av2[4]=C_retrieve2(lf[70],C_text("main#executable-extension"));
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k5543 in k5536 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_5545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5545,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[122] /* (set! main#target-filename ...) */,t1);
C_trace(C_text("csc.scm:858: loop"));
t4=((C_word*)((C_word*)t2)[2])[1];
f_4350(t4,((C_word*)t2)[3],((C_word*)((C_word*)t2)[4])[1]);}

/* k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void f_5548(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5548,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5551,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_truep(C_eqp(((C_word*)t0)[2],lf[392]))?C_SCHEME_TRUE:(C_truep(C_eqp(((C_word*)t0)[2],lf[393]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=C_mutate(&lf[116] /* (set! main#compilation-optimization-options ...) */,C_retrieve2(lf[82],C_text("main#best-compilation-optimization-options")));
t4=C_mutate(&lf[117] /* (set! main#linking-optimization-options ...) */,C_retrieve2(lf[84],C_text("main#best-linking-optimization-options")));
t5=t2;
f_5551(t5,t4);}
else{
t3=t2;
f_5551(t3,C_SCHEME_UNDEFINED);}}

/* k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void f_5551(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_5551,2,t0,t1);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_i_assq(((C_word*)t2)[2],lf[362]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5558,a[2]=((C_word*)t2)[3],tmp=(C_word)a,a+=3,tmp);
t5=(
C_trace("csc.scm:798: g1271"),
  f_5558(C_a_i(&a,3),t4,t3)
);
C_trace(C_text("csc.scm:858: loop"));
t6=((C_word*)((C_word*)t2)[4])[1];
f_4350(t6,((C_word*)t2)[5],((C_word*)((C_word*)t2)[3])[1]);}
else{
if(C_truep(C_i_memq(((C_word*)t2)[2],lf[363]))){
C_trace(C_text("csc.scm:799: t-options"));
f_4271(((C_word*)t2)[7],C_a_i_list(&a,1,((C_word*)t2)[8]));}
else{
if(C_truep(C_i_memq(((C_word*)t2)[2],lf[364]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5588,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[8],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("csc.scm:801: check"));
f_4278(t4,((C_word*)t2)[2],((C_word*)((C_word*)t2)[3])[1],C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5605,a[2]=((C_word*)t2)[6],a[3]=((C_word*)t2)[7],a[4]=((C_word*)t2)[8],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[3],a[8]=((C_word*)t2)[2],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greaterp(C_u_i_string_length(((C_word*)t2)[8]),C_fix(2)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5983,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:804: scheme#substring"));
t6=*((C_word*)lf[369]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t2)[8];
av2[3]=C_fix(0);
av2[4]=C_fix(2);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t5=t4;
f_5605(t5,C_SCHEME_FALSE);}}}}}

/* g1271 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static C_word f_5558(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_i_cadr(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
return(t4);}

/* k5586 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_5588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5588,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
C_trace(C_text("csc.scm:802: t-options"));
f_4271(t2,C_a_i_list(&a,2,((C_word*)t0)[6],t3));}

/* k5589 in k5586 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_5591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5591,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
C_trace(C_text("csc.scm:858: loop"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4350(t4,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void f_5605(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_5605,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
C_trace(C_text("csc.scm:805: t-options"));
f_4271(((C_word*)t0)[3],C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t2=C_fixnum_greaterp(C_u_i_string_length(((C_word*)t0)[4]),C_fix(1));
t3=(C_truep(t2)?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(((C_word*)t0)[4],C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_i_string_ref(((C_word*)t0)[4],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(76),t4))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5624,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_u_i_char_whitespacep(C_i_string_ref(((C_word*)t0)[4],C_fix(2))))){
C_trace(C_text("csc.scm:810: chicken.base#error"));
t6=*((C_word*)lf[365]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[366];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_5624(2,av2);}}}
else{
t5=C_i_string_ref(((C_word*)t0)[4],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(73),t5))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5651,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_u_i_char_whitespacep(C_i_string_ref(((C_word*)t0)[4],C_fix(2))))){
C_trace(C_text("csc.scm:814: chicken.base#error"));
t7=*((C_word*)lf[365]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[367];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_5651(2,av2);}}}
else{
t6=C_i_string_ref(((C_word*)t0)[4],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(68),t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csc.scm:817: scheme#substring"));
t8=*((C_word*)lf[369]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t7=C_i_string_ref(((C_word*)t0)[4],C_fix(1));
if(C_truep(C_u_i_char_equalp(C_make_character(70),t7))){
if(C_truep(C_retrieve2(lf[33],C_text("main#osx")))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5696,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t9=C_a_i_list1(&a,1,((C_word*)t0)[4]);
C_trace(C_text("csc.scm:820: scheme#append"));
t10=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=t8;
av2[2]=C_retrieve2(lf[114],C_text("main#compile-options"));
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
C_trace(C_text("csc.scm:858: loop"));
t8=((C_word*)((C_word*)t0)[5])[1];
f_4350(t8,((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}}
else{
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5706,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(C_u_i_string_length(((C_word*)t0)[4]),C_fix(3)))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5822,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:821: scheme#substring"));
t10=*((C_word*)lf[369]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=C_fix(4);
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t9=t8;
f_5706(t9,C_SCHEME_FALSE);}}}}}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5831,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("csc.scm:834: chicken.file#file-exists?"));
t5=C_fast_retrieve(lf[135]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}}

/* k5622 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_5624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5624,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace(C_text("csc.scm:811: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5626 in k5622 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_5628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5628,c,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_4350(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5649 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_5651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5651,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace(C_text("csc.scm:815: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[114],C_text("main#compile-options"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k5653 in k5649 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_5655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5655,c,av);}
t2=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_4350(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5680 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_5682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5682,c,av);}
a=C_alloc(6);
C_trace(C_text("csc.scm:817: t-options"));
f_4271(((C_word*)t0)[3],C_a_i_list(&a,2,lf[368],t1));}

/* k5694 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_5696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5696,c,av);}
t2=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_4350(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void f_5706(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5706,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace(C_text("csc.scm:822: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[118],C_text("main#link-options"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(C_fixnum_greaterp(C_u_i_string_length(((C_word*)t0)[5]),C_fix(2)))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5808,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("##sys#string->list"));
t3=C_fast_retrieve(lf[334]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
C_trace(C_text("csc.scm:833: stop"));
f_3745(((C_word*)t0)[6],lf[374],C_a_i_list(&a,1,((C_word*)t0)[7]));}}}

/* k5708 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_5710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5710,c,av);}
t2=C_mutate(&lf[118] /* (set! main#link-options ...) */,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_4350(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k5731 in k5802 in k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_5733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5733,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
C_trace(C_text("csc.scm:858: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4350(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k5748 in k5802 in k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_5750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5750,c,av);}
C_trace(C_text("csc.scm:827: scheme#append"));
t2=*((C_word*)lf[138]+1);{
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

/* map-loop1292 in k5802 in k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void f_5752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_5752,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5777,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_a_i_string(&a,1,t4);
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[139]);
C_word av2[4];
av2[0]=*((C_word*)lf[139]+1);
av2[1]=t3;
av2[2]=lf[370];
av2[3]=t5;
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5775 in map-loop1292 in k5802 in k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_5777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5777,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5752(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k5802 in k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_5804(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_5804,c,av);}
a=C_alloc(21);
if(C_truep(C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5750,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5752,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5752(t11,t7,((C_word*)t0)[5]);}
else{
t2=C_i_car(((C_word*)t0)[5]);
if(C_truep(C_i_char_equalp(C_make_character(108),t2))){
C_trace(C_text("csc.scm:831: stop"));
f_3745(((C_word*)t0)[6],lf[371],C_a_i_list(&a,1,((C_word*)t0)[7]));}
else{
C_trace(C_text("csc.scm:832: stop"));
f_3745(((C_word*)t0)[6],lf[372],C_a_i_list(&a,1,((C_word*)t0)[7]));}}}

/* k5806 in k5704 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_5808(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5808,c,av);}
a=C_alloc(16);
t2=C_i_cdr(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_retrieve2(lf[86],C_text("main#short-options"));
t5=C_a_i_list(&a,1,C_retrieve2(lf[86],C_text("main#short-options")));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3320,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_3320(t9,t3,t5,t2);}

/* k5820 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_5822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5822,c,av);}
t2=((C_word*)t0)[2];
f_5706(t2,C_i_string_equal_p(lf[375],t1));}

/* k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_5831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_5831,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5842,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:835: ##sys#call-with-values"));{
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
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5950,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[139]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[139]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[390];
tp(4,av2);}}}

/* a5835 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_5836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5836,c,av);}
C_trace(C_text("csc.scm:835: chicken.pathname#decompose-pathname"));
t2=C_fast_retrieve(lf[376]);{
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

/* a5841 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_5842(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5842,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5853,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
C_trace(C_text("csc.scm:837: scheme#append"));
t7=*((C_word*)lf[138]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[87],C_text("main#scheme-files"));
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[377]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[378]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5867,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
C_trace(C_text("csc.scm:839: scheme#append"));
t7=*((C_word*)lf[138]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[88],C_text("main#c-files"));
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep(C_i_string_ci_equal_p(t4,lf[379]))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5880,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list1(&a,1,((C_word*)t0)[2]);
C_trace(C_text("csc.scm:841: scheme#append"));
t7=*((C_word*)lf[138]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=C_retrieve2(lf[89],C_text("main#rc-files"));
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[380]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[381]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[382]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[383]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[384]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5893,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[33],C_text("main#osx")))){
t6=C_a_i_cons(&a,2,lf[385],C_retrieve2(lf[114],C_text("main#compile-options")));
t7=C_mutate(&lf[114] /* (set! main#compile-options ...) */,t6);
t8=t5;
f_5893(t8,t7);}
else{
t6=t5;
f_5893(t6,C_SCHEME_UNDEFINED);}}
else{
if(C_truep((C_truep(C_i_equalp(t4,lf[386]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[387]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[388]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t5=lf[97] /* main#objc-mode */ =C_SCHEME_TRUE;;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5917,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_list1(&a,1,((C_word*)t0)[2]);
C_trace(C_text("csc.scm:848: scheme#append"));
t8=*((C_word*)lf[138]+1);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
av2[2]=C_retrieve2(lf[88],C_text("main#c-files"));
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t5=C_retrieve2(lf[67],C_text("main#object-extension"));
t6=C_i_string_equal_p(t4,C_retrieve2(lf[67],C_text("main#object-extension")));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5929,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t8=t7;
f_5929(t8,t6);}
else{
t8=C_retrieve2(lf[68],C_text("main#library-extension"));
t9=t7;
f_5929(t9,C_i_string_equal_p(t4,C_retrieve2(lf[68],C_text("main#library-extension"))));}}}}}}}

/* k5851 in a5841 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_5853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5853,c,av);}
t2=C_mutate(&lf[87] /* (set! main#scheme-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5865 in a5841 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_5867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5867,c,av);}
t2=C_mutate(&lf[88] /* (set! main#c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5878 in a5841 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_5880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5880,c,av);}
t2=C_mutate(&lf[89] /* (set! main#rc-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5891 in a5841 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void f_5893(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5893,2,t0,t1);}
a=C_alloc(6);
t2=lf[96] /* main#cpp-mode */ =C_SCHEME_TRUE;;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5898,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[3]);
C_trace(C_text("csc.scm:845: scheme#append"));
t5=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[88],C_text("main#c-files"));
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k5896 in k5891 in a5841 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_5898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5898,c,av);}
t2=C_mutate(&lf[88] /* (set! main#c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5915 in a5841 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_5917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5917,c,av);}
t2=C_mutate(&lf[88] /* (set! main#c-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5927 in a5841 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void f_5929(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5929,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
C_trace(C_text("csc.scm:851: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[92],C_text("main#object-files"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5941,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
C_trace(C_text("csc.scm:852: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=C_retrieve2(lf[87],C_text("main#scheme-files"));
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k5931 in k5927 in a5841 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_5933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5933,c,av);}
t2=C_mutate(&lf[92] /* (set! main#object-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5939 in k5927 in a5841 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_5941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5941,c,av);}
t2=C_mutate(&lf[87] /* (set! main#scheme-files ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5948 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_5950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5950,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5956,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:855: chicken.file#file-exists?"));
t4=C_fast_retrieve(lf[135]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5954 in k5948 in k5829 in k5603 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_5956(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5956,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_a_i_cons(&a,2,((C_word*)t2)[2],((C_word*)((C_word*)t2)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t2)[3])+1,t3);
C_trace(C_text("csc.scm:858: loop"));
t5=((C_word*)((C_word*)t2)[4])[1];
f_4350(t5,((C_word*)t2)[5],((C_word*)((C_word*)t2)[3])[1]);}
else{
C_trace(C_text("csc.scm:857: stop"));
f_3745(((C_word*)t2)[6],lf[389],C_a_i_list(&a,1,((C_word*)t2)[7]));}}

/* k5981 in k5549 in k5546 in k5263 in k4666 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_5983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5983,c,av);}
t2=((C_word*)t0)[2];
f_5605(t2,C_i_string_equal_p(lf[391],t1));}

/* k6185 in for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_6187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6187,c,av);}
a=C_alloc(9);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6190,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_member(((C_word*)t0)[5],C_retrieve2(lf[88],C_text("main#c-files"))))){
C_trace(C_text("csc.scm:875: stop"));
f_3745(t3,lf[210],C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]));}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6190(2,av2);}}}

/* k6188 in k6185 in for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_6190(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_6190,c,av);}
a=C_alloc(28);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6193,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6227,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6231,a[2]=t4,a[3]=((C_word*)t2)[6],tmp=(C_word)a,a+=4,tmp);
t6=(C_truep(C_retrieve2(lf[127],C_text("main#to-stdout")))?lf[202]:C_a_i_list(&a,2,lf[203],((C_word*)t2)[5]));
t7=(C_truep(C_i_debug_modep())?lf[204]:C_SCHEME_END_OF_LIST);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6243,a[2]=t5,a[3]=t6,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=(C_truep(C_retrieve2(lf[129],C_text("main#static")))?C_i_not(C_i_member(lf[207],C_retrieve2(lf[111],C_text("main#translate-options")))):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6260,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:893: chicken.pathname#pathname-replace-extension"));
t11=C_fast_retrieve(lf[163]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t2)[5];
av2[3]=lf[209];
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t10=t8;
f_6243(t10,C_SCHEME_END_OF_LIST);}}

/* k6191 in k6188 in k6185 in for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_6193(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6193,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep(C_retrieve2(lf[129],C_text("main#static")))?C_retrieve2(lf[126],C_text("main#compile-only")):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6223,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:901: chicken.pathname#pathname-replace-extension"));
t5=C_fast_retrieve(lf[163]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[201];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t2;
f_6196(t4,C_SCHEME_UNDEFINED);}}

/* k6194 in k6191 in k6188 in k6185 in for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void f_6196(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6196,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6200,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace(C_text("csc.scm:903: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
av2[3]=C_retrieve2(lf[88],C_text("main#c-files"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6198 in k6194 in k6191 in k6188 in k6185 in for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f_6200(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6200,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[88] /* (set! main#c-files ...) */,t1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6204,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list1(&a,1,((C_word*)t2)[5]);
C_trace(C_text("csc.scm:904: scheme#append"));
t6=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
av2[3]=C_retrieve2(lf[90],C_text("main#generated-c-files"));
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k6202 in k6198 in k6194 in k6191 in k6188 in k6185 in for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in ... */
static void C_ccall f_6204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6204,c,av);}
t2=C_mutate(&lf[90] /* (set! main#generated-c-files ...) */,t1);
t3=((C_word*)((C_word*)t0)[2])[1];
f_6299(t3,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6221 in k6191 in k6188 in k6185 in for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void C_ccall f_6223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6223,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_retrieve2(lf[94],C_text("main#transient-link-files")));
t3=C_mutate(&lf[94] /* (set! main#transient-link-files ...) */,t2);
t4=((C_word*)t0)[2];
f_6196(t4,t3);}

/* k6225 in k6188 in k6185 in for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_6227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6227,c,av);}
C_trace(C_text("csc.scm:877: exec"));
f_6969(((C_word*)t0)[2],C_retrieve2(lf[59],C_text("main#translator")),t1);}

/* k6229 in k6188 in k6185 in for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_6231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6231,c,av);}
a=C_alloc(3);
C_trace(C_text("csc.scm:879: cons*"));
f_2863(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k6241 in k6188 in k6185 in for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void f_6243(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,8)))){
C_save_and_reclaim_args((void *)trf_6243,2,t0,t1);}
if(C_truep(C_retrieve2(lf[96],C_text("main#cpp-mode")))){
C_trace(C_text("csc.scm:880: scheme#append"));
t2=*((C_word*)lf[138]+1);{
C_word av2[9];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=C_retrieve2(lf[85],C_text("main#extra-features"));
av2[5]=C_retrieve2(lf[111],C_text("main#translate-options"));
av2[6]=t1;
av2[7]=lf[205];
av2[8]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}
else{
if(C_truep(C_retrieve2(lf[97],C_text("main#objc-mode")))){
C_trace(C_text("csc.scm:880: scheme#append"));
t2=*((C_word*)lf[138]+1);{
C_word av2[9];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=C_retrieve2(lf[85],C_text("main#extra-features"));
av2[5]=C_retrieve2(lf[111],C_text("main#translate-options"));
av2[6]=t1;
av2[7]=lf[206];
av2[8]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}
else{
C_trace(C_text("csc.scm:880: scheme#append"));
t2=*((C_word*)lf[138]+1);{
C_word av2[9];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=C_retrieve2(lf[85],C_text("main#extra-features"));
av2[5]=C_retrieve2(lf[111],C_text("main#translate-options"));
av2[6]=t1;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(9,av2);}}}}

/* k6258 in k6188 in k6185 in for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_6260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6260,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_6243(t2,C_a_i_list2(&a,2,lf[208],t1));}

/* for-each-loop1352 in k4492 in k4489 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void f_6299(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6299,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_length(C_retrieve2(lf[87],C_text("main#scheme-files")));
t5=C_eqp(C_fix(1),t4);
t6=(C_truep(t5)?C_retrieve2(lf[122],C_text("main#target-filename")):t3);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6187,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=C_SCHEME_UNDEFINED,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve2(lf[96],C_text("main#cpp-mode")))){
C_trace(C_text("csc.scm:869: chicken.pathname#pathname-replace-extension"));
t8=C_fast_retrieve(lf[163]);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[211];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[97],C_text("main#objc-mode")))){
C_trace(C_text("csc.scm:869: chicken.pathname#pathname-replace-extension"));
t8=C_fast_retrieve(lf[163]);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[212];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
C_trace(C_text("csc.scm:869: chicken.pathname#pathname-replace-extension"));
t8=C_fast_retrieve(lf[163]);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
av2[3]=lf[213];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* g1390 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void f_6324(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6324,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+5,t2);
t4=C_mutate(((C_word *)t0)+4,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6328,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[126],C_text("main#compile-only")))){
if(C_truep(C_retrieve2(lf[122],C_text("main#target-filename")))){
t6=C_i_length(C_retrieve2(lf[88],C_text("main#c-files")));
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=t5;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_retrieve2(lf[122],C_text("main#target-filename"));
f_6328(2,av2);}}
else{
C_trace(C_text("csc.scm:918: chicken.pathname#pathname-replace-extension"));
t8=C_fast_retrieve(lf[163]);{
C_word av2[4];
av2[0]=t8;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}}
else{
C_trace(C_text("csc.scm:918: chicken.pathname#pathname-replace-extension"));
t6=C_fast_retrieve(lf[163]);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
C_trace(C_text("csc.scm:918: chicken.pathname#pathname-replace-extension"));
t6=C_fast_retrieve(lf[163]);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
av2[3]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k6326 in g1390 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_6328(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6328,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6331,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_member(((C_word*)t2)[2],C_retrieve2(lf[92],C_text("main#object-files"))))){
C_trace(C_text("csc.scm:920: stop"));
f_3745(t4,lf[189],C_a_i_list(&a,2,((C_word*)t2)[5],((C_word*)t2)[2]));}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6331(2,av2);}}}

/* k6329 in k6326 in g1390 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_6331(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_6331,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6334,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(C_retrieve2(lf[96],C_text("main#cpp-mode")))?C_retrieve2(lf[61],C_text("main#c++-compiler")):C_retrieve2(lf[60],C_text("main#compiler")));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6350,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6354,a[2]=t5,a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[2],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6358,a[2]=t6,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[96],C_text("main#cpp-mode")))){
t8=C_retrieve2(lf[61],C_text("main#c++-compiler"));
t9=t7;
f_6358(t9,(C_truep(C_i_string_equal_p(lf[187],C_retrieve2(lf[61],C_text("main#c++-compiler"))))?lf[188]:C_SCHEME_END_OF_LIST));}
else{
t8=t7;
f_6358(t8,C_SCHEME_END_OF_LIST);}}

/* k6332 in k6329 in k6326 in g1390 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_6334(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6334,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[93],C_text("main#generated-object-files")));
t3=C_mutate(&lf[93] /* (set! main#generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6348 in k6329 in k6326 in g1390 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_6350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6350,c,av);}
C_trace(C_text("csc.scm:922: exec"));
f_6969(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6352 in k6329 in k6326 in g1390 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_6354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6354,c,av);}
a=C_alloc(12);
C_trace(C_text("csc.scm:924: cons*"));
f_2863(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,4,lf[185],((C_word*)t0)[4],lf[186],t1));}

/* k6356 in k6329 in k6326 in g1390 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void f_6358(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6358,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6362,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:952: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[116],C_text("main#compilation-optimization-options"));
av2[3]=C_retrieve2(lf[114],C_text("main#compile-options"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6360 in k6356 in k6329 in k6326 in g1390 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_6362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6362,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("csc.scm:927: scheme#append"));
t3=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_6396(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6396,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6399,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6520,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[77],C_text("main#generate-manifest")))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6545,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:934: chicken.platform#software-type"));
t5=C_fast_retrieve(lf[198]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=t3;
f_6520(t4,C_SCHEME_FALSE);}}

/* k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void f_6399(C_word t0,C_word t1){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_6399,2,t0,t1);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6400,a[2]=((C_word*)t2)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
t4=C_retrieve2(lf[89],C_text("main#rc-files"));
t5=C_i_check_list_2(C_retrieve2(lf[89],C_text("main#rc-files")),lf[164]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6425,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6496,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_6496(t10,t6,C_retrieve2(lf[89],C_text("main#rc-files")));}

/* g1400 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void f_6400(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_6400,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=C_mutate(((C_word *)t0)+3,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6404,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:941: scheme#string-append"));
t6=*((C_word*)lf[79]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[190];
av2[4]=C_retrieve2(lf[67],C_text("main#object-extension"));
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6402 in g1400 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_6404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6404,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6407,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list2(&a,2,((C_word*)t2)[4],t1);
C_trace(C_text("csc.scm:942: exec"));
f_6969(t3,C_retrieve2(lf[62],C_text("main#rc-compiler")),t4);}

/* k6405 in k6402 in g1400 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_6407(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6407,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[93],C_text("main#generated-object-files")));
t3=C_mutate(&lf[93] /* (set! main#generated-object-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6423 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_6425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6425,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6429,a[2]=((C_word*)t2)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6494,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:946: scheme#reverse"));
t5=*((C_word*)lf[169]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t2)[2])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6427 in k6423 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_6429(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6429,c,av);}
a=C_alloc(8);
t2=C_mutate(&lf[92] /* (set! main#object-files ...) */,t1);
if(C_truep(C_retrieve2(lf[124],C_text("main#keep-files")))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_4380(2,av2);}}
else{
t3=C_retrieve2(lf[152],C_text("main#$delete-file"));
t4=C_retrieve2(lf[90],C_text("main#generated-c-files"));
t5=C_i_check_list_2(C_retrieve2(lf[90],C_text("main#generated-c-files")),lf[164]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6469,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t8)[1];
f_6469(t10,t6,C_retrieve2(lf[90],C_text("main#generated-c-files")));}}

/* k6436 in k6427 in k6423 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_6438(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6438,c,av);}
a=C_alloc(5);
t2=C_retrieve2(lf[152],C_text("main#$delete-file"));
t3=C_retrieve2(lf[91],C_text("main#generated-rc-files"));
t4=C_i_check_list_2(C_retrieve2(lf[91],C_text("main#generated-rc-files")),lf[164]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6446,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_6446(t8,((C_word*)t0)[2],C_retrieve2(lf[91],C_text("main#generated-rc-files")));}

/* for-each-loop1459 in k6436 in k6427 in k6423 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void f_6446(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6446,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6456,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:949: g1460"));
t4=C_retrieve2(lf[152],C_text("main#$delete-file"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_7078(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6454 in for-each-loop1459 in k6436 in k6427 in k6423 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f_6456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6456,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6446(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1442 in k6427 in k6423 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void f_6469(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6469,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6479,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:948: g1443"));
t4=C_retrieve2(lf[152],C_text("main#$delete-file"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_7078(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6477 in for-each-loop1442 in k6427 in k6423 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void C_ccall f_6479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6479,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6469(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6492 in k6423 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_6494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6494,c,av);}
C_trace(C_text("csc.scm:946: scheme#append"));
t2=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[92],C_text("main#object-files"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* for-each-loop1399 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void f_6496(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6496,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6506,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:939: g1400"));
t4=((C_word*)t0)[3];
f_6400(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6504 in for-each-loop1399 in k6397 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_6506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6506,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6496(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6518 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void f_6520(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6520,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6523,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:935: chicken.pathname#pathname-replace-extension"));
t3=C_fast_retrieve(lf[163]);{
C_word av2[4];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[122],C_text("main#target-filename"));
av2[3]=lf[197];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];
f_6399(t2,C_SCHEME_UNDEFINED);}}

/* k6521 in k6518 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_6523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6523,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6526,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6538,a[2]=C_SCHEME_UNDEFINED,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:936: chicken.pathname#pathname-file"));
t4=C_fast_retrieve(lf[196]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[122],C_text("main#target-filename"));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6524 in k6521 in k6518 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_6526(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_6526,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[89],C_text("main#rc-files")));
t3=C_mutate(&lf[89] /* (set! main#rc-files ...) */,t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[91],C_text("main#generated-rc-files")));
t5=C_mutate(&lf[91] /* (set! main#generated-rc-files ...) */,t4);
t6=((C_word*)t0)[3];
f_6399(t6,t5);}

/* k6536 in k6521 in k6518 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_6538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6538,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7097,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[123],C_text("main#verbose")))){
C_trace(C_text("csc.scm:1057: chicken.base#print"));
t4=*((C_word*)lf[149]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[195];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_7097(2,av2);}}}

/* k6543 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_6545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6545,c,av);}
t2=((C_word*)t0)[2];
f_6520(t2,C_eqp(lf[16],t1));}

/* for-each-loop1389 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void f_6547(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6547,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6557,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:912: g1390"));
t4=((C_word*)t0)[3];
f_6324(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6555 in for-each-loop1389 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_6557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6557,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6547(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void C_ccall f_6581(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_6581,c,av);}
a=C_alloc(18);
t2=C_mutate(&lf[92] /* (set! main#object-files ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6584,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[96],C_text("main#cpp-mode")))?C_retrieve2(lf[64],C_text("main#c++-linker")):C_retrieve2(lf[63],C_text("main#linker")));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6672,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_list2(&a,2,lf[168],C_retrieve2(lf[122],C_text("main#target-filename")));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6680,a[2]=t5,a[3]=t6,a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:1014: scheme#append"));
t8=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_retrieve2(lf[117],C_text("main#linking-optimization-options"));
av2[3]=C_retrieve2(lf[118],C_text("main#link-options"));
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* k6582 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_6584(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6584,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6587,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_truep(C_retrieve2(lf[33],C_text("main#osx")))?C_retrieve2(lf[53],C_text("main#host-mode")):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6628,a[2]=C_SCHEME_UNDEFINED,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6663,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:970: libchicken"));
f_3859(t5);}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6587(2,av2);}}}

/* k6585 in k6582 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void C_ccall f_6587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6587,c,av);}
a=C_alloc(3);
if(C_truep(C_retrieve2(lf[124],C_text("main#keep-files")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_retrieve2(lf[152],C_text("main#$delete-file"));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6593,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:983: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[93],C_text("main#generated-object-files"));
av2[3]=C_retrieve2(lf[94],C_text("main#transient-link-files"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k6591 in k6585 in k6582 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f_6593(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6593,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[164]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6601,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_6601(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1491 in k6591 in k6585 in k6582 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in ... */
static void f_6601(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6601,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6611,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:982: g1492"));
t4=C_retrieve2(lf[152],C_text("main#$delete-file"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_7078(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6609 in for-each-loop1491 in k6591 in k6585 in k6582 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in ... */
static void C_ccall f_6611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6611,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6601(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6626 in k6582 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void C_ccall f_6628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6628,c,av);}
a=C_alloc(6);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6635,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_POSTINSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6633 in k6626 in k6582 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f_6635(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6635,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6643,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve2(lf[104],C_text("main#deployed")))){
C_trace(C_text("csc.scm:974: chicken.pathname#make-pathname"));
t4=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[166];
av2[3]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=C_retrieve2(lf[105],C_text("main#rpath"));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6653,a[2]=t3,a[3]=((C_word*)t2)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[105],C_text("main#rpath")))){
t6=C_retrieve2(lf[105],C_text("main#rpath"));
t7=C_retrieve2(lf[105],C_text("main#rpath"));
C_trace(C_text("csc.scm:975: chicken.pathname#make-pathname"));
t8=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=C_retrieve2(lf[105],C_text("main#rpath"));
av2[3]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))){
t6=C_retrieve2(lf[18],C_text("main#host-libdir"));
t7=C_retrieve2(lf[18],C_text("main#host-libdir"));
C_trace(C_text("csc.scm:975: chicken.pathname#make-pathname"));
t8=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t3;
av2[2]=C_retrieve2(lf[18],C_text("main#host-libdir"));
av2[3]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
C_trace(C_text("##sys#peek-c-string"));
t6=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}}}

/* k6641 in k6633 in k6626 in k6582 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in ... */
static void C_ccall f_6643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6643,c,av);}
a=C_alloc(12);
t2=C_a_i_list4(&a,4,lf[165],((C_word*)t0)[2],t1,C_retrieve2(lf[122],C_text("main#target-filename")));
C_trace(C_text("csc.scm:971: exec"));
f_6969(((C_word*)t0)[3],((C_word*)t0)[4],t2);}

/* k6651 in k6633 in k6626 in k6582 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in ... */
static void C_ccall f_6653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6653,c,av);}
C_trace(C_text("csc.scm:975: chicken.pathname#make-pathname"));
t2=C_fast_retrieve(lf[136]);{
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

/* k6661 in k6582 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void C_ccall f_6663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6663,c,av);}
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[139]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[139]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[167];
tp(4,av2);}}

/* k6670 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_6672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6672,c,av);}
C_trace(C_text("csc.scm:962: exec"));
f_6969(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6678 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_6680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6680,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6684,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:968: linker-libraries"));
f_6915(t3);}

/* k6682 in k6678 in k6579 in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void C_ccall f_6684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6684,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("csc.scm:964: scheme#append"));
t3=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=C_retrieve2(lf[92],C_text("main#object-files"));
av2[3]=((C_word*)t2)[3];
av2[4]=((C_word*)t2)[4];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k6691 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void C_ccall f_6693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6693,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fast_retrieve(lf[134]))){
C_trace(C_text("csc.scm:990: chicken.string#string-chomp"));
t3=C_fast_retrieve(lf[176]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=lf[177];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f8062,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:991: chicken.pathname#make-pathname"));
t4=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[175];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k6694 in k6691 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f_6696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6696,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6703,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:991: chicken.pathname#make-pathname"));
t3=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
av2[4]=lf[175];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k6701 in k6694 in k6691 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in ... */
static void C_ccall f_6703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6703,c,av);}
C_trace(C_text("csc.scm:991: chicken.file#file-exists?"));
t2=C_fast_retrieve(lf[135]);{
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

/* k6715 in map-loop1520 in k6730 in k6855 in k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in ... */
static void C_ccall f_6717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6717,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_6750(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}
else{
C_trace(C_text("csc.scm:995: stop"));
f_3745(((C_word*)t0)[3],lf[172],C_a_i_list(&a,1,((C_word*)t0)[4]));}}

/* k6730 in k6855 in k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in ... */
static void C_ccall f_6732(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6732,c,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[171]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6740,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6740(t6,((C_word*)t0)[4],t1);}

/* map-loop1520 in k6730 in k6855 in k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in ... */
static void f_6740(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_6740,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6750,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6765,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6717,a[2]=t3,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:994: find-object-file"));
t7=C_retrieve2(lf[132],C_text("main#find-object-file"));{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
f_4159(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6748 in map-loop1520 in k6730 in k6855 in k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in ... */
static void f_6750(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_6750,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_6740(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6763 in map-loop1520 in k6730 in k6855 in k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in ... */
static void C_ccall f_6765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6765,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_6750(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* map-loop1543 in k6855 in k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in ... */
static void f_6774(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6774,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csc.scm:996: g1549"));
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

/* k6797 in map-loop1543 in k6855 in k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in ... */
static void C_ccall f_6799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6799,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6774(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in ... */
static void f_6811(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6811,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6825,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:999: scheme#reverse"));
t5=*((C_word*)lf[169]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=C_retrieve2(lf[129],C_text("main#static"));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6831,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[129],C_text("main#static")))){
t6=t5;
f_6831(t6,C_retrieve2(lf[129],C_text("main#static")));}
else{
t6=C_i_car(t2);
t7=t5;
f_6831(t7,C_i_not(C_i_member(t6,((C_word*)t0)[3])));}}}

/* k6823 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_6825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6825,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3000,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3000(t5,((C_word*)t0)[2],t1);}

/* k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void f_6831(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6831,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6834,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6693,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:988: chicken.pathname#pathname-strip-extension"));
t5=C_fast_retrieve(lf[178]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_u_i_car(((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
C_trace(C_text("csc.scm:1006: loop"));
t5=((C_word*)((C_word*)t0)[2])[1];
f_6811(t5,((C_word*)t0)[3],t2,t4);}}

/* k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void C_ccall f_6834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6834,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6837,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6857,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:1003: scheme#with-input-from-file"));
t5=C_fast_retrieve(lf[173]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
av2[3]=*((C_word*)lf[174]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
f_6837(2,av2);}}}

/* k6835 in k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f_6837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6837,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6844,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,a[5]=((C_word*)t2)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csc.scm:1005: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=C_u_i_cdr(((C_word*)t2)[5]);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6842 in k6835 in k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in ... */
static void C_ccall f_6844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6844,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:1005: scheme#append"));
t3=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6846 in k6842 in k6835 in k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in ... */
static void C_ccall f_6848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6848,c,av);}
C_trace(C_text("csc.scm:1005: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_6811(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6855 in k6832 in k6829 in loop in k4387 in k4384 in k4378 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f_6857(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_6857,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_fast_retrieve(lf[170]);
t11=C_i_check_list_2(t1,lf[171]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6732,a[2]=t4,a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6774,a[2]=t8,a[3]=t14,a[4]=t10,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_6774(t16,t12,t1);}

/* main#linker-libraries in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in ... */
static void f_6915(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_6915,1,t1);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6923,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[129],C_text("main#static")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3972,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3902,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3906,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:128: libchicken"));
f_3859(t5);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3982,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3986,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[53],C_text("main#host-mode")))){
C_trace(C_text("##sys#peek-c-string"));
t5=*((C_word*)lf[50]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
C_trace(C_text("##sys#peek-c-string"));
t5=*((C_word*)lf[50]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}}

/* k6921 in main#linker-libraries in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void f_6923(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_6923,2,t0,t1);}
if(C_truep(C_retrieve2(lf[129],C_text("main#static")))){
t2=C_retrieve2(lf[109],C_text("main#extra-libraries"));
t3=C_retrieve2(lf[109],C_text("main#extra-libraries"));
C_trace(C_text("csc.scm:1017: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[109],C_text("main#extra-libraries"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=C_retrieve2(lf[110],C_text("main#extra-shared-libraries"));
t3=C_retrieve2(lf[110],C_text("main#extra-shared-libraries"));
C_trace(C_text("csc.scm:1017: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[110],C_text("main#extra-shared-libraries"));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in ... */
static void f_6969(C_word t1,C_word t2,C_word t3){
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
C_word t15;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,3)))){
C_save_and_reclaim_args((void *)trf_6969,3,t1,t2,t3);}
a=C_alloc(24);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6973,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_retrieve2(lf[54],C_text("main#quotewrap"));
t10=C_a_i_cons(&a,2,t2,t3);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7042,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7044,a[2]=t7,a[3]=t13,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_7044(t15,t11,t10);}

/* k6971 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_6973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6973,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6976,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[123],C_text("main#verbose")))){
C_trace(C_text("csc.scm:1043: chicken.base#print"));
t4=*((C_word*)lf[149]+1);{
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
av2[1]=C_SCHEME_UNDEFINED;
f_6976(2,av2);}}}

/* k6974 in k6971 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in ... */
static void C_ccall f_6976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6976,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
if(C_truep(C_retrieve2(lf[103],C_text("main#dry-run")))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6982,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csc.scm:1045: chicken.process#process-run"));
t4=C_fast_retrieve(lf[148]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
av2[3]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k6980 in k6974 in k6971 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_6982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6982,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6987,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:1045: ##sys#call-with-values"));{
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

/* a6986 in k6980 in k6974 in k6971 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_6987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6987,c,av);}
C_trace(C_text("csc.scm:1046: chicken.process#process-wait"));
t2=C_fast_retrieve(lf[143]);{
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

/* a6992 in k6980 in k6974 in k6971 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in ... */
static void C_ccall f_6993(C_word c,C_word *av){
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
C_word t11;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6993,c,av);}
a=C_alloc(6);
t5=C_i_not(t3);
t6=(C_truep(t5)?t5:C_i_not(C_i_zerop(t4)));
if(C_truep(t6)){
t7=*((C_word*)lf[144]+1);
t8=*((C_word*)lf[144]+1);
t9=C_i_check_port_2(*((C_word*)lf[144]+1),C_fix(2),C_SCHEME_TRUE,lf[145]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7009,a[2]=t1,a[3]=t4,a[4]=t7,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csc.scm:1048: ##sys#print"));
t11=*((C_word*)lf[48]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=lf[147];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[144]+1);
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k7007 in a6992 in k6980 in k6974 in k6971 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in ... */
static void C_ccall f_7009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7009,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7012,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:1048: ##sys#print"));
t3=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k7010 in k7007 in a6992 in k6980 in k6974 in k6971 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in ... */
static void C_ccall f_7012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7012,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7015,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:1048: ##sys#print"));
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[146];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7013 in k7010 in k7007 in a6992 in k6980 in k6974 in k6971 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in ... */
static void C_ccall f_7015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7015,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7018,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:1048: ##sys#print"));
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k7016 in k7013 in k7010 in k7007 in a6992 in k6980 in k6974 in k6971 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in ... */
static void C_ccall f_7018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7018,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("csc.scm:1048: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k7019 in k7016 in k7013 in k7010 in k7007 in a6992 in k6980 in k6974 in k6971 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in ... */
static void C_ccall f_7021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7021,c,av);}
C_trace(C_text("csc.scm:1049: chicken.base#exit"));
t2=C_fast_retrieve(lf[45]);{
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

/* k7040 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_7042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7042,c,av);}
C_trace(C_text("csc.scm:1041: chicken.string#string-intersperse"));
t2=C_fast_retrieve(lf[150]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[151];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1612 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void f_7044(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7044,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csc.scm:1041: g1618"));
t4=C_retrieve2(lf[54],C_text("main#quotewrap"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_3794(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7067 in map-loop1612 in main#exec in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in ... */
static void C_ccall f_7069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7069,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7044(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* main#$delete-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in ... */
static void C_ccall f_7078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7078,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7082,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[123],C_text("main#verbose")))){
C_trace(C_text("csc.scm:1053: chicken.base#print"));
t4=*((C_word*)lf[149]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[154];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[103],C_text("main#dry-run")))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
C_trace(C_text("csc.scm:1054: chicken.file#delete-file"));
t4=C_fast_retrieve(lf[153]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k7080 in main#$delete-file in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_7082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7082,c,av);}
if(C_truep(C_retrieve2(lf[103],C_text("main#dry-run")))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
C_trace(C_text("csc.scm:1054: chicken.file#delete-file"));
t2=C_fast_retrieve(lf[153]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k7095 in k6536 in k6521 in k6518 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in ... */
static void C_ccall f_7097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7097,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7102,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:1058: scheme#with-output-to-file"));
t4=C_fast_retrieve(lf[194]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t2)[3];
av2[2]=((C_word*)t2)[4];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a7101 in k7095 in k6536 in k6521 in k6518 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in ... */
static void C_ccall f_7102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7102,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7110,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[191],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,lf[192],t4);
C_trace(C_text("csc.scm:28: ##sys#print-to-string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[193]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[193]+1);
av2[1]=t2;
av2[2]=t5;
tp(3,av2);}}

/* k7108 in a7101 in k7095 in k6536 in k6521 in k6518 in k6394 in k4372 in k4369 in k4366 in k4363 in k4359 in loop in k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in ... */
static void C_ccall f_7110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7110,c,av);}
C_trace(C_text("csc.scm:1060: chicken.base#print"));
t2=*((C_word*)lf[149]+1);{
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

/* k7126 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in ... */
static void C_ccall f_7128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7128,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7134,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t3=C_fast_retrieve(lf[155]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7132 in k7126 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_7134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7134,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7136 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in ... */
static void C_ccall f_7138(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_7138,c,av);}
a=C_alloc(25);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4271,tmp=(C_word)a,a+=2,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4278,tmp=(C_word)a,a+=2,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4304,tmp=(C_word)a,a+=2,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4334,tmp=(C_word)a,a+=2,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4350,a[2]=t9,a[3]=t15,a[4]=t3,a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp));
t17=((C_word*)t15)[1];
f_4350(t17,((C_word*)t0)[2],t1);}

/* k7140 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in ... */
static void C_ccall f_7142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7142,c,av);}
C_trace(C_text("csc.scm:1082: scheme#append"));
t2=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[51],C_text("main#arguments"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7144 in k4003 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in ... */
static void C_ccall f_7146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7146,c,av);}
if(C_truep(t1)){
C_trace(C_text("csc.scm:1083: chicken.string#string-split"));
t2=C_fast_retrieve(lf[219]);{
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
C_trace(C_text("csc.scm:1083: chicken.string#string-split"));
t2=C_fast_retrieve(lf[219]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[398];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k7151 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in ... */
static void f_7153(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7153,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7157,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:248: chicken.process-context#get-environment-variable"));
t4=C_fast_retrieve(lf[221]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[402];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k7155 in k7151 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in ... */
static void C_ccall f_7157(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_7157,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7160,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7173,a[2]=t6,a[3]=t7,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("csc.scm:250: chicken.string#string-split"));
t9=C_fast_retrieve(lf[219]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t1;
av2[3]=lf[401];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}
else{
C_trace(C_text("csc.scm:246: scheme#append"));
t4=*((C_word*)lf[138]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k7158 in k7155 in k7151 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_7160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7160,c,av);}
C_trace(C_text("csc.scm:246: scheme#append"));
t2=*((C_word*)lf[138]+1);{
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

/* k7171 in k7155 in k7151 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in ... */
static void C_ccall f_7173(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7173,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7178,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7178(t5,((C_word*)t0)[4],t1);}

/* map-loop893 in k7171 in k7155 in k7151 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in ... */
static void f_7178(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7178,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("csc.scm:250: g916"));
t4=*((C_word*)lf[79]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[400];
av2[3]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7201 in map-loop893 in k7171 in k7155 in k7151 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in ... */
static void C_ccall f_7203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7203,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7178(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7218 in k3956 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in ... */
static void C_ccall f_7220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7220,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_7153(t2,C_a_i_list1(&a,1,t1));}

/* k7229 in k3926 in k3919 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in ... */
static void C_ccall f_7231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7231,c,av);}
C_trace(C_text("csc.scm:223: chicken.string#string-split"));
t2=C_fast_retrieve(lf[219]);{
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

/* k7242 in k3914 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in ... */
static void C_ccall f_7244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7244,c,av);}
C_trace(C_text("csc.scm:142: chicken.string#string-split"));
t2=C_fast_retrieve(lf[219]);{
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

/* k7246 in k3909 in k3854 in k3849 in k3845 in k3824 in k3812 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in ... */
static void C_ccall f_7248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7248,c,av);}
C_trace(C_text("csc.scm:137: chicken.string#string-split"));
t2=C_fast_retrieve(lf[219]);{
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

/* k7269 in k3774 in k3770 in k3740 in k3734 in k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in ... */
static void C_ccall f_7271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7271,c,av);}
C_trace(C_text("csc.scm:97: chicken.pathname#make-pathname"));
t2=C_fast_retrieve(lf[136]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[19],C_text("main#host-bindir"));
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k7276 in k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in ... */
static void C_ccall f_7278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7278,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[36]);
t3=lf[37] /* main#aix */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3736,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:72: chicken.platform#software-version"));
t5=C_fast_retrieve(lf[227]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7280 in k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in ... */
static void C_ccall f_7282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7282,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[34]);
t3=lf[35] /* main#cygwin */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7278,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:71: chicken.platform#build-platform"));
t5=C_fast_retrieve(lf[353]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7284 in k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in ... */
static void C_ccall f_7286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7286,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[32]);
t3=lf[33] /* main#osx */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7282,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:70: chicken.platform#software-version"));
t5=C_fast_retrieve(lf[227]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7288 in k3708 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in ... */
static void C_ccall f_7290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7290,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[30]);
t3=lf[31] /* main#mingw */ =t2;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7286,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("csc.scm:69: chicken.platform#software-version"));
t5=C_fast_retrieve(lf[227]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7296 in k2423 in k2419 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in ... */
static void C_ccall f_7298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7298,c,av);}
C_trace(C_text("csc.scm:51: chicken.string#string-split"));
t2=C_fast_retrieve(lf[219]);{
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

/* k7303 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in ... */
static void C_ccall f_7305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7305,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7308,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
C_trace(C_text("egg-environment.scm:123: scheme#string-append"));
t3=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[413];
av2[4]=C_retrieve2(lf[6],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
C_trace(C_text("egg-environment.scm:124: chicken.process-context#current-directory"));
t3=C_fast_retrieve(lf[414]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7306 in k7303 in k2416 in k2332 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in ... */
static void C_ccall f_7308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7308,c,av);}
C_trace(C_text("egg-environment.scm:123: scheme#string-append"));
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[413];
av2[4]=C_retrieve2(lf[6],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7313 in k2328 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in ... */
static void C_ccall f_7315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7315,c,av);}
C_trace(C_text("egg-environment.scm:99: scheme#string-append"));
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[12],C_text("main#default-runlibdir"));
av2[3]=lf[417];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7318 in k2324 in k2320 in k2316 in k2312 in k2308 in k2304 in k2300 in k2296 in k2292 in k2288 in k2284 in k2280 in k2276 in k2272 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in ... */
static void C_ccall f_7320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7320,c,av);}
C_trace(C_text("egg-environment.scm:96: scheme#string-append"));
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[11],C_text("main#default-libdir"));
av2[3]=lf[419];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7323 in k2268 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in ... */
static void C_ccall f_7325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7325,c,av);}
C_trace(C_text("egg-environment.scm:78: scheme#string-append"));
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[14],C_text("main#default-bindir"));
av2[3]=lf[420];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7327 in k2264 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in ... */
static void C_ccall f_7329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7329,c,av);}
C_trace(C_text("egg-environment.scm:75: scheme#string-append"));
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[14],C_text("main#default-bindir"));
av2[3]=lf[421];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7331 in k2260 in k2256 in k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in ... */
static void C_ccall f_7333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7333,c,av);}
C_trace(C_text("egg-environment.scm:72: scheme#string-append"));
t2=*((C_word*)lf[79]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[14],C_text("main#default-bindir"));
av2[3]=lf[422];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7338 in k2248 in k2244 in k2240 in k2236 in k2232 in k2228 in k2224 in k2220 in k2216 in k2212 in k2208 in k2204 in k2200 in k2196 in k2192 in k2186 in k2180 in k2177 in k2174 in k2171 in k2168 in ... */
static void C_ccall f_7340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7340,c,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[16]);
t3=(C_truep(t2)?C_mk_bool(C_WINDOWS_SHELL):lf[17]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2258,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t5=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a7341 in k2159 in k2156 */
static void C_ccall f_7342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_7342,c,av);}
C_trace(C_text("csc.scm:28: ##sys#register-compiled-module"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[423]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[423]+1);
av2[1]=t1;
av2[2]=lf[424];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_END_OF_LIST;
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
if(C_unlikely(!C_demand_2(2227))){
C_save(t1);
C_rereclaim2(2227*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,426);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[16]=C_h_intern(&lf[16],7, C_text("windows"));
lf[17]=C_h_intern(&lf[17],4, C_text("unix"));
lf[30]=C_h_intern(&lf[30],5, C_text("mingw"));
lf[32]=C_h_intern(&lf[32],6, C_text("macosx"));
lf[34]=C_h_intern(&lf[34],6, C_text("cygwin"));
lf[36]=C_h_intern(&lf[36],3, C_text("aix"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\163\157\154\141\162\151\163\376\003\000\000\002\376\001\000\000\005\001\163\165\156\157\163\376\377\016"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005\001\154\151\156\165\170\376\003\000\000\002\376\001\000\000\006\001\156\145\164\142\163\144\376\003\000\000\002\376\001\000\000\007\001\146\162\145\145\142\163\144\376\003\000\000\002\376\001\000\000\007\001\163\157\154\141\162\151\163\376\003\000\000\002\376\001\000\000\007\001\157\160\145\156\142\163\144\376\003\000\000\002\376\001\000\000\004\001\150\165\162\144\376\003\000\000\002\376\001\000\000\005\001\150\141\151\153\165\376\377\016"));
lf[43]=C_h_intern(&lf[43],20, C_text("##sys#standard-error"));
lf[44]=C_h_intern(&lf[44],7, C_text("fprintf"));
lf[45]=C_h_intern(&lf[45],17, C_text("chicken.base#exit"));
lf[46]=C_h_intern(&lf[46],18, C_text("##sys#write-char-0"));
lf[47]=C_h_intern(&lf[47],22, C_text("chicken.format#fprintf"));
lf[48]=C_h_intern(&lf[48],11, C_text("##sys#print"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\072\040\000"));
lf[50]=C_h_intern(&lf[50],19, C_text("##sys#peek-c-string"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\150\157\163\164\000"));
lf[55]=C_h_intern(&lf[55],18, C_text("chicken.process#qs"));
lf[56]=C_h_intern(&lf[56],31, C_text("chicken.string#string-translate"));
lf[57]=C_h_intern(&lf[57],35, C_text("chicken.pathname#normalize-pathname"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\157\142\152\000"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\157\000"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\141\000"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[73]=C_h_intern(&lf[73],28, C_text("##sys#load-dynamic-extension"));
lf[79]=C_h_intern(&lf[79],20, C_text("scheme#string-append"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\154\151\142\000"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\015\057\165\163\162\057\151\156\143\154\165\144\145\000\376\003\000\000\002\376\002\000\000\001\000\376\377\016"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\122\000"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\055\162\160\141\164\150\075\000"));
lf[131]=C_h_intern(&lf[131],32, C_text("chicken.platform#repository-path"));
lf[133]=C_h_intern(&lf[133],22, C_text("chicken.load#find-file"));
lf[134]=C_h_intern(&lf[134],16, C_text("##sys#setup-mode"));
lf[135]=C_h_intern(&lf[135],25, C_text("chicken.file#file-exists?"));
lf[136]=C_h_intern(&lf[136],30, C_text("chicken.pathname#make-pathname"));
lf[138]=C_h_intern(&lf[138],13, C_text("scheme#append"));
lf[139]=C_h_intern(&lf[139],19, C_text("##sys#string-append"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\055\163\164\141\164\151\143\000"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\154\000"));
lf[143]=C_h_intern(&lf[143],28, C_text("chicken.process#process-wait"));
lf[144]=C_h_intern(&lf[144],21, C_text("##sys#standard-output"));
lf[145]=C_h_intern(&lf[145],6, C_text("printf"));
lf[146]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\072\040\000"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\074\012\105\162\162\157\162\072\040\163\150\145\154\154\040\143\157\155\155\141\156\144\040\164\145\162\155\151\156\141\164\145\144\040\167\151\164\150\040\156\157\156\055\172\145\162\157\040\145\170\151\164\040\163\164\141\164\165\163\040\000"));
lf[148]=C_h_intern(&lf[148],27, C_text("chicken.process#process-run"));
lf[149]=C_h_intern(&lf[149],18, C_text("chicken.base#print"));
lf[150]=C_h_intern(&lf[150],33, C_text("chicken.string#string-intersperse"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\040\000"));
lf[153]=C_h_intern(&lf[153],24, C_text("chicken.file#delete-file"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\162\155\040\000"));
lf[155]=C_h_intern(&lf[155],34, C_text("chicken.base#implicit-exit-handler"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\156\157\164\040\145\156\157\165\147\150\040\141\162\147\165\155\145\156\164\163\040\164\157\040\157\160\164\151\157\156\040\140\176\101\047\000"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\014\055\144\171\156\141\155\151\143\154\151\142\000\376\377\016"));
lf[158]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\010\055\142\165\156\144\154\145\000\376\003\000\000\002\376\002\000\000\035\055\150\145\141\144\145\162\160\141\144\137\155\141\170\137\151\156\163\164\141\154\154\137\156\141\155\145\163\000\376\377\016"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\010\055\163\150\141\162\145\144\000\376\377\016"));
lf[160]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\013\055\104\103\137\123\110\101\122\105\104\000\376\377\016"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\146\145\141\164\165\162\145\000"));
lf[162]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\143\150\151\143\153\145\156\055\143\157\155\160\151\154\145\055\163\150\141\162\145\144\000"));
lf[163]=C_h_intern(&lf[163],43, C_text("chicken.pathname#pathname-replace-extension"));
lf[164]=C_h_intern(&lf[164],8, C_text("for-each"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\055\143\150\141\156\147\145\000"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\100\145\170\145\143\165\164\141\142\154\145\137\160\141\164\150\000"));
lf[167]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\056\144\171\154\151\142\000"));
lf[168]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\157\000"));
lf[169]=C_h_intern(&lf[169],14, C_text("scheme#reverse"));
lf[170]=C_h_intern(&lf[170],23, C_text("chicken.string#->string"));
lf[171]=C_h_intern(&lf[171],3, C_text("map"));
lf[172]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\143\157\165\154\144\040\156\157\164\040\146\151\156\144\040\154\151\156\153\145\144\040\145\170\164\145\156\163\151\157\156\072\040\176\101\000"));
lf[173]=C_h_intern(&lf[173],27, C_text("scheme#with-input-from-file"));
lf[174]=C_h_intern(&lf[174],11, C_text("scheme#read"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\154\151\156\153\000"));
lf[176]=C_h_intern(&lf[176],27, C_text("chicken.string#string-chomp"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\056\163\164\141\164\151\143\000"));
lf[178]=C_h_intern(&lf[178],41, C_text("chicken.pathname#pathname-strip-extension"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\155\157\166\145\000"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\155\166\000"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\056\157\154\144\000"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\056\157\154\144\047\000"));
lf[183]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\047\040\055\040\162\145\156\141\155\151\156\147\040\163\157\165\162\143\145\040\164\157\040\140\000"));
lf[184]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\062\127\141\162\156\151\156\147\072\040\157\165\164\160\165\164\040\146\151\154\145\040\167\151\154\154\040\157\166\145\162\167\162\151\164\145\040\163\157\165\162\143\145\040\146\151\154\145\040\140\000"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\157\000"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\143\000"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\147\053\053\000"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\023\055\127\156\157\055\167\162\151\164\145\055\163\164\162\151\156\147\163\000\376\377\016"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\121\157\142\152\145\143\164\040\146\151\154\145\040\147\145\156\145\162\141\164\145\144\040\146\162\157\155\040\140\176\141\047\040\167\151\154\154\040\157\166\145\162\167\162\151\164\145\040\145\170\160\154\151\143\151\164\154\171\040\147\151\166\145\156\040\157\142\152\145\143\164\040\146\151\154\145\040\140\176\141\047\000"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376\002\000\001\233\042\042\040\164\171\160\145\075\042\042\167\151\156\063\062\042\042\057\076\134\162\134\156\042\012\040\040\042\040\040\074\155\163\137\141\163\155\166\062\072\164\162\165\163\164\111\156\146\157\040\170\155\154\156\163\072\155\163\137\141\163\155\166\062\075\042\042\165\162\156\072\163\143\150\145\155\141\163\055\155\151\143\162\157\163\157\146\164\055\143\157\155\072\141\163\155\056\166\062\042\042\076\134\162\134\156\042\012\040\040\042\040\040\040\040\074\155\163\137\141\163\155\166\062\072\163\145\143\165\162\151\164\171\076\134\162\134\156\042\012\040\040\042\040\040\040\040\040\040\074\155\163\137\141\163\155\166\062\072\162\145\161\165\145\163\164\145\144\120\162\151\166\151\154\145\147\145\163\076\134\162\134\156\042\012\040\040\042\040\040\040\040\040\040\040\040\074\155\163\137\141\163\155\166\062\072\162\145\161\165\145\163\164\145\144\105\170\145\143\165\164\151\157\156\114\145\166\145\154\040\154\145\166\145\154\075\042\042\141\163\111\156\166\157\153\145\162\042\042\040\165\151\101\143\143\145\163\163\075\042\042\146\141\154\163\145\042\042\057\076\134\162\134\156\042\012\040\040\042\040\040\040\040\040\040\074\057\155\163\137\141\163\155\166\062\072\162\145\161\165\145\163\164\145\144\120\162\151\166\151\154\145\147\145\163\076\134\162\134\156\042\012\040\040\042\040\040\040\040\074\057\155\163\137\141\163\155\166\062\072\163\145\143\165\162\151\164\171\076\134\162\134\156\042\012\040\040\042\040\040\074\057\155\163\137\141\163\155\166\062\072\164\162\165\163\164\111\156\146\157\076\134\162\134\156\042\012\040\040\042\074\057\141\163\163\145\155\142\154\171\076\134\162\134\156\042\012\105\116\104\000"));
lf[192]=C_decode_literal(C_heaptop,C_text("\376\002\000\001\004\061\040\062\064\040\115\117\126\105\101\102\114\105\040\120\125\122\105\012\102\105\107\111\116\012\040\040\042\074\077\170\155\154\040\166\145\162\163\151\157\156\075\042\042\061\056\060\042\042\040\145\156\143\157\144\151\156\147\075\042\042\125\124\106\055\070\042\042\040\163\164\141\156\144\141\154\157\156\145\075\042\042\171\145\163\042\042\077\076\134\162\134\156\042\012\040\040\042\074\141\163\163\145\155\142\154\171\040\170\155\154\156\163\075\042\042\165\162\156\072\163\143\150\145\155\141\163\055\155\151\143\162\157\163\157\146\164\055\143\157\155\072\141\163\155\056\166\061\042\042\040\155\141\156\151\146\145\163\164\126\145\162\163\151\157\156\075\042\042\061\056\060\042\042\076\134\162\134\156\042\012\040\040\042\040\040\074\141\163\163\145\155\142\154\171\111\144\145\156\164\151\164\171\040\166\145\162\163\151\157\156\075\042\042\061\056\060\056\060\056\060\042\042\040\160\162\157\143\145\163\163\157\162\101\162\143\150\151\164\145\143\164\165\162\145\075\042\042\052\042\042\040\156\141\155\145\075\042\042\000"));
lf[193]=C_h_intern(&lf[193],21, C_text("##sys#print-to-string"));
lf[194]=C_h_intern(&lf[194],26, C_text("scheme#with-output-to-file"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\147\145\156\145\162\141\164\151\156\147\040\000"));
lf[196]=C_h_intern(&lf[196],30, C_text("chicken.pathname#pathname-file"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\162\143\000"));
lf[198]=C_h_intern(&lf[198],30, C_text("chicken.platform#software-type"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\156\157\040\163\157\165\162\143\145\040\146\151\154\145\163\040\163\160\145\143\151\146\151\145\144\000"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\142\157\147\165\163\056\163\143\155\000"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\154\151\156\153\000"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\013\055\164\157\055\163\164\144\157\165\164\000\376\377\016"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\055\157\165\164\160\165\164\055\146\151\154\145\000"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\004\055\072\144\000\376\377\016"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\011\055\146\145\141\164\165\162\145\000\376\003\000\000\002\376\002\000\000\026\143\150\151\143\153\145\156\055\163\143\150\145\155\145\055\164\157\055\143\053\053\000\376\377\016"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\011\055\146\145\141\164\165\162\145\000\376\003\000\000\002\376\002\000\000\027\143\150\151\143\153\145\156\055\163\143\150\145\155\145\055\164\157\055\157\142\152\143\000\376\377\016"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\055\145\155\151\164\055\154\151\156\153\055\146\151\154\145\000"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\055\145\155\151\164\055\154\151\156\153\055\146\151\154\145\000"));
lf[209]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\154\151\156\153\000"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\114\103\040\146\151\154\145\040\147\145\156\145\162\141\164\145\144\040\146\162\157\155\040\140\176\141\047\040\167\151\154\154\040\157\166\145\162\167\162\151\164\145\040\145\170\160\154\151\143\151\164\154\171\040\147\151\166\145\156\040\163\157\165\162\143\145\040\146\151\154\145\040\140\176\141\047\000"));
lf[211]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\143\160\160\000"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\155\000"));
lf[213]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\143\000"));
lf[214]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\144\171\156\141\155\151\143\000"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\110\164\150\145\040\140\055\143\047\040\157\160\164\151\157\156\040\143\141\156\156\157\164\040\142\145\040\165\163\145\144\040\151\156\040\143\157\155\142\151\156\141\164\151\157\156\040\167\151\164\150\040\155\165\154\164\151\160\154\145\040\151\156\160\165\164\040\146\151\154\145\163\000"));
lf[216]=C_h_intern(&lf[216],14, C_text("scheme#newline"));
lf[217]=C_h_intern(&lf[217],19, C_text("chicken.base#print*"));
lf[218]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\114\000"));
lf[219]=C_h_intern(&lf[219],27, C_text("chicken.string#string-split"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\072\073\000"));
lf[221]=C_h_intern(&lf[221],48, C_text("chicken.process-context#get-environment-variable"));
lf[222]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\110\111\103\113\105\116\137\103\137\114\111\102\122\101\122\131\137\120\101\124\110\000"));
lf[223]=C_h_intern(&lf[223],7, C_text("freebsd"));
lf[224]=C_h_intern(&lf[224],7, C_text("openbsd"));
lf[225]=C_h_intern(&lf[225],6, C_text("netbsd"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\055\127\154\054\055\172\054\157\162\151\147\151\156\000"));
lf[227]=C_h_intern(&lf[227],33, C_text("chicken.platform#software-version"));
lf[228]=C_h_intern(&lf[228],19, C_text("chicken.string#conc"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\055\127\154\054\000"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\044\117\122\111\107\111\116\000"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\114\000"));
lf[232]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\055\127\154\054\000"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\114\000"));
lf[234]=C_h_intern(&lf[234],5, C_text("-help"));
lf[235]=C_h_intern(&lf[235],6, C_text("--help"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\047\056\012\000"));
lf[237]=C_decode_literal(C_heaptop,C_text("\376\002\000\052\034\047\040\151\163\040\141\040\144\162\151\166\145\162\040\160\162\157\147\162\141\155\040\146\157\162\040\164\150\145\040\103\110\111\103\113\105\116\040\143\157\155\160\151\154\145\162\056\040\106\151\154\145\163\040\147\151\166\145\156\040\157\156\040\164\150\145\012\040\040\143\157\155\155\141\156\144\040\154\151\156\145\040\141\162\145\040\164\162\141\156\163\154\141\164\145\144\054\040\143\157\155\160\151\154\145\144\040\157\162\040\154\151\156\153\145\144\040\141\163\040\156\145\145\144\145\144\056\012\012\040\040\106\111\114\105\116\101\115\105\040\151\163\040\141\040\123\143\150\145\155\145\040\163\157\165\162\143\145\040\146\151\154\145\040\156\141\155\145\040\167\151\164\150\040\157\160\164\151\157\156\141\154\040\145\170\164\145\156\163\151\157\156\040\157\162\040\141\012\040\040\103\057\103\053\053\057\117\142\152\145\143\164\151\166\145\055\103\040\163\157\165\162\143\145\054\040\157\142\152\145\143\164\040\157\162\040\154\151\142\162\141\162\171\040\146\151\154\145\040\156\141\155\145\040\167\151\164\150\040\145\170\164\145\156\163\151\157\156\056\040\117\120\124\111\117\116\012\040\040\155\141\171\040\142\145\040\157\156\145\040\157\146\040\164\150\145\040\146\157\154\154\157\167\151\156\147\072\012\012\040\040\107\145\156\145\162\141\154\040\157\160\164\151\157\156\163\072\012\012\040\040\040\040\055\150\040\040\055\150\145\154\160\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\160\154\141\171\040\164\150\151\163\040\164\145\170\164\040\141\156\144\040\145\170\151\164\012\040\040\040\040\055\166\040\040\055\166\145\162\142\157\163\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\143\157\155\160\151\154\145\162\040\156\157\164\145\163\040\141\156\144\040\164\157\157\154\055\151\156\166\157\143\141\164\151\157\156\163\012\040\040\040\040\055\166\166\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\160\154\141\171\040\151\156\146\157\162\155\141\164\151\157\156\040\141\142\157\165\164\040\164\162\141\156\163\154\141\164\151\157\156\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\162\157\147\162\145\163\163\012\040\040\040\040\055\166\166\166\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\160\154\141\171\040\151\156\146\157\162\155\141\164\151\157\156\040\141\142\157\165\164\040\141\154\154\040\143\157\155\160\151\154\141\164\151\157\156\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\164\141\147\145\163\012\040\040\040\040\055\166\145\162\163\151\157\156\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\160\154\141\171\040\123\143\150\145\155\145\040\143\157\155\160\151\154\145\162\040\166\145\162\163\151\157\156\040\141\156\144\040\145\170\151\164\012\040\040\040\040\055\162\145\154\145\141\163\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\160\154\141\171\040\162\145\154\145\141\163\145\040\156\165\155\142\145\162\040\141\156\144\040\145\170\151\164\012\012\040\040\106\151\154\145\040\141\156\144\040\160\141\164\150\156\141\155\145\040\157\160\164\151\157\156\163\072\012\012\040\040\040\040\055\157\040\055\157\165\164\160\165\164\055\146\151\154\145\040\106\111\114\105\116\101\115\105\040\040\040\040\040\040\040\163\160\145\143\151\146\151\145\163\040\164\141\162\147\145\164\040\145\170\145\143\165\164\141\142\154\145\040\156\141\155\145\012\040\040\040\040\055\111\040\055\151\156\143\154\165\144\145\055\160\141\164\150\040\120\101\124\110\116\101\115\105\040\040\040\040\040\040\163\160\145\143\151\146\151\145\163\040\141\154\164\145\162\156\141\164\151\166\145\040\160\141\164\150\040\146\157\162\040\151\156\143\154\165\144\145\144\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\146\151\154\145\163\012\040\040\040\040\055\164\157\055\163\164\144\157\165\164\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\167\162\151\164\145\040\143\157\155\160\151\154\145\162\040\164\157\040\163\164\144\157\165\164\040\050\151\155\160\154\151\145\163\040\055\164\051\012\040\040\040\040\055\163\040\055\163\150\141\162\145\144\040\055\144\171\156\141\155\151\143\040\040\040\040\040\040\040\040\040\040\040\040\147\145\156\145\162\141\164\145\040\144\171\156\141\155\151\143\141\154\154\171\040\154\157\141\144\141\142\154\145\040\163\150\141\162\145\144\040\157\142\152\145\143\164\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\146\151\154\145\012\012\040\040\114\141\156\147\165\141\147\145\040\157\160\164\151\157\156\163\072\012\012\040\040\040\040\055\104\040\040\055\104\123\131\115\102\117\114\040\040\055\146\145\141\164\165\162\145\040\123\131\115\102\117\114\040\040\162\145\147\151\163\164\145\162\040\146\145\141\164\165\162\145\040\151\144\145\156\164\151\146\151\145\162\012\040\040\040\040\055\156\157\055\146\145\141\164\165\162\145\040\123\131\115\102\117\114\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\142\165\151\154\164\151\156\040\146\145\141\164\165\162\145\040\151\144\145\156\164\151\146\151\145\162\012\040\040\040\040\055\143\053\053\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\143\157\155\160\151\154\145\040\166\151\141\040\141\040\103\053\053\040\163\157\165\162\143\145\040\146\151\154\145\040\050\056\143\160\160\051\012\040\040\040\040\055\157\142\152\143\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\143\157\155\160\151\154\145\040\166\151\141\040\117\142\152\145\143\164\151\166\145\055\103\040\163\157\165\162\143\145\040\146\151\154\145\040\050\056\155\051\012\012\040\040\123\171\156\164\141\170\040\162\145\154\141\164\145\144\040\157\160\164\151\157\156\163\072\012\012\040\040\040\040\055\151\040\055\143\141\163\145\055\151\156\163\145\156\163\151\164\151\166\145\040\040\040\040\040\040\040\040\040\040\040\144\157\156\047\164\040\160\162\145\163\145\162\166\145\040\143\141\163\145\040\157\146\040\162\145\141\144\040\163\171\155\142\157\154\163\012\040\040\040\040\055\113\040\055\153\145\171\167\157\162\144\055\163\164\171\154\145\040\123\124\131\114\105\040\040\040\040\040\040\040\040\145\156\141\142\154\145\040\141\154\164\145\162\156\141\164\151\166\145\040\153\145\171\167\157\162\144\055\163\171\156\164\141\170\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\050\160\162\145\146\151\170\054\040\163\165\146\146\151\170\040\157\162\040\156\157\156\145\051\012\040\040\040\040\040\040\040\055\156\157\055\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\040\040\040\040\144\151\163\141\142\154\145\163\040\154\151\163\164\040\144\145\154\151\155\151\164\145\162\040\163\171\156\157\156\171\155\163\012\040\040\040\040\040\040\040\055\156\157\055\163\171\155\142\157\154\055\145\163\143\141\160\145\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\163\040\163\165\160\160\157\162\164\040\146\157\162\040\145\163\143\141\160\145\144\040\163\171\155\142\157\154\163\012\040\040\040\040\040\040\040\055\162\067\162\163\055\163\171\156\164\141\170\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\163\040\164\150\145\040\103\110\111\103\113\105\116\040\145\170\164\145\156\163\151\157\156\163\040\164\157\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\122\067\122\123\040\163\171\156\164\141\170\012\040\040\040\040\055\143\157\155\160\151\154\145\055\163\171\156\164\141\170\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\155\141\143\162\157\163\040\141\162\145\040\155\141\144\145\040\141\166\141\151\154\141\142\154\145\040\141\164\040\162\165\156\055\164\151\155\145\012\040\040\040\040\055\152\040\055\145\155\151\164\055\151\155\160\157\162\164\055\154\151\142\162\141\162\171\040\115\117\104\125\114\105\040\167\162\151\164\145\040\143\157\155\160\151\154\145\055\164\151\155\145\040\155\157\144\165\154\145\040\151\156\146\157\162\155\141\164\151\157\156\040\151\156\164\157\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\145\160\141\162\141\164\145\040\146\151\154\145\012\040\040\040\040\055\112\040\055\145\155\151\164\055\141\154\154\055\151\155\160\157\162\164\055\154\151\142\162\141\162\151\145\163\040\040\145\155\151\164\040\151\155\160\157\162\164\055\154\151\142\162\141\162\151\145\163\040\146\157\162\040\141\154\154\040\144\145\146\151\156\145\144\040\155\157\144\165\154\145\163\012\040\040\040\040\055\156\157\055\143\157\155\160\151\154\145\162\055\163\171\156\164\141\170\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\145\170\160\141\156\163\151\157\156\040\157\146\040\143\157\155\160\151\154\145\162\055\155\141\143\162\157\163\012\040\040\040\040\055\155\040\055\155\157\144\165\154\145\040\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\167\162\141\160\040\143\157\155\160\151\154\145\144\040\143\157\144\145\040\151\156\040\141\040\155\157\144\165\154\145\012\040\040\040\040\055\115\040\055\155\157\144\165\154\145\055\162\145\147\151\163\164\162\141\164\151\157\156\040\040\040\040\040\040\040\040\141\154\167\141\171\163\040\147\145\156\145\162\141\164\145\040\155\157\144\165\154\145\040\162\145\147\151\163\164\162\141\164\151\157\156\040\143\157\144\145\012\040\040\040\040\055\116\040\055\156\157\055\155\157\144\165\154\145\055\162\145\147\151\163\164\162\141\164\151\157\156\040\040\040\040\040\156\145\166\145\162\040\147\145\156\145\162\141\164\145\040\155\157\144\165\154\145\040\162\145\147\151\163\164\162\141\164\151\157\156\040\143\157\144\145\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\050\157\166\145\162\162\151\144\145\163\040\140\055\115\047\051\012\012\040\040\124\162\141\156\163\154\141\164\151\157\156\040\157\160\164\151\157\156\163\072\012\012\040\040\040\040\055\170\040\040\055\145\170\160\154\151\143\151\164\055\165\163\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\157\040\156\157\164\040\165\163\145\040\165\156\151\164\163\040\140\154\151\142\162\141\162\171\047\040\141\156\144\040\140\145\166\141\154\047\040\142\171\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\145\146\141\165\154\164\012\040\040\040\040\055\120\040\040\055\143\150\145\143\153\055\163\171\156\164\141\170\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\164\157\160\040\143\157\155\160\151\154\141\164\151\157\156\040\141\146\164\145\162\040\155\141\143\162\157\055\145\170\160\141\156\163\151\157\156\012\040\040\040\040\055\101\040\040\055\141\156\141\154\171\172\145\055\157\156\154\171\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\164\157\160\040\143\157\155\160\151\154\141\164\151\157\156\040\141\146\164\145\162\040\146\151\162\163\164\040\141\156\141\154\171\163\151\163\040\160\141\163\163\012\012\040\040\104\145\142\165\147\147\151\156\147\040\157\160\164\151\157\156\163\072\012\012\040\040\040\040\055\167\040\040\055\156\157\055\167\141\162\156\151\156\147\163\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\167\141\162\156\151\156\147\163\012\040\040\040\040\055\144\060\040\055\144\061\040\055\144\062\040\055\144\063\040\055\144\145\142\165\147\055\154\145\166\145\154\040\116\125\115\102\105\122\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\145\164\040\154\145\166\145\154\040\157\146\040\141\166\141\151\154\141\142\154\145\040\144\145\142\165\147\147\151\156\147\040\151\156\146\157\162\155\141\164\151\157\156\012\040\040\040\040\055\156\157\055\164\162\141\143\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\162\165\144\151\155\145\156\164\141\162\171\040\144\145\142\165\147\147\151\156\147\040\151\156\146\157\162\155\141\164\151\157\156\012\040\040\040\040\055\144\145\142\165\147\055\151\156\146\157\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\156\141\142\154\145\040\144\145\142\165\147\055\151\156\146\157\162\155\141\164\151\157\156\040\151\156\040\143\157\155\160\151\154\145\144\040\143\157\144\145\040\146\157\162\040\165\163\145\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\167\151\164\150\040\141\156\040\145\170\164\145\162\156\141\154\040\144\145\142\165\147\147\145\162\012\040\040\040\040\055\160\162\157\146\151\154\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\170\145\143\165\164\141\142\154\145\040\145\155\151\164\163\040\160\162\157\146\151\154\151\156\147\040\151\156\146\157\162\155\141\164\151\157\156\012\040\040\040\040\055\141\143\143\165\155\165\154\141\164\145\055\160\162\157\146\151\154\145\040\040\040\040\040\040\040\040\040\040\040\040\145\170\145\143\165\164\141\142\154\145\040\145\155\151\164\163\040\160\162\157\146\151\154\151\156\147\040\151\156\146\157\162\155\141\164\151\157\156\040\151\156\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\141\160\160\145\156\144\040\155\157\144\145\012\040\040\040\040\055\160\162\157\146\151\154\145\055\156\141\155\145\040\106\111\114\105\116\101\115\105\040\040\040\040\040\040\040\040\040\156\141\155\145\040\157\146\040\164\150\145\040\147\145\156\145\162\141\164\145\144\040\160\162\157\146\151\154\145\040\151\156\146\157\162\155\141\164\151\157\156\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\146\151\154\145\012\040\040\040\040\055\143\157\156\163\165\154\164\055\164\171\160\145\163\055\146\151\154\145\040\106\111\114\105\116\101\115\105\040\040\040\154\157\141\144\040\141\144\144\151\164\151\157\156\141\154\040\164\171\160\145\040\144\141\164\141\142\141\163\145\012\012\040\040\117\160\164\151\155\151\172\141\164\151\157\156\040\157\160\164\151\157\156\163\072\012\012\040\040\040\040\055\117\040\055\117\060\040\055\117\061\040\055\117\062\040\055\117\063\040\055\117\064\040\055\117\065\040\055\157\160\164\151\155\151\172\145\055\154\145\166\145\154\040\116\125\115\102\105\122\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\156\141\142\154\145\040\143\145\162\164\141\151\156\040\163\145\164\163\040\157\146\040\157\160\164\151\155\151\172\141\164\151\157\156\040\157\160\164\151\157\156\163\012\040\040\040\040\055\157\160\164\151\155\151\172\145\055\154\145\141\146\055\162\157\165\164\151\156\145\163\040\040\040\040\040\040\040\040\145\156\141\142\154\145\040\154\145\141\146\040\162\157\165\164\151\156\145\040\157\160\164\151\155\151\172\141\164\151\157\156\012\040\040\040\040\055\156\157\055\165\163\165\141\154\055\151\156\164\145\147\162\141\164\151\157\156\163\040\040\040\040\040\040\040\040\040\163\164\141\156\144\141\162\144\040\160\162\157\143\145\144\165\162\145\163\040\155\141\171\040\142\145\040\162\145\144\145\146\151\156\145\144\012\040\040\040\040\055\165\040\040\055\165\156\163\141\146\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\163\141\146\145\164\171\040\143\150\145\143\153\163\012\040\040\040\040\055\154\157\143\141\154\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\141\163\163\165\155\145\040\147\154\157\142\141\154\163\040\141\162\145\040\157\156\154\171\040\155\157\144\151\146\151\145\144\040\151\156\040\143\165\162\162\145\156\164\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\146\151\154\145\012\040\040\040\040\055\142\040\040\055\142\154\157\143\153\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\156\141\142\154\145\040\142\154\157\143\153\055\143\157\155\160\151\154\141\164\151\157\156\012\040\040\040\040\055\144\151\163\141\142\154\145\055\151\156\164\145\162\162\165\160\164\163\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\151\156\164\145\162\162\165\160\164\163\040\151\156\040\143\157\155\160\151\154\145\144\040\143\157\144\145\012\040\040\040\040\055\146\040\040\055\146\151\170\156\165\155\055\141\162\151\164\150\155\145\164\151\143\040\040\040\040\040\040\040\040\040\141\163\163\165\155\145\040\141\154\154\040\156\165\155\142\145\162\163\040\141\162\145\040\146\151\170\156\165\155\163\012\040\040\040\040\055\144\151\163\141\142\154\145\055\163\164\141\143\153\055\157\166\145\162\146\154\157\167\055\143\150\145\143\153\163\040\144\151\163\141\142\154\145\163\040\144\145\164\145\143\164\151\157\156\040\157\146\040\163\164\141\143\153\055\157\166\145\162\146\154\157\167\163\012\040\040\040\040\055\151\156\154\151\156\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\156\141\142\154\145\040\151\156\154\151\156\151\156\147\012\040\040\040\040\055\151\156\154\151\156\145\055\154\151\155\151\164\040\114\111\115\111\124\040\040\040\040\040\040\040\040\040\040\040\040\163\145\164\040\151\156\154\151\156\151\156\147\040\164\150\162\145\163\150\157\154\144\012\040\040\040\040\055\151\156\154\151\156\145\055\147\154\157\142\141\154\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\156\141\142\154\145\040\143\162\157\163\163\055\155\157\144\165\154\145\040\151\156\154\151\156\151\156\147\012\040\040\040\040\055\163\160\145\143\151\141\154\151\172\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\145\162\146\157\162\155\040\164\171\160\145\055\142\141\163\145\144\040\163\160\145\143\151\141\154\151\172\141\164\151\157\156\040\157\146\040\160\162\151\155\151\164\151\166\145\040\143\141\154\154\163\012\040\040\040\040\055\157\151\040\055\145\155\151\164\055\151\156\154\151\156\145\055\146\151\154\145\040\106\111\114\105\116\101\115\105\040\147\145\156\145\162\141\164\145\040\146\151\154\145\040\167\151\164\150\040\147\154\157\142\141\154\154\171\040\151\156\154\151\156\141\142\154\145\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\162\157\143\145\144\165\162\145\163\040\050\151\155\160\154\151\145\163\040\055\151\156\154\151\156\145\040\055\154\157\143\141\154\051\012\040\040\040\040\055\143\157\156\163\165\154\164\055\151\156\154\151\156\145\055\146\151\154\145\040\106\111\114\105\116\101\115\105\040\040\145\170\160\154\151\143\151\164\154\171\040\154\157\141\144\040\151\156\154\151\156\145\040\146\151\154\145\012\040\040\040\040\055\157\164\040\040\055\145\155\151\164\055\164\171\160\145\163\055\146\151\154\145\040\106\111\114\105\116\101\115\105\040\167\162\151\164\145\040\164\171\160\145\055\144\145\143\154\141\162\141\164\151\157\156\040\151\156\146\157\162\155\141\164\151\157\156\040\151\156\164\157\040\146\151\154\145\012\040\040\040\040\055\156\157\055\141\162\147\143\055\143\150\145\143\153\163\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\141\162\147\165\155\145\156\164\040\143\157\165\156\164\040\143\150\145\143\153\163\012\040\040\040\040\055\156\157\055\142\157\165\156\144\055\143\150\145\143\153\163\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\142\157\165\156\144\040\166\141\162\151\141\142\154\145\040\143\150\145\143\153\163\012\040\040\040\040\055\156\157\055\160\162\157\143\145\144\165\162\145\055\143\150\145\143\153\163\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\160\162\157\143\145\144\165\162\145\040\143\141\154\154\040\143\150\145\143\153\163\012\040\040\040\040\055\156\157\055\160\162\157\143\145\144\165\162\145\055\143\150\145\143\153\163\055\146\157\162\055\165\163\165\141\154\055\142\151\156\144\151\156\147\163\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\160\162\157\143\145\144\165\162\145\040\143\141\154\154\040\143\150\145\143\153\163\040\157\156\154\171\040\146\157\162\040\165\163\165\141\154\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\142\151\156\144\151\156\147\163\012\040\040\040\040\055\156\157\055\160\162\157\143\145\144\165\162\145\055\143\150\145\143\153\163\055\146\157\162\055\164\157\160\154\145\166\145\154\055\142\151\156\144\151\156\147\163\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\141\142\154\145\040\160\162\157\143\145\144\165\162\145\040\143\141\154\154\040\143\150\145\143\153\163\040\146\157\162\040\164\157\160\154\145\166\145\154\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\142\151\156\144\151\156\147\163\012\040\040\040\040\055\163\164\162\151\143\164\055\164\171\160\145\163\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\141\163\163\165\155\145\040\166\141\162\151\141\142\154\145\040\144\157\040\156\157\164\040\143\150\141\156\147\145\040\164\150\145\151\162\040\164\171\160\145\012\040\040\040\040\055\154\146\141\062\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\145\162\146\157\162\155\040\141\144\144\151\164\151\157\156\141\154\040\154\151\147\150\164\167\145\151\147\150\164\040\146\154\157\167\055\141\156\141\154\171\163\151\163\040\160\141\163\163\012\040\040\040\040\055\165\156\162\157\154\154\055\154\151\155\151\164\040\114\111\115\111\124\040\040\040\040\040\040\040\040\040\040\040\040\163\160\145\143\151\146\151\145\163\040\151\156\154\151\156\151\156\147\040\154\151\155\151\164\040\146\157\162\040\163\145\154\146\055\162\145\143\165\162\163\151\166\145\040\143\141\154\154\163\012\040\040\040\040\055\155\145\162\147\145\055\162\145\163\165\141\142\154\145\055\143\154\157\163\165\162\145\163\040\040\040\040\040\040\040\145\156\141\142\154\145\163\040\143\154\157\163\165\162\145\040\162\145\165\163\145\012\040\040\040\040\055\155\145\162\147\145\055\163\150\141\162\145\141\142\154\145\055\143\154\157\163\165\162\145\163\040\040\040\040\040\040\145\156\141\142\154\145\163\040\143\154\157\163\165\162\145\040\163\150\141\162\151\156\147\012\012\040\040\103\157\156\146\151\147\165\162\141\164\151\157\156\040\157\160\164\151\157\156\163\072\012\012\040\040\040\040\055\165\156\151\164\040\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\143\157\155\160\151\154\145\040\146\151\154\145\040\141\163\040\141\040\154\151\142\162\141\162\171\040\165\156\151\164\012\040\040\040\040\055\165\163\145\163\040\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\145\143\154\141\162\145\040\154\151\142\162\141\162\171\040\165\156\151\164\040\141\163\040\165\163\145\144\056\012\040\040\040\040\055\150\145\141\160\055\163\151\172\145\040\116\125\115\102\105\122\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\160\145\143\151\146\151\145\163\040\150\145\141\160\055\163\151\172\145\040\157\146\040\143\157\155\160\151\154\145\144\040\145\170\145\143\165\164\141\142\154\145\012\040\040\040\040\055\156\165\162\163\145\162\171\040\116\125\115\102\105\122\040\040\055\163\164\141\143\153\055\163\151\172\145\040\116\125\115\102\105\122\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\160\145\143\151\146\151\145\163\040\156\165\162\163\145\162\171\040\163\151\172\145\040\157\146\040\143\157\155\160\151\154\145\144\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\170\145\143\165\164\141\142\154\145\012\040\040\040\040\055\130\040\055\145\170\164\145\156\144\040\106\111\114\105\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\154\157\141\144\040\146\151\154\145\040\142\145\146\157\162\145\040\143\157\155\160\151\154\141\164\151\157\156\040\143\157\155\155\145\156\143\145\163\012\040\040\040\040\055\160\162\145\154\165\144\145\040\105\130\120\122\105\123\123\111\117\116\040\040\040\040\040\040\040\040\040\040\040\040\141\144\144\040\145\170\160\162\145\163\163\151\157\156\040\164\157\040\142\145\147\151\156\156\151\156\147\040\157\146\040\163\157\165\162\143\145\040\146\151\154\145\012\040\040\040\040\055\160\157\163\164\154\165\144\145\040\105\130\120\122\105\123\123\111\117\116\040\040\040\040\040\040\040\040\040\040\040\141\144\144\040\145\170\160\162\145\163\163\151\157\156\040\164\157\040\145\156\144\040\157\146\040\163\157\165\162\143\145\040\146\151\154\145\012\040\040\040\040\055\160\162\157\154\157\147\165\145\040\106\111\114\105\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\040\151\156\143\154\165\144\145\040\146\151\154\145\040\142\145\146\157\162\145\040\155\141\151\156\040\163\157\165\162\143\145\040\146\151\154\145\012\040\040\040\040\055\145\160\151\154\157\147\165\145\040\106\111\114\105\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\040\151\156\143\154\165\144\145\040\146\151\154\145\040\141\146\164\145\162\040\155\141\151\156\040\163\157\165\162\143\145\040\146\151\154\145\012\012\040\040\040\040\055\145\040\040\055\145\155\142\145\144\144\145\144\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\143\157\155\160\151\154\145\040\141\163\040\145\155\142\145\144\144\145\144\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\050\144\157\156\047\164\040\147\145\156\145\162\141\164\145\040\140\155\141\151\156\050\051\047\051\012\040\040\040\040\055\147\165\151\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\143\157\155\160\151\154\145\040\141\163\040\107\125\111\040\141\160\160\154\151\143\141\164\151\157\156\012\040\040\040\040\055\154\151\156\153\040\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\154\151\156\153\040\145\170\164\145\156\163\151\157\156\040\167\151\164\150\040\143\157\155\160\151\154\145\144\040\145\170\145\143\165\164\141\142\154\145\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\050\151\155\160\154\151\145\163\040\055\165\163\145\163\051\012\040\040\040\040\055\122\040\040\055\162\145\161\165\151\162\145\055\145\170\164\145\156\163\151\157\156\040\116\101\115\105\040\040\040\040\162\145\161\165\151\162\145\040\145\170\164\145\156\163\151\157\156\040\141\156\144\040\151\155\160\157\162\164\040\151\156\040\143\157\155\160\151\154\145\144\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\143\157\144\145\012\040\040\040\040\055\144\154\154\040\055\154\151\142\162\141\162\171\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\143\157\155\160\151\154\145\040\155\165\154\164\151\160\154\145\040\165\156\151\164\163\040\151\156\164\157\040\141\040\144\171\156\141\155\151\143\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\154\151\142\162\141\162\171\012\040\040\040\040\055\154\151\142\144\151\162\040\104\111\122\105\103\124\117\122\131\040\040\040\040\040\040\040\040\040\040\040\040\040\040\157\166\145\162\162\151\144\145\040\144\151\162\145\143\164\157\162\171\040\146\157\162\040\162\165\156\164\151\155\145\040\154\151\142\162\141\162\171\012\012\040\040\117\160\164\151\157\156\163\040\164\157\040\157\164\150\145\162\040\160\141\163\163\145\163\072\012\012\040\040\040\040\055\103\040\117\120\124\111\117\116\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\141\163\163\040\157\160\164\151\157\156\040\164\157\040\103\040\143\157\155\160\151\154\145\162\012\040\040\040\040\055\114\040\117\120\124\111\117\116\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\141\163\163\040\157\160\164\151\157\156\040\164\157\040\154\151\156\153\145\162\012\040\040\040\040\055\111\074\104\111\122\076\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\141\163\163\040\134\042\055\111\074\104\111\122\076\134\042\040\164\157\040\103\040\143\157\155\160\151\154\145\162\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\050\141\144\144\040\151\156\143\154\165\144\145\040\160\141\164\150\051\012\040\040\040\040\055\114\074\104\111\122\076\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\141\163\163\040\134\042\055\114\074\104\111\122\076\134\042\040\164\157\040\154\151\156\153\145\162\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\050\141\144\144\040\154\151\142\162\141\162\171\040\160\141\164\150\051\012\040\040\040\040\055\153\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\153\145\145\160\040\151\156\164\145\162\155\145\144\151\141\164\145\040\146\151\154\145\163\012\040\040\040\040\055\143\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\164\157\160\040\141\146\164\145\162\040\143\157\155\160\151\154\141\164\151\157\156\040\164\157\040\157\142\152\145\143\164\040\146\151\154\145\163\012\040\040\040\040\055\164\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\164\157\160\040\141\146\164\145\162\040\164\162\141\156\163\154\141\164\151\157\156\040\164\157\040\103\012\040\040\040\040\055\143\143\040\103\117\115\120\111\114\105\122\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\145\154\145\143\164\040\157\164\150\145\162\040\103\040\143\157\155\160\151\154\145\162\040\164\150\141\156\040\164\150\145\040\144\145\146\141\165\154\164\012\040\040\040\040\055\143\170\170\040\103\117\115\120\111\114\105\122\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\145\154\145\143\164\040\157\164\150\145\162\040\103\053\053\040\143\157\155\160\151\154\145\162\040\164\150\141\156\040\164\150\145\040\144\145\146\141\165\154\164\012\040\040\040\040\055\154\144\040\103\117\115\120\111\114\105\122\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\145\154\145\143\164\040\157\164\150\145\162\040\154\151\156\153\145\162\040\164\150\141\156\040\164\150\145\040\144\145\146\141\165\154\164\012\040\040\040\040\055\163\164\141\164\151\143\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\154\151\156\153\040\167\151\164\150\040\163\164\141\164\151\143\040\103\110\111\103\113\105\116\040\154\151\142\162\141\162\151\145\163\040\141\156\144\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\170\164\145\156\163\151\157\156\163\040\050\151\146\040\160\157\163\163\151\142\154\145\051\012\040\040\040\040\055\106\074\104\111\122\076\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\141\163\163\040\134\042\055\106\074\104\111\122\076\134\042\040\164\157\040\103\040\143\157\155\160\151\154\145\162\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\050\141\144\144\040\146\162\141\155\145\167\157\162\153\040\150\145\141\144\145\162\040\160\141\164\150\040\157\156\040\115\141\143\040\117\123\040\130\051\012\040\040\040\040\055\146\162\141\155\145\167\157\162\153\040\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\141\163\163\145\144\040\164\157\040\154\151\156\153\145\162\040\157\156\040\115\141\143\040\117\123\040\130\012\040\040\040\040\055\162\160\141\164\150\040\120\101\124\110\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\141\144\144\040\144\151\162\145\143\164\157\162\171\040\164\157\040\162\165\156\164\151\155\145\040\154\151\142\162\141\162\171\040\163\145\141\162\143\150\040\160\141\164\150\012\040\040\040\040\055\127\154\054\056\056\056\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\141\163\163\040\154\151\156\153\145\162\040\157\160\164\151\157\156\163\012\040\040\040\040\055\163\164\162\151\160\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\164\162\151\160\040\162\145\163\165\154\164\151\156\147\040\142\151\156\141\162\171\012\012\040\040\111\156\161\165\151\162\171\040\157\160\164\151\157\156\163\072\012\012\040\040\040\040\055\150\157\155\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\150\157\155\145\055\144\151\162\145\143\164\157\162\171\040\050\167\150\145\162\145\040\163\165\160\160\157\162\164\040\146\151\154\145\163\040\147\157\051\012\040\040\040\040\055\143\146\154\141\147\163\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\162\145\161\165\151\162\145\144\040\103\055\143\157\155\160\151\154\145\162\040\146\154\141\147\163\040\141\156\144\040\145\170\151\164\012\040\040\040\040\055\154\144\146\154\141\147\163\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\162\145\161\165\151\162\145\144\040\154\151\156\153\145\162\040\146\154\141\147\163\040\141\156\144\040\145\170\151\164\012\040\040\040\040\055\154\151\142\163\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\162\145\161\165\151\162\145\144\040\154\151\142\162\141\162\151\145\163\040\141\156\144\040\145\170\151\164\012\040\040\040\040\055\143\143\055\156\141\155\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\156\141\155\145\040\157\146\040\144\145\146\141\165\154\164\040\103\040\143\157\155\160\151\154\145\162\040\165\163\145\144\012\040\040\040\040\055\143\170\170\055\156\141\155\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\156\141\155\145\040\157\146\040\144\145\146\141\165\154\164\040\103\053\053\040\143\157\155\160\151\154\145\162\040\165\163\145\144\012\040\040\040\040\055\154\144\055\156\141\155\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\156\141\155\145\040\157\146\040\144\145\146\141\165\154\164\040\154\151\156\153\145\162\040\165\163\145\144\012\040\040\040\040\055\144\162\171\055\162\165\156\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\152\165\163\164\040\163\150\157\167\040\143\157\155\155\141\156\144\163\040\145\170\145\143\165\164\145\144\054\040\144\157\156\047\164\040\162\165\156\040\164\150\145\155\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\050\151\155\160\154\151\145\163\040\140\055\166\047\051\012\012\040\040\117\142\163\143\165\162\145\040\157\160\164\151\157\156\163\072\012\012\040\040\040\040\055\144\145\142\165\147\040\115\117\104\105\123\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\160\154\141\171\040\144\145\142\165\147\147\151\156\147\040\157\165\164\160\165\164\040\146\157\162\040\164\150\145\040\147\151\166\145\156\040\155\157\144\145\163\012\040\040\040\040\055\143\157\155\160\151\154\145\162\040\120\101\124\110\116\101\115\105\040\040\040\040\040\040\040\040\040\040\040\040\040\165\163\145\040\157\164\150\145\162\040\143\157\155\160\151\154\145\162\040\164\150\141\156\040\144\145\146\141\165\154\164\040\140\143\150\151\143\153\145\156\047\012\040\040\040\040\055\162\141\167\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\157\040\156\157\164\040\147\145\156\145\162\141\164\145\040\151\155\160\154\151\143\151\164\040\151\156\151\164\055\040\141\156\144\040\145\170\151\164\040\143\157\144\145\012\040\040\040\040\055\145\155\151\164\055\145\170\164\145\162\156\141\154\055\160\162\157\164\157\164\171\160\145\163\055\146\151\162\163\164\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\155\151\164\040\160\162\157\164\157\164\171\160\145\163\040\146\157\162\040\143\141\154\154\142\141\143\153\163\040\142\145\146\157\162\145\040\146\157\162\145\151\147\156\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\145\143\154\141\162\141\164\151\157\156\163\012\040\040\040\040\055\162\145\147\145\156\145\162\141\164\145\055\151\155\160\157\162\164\055\154\151\142\162\141\162\151\145\163\040\040\040\145\155\151\164\040\151\155\160\157\162\164\040\154\151\142\162\141\162\151\145\163\040\145\166\145\156\040\167\150\145\156\040\165\156\143\150\141\156\147\145\144\012\040\040\040\040\055\151\147\156\157\162\145\055\162\145\160\157\163\151\164\157\162\171\040\040\040\040\040\040\040\040\040\040\040\040\040\144\157\040\156\157\164\040\162\145\146\145\162\040\164\157\040\162\145\160\157\163\151\164\157\162\171\040\146\157\162\040\145\170\164\145\156\163\151\157\156\163\012\040\040\040\040\055\153\145\145\160\055\163\150\141\144\157\167\145\144\055\155\141\143\162\157\163\040\040\040\040\040\040\040\040\040\040\144\157\040\156\157\164\040\162\145\155\157\166\145\040\163\150\141\144\157\167\145\144\040\155\141\143\162\157\012\040\040\040\040\055\150\157\163\164\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\143\157\155\160\151\154\145\040\146\157\162\040\150\157\163\164\040\167\150\145\156\040\143\157\156\146\151\147\165\162\145\144\040\146\157\162\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\143\162\157\163\163\055\143\157\155\160\151\154\151\156\147\012\040\040\040\040\055\160\162\151\166\141\164\145\055\162\145\160\157\163\151\164\157\162\171\040\040\040\040\040\040\040\040\040\040\040\040\154\157\141\144\040\145\170\164\145\156\163\151\157\156\163\040\146\162\157\155\040\145\170\145\143\165\164\141\142\154\145\040\160\141\164\150\012\040\040\040\040\055\144\145\160\154\157\171\145\144\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\154\151\156\153\040\163\165\160\160\157\162\164\040\146\151\154\145\040\164\157\040\142\145\040\165\163\145\144\040\146\162\157\155\040\141\040\144\145\160\154\157\171\145\144\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\170\145\143\165\164\141\142\154\145\040\050\163\145\164\163\040\140\162\160\141\164\150\047\040\141\143\143\157\162\144\151\156\147\154\171\054\040\151\146\040\163\165\160\160\157\162\164\145\144\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\157\156\040\164\150\151\163\040\160\154\141\164\146\157\162\155\051\012\040\040\040\040\055\156\157\055\145\154\145\166\141\164\151\157\156\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\145\155\142\145\144\040\155\141\156\151\146\145\163\164\040\157\156\040\127\151\156\144\157\167\163\040\164\157\040\163\165\160\162\145\163\163\040\145\154\145\166\141\164\151\157\156\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\167\141\162\156\151\156\147\163\040\146\157\162\040\160\162\157\147\162\141\155\163\040\156\141\155\145\144\040\140\151\156\163\164\141\154\154\047\040\157\162\040\140\163\145\164\165\160\047\012\012\040\040\117\160\164\151\157\156\163\040\143\141\156\040\142\145\040\143\157\154\154\141\160\163\145\144\040\151\146\040\165\156\141\155\142\151\147\165\157\165\163\054\040\163\157\012\012\040\040\040\040\055\166\153\146\117\012\012\040\040\151\163\040\164\150\145\040\163\141\155\145\040\141\163\012\012\040\040\040\040\055\166\040\055\153\040\055\146\151\170\156\165\155\055\141\162\151\164\150\155\145\164\151\143\040\055\157\160\164\151\155\151\172\145\012\012\040\040\124\150\145\040\143\157\156\164\145\156\164\163\040\157\146\040\164\150\145\040\145\156\166\151\162\157\156\155\145\156\164\040\166\141\162\151\141\142\154\145\040\103\123\103\137\117\120\124\111\117\116\123\040\141\162\145\040\151\155\160\154\151\143\151\164\154\171\040\160\141\163\163\145\144\040\164\157\012\040\040\145\166\145\162\171\040\151\156\166\157\143\141\164\151\157\156\040\157\146\040\140\000"));
lf[238]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\040\133\117\120\124\111\117\116\040\056\056\056\135\040\133\106\111\114\105\116\101\115\105\040\056\056\056\135\012\012\040\040\140\000"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\125\163\141\147\145\072\040\000"));
lf[240]=C_h_intern(&lf[240],8, C_text("-release"));
lf[241]=C_h_intern(&lf[241],32, C_text("chicken.platform#chicken-version"));
lf[242]=C_h_intern(&lf[242],8, C_text("-version"));
lf[243]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\011\055\166\145\162\163\151\157\156\000\376\377\016"));
lf[244]=C_h_intern(&lf[244],4, C_text("-c++"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\055\156\157\055\143\160\160\055\160\162\145\143\157\155\160\000"));
lf[246]=C_h_intern(&lf[246],5, C_text("-objc"));
lf[247]=C_h_intern(&lf[247],7, C_text("-static"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\055\163\164\141\164\151\143\000"));
lf[249]=C_h_intern(&lf[249],7, C_text("-cflags"));
lf[250]=C_h_intern(&lf[250],8, C_text("-ldflags"));
lf[251]=C_h_intern(&lf[251],8, C_text("-cc-name"));
lf[252]=C_h_intern(&lf[252],9, C_text("-cxx-name"));
lf[253]=C_h_intern(&lf[253],8, C_text("-ld-name"));
lf[254]=C_h_intern(&lf[254],5, C_text("-home"));
lf[255]=C_h_intern(&lf[255],5, C_text("-libs"));
lf[256]=C_h_intern(&lf[256],2, C_text("-v"));
lf[257]=C_h_intern(&lf[257],8, C_text("-verbose"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\166\145\162\142\157\163\145\000"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\166\000"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\166\000"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\121\000"));
lf[262]=C_h_intern(&lf[262],2, C_text("-w"));
lf[263]=C_h_intern(&lf[263],12, C_text("-no-warnings"));
lf[264]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\167\000"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\055\156\157\055\167\141\162\156\151\156\147\163\000"));
lf[266]=C_h_intern(&lf[266],2, C_text("-A"));
lf[267]=C_h_intern(&lf[267],13, C_text("-analyze-only"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\055\141\156\141\154\171\172\145\055\157\156\154\171\000"));
lf[269]=C_h_intern(&lf[269],2, C_text("-P"));
lf[270]=C_h_intern(&lf[270],13, C_text("-check-syntax"));
lf[271]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\055\143\150\145\143\153\055\163\171\156\164\141\170\000"));
lf[272]=C_h_intern(&lf[272],2, C_text("-k"));
lf[273]=C_h_intern(&lf[273],2, C_text("-c"));
lf[274]=C_h_intern(&lf[274],2, C_text("-t"));
lf[275]=C_h_intern(&lf[275],2, C_text("-e"));
lf[276]=C_h_intern(&lf[276],9, C_text("-embedded"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\055\104\103\137\105\115\102\105\104\104\105\104\000"));
lf[278]=C_h_intern(&lf[278],5, C_text("-link"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\054\040\000"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\154\151\156\153\000"));
lf[281]=C_h_intern(&lf[281],7, C_text("-libdir"));
lf[282]=C_h_intern(&lf[282],18, C_text("-require-extension"));
lf[283]=C_h_intern(&lf[283],2, C_text("-R"));
lf[284]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\055\162\145\161\165\151\162\145\055\145\170\164\145\156\163\151\157\156\000"));
lf[285]=C_h_intern(&lf[285],19, C_text("-private-repository"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\055\104\103\137\120\122\111\126\101\124\105\137\122\105\120\117\123\111\124\117\122\131\000"));
lf[287]=C_h_intern(&lf[287],18, C_text("-ignore-repository"));
lf[288]=C_h_intern(&lf[288],11, C_text("-setup-mode"));
lf[289]=C_h_intern(&lf[289],13, C_text("-no-elevation"));
lf[290]=C_h_intern(&lf[290],4, C_text("-gui"));
lf[291]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\055\104\103\137\107\125\111\000"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\055\154\153\145\162\156\145\154\063\062\000"));
lf[293]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\154\165\163\145\162\063\062\000"));
lf[294]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\055\154\147\144\151\063\062\000"));
lf[295]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\055\155\167\151\156\144\157\167\163\000"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\143\150\151\143\153\145\156\056\162\143\000"));
lf[297]=C_h_intern(&lf[297],9, C_text("-deployed"));
lf[298]=C_h_intern(&lf[298],10, C_text("-framework"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\055\146\162\141\155\145\167\157\162\153\000"));
lf[300]=C_h_intern(&lf[300],2, C_text("-o"));
lf[301]=C_h_intern(&lf[301],12, C_text("-output-file"));
lf[302]=C_h_intern(&lf[302],2, C_text("-O"));
lf[303]=C_h_intern(&lf[303],3, C_text("-O1"));
lf[304]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\055\157\160\164\151\155\151\172\145\055\154\145\166\145\154\000"));
lf[305]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\061\000"));
lf[306]=C_h_intern(&lf[306],3, C_text("-O0"));
lf[307]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\055\157\160\164\151\155\151\172\145\055\154\145\166\145\154\000"));
lf[308]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\060\000"));
lf[309]=C_h_intern(&lf[309],3, C_text("-O2"));
lf[310]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\055\157\160\164\151\155\151\172\145\055\154\145\166\145\154\000"));
lf[311]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\062\000"));
lf[312]=C_h_intern(&lf[312],3, C_text("-O3"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\055\157\160\164\151\155\151\172\145\055\154\145\166\145\154\000"));
lf[314]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\063\000"));
lf[315]=C_h_intern(&lf[315],3, C_text("-O4"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\055\157\160\164\151\155\151\172\145\055\154\145\166\145\154\000"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\064\000"));
lf[318]=C_h_intern(&lf[318],3, C_text("-O5"));
lf[319]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\055\157\160\164\151\155\151\172\145\055\154\145\166\145\154\000"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\065\000"));
lf[321]=C_h_intern(&lf[321],3, C_text("-d0"));
lf[322]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\055\144\145\142\165\147\055\154\145\166\145\154\000"));
lf[323]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\060\000"));
lf[324]=C_h_intern(&lf[324],3, C_text("-d1"));
lf[325]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\055\144\145\142\165\147\055\154\145\166\145\154\000"));
lf[326]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\061\000"));
lf[327]=C_h_intern(&lf[327],3, C_text("-d2"));
lf[328]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\055\144\145\142\165\147\055\154\145\166\145\154\000"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\062\000"));
lf[330]=C_h_intern(&lf[330],3, C_text("-d3"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\055\144\145\142\165\147\055\154\145\166\145\154\000"));
lf[332]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\063\000"));
lf[333]=C_h_intern(&lf[333],6, C_text("-debug"));
lf[334]=C_h_intern(&lf[334],18, C_text("##sys#string->list"));
lf[335]=C_h_intern(&lf[335],8, C_text("-dry-run"));
lf[336]=C_h_intern(&lf[336],2, C_text("-s"));
lf[337]=C_h_intern(&lf[337],4, C_text("-dll"));
lf[338]=C_h_intern(&lf[338],8, C_text("-library"));
lf[339]=C_h_intern(&lf[339],9, C_text("-compiler"));
lf[340]=C_h_intern(&lf[340],3, C_text("-cc"));
lf[341]=C_h_intern(&lf[341],4, C_text("-cxx"));
lf[342]=C_h_intern(&lf[342],3, C_text("-ld"));
lf[343]=C_h_intern(&lf[343],2, C_text("-I"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\055\151\156\143\154\165\144\145\055\160\141\164\150\000"));
lf[345]=C_h_intern(&lf[345],2, C_text("-C"));
lf[346]=C_h_intern(&lf[346],6, C_text("-strip"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\163\000"));
lf[348]=C_h_intern(&lf[348],2, C_text("-L"));
lf[349]=C_h_intern(&lf[349],6, C_text("-rpath"));
lf[350]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\055\127\154\054\000"));
lf[351]=C_h_intern(&lf[351],3, C_text("gnu"));
lf[352]=C_h_intern(&lf[352],5, C_text("clang"));
lf[353]=C_h_intern(&lf[353],31, C_text("chicken.platform#build-platform"));
lf[354]=C_h_intern(&lf[354],5, C_text("-host"));
lf[355]=C_h_intern(&lf[355],3, C_text("-oi"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\055\145\155\151\164\055\151\156\154\151\156\145\055\146\151\154\145\000"));
lf[357]=C_h_intern(&lf[357],3, C_text("-ot"));
lf[358]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\055\145\155\151\164\055\164\171\160\145\163\055\146\151\154\145\000"));
lf[359]=C_h_intern(&lf[359],1, C_text("-"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\141\000"));
lf[361]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\002\055\000\376\377\016"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\150\376\003\000\000\002\376\002\000\000\006\055\150\145\154\160\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\163\376\003\000\000\002\376\002\000\000\010\055\163\150\141\162\145\144\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\155\376\003\000\000\002\376\002\000\000\010\055\155\157\144\165\154\145\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\120\376\003\000\000\002\376\002\000\000\016\055\143\150\145\143\153\055\163\171\156\164\141\170\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\146\376\003\000\000\002\376\002\000\000\023\055\146\151\170\156\165\155\055\141\162\151\164\150\155\145\164\151\143\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\104\376\003\000\000\002\376\002\000\000\011\055\146\145\141\164\165\162\145\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\016\000\000\002\376\377\001\000\000\000\000\376\377\001\377\377\377\377\376\003\000\000\002\376\002\000\000\022\055\143\141\163\145\055\151\156\163\145\156\163\151\164\151\166\145\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\113\376\003\000\000\002\376\002\000\000\017\055\153\145\171\167\157\162\144\055\163\164\171\154\145\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\130\376\003\000\000\002\376\002\000\000\010\055\145\170\164\145\156\144\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\112\376\003\000\000\002\376\002\000\000\033\055\145\155\151\164\055\141\154\154\055\151\155\160\157\162\164\055\154\151\142\162\141\162\151\145\163\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\115\376\003\000\000\002\376\002\000\000\025\055\155\157\144\165\154\145\055\162\145\147\151\163\164\162\141\164\151\157\156\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\116\376\003\000\000\002\376\002\000\000\030\055\156\157\055\155\157\144\165\154\145\055\162\145\147\151\163\164\162\141\164\151\157\156\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\170\376\003\000\000\002\376\002\000\000\016\055\145\170\160\154\151\143\151\164\055\165\163\145\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\165\376\003\000\000\002\376\002\000\000\010\055\165\156\163\141\146\145\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\152\376\003\000\000\002\376\002\000\000\025\055\145\155\151\164\055\151\155\160\157\162\164\055\154\151\142\162\141\162\171\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\055\142\376\003\000\000\002\376\002\000\000\007\055\142\154\157\143\153\000\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\055\164\171\160\145\163\376\003\000\000\002\376\002\000\000\024\055\143\157\156\163\165\154\164\055\164\171\160\145\163\055\146\151\154\145\000\376\377\016\376\377\016"));
lf[363]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\015\001\055\145\170\160\154\151\143\151\164\055\165\163\145\376\003\000\000\002\376\001\000\000\011\001\055\156\157\055\164\162\141\143\145\376\003\000\000\002\376\001\000\000\014\001\055\156\157\055\167\141\162\156\151\156\147\163\376\003\000\000\002\376\001\000\000\026\001\055\156\157\055\165\163\165\141\154\055\151\156\164\145\147\162\141\164\151\157\156\163\376\003\000\000\002\376\001\000\000\027\001\055\157\160\164\151\155\151\172\145\055\154\145\141\146\055\162\157\165\164\151\156\145\163\376\003\000\000\002\376\001\000\000\007\001\055\165\156\163\141\146\145\376\003\000\000\002\376\001\000\000\006\001\055\142\154\157\143\153\376\003\000\000\002\376\001\000\000\023\001\055\144\151\163\141\142\154\145\055\151\156\164\145\162\162\165\160\164\163\376\003\000\000\002\376\001\000\000\022\001\055\146\151\170\156\165\155\055\141\162\151\164\150\155\145\164\151\143\376\003\000\000\002\376\001\000\000\012\001\055\164\157\055\163\164\144\157\165\164\376\003\000\000\002\376\001\000\000\010\001\055\160\162\157\146\151\154\145\376\003\000\000\002\376\001\000\000\004\001\055\162\141\167\376\003\000\000\002\376\001\000\000\023\001\055\141\143\143\165\155\165\154\141\164\145\055\160\162\157\146\151\154\145\376\003\000\000\002\376\001\000\000\015\001\055\143\150\145\143\153\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\021\001\055\143\141\163\145\055\151\156\163\145\156\163\151\164\151\166\145\376\003\000\000\002\376\001\000\000\007\001\055\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\017\001\055\143\157\155\160\151\154\145\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\017\001\055\156\157\055\154\141\155\142\144\141\055\151\156\146\157\376\003\000\000\002\376\001\000\000\010\001\055\144\171\156\141\155\151\143\376\003\000\000\002\376\001\000\000\036\001\055\144\151\163\141\142\154\145\055\163\164\141\143\153\055\157\166\145\162\146\154\157\167\055\143\150\145\143\153\163\376\003\000\000\002\376\001\000\000\006\001\055\154\157\143\141\154\376\003\000\000\002\376\001\000\000\037\001\055\145\155\151\164\055\145\170\164\145\162\156\141\154\055\160\162\157\164\157\164\171\160\145\163\055\146\151\162\163\164\376\003\000\000\002\376\001\000\000\007\001\055\151\156\154\151\156\145\376\003\000\000\002\376\001\000\000\010\001\055\162\145\154\145\141\163\145\376\003\000\000\002\376\001\000\000\015\001\055\141\156\141\154\171\172\145\055\157\156\154\171\376\003\000\000\002\376\001\000\000\025\001\055\153\145\145\160\055\163\150\141\144\157\167\145\144\055\155\141\143\162\157\163\376\003\000\000\002\376\001\000\000\016\001\055\151\156\154\151\156\145\055\147\154\157\142\141\154\376\003\000\000\002\376\001\000\000\022\001\055\151\147\156\157\162\145\055\162\145\160\157\163\151\164\157\162\171\376\003\000\000\002\376\001\000\000\030\001\055\156\157\055\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\376\003\000\000\002\376\001\000\000\014\001\055\162\067\162\163\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\017\001\055\156\157\055\141\162\147\143\055\143\150\145\143\153\163\376\003\000\000\002\376\001\000\000\020\001\055\156\157\055\142\157\165\156\144\055\143\150\145\143\153\163\376\003\000\000\002\376\001\000\000\024\001\055\156\157\055\160\162\157\143\145\144\165\162\145\055\143\150\145\143\153\163\376\003\000\000\002\376\001\000\000\023\001\055\156\157\055\143\157\155\160\151\154\145\162\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\032\001\055\145\155\151\164\055\141\154\154\055\151\155\160\157\162\164\055\154\151\142\162\141\162\151\145\163\376\003\000\000\002\376\001\000\000\015\001\055\156\157\055\145\154\145\166\141\164\151\157\156\376\003\000\000\002\376\001\000\000\024\001\055\155\157\144\165\154\145\055\162\145\147\151\163\164\162\141\164\151\157\156\376\003\000\000\002\376\001\000\000\027\001\055\156\157\055\155\157\144\165\154\145\055\162\145\147\151\163\164\162\141\164\151\157\156\376\003\000\000\002\376\001\000\000\047\001\055\156\157\055\160\162\157\143\145\144\165\162\145\055\143\150\145\143\153\163\055\146\157\162\055\165\163\165\141\154\055\142\151\156\144\151\156\147\163\376\003\000\000\002\376\001\000\000\034\001\055\162\145\147\145\156\145\162\141\164\145\055\151\155\160\157\162\164\055\154\151\142\162\141\162\151\145\163\376\003\000\000\002\376\001\000\000\013\001\055\163\160\145\143\151\141\154\151\172\145\376\003\000\000\002\376\001\000\000\015\001\055\163\164\162\151\143\164\055\164\171\160\145\163\376\003\000\000\002\376\001\000\000\005\001\055\154\146\141\062\376\003\000\000\002\376\001\000\000\013\001\055\144\145\142\165\147\055\151\156\146\157\376\003\000\000\002\376\001\000\000\030\001\055\155\145\162\147\145\055\162\145\165\163\141\142\154\145\055\143\154\157\163\165\162\145\163\376\003\000\000\002\376\001\000\000\031\001\055\155\145\162\147\145\055\163\150\141\162\145\141\142\154\145\055\143\154\157\163\165\162\145\163\376\003\000\000\002\376\001\000\000\052\001\055\156\157\055\160\162\157\143\145\144\165\162\145\055\143\150\145\143\153\163\055\146\157\162\055\164\157\160\154\145\166\145\154\055\142\151\156\144\151\156\147\163\376\377\016"));
lf[364]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001\055\144\145\142\165\147\376\003\000\000\002\376\001\000\000\012\001\055\150\145\141\160\055\163\151\172\145\376\003\000\000\002\376\001\000\000\010\001\055\156\165\162\163\145\162\171\376\003\000\000\002\376\001\000\000\013\001\055\163\164\141\143\153\055\163\151\172\145\376\003\000\000\002\376\001\000\000\011\001\055\143\157\155\160\151\154\145\162\376\003\000\000\002\376\001\000\000\005\001\055\165\156\151\164\376\003\000\000\002\376\001\000\000\005\001\055\165\163\145\163\376\003\000\000\002\376\001\000\000\016\001\055\153\145\171\167\157\162\144\055\163\164\171\154\145\376\003\000\000\002\376\001\000\000\017\001\055\157\160\164\151\155\151\172\145\055\154\145\166\145\154\376\003\000\000\002\376\001\000\000\015\001\055\151\156\143\154\165\144\145\055\160\141\164\150\376\003\000\000\002\376\001\000\000\016\001\055\144\141\164\141\142\141\163\145\055\163\151\172\145\376\003\000\000\002\376\001\000\000\007\001\055\145\170\164\145\156\144\376\003\000\000\002\376\001\000\000\010\001\055\160\162\145\154\165\144\145\376\003\000\000\002\376\001\000\000\011\001\055\160\157\163\164\154\165\144\145\376\003\000\000\002\376\001\000\000\011\001\055\160\162\157\154\157\147\165\145\376\003\000\000\002\376\001\000\000\011\001\055\145\160\151\154\157\147\165\145\376\003\000\000\002\376\001\000\000\017\001\055\145\155\151\164\055\154\151\156\153\055\146\151\154\145\376\003\000\000\002\376\001\000\000\015\001\055\151\156\154\151\156\145\055\154\151\155\151\164\376\003\000\000\002\376\001\000\000\015\001\055\160\162\157\146\151\154\145\055\156\141\155\145\376\003\000\000\002\376\001\000\000\015\001\055\165\156\162\157\154\154\055\154\151\155\151\164\376\003\000\000\002\376\001\000\000\021\001\055\145\155\151\164\055\151\156\154\151\156\145\055\146\151\154\145\376\003\000\000\002\376\001\000\000\024\001\055\143\157\156\163\165\154\164\055\151\156\154\151\156\145\055\146\151\154\145\376\003\000\000\002\376\001\000\000\020\001\055\145\155\151\164\055\164\171\160\145\163\055\146\151\154\145\376\003\000\000\002\376\001\000\000\023\001\055\143\157\156\163\165\154\164\055\164\171\160\145\163\055\146\151\154\145\376\003\000\000\002\376\001\000\000\010\001\055\146\145\141\164\165\162\145\376\003\000\000\002\376\001\000\000\014\001\055\144\145\142\165\147\055\154\145\166\145\154\376\003\000\000\002\376\001\000\000\024\001\055\145\155\151\164\055\151\155\160\157\162\164\055\154\151\142\162\141\162\171\376\003\000\000\002\376\001\000\000\007\001\055\155\157\144\165\154\145\376\003\000\000\002\376\001\000\000\005\001\055\154\151\156\153\376\003\000\000\002\376\001\000\000\013\001\055\156\157\055\146\145\141\164\165\162\145\376\377\016"));
lf[365]=C_h_intern(&lf[365],18, C_text("chicken.base#error"));
lf[366]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\056\142\141\144\040\055\114\040\141\162\147\165\155\145\156\164\054\040\074\104\111\122\076\040\163\164\141\162\164\163\040\167\151\164\150\040\167\150\151\164\145\163\160\141\143\145\000"));
lf[367]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\056\142\141\144\040\055\111\040\141\162\147\165\155\145\156\164\072\040\074\104\111\122\076\040\163\164\141\162\164\163\040\167\151\164\150\040\167\150\151\164\145\163\160\141\143\145\000"));
lf[368]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\146\145\141\164\165\162\145\000"));
lf[369]=C_h_intern(&lf[369],16, C_text("scheme#substring"));
lf[370]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\055\000"));
lf[371]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\065\151\156\166\141\154\151\144\040\157\160\164\151\157\156\040\140\176\101\047\040\055\040\144\151\144\040\171\157\165\040\155\145\141\156\040\140\055\114\040\055\154\074\154\151\142\162\141\162\171\076\047\077\000"));
lf[372]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\151\156\166\141\154\151\144\040\157\160\164\151\157\156\040\140\176\101\047\000"));
lf[373]=C_h_intern(&lf[373],5, C_text("foldr"));
lf[374]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\151\156\166\141\154\151\144\040\157\160\164\151\157\156\040\140\176\101\047\000"));
lf[375]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\055\127\154\054\000"));
lf[376]=C_h_intern(&lf[376],35, C_text("chicken.pathname#decompose-pathname"));
lf[377]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\150\000"));
lf[378]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\143\000"));
lf[379]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\162\143\000"));
lf[380]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\143\160\160\000"));
lf[381]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\103\000"));
lf[382]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\143\143\000"));
lf[383]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\143\170\170\000"));
lf[384]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\150\160\160\000"));
lf[385]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\055\156\157\055\143\160\160\055\160\162\145\143\157\155\160\000"));
lf[386]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\155\000"));
lf[387]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\115\000"));
lf[388]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\155\155\000"));
lf[389]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\146\151\154\145\040\140\176\101\047\040\144\157\145\163\040\156\157\164\040\145\170\151\163\164\000"));
lf[390]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\056\163\143\155\000"));
lf[391]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\072\000"));
lf[392]=C_h_intern(&lf[392],15, C_text("-optimize-level"));
lf[393]=C_h_intern(&lf[393],15, C_text("-benchmark-mode"));
lf[394]=C_h_intern(&lf[394],10, C_text("-to-stdout"));
lf[395]=C_h_intern(&lf[395],7, C_text("-shared"));
lf[396]=C_h_intern(&lf[396],8, C_text("-dynamic"));
lf[397]=C_h_intern(&lf[397],21, C_text("scheme#string->symbol"));
lf[398]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[399]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\123\103\137\117\120\124\111\117\116\123\000"));
lf[400]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\111\000"));
lf[401]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\072\073\000"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\110\111\103\113\105\116\137\103\137\111\116\103\114\125\104\105\137\120\101\124\110\000"));
lf[403]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\111\000"));
lf[404]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\120\110\150\163\146\151\105\116\170\165\142\166\167\101\117\145\127\153\143\164\147\123\112\115\000"));
lf[405]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\006\055\104\120\111\103\000\376\377\016"));
lf[406]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\006\055\146\120\111\103\000\376\003\000\000\002\376\002\000\000\006\055\104\120\111\103\000\376\377\016"));
lf[407]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\163\164\141\164\151\143\056\000"));
lf[408]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\163\164\141\164\151\143\056\000"));
lf[409]=C_h_intern(&lf[409],25, C_text("chicken.platform#feature?"));
lf[410]=C_h_intern_kw(&lf[410],13, C_text("cross-chicken"));
lf[411]=C_h_intern(&lf[411],46, C_text("chicken.process-context#command-line-arguments"));
lf[412]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\057\056\143\141\143\150\145\055\155\145\164\141\144\141\164\141\000"));
lf[413]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[414]=C_h_intern(&lf[414],41, C_text("chicken.process-context#current-directory"));
lf[415]=C_h_intern(&lf[415],39, C_text("chicken.platform#system-cache-directory"));
lf[416]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\110\111\103\113\105\116\137\105\107\107\137\103\101\103\110\105\000"));
lf[417]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\057\143\150\151\143\153\145\156\057\000"));
lf[418]=C_h_intern(&lf[418],20, C_text("##sys#fixnum->string"));
lf[419]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\057\143\150\151\143\153\145\156\057\000"));
lf[420]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[421]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[422]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[423]=C_h_intern(&lf[423],30, C_text("##sys#register-compiled-module"));
lf[424]=C_h_intern(&lf[424],4, C_text("main"));
lf[425]=C_h_intern(&lf[425],22, C_text("##sys#with-environment"));
C_register_lf2(lf,426,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2158,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[401] = {
{C_text("f8062:csc_2escm"),(void*)f8062},
{C_text("f8098:csc_2escm"),(void*)f8098},
{C_text("f_2158:csc_2escm"),(void*)f_2158},
{C_text("f_2161:csc_2escm"),(void*)f_2161},
{C_text("f_2164:csc_2escm"),(void*)f_2164},
{C_text("f_2167:csc_2escm"),(void*)f_2167},
{C_text("f_2170:csc_2escm"),(void*)f_2170},
{C_text("f_2173:csc_2escm"),(void*)f_2173},
{C_text("f_2176:csc_2escm"),(void*)f_2176},
{C_text("f_2179:csc_2escm"),(void*)f_2179},
{C_text("f_2182:csc_2escm"),(void*)f_2182},
{C_text("f_2188:csc_2escm"),(void*)f_2188},
{C_text("f_2194:csc_2escm"),(void*)f_2194},
{C_text("f_2198:csc_2escm"),(void*)f_2198},
{C_text("f_2202:csc_2escm"),(void*)f_2202},
{C_text("f_2206:csc_2escm"),(void*)f_2206},
{C_text("f_2210:csc_2escm"),(void*)f_2210},
{C_text("f_2214:csc_2escm"),(void*)f_2214},
{C_text("f_2218:csc_2escm"),(void*)f_2218},
{C_text("f_2222:csc_2escm"),(void*)f_2222},
{C_text("f_2226:csc_2escm"),(void*)f_2226},
{C_text("f_2230:csc_2escm"),(void*)f_2230},
{C_text("f_2234:csc_2escm"),(void*)f_2234},
{C_text("f_2238:csc_2escm"),(void*)f_2238},
{C_text("f_2242:csc_2escm"),(void*)f_2242},
{C_text("f_2246:csc_2escm"),(void*)f_2246},
{C_text("f_2250:csc_2escm"),(void*)f_2250},
{C_text("f_2258:csc_2escm"),(void*)f_2258},
{C_text("f_2262:csc_2escm"),(void*)f_2262},
{C_text("f_2266:csc_2escm"),(void*)f_2266},
{C_text("f_2270:csc_2escm"),(void*)f_2270},
{C_text("f_2274:csc_2escm"),(void*)f_2274},
{C_text("f_2278:csc_2escm"),(void*)f_2278},
{C_text("f_2282:csc_2escm"),(void*)f_2282},
{C_text("f_2286:csc_2escm"),(void*)f_2286},
{C_text("f_2290:csc_2escm"),(void*)f_2290},
{C_text("f_2294:csc_2escm"),(void*)f_2294},
{C_text("f_2298:csc_2escm"),(void*)f_2298},
{C_text("f_2302:csc_2escm"),(void*)f_2302},
{C_text("f_2306:csc_2escm"),(void*)f_2306},
{C_text("f_2310:csc_2escm"),(void*)f_2310},
{C_text("f_2314:csc_2escm"),(void*)f_2314},
{C_text("f_2318:csc_2escm"),(void*)f_2318},
{C_text("f_2322:csc_2escm"),(void*)f_2322},
{C_text("f_2326:csc_2escm"),(void*)f_2326},
{C_text("f_2330:csc_2escm"),(void*)f_2330},
{C_text("f_2334:csc_2escm"),(void*)f_2334},
{C_text("f_2418:csc_2escm"),(void*)f_2418},
{C_text("f_2421:csc_2escm"),(void*)f_2421},
{C_text("f_2425:csc_2escm"),(void*)f_2425},
{C_text("f_2863:csc_2escm"),(void*)f_2863},
{C_text("f_2869:csc_2escm"),(void*)f_2869},
{C_text("f_2883:csc_2escm"),(void*)f_2883},
{C_text("f_2925:csc_2escm"),(void*)f_2925},
{C_text("f_2952:csc_2escm"),(void*)f_2952},
{C_text("f_3000:csc_2escm"),(void*)f_3000},
{C_text("f_3014:csc_2escm"),(void*)f_3014},
{C_text("f_3027:csc_2escm"),(void*)f_3027},
{C_text("f_3048:csc_2escm"),(void*)f_3048},
{C_text("f_3056:csc_2escm"),(void*)f_3056},
{C_text("f_3077:csc_2escm"),(void*)f_3077},
{C_text("f_3092:csc_2escm"),(void*)f_3092},
{C_text("f_3104:csc_2escm"),(void*)f_3104},
{C_text("f_3108:csc_2escm"),(void*)f_3108},
{C_text("f_3126:csc_2escm"),(void*)f_3126},
{C_text("f_3205:csc_2escm"),(void*)f_3205},
{C_text("f_3307:csc_2escm"),(void*)f_3307},
{C_text("f_3320:csc_2escm"),(void*)f_3320},
{C_text("f_3338:csc_2escm"),(void*)f_3338},
{C_text("f_3710:csc_2escm"),(void*)f_3710},
{C_text("f_3736:csc_2escm"),(void*)f_3736},
{C_text("f_3742:csc_2escm"),(void*)f_3742},
{C_text("f_3745:csc_2escm"),(void*)f_3745},
{C_text("f_3752:csc_2escm"),(void*)f_3752},
{C_text("f_3755:csc_2escm"),(void*)f_3755},
{C_text("f_3758:csc_2escm"),(void*)f_3758},
{C_text("f_3761:csc_2escm"),(void*)f_3761},
{C_text("f_3768:csc_2escm"),(void*)f_3768},
{C_text("f_3772:csc_2escm"),(void*)f_3772},
{C_text("f_3776:csc_2escm"),(void*)f_3776},
{C_text("f_3794:csc_2escm"),(void*)f_3794},
{C_text("f_3802:csc_2escm"),(void*)f_3802},
{C_text("f_3806:csc_2escm"),(void*)f_3806},
{C_text("f_3814:csc_2escm"),(void*)f_3814},
{C_text("f_3826:csc_2escm"),(void*)f_3826},
{C_text("f_3847:csc_2escm"),(void*)f_3847},
{C_text("f_3851:csc_2escm"),(void*)f_3851},
{C_text("f_3856:csc_2escm"),(void*)f_3856},
{C_text("f_3859:csc_2escm"),(void*)f_3859},
{C_text("f_3867:csc_2escm"),(void*)f_3867},
{C_text("f_3902:csc_2escm"),(void*)f_3902},
{C_text("f_3906:csc_2escm"),(void*)f_3906},
{C_text("f_3911:csc_2escm"),(void*)f_3911},
{C_text("f_3916:csc_2escm"),(void*)f_3916},
{C_text("f_3921:csc_2escm"),(void*)f_3921},
{C_text("f_3928:csc_2escm"),(void*)f_3928},
{C_text("f_3958:csc_2escm"),(void*)f_3958},
{C_text("f_3972:csc_2escm"),(void*)f_3972},
{C_text("f_3982:csc_2escm"),(void*)f_3982},
{C_text("f_3986:csc_2escm"),(void*)f_3986},
{C_text("f_4005:csc_2escm"),(void*)f_4005},
{C_text("f_4024:csc_2escm"),(void*)f_4024},
{C_text("f_4028:csc_2escm"),(void*)f_4028},
{C_text("f_4032:csc_2escm"),(void*)f_4032},
{C_text("f_4035:csc_2escm"),(void*)f_4035},
{C_text("f_4048:csc_2escm"),(void*)f_4048},
{C_text("f_4053:csc_2escm"),(void*)f_4053},
{C_text("f_4078:csc_2escm"),(void*)f_4078},
{C_text("f_4098:csc_2escm"),(void*)f_4098},
{C_text("f_4106:csc_2escm"),(void*)f_4106},
{C_text("f_4110:csc_2escm"),(void*)f_4110},
{C_text("f_4114:csc_2escm"),(void*)f_4114},
{C_text("f_4130:csc_2escm"),(void*)f_4130},
{C_text("f_4137:csc_2escm"),(void*)f_4137},
{C_text("f_4147:csc_2escm"),(void*)f_4147},
{C_text("f_4159:csc_2escm"),(void*)f_4159},
{C_text("f_4163:csc_2escm"),(void*)f_4163},
{C_text("f_4166:csc_2escm"),(void*)f_4166},
{C_text("f_4169:csc_2escm"),(void*)f_4169},
{C_text("f_4172:csc_2escm"),(void*)f_4172},
{C_text("f_4175:csc_2escm"),(void*)f_4175},
{C_text("f_4181:csc_2escm"),(void*)f_4181},
{C_text("f_4187:csc_2escm"),(void*)f_4187},
{C_text("f_4199:csc_2escm"),(void*)f_4199},
{C_text("f_4209:csc_2escm"),(void*)f_4209},
{C_text("f_4213:csc_2escm"),(void*)f_4213},
{C_text("f_4219:csc_2escm"),(void*)f_4219},
{C_text("f_4231:csc_2escm"),(void*)f_4231},
{C_text("f_4238:csc_2escm"),(void*)f_4238},
{C_text("f_4271:csc_2escm"),(void*)f_4271},
{C_text("f_4276:csc_2escm"),(void*)f_4276},
{C_text("f_4278:csc_2escm"),(void*)f_4278},
{C_text("f_4304:csc_2escm"),(void*)f_4304},
{C_text("f_4309:csc_2escm"),(void*)f_4309},
{C_text("f_4313:csc_2escm"),(void*)f_4313},
{C_text("f_4317:csc_2escm"),(void*)f_4317},
{C_text("f_4334:csc_2escm"),(void*)f_4334},
{C_text("f_4350:csc_2escm"),(void*)f_4350},
{C_text("f_4361:csc_2escm"),(void*)f_4361},
{C_text("f_4365:csc_2escm"),(void*)f_4365},
{C_text("f_4368:csc_2escm"),(void*)f_4368},
{C_text("f_4371:csc_2escm"),(void*)f_4371},
{C_text("f_4374:csc_2escm"),(void*)f_4374},
{C_text("f_4380:csc_2escm"),(void*)f_4380},
{C_text("f_4386:csc_2escm"),(void*)f_4386},
{C_text("f_4389:csc_2escm"),(void*)f_4389},
{C_text("f_4401:csc_2escm"),(void*)f_4401},
{C_text("f_4404:csc_2escm"),(void*)f_4404},
{C_text("f_4407:csc_2escm"),(void*)f_4407},
{C_text("f_4410:csc_2escm"),(void*)f_4410},
{C_text("f_4413:csc_2escm"),(void*)f_4413},
{C_text("f_4416:csc_2escm"),(void*)f_4416},
{C_text("f_4431:csc_2escm"),(void*)f_4431},
{C_text("f_4438:csc_2escm"),(void*)f_4438},
{C_text("f_4442:csc_2escm"),(void*)f_4442},
{C_text("f_4448:csc_2escm"),(void*)f_4448},
{C_text("f_4455:csc_2escm"),(void*)f_4455},
{C_text("f_4472:csc_2escm"),(void*)f_4472},
{C_text("f_4491:csc_2escm"),(void*)f_4491},
{C_text("f_4494:csc_2escm"),(void*)f_4494},
{C_text("f_4501:csc_2escm"),(void*)f_4501},
{C_text("f_4534:csc_2escm"),(void*)f_4534},
{C_text("f_4537:csc_2escm"),(void*)f_4537},
{C_text("f_4540:csc_2escm"),(void*)f_4540},
{C_text("f_4543:csc_2escm"),(void*)f_4543},
{C_text("f_4554:csc_2escm"),(void*)f_4554},
{C_text("f_4562:csc_2escm"),(void*)f_4562},
{C_text("f_4572:csc_2escm"),(void*)f_4572},
{C_text("f_4591:csc_2escm"),(void*)f_4591},
{C_text("f_4599:csc_2escm"),(void*)f_4599},
{C_text("f_4609:csc_2escm"),(void*)f_4609},
{C_text("f_4628:csc_2escm"),(void*)f_4628},
{C_text("f_4636:csc_2escm"),(void*)f_4636},
{C_text("f_4646:csc_2escm"),(void*)f_4646},
{C_text("f_4661:csc_2escm"),(void*)f_4661},
{C_text("f_4668:csc_2escm"),(void*)f_4668},
{C_text("f_4671:csc_2escm"),(void*)f_4671},
{C_text("f_4683:csc_2escm"),(void*)f_4683},
{C_text("f_4695:csc_2escm"),(void*)f_4695},
{C_text("f_4702:csc_2escm"),(void*)f_4702},
{C_text("f_4711:csc_2escm"),(void*)f_4711},
{C_text("f_4771:csc_2escm"),(void*)f_4771},
{C_text("f_4783:csc_2escm"),(void*)f_4783},
{C_text("f_4795:csc_2escm"),(void*)f_4795},
{C_text("f_4807:csc_2escm"),(void*)f_4807},
{C_text("f_4830:csc_2escm"),(void*)f_4830},
{C_text("f_4833:csc_2escm"),(void*)f_4833},
{C_text("f_4845:csc_2escm"),(void*)f_4845},
{C_text("f_4935:csc_2escm"),(void*)f_4935},
{C_text("f_4938:csc_2escm"),(void*)f_4938},
{C_text("f_4942:csc_2escm"),(void*)f_4942},
{C_text("f_4950:csc_2escm"),(void*)f_4950},
{C_text("f_4967:csc_2escm"),(void*)f_4967},
{C_text("f_4987:csc_2escm"),(void*)f_4987},
{C_text("f_4990:csc_2escm"),(void*)f_4990},
{C_text("f_5056:csc_2escm"),(void*)f_5056},
{C_text("f_5060:csc_2escm"),(void*)f_5060},
{C_text("f_5076:csc_2escm"),(void*)f_5076},
{C_text("f_5087:csc_2escm"),(void*)f_5087},
{C_text("f_5103:csc_2escm"),(void*)f_5103},
{C_text("f_5124:csc_2escm"),(void*)f_5124},
{C_text("f_5134:csc_2escm"),(void*)f_5134},
{C_text("f_5144:csc_2escm"),(void*)f_5144},
{C_text("f_5154:csc_2escm"),(void*)f_5154},
{C_text("f_5164:csc_2escm"),(void*)f_5164},
{C_text("f_5174:csc_2escm"),(void*)f_5174},
{C_text("f_5184:csc_2escm"),(void*)f_5184},
{C_text("f_5194:csc_2escm"),(void*)f_5194},
{C_text("f_5204:csc_2escm"),(void*)f_5204},
{C_text("f_5214:csc_2escm"),(void*)f_5214},
{C_text("f_5223:csc_2escm"),(void*)f_5223},
{C_text("f_5226:csc_2escm"),(void*)f_5226},
{C_text("f_5238:csc_2escm"),(void*)f_5238},
{C_text("f_5265:csc_2escm"),(void*)f_5265},
{C_text("f_5289:csc_2escm"),(void*)f_5289},
{C_text("f_5306:csc_2escm"),(void*)f_5306},
{C_text("f_5323:csc_2escm"),(void*)f_5323},
{C_text("f_5340:csc_2escm"),(void*)f_5340},
{C_text("f_5357:csc_2escm"),(void*)f_5357},
{C_text("f_5361:csc_2escm"),(void*)f_5361},
{C_text("f_5378:csc_2escm"),(void*)f_5378},
{C_text("f_5382:csc_2escm"),(void*)f_5382},
{C_text("f_5390:csc_2escm"),(void*)f_5390},
{C_text("f_5404:csc_2escm"),(void*)f_5404},
{C_text("f_5417:csc_2escm"),(void*)f_5417},
{C_text("f_5421:csc_2escm"),(void*)f_5421},
{C_text("f_5429:csc_2escm"),(void*)f_5429},
{C_text("f_5442:csc_2escm"),(void*)f_5442},
{C_text("f_5456:csc_2escm"),(void*)f_5456},
{C_text("f_5460:csc_2escm"),(void*)f_5460},
{C_text("f_5468:csc_2escm"),(void*)f_5468},
{C_text("f_5472:csc_2escm"),(void*)f_5472},
{C_text("f_5497:csc_2escm"),(void*)f_5497},
{C_text("f_5500:csc_2escm"),(void*)f_5500},
{C_text("f_5517:csc_2escm"),(void*)f_5517},
{C_text("f_5520:csc_2escm"),(void*)f_5520},
{C_text("f_5538:csc_2escm"),(void*)f_5538},
{C_text("f_5545:csc_2escm"),(void*)f_5545},
{C_text("f_5548:csc_2escm"),(void*)f_5548},
{C_text("f_5551:csc_2escm"),(void*)f_5551},
{C_text("f_5558:csc_2escm"),(void*)f_5558},
{C_text("f_5588:csc_2escm"),(void*)f_5588},
{C_text("f_5591:csc_2escm"),(void*)f_5591},
{C_text("f_5605:csc_2escm"),(void*)f_5605},
{C_text("f_5624:csc_2escm"),(void*)f_5624},
{C_text("f_5628:csc_2escm"),(void*)f_5628},
{C_text("f_5651:csc_2escm"),(void*)f_5651},
{C_text("f_5655:csc_2escm"),(void*)f_5655},
{C_text("f_5682:csc_2escm"),(void*)f_5682},
{C_text("f_5696:csc_2escm"),(void*)f_5696},
{C_text("f_5706:csc_2escm"),(void*)f_5706},
{C_text("f_5710:csc_2escm"),(void*)f_5710},
{C_text("f_5733:csc_2escm"),(void*)f_5733},
{C_text("f_5750:csc_2escm"),(void*)f_5750},
{C_text("f_5752:csc_2escm"),(void*)f_5752},
{C_text("f_5777:csc_2escm"),(void*)f_5777},
{C_text("f_5804:csc_2escm"),(void*)f_5804},
{C_text("f_5808:csc_2escm"),(void*)f_5808},
{C_text("f_5822:csc_2escm"),(void*)f_5822},
{C_text("f_5831:csc_2escm"),(void*)f_5831},
{C_text("f_5836:csc_2escm"),(void*)f_5836},
{C_text("f_5842:csc_2escm"),(void*)f_5842},
{C_text("f_5853:csc_2escm"),(void*)f_5853},
{C_text("f_5867:csc_2escm"),(void*)f_5867},
{C_text("f_5880:csc_2escm"),(void*)f_5880},
{C_text("f_5893:csc_2escm"),(void*)f_5893},
{C_text("f_5898:csc_2escm"),(void*)f_5898},
{C_text("f_5917:csc_2escm"),(void*)f_5917},
{C_text("f_5929:csc_2escm"),(void*)f_5929},
{C_text("f_5933:csc_2escm"),(void*)f_5933},
{C_text("f_5941:csc_2escm"),(void*)f_5941},
{C_text("f_5950:csc_2escm"),(void*)f_5950},
{C_text("f_5956:csc_2escm"),(void*)f_5956},
{C_text("f_5983:csc_2escm"),(void*)f_5983},
{C_text("f_6187:csc_2escm"),(void*)f_6187},
{C_text("f_6190:csc_2escm"),(void*)f_6190},
{C_text("f_6193:csc_2escm"),(void*)f_6193},
{C_text("f_6196:csc_2escm"),(void*)f_6196},
{C_text("f_6200:csc_2escm"),(void*)f_6200},
{C_text("f_6204:csc_2escm"),(void*)f_6204},
{C_text("f_6223:csc_2escm"),(void*)f_6223},
{C_text("f_6227:csc_2escm"),(void*)f_6227},
{C_text("f_6231:csc_2escm"),(void*)f_6231},
{C_text("f_6243:csc_2escm"),(void*)f_6243},
{C_text("f_6260:csc_2escm"),(void*)f_6260},
{C_text("f_6299:csc_2escm"),(void*)f_6299},
{C_text("f_6324:csc_2escm"),(void*)f_6324},
{C_text("f_6328:csc_2escm"),(void*)f_6328},
{C_text("f_6331:csc_2escm"),(void*)f_6331},
{C_text("f_6334:csc_2escm"),(void*)f_6334},
{C_text("f_6350:csc_2escm"),(void*)f_6350},
{C_text("f_6354:csc_2escm"),(void*)f_6354},
{C_text("f_6358:csc_2escm"),(void*)f_6358},
{C_text("f_6362:csc_2escm"),(void*)f_6362},
{C_text("f_6396:csc_2escm"),(void*)f_6396},
{C_text("f_6399:csc_2escm"),(void*)f_6399},
{C_text("f_6400:csc_2escm"),(void*)f_6400},
{C_text("f_6404:csc_2escm"),(void*)f_6404},
{C_text("f_6407:csc_2escm"),(void*)f_6407},
{C_text("f_6425:csc_2escm"),(void*)f_6425},
{C_text("f_6429:csc_2escm"),(void*)f_6429},
{C_text("f_6438:csc_2escm"),(void*)f_6438},
{C_text("f_6446:csc_2escm"),(void*)f_6446},
{C_text("f_6456:csc_2escm"),(void*)f_6456},
{C_text("f_6469:csc_2escm"),(void*)f_6469},
{C_text("f_6479:csc_2escm"),(void*)f_6479},
{C_text("f_6494:csc_2escm"),(void*)f_6494},
{C_text("f_6496:csc_2escm"),(void*)f_6496},
{C_text("f_6506:csc_2escm"),(void*)f_6506},
{C_text("f_6520:csc_2escm"),(void*)f_6520},
{C_text("f_6523:csc_2escm"),(void*)f_6523},
{C_text("f_6526:csc_2escm"),(void*)f_6526},
{C_text("f_6538:csc_2escm"),(void*)f_6538},
{C_text("f_6545:csc_2escm"),(void*)f_6545},
{C_text("f_6547:csc_2escm"),(void*)f_6547},
{C_text("f_6557:csc_2escm"),(void*)f_6557},
{C_text("f_6581:csc_2escm"),(void*)f_6581},
{C_text("f_6584:csc_2escm"),(void*)f_6584},
{C_text("f_6587:csc_2escm"),(void*)f_6587},
{C_text("f_6593:csc_2escm"),(void*)f_6593},
{C_text("f_6601:csc_2escm"),(void*)f_6601},
{C_text("f_6611:csc_2escm"),(void*)f_6611},
{C_text("f_6628:csc_2escm"),(void*)f_6628},
{C_text("f_6635:csc_2escm"),(void*)f_6635},
{C_text("f_6643:csc_2escm"),(void*)f_6643},
{C_text("f_6653:csc_2escm"),(void*)f_6653},
{C_text("f_6663:csc_2escm"),(void*)f_6663},
{C_text("f_6672:csc_2escm"),(void*)f_6672},
{C_text("f_6680:csc_2escm"),(void*)f_6680},
{C_text("f_6684:csc_2escm"),(void*)f_6684},
{C_text("f_6693:csc_2escm"),(void*)f_6693},
{C_text("f_6696:csc_2escm"),(void*)f_6696},
{C_text("f_6703:csc_2escm"),(void*)f_6703},
{C_text("f_6717:csc_2escm"),(void*)f_6717},
{C_text("f_6732:csc_2escm"),(void*)f_6732},
{C_text("f_6740:csc_2escm"),(void*)f_6740},
{C_text("f_6750:csc_2escm"),(void*)f_6750},
{C_text("f_6765:csc_2escm"),(void*)f_6765},
{C_text("f_6774:csc_2escm"),(void*)f_6774},
{C_text("f_6799:csc_2escm"),(void*)f_6799},
{C_text("f_6811:csc_2escm"),(void*)f_6811},
{C_text("f_6825:csc_2escm"),(void*)f_6825},
{C_text("f_6831:csc_2escm"),(void*)f_6831},
{C_text("f_6834:csc_2escm"),(void*)f_6834},
{C_text("f_6837:csc_2escm"),(void*)f_6837},
{C_text("f_6844:csc_2escm"),(void*)f_6844},
{C_text("f_6848:csc_2escm"),(void*)f_6848},
{C_text("f_6857:csc_2escm"),(void*)f_6857},
{C_text("f_6915:csc_2escm"),(void*)f_6915},
{C_text("f_6923:csc_2escm"),(void*)f_6923},
{C_text("f_6969:csc_2escm"),(void*)f_6969},
{C_text("f_6973:csc_2escm"),(void*)f_6973},
{C_text("f_6976:csc_2escm"),(void*)f_6976},
{C_text("f_6982:csc_2escm"),(void*)f_6982},
{C_text("f_6987:csc_2escm"),(void*)f_6987},
{C_text("f_6993:csc_2escm"),(void*)f_6993},
{C_text("f_7009:csc_2escm"),(void*)f_7009},
{C_text("f_7012:csc_2escm"),(void*)f_7012},
{C_text("f_7015:csc_2escm"),(void*)f_7015},
{C_text("f_7018:csc_2escm"),(void*)f_7018},
{C_text("f_7021:csc_2escm"),(void*)f_7021},
{C_text("f_7042:csc_2escm"),(void*)f_7042},
{C_text("f_7044:csc_2escm"),(void*)f_7044},
{C_text("f_7069:csc_2escm"),(void*)f_7069},
{C_text("f_7078:csc_2escm"),(void*)f_7078},
{C_text("f_7082:csc_2escm"),(void*)f_7082},
{C_text("f_7097:csc_2escm"),(void*)f_7097},
{C_text("f_7102:csc_2escm"),(void*)f_7102},
{C_text("f_7110:csc_2escm"),(void*)f_7110},
{C_text("f_7128:csc_2escm"),(void*)f_7128},
{C_text("f_7134:csc_2escm"),(void*)f_7134},
{C_text("f_7138:csc_2escm"),(void*)f_7138},
{C_text("f_7142:csc_2escm"),(void*)f_7142},
{C_text("f_7146:csc_2escm"),(void*)f_7146},
{C_text("f_7153:csc_2escm"),(void*)f_7153},
{C_text("f_7157:csc_2escm"),(void*)f_7157},
{C_text("f_7160:csc_2escm"),(void*)f_7160},
{C_text("f_7173:csc_2escm"),(void*)f_7173},
{C_text("f_7178:csc_2escm"),(void*)f_7178},
{C_text("f_7203:csc_2escm"),(void*)f_7203},
{C_text("f_7220:csc_2escm"),(void*)f_7220},
{C_text("f_7231:csc_2escm"),(void*)f_7231},
{C_text("f_7244:csc_2escm"),(void*)f_7244},
{C_text("f_7248:csc_2escm"),(void*)f_7248},
{C_text("f_7271:csc_2escm"),(void*)f_7271},
{C_text("f_7278:csc_2escm"),(void*)f_7278},
{C_text("f_7282:csc_2escm"),(void*)f_7282},
{C_text("f_7286:csc_2escm"),(void*)f_7286},
{C_text("f_7290:csc_2escm"),(void*)f_7290},
{C_text("f_7298:csc_2escm"),(void*)f_7298},
{C_text("f_7305:csc_2escm"),(void*)f_7305},
{C_text("f_7308:csc_2escm"),(void*)f_7308},
{C_text("f_7315:csc_2escm"),(void*)f_7315},
{C_text("f_7320:csc_2escm"),(void*)f_7320},
{C_text("f_7325:csc_2escm"),(void*)f_7325},
{C_text("f_7329:csc_2escm"),(void*)f_7329},
{C_text("f_7333:csc_2escm"),(void*)f_7333},
{C_text("f_7340:csc_2escm"),(void*)f_7340},
{C_text("f_7342:csc_2escm"),(void*)f_7342},
{C_text("toplevel:csc_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: main#staticbuild 
o|hiding unexported module binding: main#debugbuild 
o|hiding unexported module binding: main#cross-chicken 
o|hiding unexported module binding: main#binary-version 
o|hiding unexported module binding: main#major-version 
o|hiding unexported module binding: main#chicken-install-program 
o|hiding unexported module binding: main#default-cc 
o|hiding unexported module binding: main#default-cxx 
o|hiding unexported module binding: main#default-install-program 
o|hiding unexported module binding: main#default-cflags 
o|hiding unexported module binding: main#default-ldflags 
o|hiding unexported module binding: main#default-install-program-executable-flags 
o|hiding unexported module binding: main#default-install-program-data-flags 
o|hiding unexported module binding: main#default-libs 
o|hiding unexported module binding: main#default-libdir 
o|hiding unexported module binding: main#default-runlibdir 
o|hiding unexported module binding: main#default-slibdir 
o|hiding unexported module binding: main#default-incdir 
o|hiding unexported module binding: main#default-bindir 
o|hiding unexported module binding: main#default-sharedir 
o|hiding unexported module binding: main#default-platform 
o|hiding unexported module binding: main#default-prefix 
o|hiding unexported module binding: main#default-bindir 
o|hiding unexported module binding: main#default-csc 
o|hiding unexported module binding: main#default-csi 
o|hiding unexported module binding: main#default-builder 
o|hiding unexported module binding: main#target-librarian 
o|hiding unexported module binding: main#target-librarian-options 
o|hiding unexported module binding: main#host-prefix 
o|hiding unexported module binding: main#host-repo 
o|hiding unexported module binding: main#host-libdir 
o|hiding unexported module binding: main#host-bindir 
o|hiding unexported module binding: main#host-incdir 
o|hiding unexported module binding: main#host-sharedir 
o|hiding unexported module binding: main#host-libs 
o|hiding unexported module binding: main#host-cflags 
o|hiding unexported module binding: main#host-ldflags 
o|hiding unexported module binding: main#host-cc 
o|hiding unexported module binding: main#host-cxx 
o|hiding unexported module binding: main#target-repo 
o|hiding unexported module binding: main#target-run-repo 
o|hiding unexported module binding: main#+egg-info-extension+ 
o|hiding unexported module binding: main#+egg-extension+ 
o|hiding unexported module binding: main#validate-environment 
o|hiding unexported module binding: main#destination-repository 
o|hiding unexported module binding: main#probe-dir 
o|hiding unexported module binding: main#cache-directory 
o|hiding unexported module binding: main#cache-metadata-directory 
o|hiding unexported module binding: main#+version-file+ 
o|hiding unexported module binding: main#+timestamp-file+ 
o|hiding unexported module binding: main#+status-file+ 
o|hiding unexported module binding: main#partition 
o|hiding unexported module binding: main#span 
o|hiding unexported module binding: main#take 
o|hiding unexported module binding: main#drop 
o|hiding unexported module binding: main#split-at 
o|hiding unexported module binding: main#append-map 
o|hiding unexported module binding: main#every 
o|hiding unexported module binding: main#any 
o|hiding unexported module binding: main#cons* 
o|hiding unexported module binding: main#concatenate 
o|hiding unexported module binding: main#delete 
o|hiding unexported module binding: main#first 
o|hiding unexported module binding: main#second 
o|hiding unexported module binding: main#third 
o|hiding unexported module binding: main#fourth 
o|hiding unexported module binding: main#fifth 
o|hiding unexported module binding: main#delete-duplicates 
o|hiding unexported module binding: main#alist-cons 
o|hiding unexported module binding: main#filter 
o|hiding unexported module binding: main#filter-map 
o|hiding unexported module binding: main#remove 
o|hiding unexported module binding: main#unzip1 
o|hiding unexported module binding: main#last 
o|hiding unexported module binding: main#list-index 
o|hiding unexported module binding: main#lset-adjoin/eq? 
o|hiding unexported module binding: main#lset-difference/eq? 
o|hiding unexported module binding: main#lset-union/eq? 
o|hiding unexported module binding: main#lset-intersection/eq? 
o|hiding unexported module binding: main#list-tabulate 
o|hiding unexported module binding: main#lset<=/eq? 
o|hiding unexported module binding: main#lset=/eq? 
o|hiding unexported module binding: main#length+ 
o|hiding unexported module binding: main#find 
o|hiding unexported module binding: main#find-tail 
o|hiding unexported module binding: main#iota 
o|hiding unexported module binding: main#make-list 
o|hiding unexported module binding: main#posq 
o|hiding unexported module binding: main#posv 
o|hiding unexported module binding: main#host-libs 
o|hiding unexported module binding: main#TARGET_CC 
o|hiding unexported module binding: main#windows 
o|hiding unexported module binding: main#mingw 
o|hiding unexported module binding: main#osx 
o|hiding unexported module binding: main#cygwin 
o|hiding unexported module binding: main#aix 
o|hiding unexported module binding: main#solaris 
o|hiding unexported module binding: main#elf 
o|hiding unexported module binding: main#stop 
o|hiding unexported module binding: main#arguments 
o|hiding unexported module binding: main#cross-chicken 
o|hiding unexported module binding: main#host-mode 
o|hiding unexported module binding: main#back-slash->forward-slash 
o|hiding unexported module binding: main#quotewrap 
o|hiding unexported module binding: main#home 
o|hiding unexported module binding: main#translator 
o|hiding unexported module binding: main#compiler 
o|hiding unexported module binding: main#c++-compiler 
o|hiding unexported module binding: main#rc-compiler 
o|hiding unexported module binding: main#linker 
o|hiding unexported module binding: main#c++-linker 
o|hiding unexported module binding: main#object-extension 
o|hiding unexported module binding: main#library-extension 
o|hiding unexported module binding: main#link-output-flag 
o|hiding unexported module binding: main#executable-extension 
o|hiding unexported module binding: main#compile-output-flag 
o|hiding unexported module binding: main#shared-library-extension 
o|hiding unexported module binding: main#static-object-extension 
o|hiding unexported module binding: main#static-library-extension 
o|hiding unexported module binding: main#default-translation-optimization-options 
o|hiding unexported module binding: main#pic-options 
o|hiding unexported module binding: main#generate-manifest 
o|hiding unexported module binding: main#libchicken 
o|hiding unexported module binding: main#dynamic-libchicken 
o|hiding unexported module binding: main#default-library 
o|hiding unexported module binding: main#default-compilation-optimization-options 
o|hiding unexported module binding: main#best-compilation-optimization-options 
o|hiding unexported module binding: main#default-linking-optimization-options 
o|hiding unexported module binding: main#best-linking-optimization-options 
o|hiding unexported module binding: main#extra-features 
o|hiding unexported module binding: main#constant839 
o|hiding unexported module binding: main#constant842 
o|hiding unexported module binding: main#constant846 
o|hiding unexported module binding: main#short-options 
o|hiding unexported module binding: main#scheme-files 
o|hiding unexported module binding: main#c-files 
o|hiding unexported module binding: main#rc-files 
o|hiding unexported module binding: main#generated-c-files 
o|hiding unexported module binding: main#generated-rc-files 
o|hiding unexported module binding: main#object-files 
o|hiding unexported module binding: main#generated-object-files 
o|hiding unexported module binding: main#transient-link-files 
o|hiding unexported module binding: main#linked-extensions 
o|hiding unexported module binding: main#cpp-mode 
o|hiding unexported module binding: main#objc-mode 
o|hiding unexported module binding: main#embedded 
o|hiding unexported module binding: main#inquiry-only 
o|hiding unexported module binding: main#show-cflags 
o|hiding unexported module binding: main#show-ldflags 
o|hiding unexported module binding: main#show-libs 
o|hiding unexported module binding: main#dry-run 
o|hiding unexported module binding: main#gui 
o|hiding unexported module binding: main#deployed 
o|hiding unexported module binding: main#rpath 
o|hiding unexported module binding: main#ignore-repository 
o|hiding unexported module binding: main#show-debugging-help 
o|hiding unexported module binding: main#library-dir 
o|hiding unexported module binding: main#extra-libraries 
o|hiding unexported module binding: main#extra-shared-libraries 
o|hiding unexported module binding: main#library-files 
o|hiding unexported module binding: main#shared-library-files 
o|hiding unexported module binding: main#translate-options 
o|hiding unexported module binding: main#include-dir 
o|hiding unexported module binding: main#compile-options 
o|hiding unexported module binding: main#builtin-compile-options 
o|hiding unexported module binding: main#compile-only-flag 
o|hiding unexported module binding: main#translation-optimization-options 
o|hiding unexported module binding: main#compilation-optimization-options 
o|hiding unexported module binding: main#linking-optimization-options 
o|hiding unexported module binding: main#link-options 
o|hiding unexported module binding: main#rpath-option 
o|hiding unexported module binding: main#builtin-link-options 
o|hiding unexported module binding: main#target-filename 
o|hiding unexported module binding: main#verbose 
o|hiding unexported module binding: main#keep-files 
o|hiding unexported module binding: main#translate-only 
o|hiding unexported module binding: main#compile-only 
o|hiding unexported module binding: main#to-stdout 
o|hiding unexported module binding: main#shared 
o|hiding unexported module binding: main#static 
o|hiding unexported module binding: main#repo-path 
o|hiding unexported module binding: main#find-object-file 
o|hiding unexported module binding: main#usage 
o|hiding unexported module binding: main#run 
o|hiding unexported module binding: main#run-translation 
o|hiding unexported module binding: main#run-compilation 
o|hiding unexported module binding: main#compiler-options 
o|hiding unexported module binding: main#run-linking 
o|hiding unexported module binding: main#collect-linked-objects 
o|hiding unexported module binding: main#copy-files 
o|hiding unexported module binding: main#linker-options 
o|hiding unexported module binding: main#linker-libraries 
o|hiding unexported module binding: main#string-any 
o|hiding unexported module binding: main#exec 
o|hiding unexported module binding: main#$delete-file 
o|hiding unexported module binding: main#create-win-manifest 
S|applied compiler syntax:
S|  chicken.format#printf		1
S|  scheme#for-each		9
S|  chicken.format#fprintf		2
S|  chicken.base#foldl		3
S|  scheme#map		9
S|  chicken.base#foldr		3
o|eliminated procedure checks: 132 
o|specializations:
o|  1 (scheme#zero? *)
o|  1 (scheme#= integer integer)
o|  1 (##sys#debug-mode?)
o|  2 (scheme#= fixnum fixnum)
o|  1 (scheme#string-ci=? * *)
o|  5 (scheme#char=? char char)
o|  7 (scheme#string-ref string fixnum)
o|  5 (scheme#string=? * *)
o|  4 (scheme#> fixnum fixnum)
o|  4 (scheme#string-length string)
o|  1 (scheme#memv (or symbol keyword procedure eof null fixnum char boolean) list)
o|  71 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#> integer integer)
o|  2 (scheme#+ fixnum fixnum)
o|  4 (scheme#string-append string string)
o|  3 (##sys#check-output-port * * *)
o|  2 (chicken.base#current-error-port)
o|  5 (scheme#memq * list)
o|  1 (scheme#eqv? * *)
o|  7 (##sys#check-list (or pair list) *)
o|  24 (scheme#cdr pair)
o|  8 (scheme#car pair)
o|  2 (scheme#number->string fixnum)
(o e)|safe calls: 741 
(o e)|assignments to immediate values: 24 
o|removed side-effect free assignment to unused variable: main#default-install-program 
o|removed side-effect free assignment to unused variable: main#default-ldflags 
o|removed side-effect free assignment to unused variable: main#default-install-program-executable-flags 
o|removed side-effect free assignment to unused variable: main#default-install-program-data-flags 
o|removed side-effect free assignment to unused variable: main#default-slibdir 
o|removed side-effect free assignment to unused variable: main#default-platform 
o|removed side-effect free assignment to unused variable: main#default-prefix 
o|removed side-effect free assignment to unused variable: main#default-csc 
o|removed side-effect free assignment to unused variable: main#default-csi 
o|removed side-effect free assignment to unused variable: main#default-builder 
o|removed side-effect free assignment to unused variable: main#target-librarian 
o|removed side-effect free assignment to unused variable: main#target-librarian-options 
o|removed side-effect free assignment to unused variable: main#host-prefix 
o|removed side-effect free assignment to unused variable: main#host-ldflags 
o|removed side-effect free assignment to unused variable: main#+egg-info-extension+ 
o|removed side-effect free assignment to unused variable: main#+egg-extension+ 
o|removed side-effect free assignment to unused variable: main#validate-environment 
o|removed side-effect free assignment to unused variable: main#probe-dir 
o|removed side-effect free assignment to unused variable: main#cache-metadata-directory 
o|removed side-effect free assignment to unused variable: main#+version-file+ 
o|removed side-effect free assignment to unused variable: main#+timestamp-file+ 
o|removed side-effect free assignment to unused variable: main#+status-file+ 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|removed side-effect free assignment to unused variable: main#append-map 
o|inlining procedure: k2810 
o|inlining procedure: k2810 
o|inlining procedure: k2841 
o|inlining procedure: k2841 
o|merged explicitly consed rest parameter: xs439 
o|inlining procedure: k2871 
o|inlining procedure: k2871 
o|removed side-effect free assignment to unused variable: main#concatenate 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#fourth 
o|removed side-effect free assignment to unused variable: main#fifth 
o|removed side-effect free assignment to unused variable: main#alist-cons 
o|inlining procedure: k3058 
o|inlining procedure: k3058 
o|inlining procedure: k3050 
o|inlining procedure: k3050 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k3449 
o|inlining procedure: k3449 
o|removed side-effect free assignment to unused variable: main#lset<=/eq? 
o|removed side-effect free assignment to unused variable: main#lset=/eq? 
o|removed side-effect free assignment to unused variable: main#length+ 
o|removed side-effect free assignment to unused variable: main#find 
o|removed side-effect free assignment to unused variable: main#find-tail 
o|removed side-effect free assignment to unused variable: main#iota 
o|removed side-effect free assignment to unused variable: main#make-list 
o|removed side-effect free assignment to unused variable: main#posq 
o|removed side-effect free assignment to unused variable: main#posv 
o|removed side-effect free assignment to unused variable: main#TARGET_CC 
o|removed side-effect free assignment to unused variable: main#windows 
o|substituted constant variable: a3737 
o|substituted constant variable: a3743 
o|merged explicitly consed rest parameter: args790 
o|propagated global variable: out791794 ##sys#standard-error 
o|substituted constant variable: a3748 
o|substituted constant variable: a3749 
o|contracted procedure: "(csc.scm:91) main#back-slash->forward-slash" 
o|inlining procedure: k3787 
o|inlining procedure: k3787 
o|inlining procedure: k3865 
o|inlining procedure: k3865 
o|removed side-effect free assignment to unused variable: main#dynamic-libchicken 
o|removed side-effect free assignment to unused variable: main#gui 
o|substituted constant variable: main#default-translation-optimization-options 
o|inlining procedure: k4149 
o|inlining procedure: k4149 
o|contracted procedure: "(csc.scm:299) main#destination-repository" 
o|inlining procedure: k2382 
o|inlining procedure: k2382 
o|inlining procedure: k4176 
o|inlining procedure: k4176 
o|inlining procedure: k4188 
o|inlining procedure: k4188 
o|inlining procedure: k4200 
o|inlining procedure: k4200 
o|inlining procedure: k4220 
o|inlining procedure: k4220 
o|removed side-effect free assignment to unused variable: main#copy-files 
o|inlining procedure: k6925 
o|propagated global variable: r69267393 main#extra-libraries 
o|inlining procedure: k6925 
o|propagated global variable: r69267395 main#extra-shared-libraries 
o|contracted procedure: "(csc.scm:1019) main#library-files" 
o|contracted procedure: "(csc.scm:231) main#default-library" 
o|substituted constant variable: a3907 
o|contracted procedure: "(csc.scm:1020) main#shared-library-files" 
o|inlining procedure: k3984 
o|inlining procedure: k3984 
o|removed side-effect free assignment to unused variable: main#string-any 
o|inlining procedure: k6977 
o|inlining procedure: k6977 
o|propagated global variable: out16561659 ##sys#standard-output 
o|substituted constant variable: a7005 
o|substituted constant variable: a7006 
o|inlining procedure: k6995 
o|propagated global variable: out16561659 ##sys#standard-output 
o|inlining procedure: k6995 
o|inlining procedure: k7046 
o|inlining procedure: k7046 
o|inlining procedure: k7083 
o|inlining procedure: k7083 
o|contracted procedure: "(csc.scm:1081) main#run" 
o|merged explicitly consed rest parameter: os1020 
o|merged explicitly consed rest parameter: n1023 
o|inlining procedure: k4280 
o|inlining procedure: k4280 
o|consed rest parameter at call site: "(csc.scm:540) main#stop" 2 
o|inlining procedure: k4294 
o|inlining procedure: k4294 
o|inlining procedure: k4320 
o|inlining procedure: k4320 
o|consed rest parameter at call site: "(csc.scm:543) main#cons*" 2 
o|inlining procedure: k4340 
o|propagated global variable: r43417419 main#shared-library-extension 
o|inlining procedure: k4340 
o|inlining procedure: k4352 
o|inlining procedure: k4381 
o|inlining procedure: k4381 
o|contracted procedure: "(csc.scm:609) main#run-linking" 
o|inlining procedure: k6588 
o|inlining procedure: k6588 
o|inlining procedure: k6603 
o|inlining procedure: k6603 
o|inlining procedure: k6641 
o|inlining procedure: k6641 
o|propagated global variable: tmp14861488 main#rpath 
o|inlining procedure: k6651 
o|propagated global variable: tmp14861488 main#rpath 
o|inlining procedure: k6651 
o|substituted constant variable: a6664 
o|inlining procedure: "(csc.scm:967) main#linker-options" 
o|substituted constant variable: main#link-output-flag 
o|contracted procedure: "(csc.scm:961) main#collect-linked-objects" 
o|inlining procedure: k6813 
o|contracted procedure: "(csc.scm:999) main#delete-duplicates" 
o|inlining procedure: k3002 
o|inlining procedure: k3002 
o|contracted procedure: "(mini-srfi-1.scm:123) main#delete" 
o|inlining procedure: k2927 
o|inlining procedure: k2927 
o|inlining procedure: k6813 
o|contracted procedure: "(csc.scm:1003) locate-objects1513" 
o|inlining procedure: k6742 
o|contracted procedure: "(csc.scm:993) g15261535" 
o|inlining procedure: k6718 
o|inlining procedure: k6718 
o|consed rest parameter at call site: "(csc.scm:995) main#stop" 2 
o|inlining procedure: k6742 
o|inlining procedure: k6776 
o|inlining procedure: k6776 
o|contracted procedure: "(csc.scm:1001) locate-link-file1512" 
o|propagated global variable: tmp15811583 main#static 
o|propagated global variable: tmp15811583 main#static 
o|propagated global variable: ofiles1510 main#object-files 
o|propagated global variable: ofiles1510 main#object-files 
o|propagated global variable: out11351138 ##sys#standard-error 
o|substituted constant variable: a4397 
o|substituted constant variable: a4398 
o|propagated global variable: out11351138 ##sys#standard-error 
o|contracted procedure: "(csc.scm:601) main#filter-map" 
o|propagated global variable: lst503 main#linked-extensions 
o|inlining procedure: k3105 
o|inlining procedure: k3105 
o|inlining procedure: k3094 
o|inlining procedure: k3094 
o|contracted procedure: "(csc.scm:597) main#run-compilation" 
o|consed rest parameter at call site: "(csc.scm:924) main#cons*" 2 
o|substituted constant variable: main#compile-output-flag 
o|substituted constant variable: main#compile-only-flag 
o|inlining procedure: "(csc.scm:930) main#compiler-options" 
o|inlining procedure: k6363 
o|substituted constant variable: a6366 
o|propagated global variable: a6367 main#c++-compiler 
o|inlining procedure: k6363 
o|consed rest parameter at call site: "(csc.scm:920) main#stop" 2 
o|inlining procedure: k6380 
o|substituted constant variable: a6386 
o|inlining procedure: k6380 
o|inlining procedure: k6430 
o|inlining procedure: k6430 
o|inlining procedure: k6448 
o|inlining procedure: k6448 
o|propagated global variable: g14661468 main#generated-rc-files 
o|inlining procedure: k6471 
o|inlining procedure: k6471 
o|propagated global variable: g14491451 main#generated-c-files 
o|inlining procedure: k6498 
o|inlining procedure: k6498 
o|propagated global variable: g14061430 main#rc-files 
o|contracted procedure: "(csc.scm:936) main#create-win-manifest" 
o|inlining procedure: k6549 
o|inlining procedure: k6549 
o|propagated global variable: g13961408 main#c-files 
o|inlining procedure: k4449 
o|inlining procedure: k4449 
o|contracted procedure: "(csc.scm:588) main#last" 
o|inlining procedure: k3207 
o|inlining procedure: k3207 
o|consed rest parameter at call site: "(csc.scm:584) main#stop" 2 
o|inlining procedure: k4470 
o|consed rest parameter at call site: "(csc.scm:584) main#stop" 2 
o|inlining procedure: k4470 
o|consed rest parameter at call site: "(csc.scm:584) main#stop" 2 
o|contracted procedure: "(csc.scm:595) main#run-translation" 
o|inlining procedure: k6301 
o|contracted procedure: "(csc.scm:864) g13531360" 
o|consed rest parameter at call site: "(csc.scm:879) main#cons*" 2 
o|inlining procedure: k6248 
o|inlining procedure: k6248 
o|consed rest parameter at call site: "(csc.scm:875) main#stop" 2 
o|inlining procedure: k6278 
o|inlining procedure: k6278 
o|substituted constant variable: a6287 
o|inlining procedure: k6301 
o|propagated global variable: g13591361 main#scheme-files 
o|contracted procedure: "(csc.scm:594) main#first" 
o|propagated global variable: x461 main#scheme-files 
o|consed rest parameter at call site: "(csc.scm:578) main#stop" 2 
o|substituted constant variable: a4531 
o|inlining procedure: k4564 
o|contracted procedure: "(csc.scm:571) g10981105" 
o|inlining procedure: k4564 
o|inlining procedure: k4601 
o|contracted procedure: "(csc.scm:570) g10731080" 
o|inlining procedure: k4601 
o|inlining procedure: "(csc.scm:570) main#linker-options" 
o|inlining procedure: k4638 
o|contracted procedure: "(csc.scm:569) g10481055" 
o|inlining procedure: k4638 
o|inlining procedure: "(csc.scm:569) main#compiler-options" 
o|contracted procedure: "(csc.scm:566) main#builtin-link-options" 
o|inlining procedure: k4033 
o|contracted procedure: "(csc.scm:279) g942943" 
o|inlining procedure: k4055 
o|contracted procedure: "(csc.scm:281) g953962" 
o|inlining procedure: k4055 
o|inlining procedure: k4033 
o|substituted constant variable: a4099 
o|inlining procedure: k4112 
o|inlining procedure: k4112 
o|inlining procedure: k4121 
o|inlining procedure: k4121 
o|inlining procedure: k4352 
o|contracted procedure: "(csc.scm:616) main#usage" 
o|inlining procedure: k4687 
o|inlining procedure: k4687 
o|inlining procedure: k4715 
o|inlining procedure: k4715 
o|inlining procedure: k4736 
o|inlining procedure: k4736 
o|inlining procedure: k4755 
o|inlining procedure: k4755 
o|inlining procedure: k4775 
o|inlining procedure: k4775 
o|inlining procedure: k4799 
o|inlining procedure: k4799 
o|inlining procedure: k4819 
o|consed rest parameter at call site: "(csc.scm:649) t-options1015" 1 
o|consed rest parameter at call site: "(csc.scm:647) main#cons*" 2 
o|inlining procedure: k4819 
o|consed rest parameter at call site: "(csc.scm:655) t-options1015" 1 
o|inlining procedure: k4866 
o|consed rest parameter at call site: "(csc.scm:658) t-options1015" 1 
o|inlining procedure: k4866 
o|consed rest parameter at call site: "(csc.scm:661) t-options1015" 1 
o|inlining procedure: k4892 
o|inlining procedure: k4892 
o|inlining procedure: k4906 
o|inlining procedure: k4906 
o|inlining procedure: k4927 
o|consed rest parameter at call site: "(csc.scm:670) t-options1015" 1 
o|consed rest parameter at call site: "(csc.scm:669) check1016" 3 
o|inlining procedure: k4927 
o|consed rest parameter at call site: "(csc.scm:675) check1016" 3 
o|inlining procedure: k4976 
o|consed rest parameter at call site: "(csc.scm:680) t-options1015" 1 
o|consed rest parameter at call site: "(csc.scm:679) check1016" 3 
o|inlining procedure: k4976 
o|contracted procedure: "(csc.scm:683) use-private-repository1018" 
o|inlining procedure: k5008 
o|consed rest parameter at call site: "(csc.scm:686) t-options1015" 1 
o|inlining procedure: k5008 
o|consed rest parameter at call site: "(csc.scm:689) t-options1015" 1 
o|inlining procedure: k5028 
o|inlining procedure: k5028 
o|removed side-effect free assignment to unused variable: main#gui 
o|inlining procedure: k5046 
o|consed rest parameter at call site: "(csc.scm:702) main#cons*" 2 
o|inlining procedure: k5046 
o|inlining procedure: k5061 
o|inlining procedure: k5061 
o|consed rest parameter at call site: "(csc.scm:709) main#cons*" 2 
o|consed rest parameter at call site: "(csc.scm:707) check1016" 3 
o|inlining procedure: k5092 
o|consed rest parameter at call site: "(csc.scm:712) check1016" 3 
o|inlining procedure: k5092 
o|consed rest parameter at call site: "(csc.scm:716) main#cons*" 2 
o|inlining procedure: k5125 
o|consed rest parameter at call site: "(csc.scm:717) main#cons*" 2 
o|inlining procedure: k5125 
o|consed rest parameter at call site: "(csc.scm:718) main#cons*" 2 
o|inlining procedure: k5145 
o|consed rest parameter at call site: "(csc.scm:719) main#cons*" 2 
o|inlining procedure: k5145 
o|consed rest parameter at call site: "(csc.scm:720) main#cons*" 2 
o|inlining procedure: k5165 
o|consed rest parameter at call site: "(csc.scm:722) main#cons*" 2 
o|inlining procedure: k5165 
o|consed rest parameter at call site: "(csc.scm:723) main#cons*" 2 
o|inlining procedure: k5185 
o|consed rest parameter at call site: "(csc.scm:724) main#cons*" 2 
o|inlining procedure: k5185 
o|consed rest parameter at call site: "(csc.scm:725) main#cons*" 2 
o|inlining procedure: k5205 
o|consed rest parameter at call site: "(csc.scm:726) main#cons*" 2 
o|inlining procedure: k5205 
o|substituted constant variable: a5234 
o|consed rest parameter at call site: "(csc.scm:729) t-options1015" 1 
o|consed rest parameter at call site: "(csc.scm:728) check1016" 3 
o|inlining procedure: k5249 
o|inlining procedure: k5249 
o|inlining procedure: k5269 
o|inlining procedure: k5269 
o|consed rest parameter at call site: "(csc.scm:742) check1016" 3 
o|inlining procedure: k5298 
o|consed rest parameter at call site: "(csc.scm:746) check1016" 3 
o|inlining procedure: k5298 
o|consed rest parameter at call site: "(csc.scm:750) check1016" 3 
o|inlining procedure: k5332 
o|consed rest parameter at call site: "(csc.scm:754) check1016" 3 
o|inlining procedure: k5332 
o|consed rest parameter at call site: "(csc.scm:759) main#cons*" 2 
o|consed rest parameter at call site: "(csc.scm:758) check1016" 3 
o|inlining procedure: k5370 
o|consed rest parameter at call site: "(csc.scm:761) check1016" 3 
o|inlining procedure: k5370 
o|inlining procedure: k5409 
o|consed rest parameter at call site: "(csc.scm:767) check1016" 3 
o|inlining procedure: k5409 
o|substituted constant variable: a5473 
o|inlining procedure: k5474 
o|inlining procedure: k5474 
o|consed rest parameter at call site: "(csc.scm:771) check1016" 3 
o|inlining procedure: k5483 
o|inlining procedure: k5483 
o|consed rest parameter at call site: "(csc.scm:781) t-options1015" 1 
o|consed rest parameter at call site: "(csc.scm:780) check1016" 3 
o|inlining procedure: k5509 
o|consed rest parameter at call site: "(csc.scm:785) t-options1015" 1 
o|consed rest parameter at call site: "(csc.scm:784) check1016" 3 
o|inlining procedure: k5509 
o|inlining procedure: k5539 
o|inlining procedure: k5539 
o|inlining procedure: k5555 
o|inlining procedure: k5555 
o|consed rest parameter at call site: "(csc.scm:799) t-options1015" 1 
o|inlining procedure: k5580 
o|consed rest parameter at call site: "(csc.scm:802) t-options1015" 1 
o|consed rest parameter at call site: "(csc.scm:801) check1016" 3 
o|inlining procedure: k5580 
o|consed rest parameter at call site: "(csc.scm:805) t-options1015" 1 
o|inlining procedure: k5609 
o|substituted constant variable: a5621 
o|substituted constant variable: a5618 
o|substituted constant variable: a5641 
o|substituted constant variable: a5648 
o|substituted constant variable: a5645 
o|inlining procedure: k5642 
o|substituted constant variable: a5668 
o|inlining procedure: k5642 
o|substituted constant variable: a5675 
o|substituted constant variable: a5672 
o|consed rest parameter at call site: "(csc.scm:817) t-options1015" 1 
o|substituted constant variable: a5689 
o|substituted constant variable: a5686 
o|inlining procedure: k5683 
o|inlining procedure: k5683 
o|inlining procedure: k5715 
o|inlining procedure: k5754 
o|contracted procedure: "(csc.scm:827) g12981307" 
o|substituted constant variable: a5743 
o|inlining procedure: k5754 
o|inlining procedure: k5785 
o|consed rest parameter at call site: "(csc.scm:831) main#stop" 2 
o|inlining procedure: k5785 
o|consed rest parameter at call site: "(csc.scm:832) main#stop" 2 
o|contracted procedure: "(csc.scm:825) main#lset-difference/eq?" 
o|inlining procedure: k3322 
o|contracted procedure: "(mini-srfi-1.scm:164) g595600" 
o|inlining procedure: k3322 
o|inlining procedure: k5715 
o|consed rest parameter at call site: "(csc.scm:833) main#stop" 2 
o|substituted constant variable: a5814 
o|substituted constant variable: a5818 
o|substituted constant variable: a5825 
o|inlining procedure: k5609 
o|inlining procedure: k5844 
o|inlining procedure: k5844 
o|substituted constant variable: a5876 
o|inlining procedure: k5872 
o|inlining procedure: k5872 
o|inlining procedure: k5907 
o|inlining procedure: k5907 
o|inlining procedure: k5951 
o|inlining procedure: k5951 
o|consed rest parameter at call site: "(csc.scm:857) main#stop" 2 
o|substituted constant variable: a5965 
o|substituted constant variable: a5972 
o|substituted constant variable: a5969 
o|substituted constant variable: a5975 
o|substituted constant variable: a5979 
o|substituted constant variable: a5986 
o|substituted constant variable: main#constant842 
o|substituted constant variable: main#constant839 
o|substituted constant variable: main#constant846 
o|substituted constant variable: a5988 
o|substituted constant variable: a5997 
o|substituted constant variable: a5999 
o|substituted constant variable: a6001 
o|substituted constant variable: a6003 
o|substituted constant variable: a6005 
o|substituted constant variable: a6007 
o|substituted constant variable: a6009 
o|substituted constant variable: a6011 
o|substituted constant variable: a6013 
o|substituted constant variable: a6015 
o|substituted constant variable: a6017 
o|substituted constant variable: a6019 
o|substituted constant variable: a6021 
o|substituted constant variable: a6026 
o|substituted constant variable: a6028 
o|inlining procedure: k6032 
o|inlining procedure: k6032 
o|substituted constant variable: a6039 
o|substituted constant variable: a6041 
o|substituted constant variable: a6043 
o|substituted constant variable: a6045 
o|substituted constant variable: a6047 
o|substituted constant variable: a6049 
o|substituted constant variable: a6051 
o|substituted constant variable: a6053 
o|substituted constant variable: a6055 
o|substituted constant variable: a6057 
o|substituted constant variable: a6059 
o|substituted constant variable: a6061 
o|substituted constant variable: a6063 
o|substituted constant variable: a6065 
o|substituted constant variable: a6070 
o|substituted constant variable: a6072 
o|substituted constant variable: a6077 
o|substituted constant variable: a6079 
o|substituted constant variable: a6081 
o|substituted constant variable: a6083 
o|substituted constant variable: a6085 
o|substituted constant variable: a6087 
o|substituted constant variable: a6089 
o|substituted constant variable: a6091 
o|substituted constant variable: a6093 
o|substituted constant variable: a6098 
o|substituted constant variable: a6100 
o|substituted constant variable: a6102 
o|substituted constant variable: a6104 
o|substituted constant variable: a6109 
o|substituted constant variable: a6111 
o|substituted constant variable: a6113 
o|substituted constant variable: a6115 
o|substituted constant variable: a6117 
o|substituted constant variable: a6122 
o|substituted constant variable: a6124 
o|substituted constant variable: a6129 
o|substituted constant variable: a6131 
o|substituted constant variable: a6136 
o|substituted constant variable: a6138 
o|substituted constant variable: a6143 
o|substituted constant variable: a6145 
o|substituted constant variable: a6147 
o|substituted constant variable: a6149 
o|substituted constant variable: a6151 
o|substituted constant variable: a6153 
o|substituted constant variable: a6155 
o|substituted constant variable: a6157 
o|substituted constant variable: a6159 
o|substituted constant variable: a6161 
o|substituted constant variable: a6163 
o|substituted constant variable: a6165 
o|substituted constant variable: a6167 
o|substituted constant variable: a6169 
o|substituted constant variable: a6174 
o|substituted constant variable: a6176 
o|inlining procedure: k7147 
o|inlining procedure: k7147 
o|inlining procedure: k7158 
o|contracted procedure: "(csc.scm:248) g888889" 
o|inlining procedure: k7180 
o|contracted procedure: "(csc.scm:250) g899908" 
o|inlining procedure: k7180 
o|inlining procedure: k7158 
o|inlining procedure: k7229 
o|inlining procedure: k7229 
o|inlining procedure: k7246 
o|inlining procedure: k7246 
o|inlining procedure: k7256 
o|propagated global variable: r72577638 main#host-cflags 
o|inlining procedure: k7256 
o|propagated global variable: r72577640 main#default-cflags 
o|inlining procedure: k7259 
o|inlining procedure: k7259 
o|propagated global variable: r72607643 main#cygwin 
o|inlining procedure: k7306 
o|inlining procedure: k7306 
o|simplifications: ((if . 2)) 
o|replaced variables: 1055 
o|removed binding forms: 436 
o|removed side-effect free assignment to unused variable: main#every 
o|removed side-effect free assignment to unused variable: main#any 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|propagated global variable: out791794 ##sys#standard-error 
o|removed side-effect free assignment to unused variable: main#link-output-flag 
o|removed side-effect free assignment to unused variable: main#compile-output-flag 
o|removed side-effect free assignment to unused variable: main#default-translation-optimization-options 
o|removed side-effect free assignment to unused variable: main#constant839 
o|removed side-effect free assignment to unused variable: main#constant842 
o|removed side-effect free assignment to unused variable: main#constant846 
o|removed side-effect free assignment to unused variable: main#compile-only-flag 
o|substituted constant variable: mode219 
o|folded constant expression: (scheme#eq? (quote target) (quote target)) 
o|removed side-effect free assignment to unused variable: main#compiler-options 
o|removed side-effect free assignment to unused variable: main#linker-options 
o|propagated global variable: out16561659 ##sys#standard-output 
o|substituted constant variable: r42957411 
o|substituted constant variable: r42957411 
o|inlining procedure: k4320 
o|substituted constant variable: r43217417 
o|substituted constant variable: r43217417 
o|inlining procedure: k4340 
o|propagated global variable: r43417656 main#object-extension 
o|propagated global variable: r43417656 main#object-extension 
o|propagated global variable: r66527434 main#rpath 
o|inlining procedure: k6651 
o|propagated global variable: r66527662 main#host-libdir 
o|propagated global variable: r66527662 main#host-libdir 
o|propagated global variable: out11351138 ##sys#standard-error 
o|substituted constant variable: r30957457 
o|propagated global variable: lst503 main#linked-extensions 
o|substituted constant variable: r63647463 
o|substituted constant variable: r63817465 
o|substituted constant variable: main#translation-optimization-options 
o|substituted constant variable: r62497491 
o|substituted constant variable: r62497492 
o|substituted constant variable: r62797493 
o|substituted constant variable: r62797493 
o|inlining procedure: k6278 
o|substituted constant variable: r40347516 
o|substituted constant variable: r40347516 
o|substituted constant variable: r41137518 
o|substituted constant variable: r41137518 
o|inlining procedure: k4112 
o|propagated global variable: r41137728 main#host-libdir 
o|propagated global variable: r41137728 main#host-libdir 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|substituted constant variable: r54757582 
o|inlining procedure: k4669 
o|substituted constant variable: r54847584 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|inlining procedure: k4669 
o|contracted procedure: "(mini-srfi-1.scm:166) main#filter" 
o|substituted constant variable: r30517372 
o|inlining procedure: k4669 
o|substituted constant variable: r71487622 
o|substituted constant variable: r71487622 
o|substituted constant variable: r71597628 
o|substituted constant variable: r71597628 
o|removed call to pure procedure with unused result: "(csc.scm:67) scheme#eq?" 
o|simplifications: ((let . 1)) 
o|replaced variables: 139 
o|removed binding forms: 919 
o|removed conditional forms: 1 
o|contracted procedure: k3713 
o|inlining procedure: k3800 
o|removed side-effect free assignment to unused variable: main#translation-optimization-options 
o|contracted procedure: k2385 
o|inlining procedure: k7080 
o|contracted procedure: k4320 
o|contracted procedure: k4340 
o|propagated global variable: r4341 main#executable-extension 
o|propagated global variable: r66527434 main#rpath 
o|inlining procedure: k6763 
o|inlining procedure: k6694 
o|contracted procedure: "(mini-srfi-1.scm:134) g513514" 
o|inlining procedure: k6374 
o|inlining procedure: k6374 
o|inlining procedure: k6307 
o|inlining procedure: k6245 
o|inlining procedure: k6245 
o|contracted procedure: k6278 
o|inlining procedure: k4516 
o|inlining procedure: k4516 
o|inlining procedure: k4538 
o|inlining procedure: k4089 
o|inlining procedure: k4089 
o|inlining procedure: k4669 
o|removed call to pure procedure with unused result: "(csc.scm:67) chicken.platform#software-type" 
o|replaced variables: 4 
o|removed binding forms: 271 
o|contracted procedure: k7292 
o|substituted constant variable: r2386 
o|substituted constant variable: r43217654 
o|substituted constant variable: r4321 
o|substituted constant variable: r63758068 
o|substituted constant variable: r63758069 
o|substituted constant variable: r62468088 
o|substituted constant variable: r62468089 
o|contracted procedure: k6245 
o|substituted constant variable: r62797704 
o|substituted constant variable: r6279 
o|substituted constant variable: r45178093 
o|substituted constant variable: r40908107 
o|simplifications: ((if . 1) (let . 2)) 
o|replaced variables: 8 
o|removed binding forms: 17 
o|removed conditional forms: 5 
o|removed side-effect free assignment to unused variable: main#host-repo 
o|inlining procedure: k2379 
o|substituted constant variable: r6246 
o|replaced variables: 3 
o|removed binding forms: 18 
o|substituted constant variable: r23808172 
o|removed binding forms: 4 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 45) (let . 14) (##core#call . 357)) 
o|  call simplifications:
o|    scheme#assq
o|    chicken.fixnum#fx>	4
o|    scheme#memq	3
o|    scheme#char=?
o|    scheme#string
o|    scheme#char-whitespace?	2
o|    scheme#cadr
o|    scheme#string->list	3
o|    scheme#number?
o|    ##sys#list
o|    scheme#member	10
o|    scheme#cdr	20
o|    scheme#string=?
o|    scheme#equal?
o|    ##sys#check-list	13
o|    scheme#length	5
o|    scheme#>=	2
o|    scheme#pair?	19
o|    ##sys#setslot	6
o|    ##sys#slot	42
o|    ##sys#call-with-values	2
o|    scheme#list	31
o|    scheme#eq?	81
o|    scheme#not	13
o|    ##sys#apply
o|    scheme#null?	13
o|    scheme#car	29
o|    scheme#cons	50
o|contracted procedure: k7334 
o|contracted procedure: k2252 
o|contracted procedure: k2874 
o|contracted procedure: k2885 
o|contracted procedure: k3717 
o|contracted procedure: k3721 
o|contracted procedure: k3725 
o|contracted procedure: k3729 
o|contracted procedure: k3778 
o|contracted procedure: k3781 
o|contracted procedure: k3808 
o|contracted procedure: k3816 
o|contracted procedure: k3820 
o|contracted procedure: k3828 
o|contracted procedure: k3832 
o|contracted procedure: k3836 
o|contracted procedure: k3868 
o|contracted procedure: k3952 
o|contracted procedure: k3960 
o|contracted procedure: k3995 
o|contracted procedure: k7225 
o|contracted procedure: k7221 
o|contracted procedure: k3998 
o|contracted procedure: k4012 
o|contracted procedure: k2397 
o|contracted procedure: k2379 
o|contracted procedure: k4194 
o|contracted procedure: k4214 
o|contracted procedure: k6998 
o|contracted procedure: k7001 
o|contracted procedure: k7034 
o|contracted procedure: k7037 
o|contracted procedure: k7049 
o|contracted procedure: k7052 
o|contracted procedure: k7055 
o|contracted procedure: k7063 
o|contracted procedure: k7071 
o|contracted procedure: k4290 
o|contracted procedure: k4297 
o|inlining procedure: k4283 
o|contracted procedure: k4294 
o|inlining procedure: k4283 
o|contracted procedure: k4355 
o|contracted procedure: k6594 
o|contracted procedure: k6606 
o|contracted procedure: k6616 
o|contracted procedure: k6620 
o|contracted procedure: k6623 
o|contracted procedure: k6637 
o|contracted procedure: k6666 
o|contracted procedure: k6674 
o|contracted procedure: k6816 
o|contracted procedure: k3005 
o|contracted procedure: k3008 
o|contracted procedure: k3018 
o|contracted procedure: k2930 
o|contracted procedure: k2956 
o|contracted procedure: k2936 
o|contracted procedure: k6710 
o|contracted procedure: k6724 
o|contracted procedure: k6727 
o|contracted procedure: k6733 
o|contracted procedure: k6745 
o|contracted procedure: k6751 
o|contracted procedure: k6759 
o|contracted procedure: k6767 
o|contracted procedure: k6779 
o|contracted procedure: k6782 
o|contracted procedure: k6785 
o|contracted procedure: k6793 
o|contracted procedure: k6801 
o|contracted procedure: k6859 
o|contracted procedure: k6866 
o|contracted procedure: k6870 
o|contracted procedure: k6883 
o|contracted procedure: k6879 
o|contracted procedure: k4393 
o|contracted procedure: k4421 
o|contracted procedure: k4425 
o|contracted procedure: k4432 
o|contracted procedure: k3085 
o|contracted procedure: k3097 
o|contracted procedure: k3120 
o|contracted procedure: k3128 
o|propagated global variable: lst503 main#linked-extensions 
o|contracted procedure: k6336 
o|contracted procedure: k6340 
o|contracted procedure: k6344 
o|contracted procedure: k6368 
o|contracted procedure: k6388 
o|contracted procedure: k6374 
o|contracted procedure: k6391 
o|contracted procedure: k6409 
o|contracted procedure: k6413 
o|contracted procedure: k6417 
o|contracted procedure: k6420 
o|contracted procedure: k6433 
o|contracted procedure: k6439 
o|contracted procedure: k6451 
o|contracted procedure: k6461 
o|contracted procedure: k6465 
o|propagated global variable: g14661468 main#generated-rc-files 
o|contracted procedure: k6474 
o|contracted procedure: k6484 
o|contracted procedure: k6488 
o|propagated global variable: g14491451 main#generated-c-files 
o|contracted procedure: k6501 
o|contracted procedure: k6511 
o|contracted procedure: k6515 
o|propagated global variable: g14061430 main#rc-files 
o|contracted procedure: k6528 
o|contracted procedure: k6532 
o|contracted procedure: k7120 
o|contracted procedure: k7116 
o|contracted procedure: k7112 
o|contracted procedure: k6552 
o|contracted procedure: k6562 
o|contracted procedure: k6566 
o|propagated global variable: g13961408 main#c-files 
o|contracted procedure: k4443 
o|contracted procedure: k4464 
o|contracted procedure: k4461 
o|contracted procedure: k3220 
o|contracted procedure: k3210 
o|contracted procedure: k4483 
o|contracted procedure: k4467 
o|contracted procedure: k4480 
o|contracted procedure: k6292 
o|contracted procedure: k6304 
o|contracted procedure: k6318 
o|contracted procedure: k6289 
o|contracted procedure: k6284 
o|contracted procedure: k6182 
o|contracted procedure: k63148087 
o|contracted procedure: k6206 
o|contracted procedure: k6210 
o|contracted procedure: k6213 
o|contracted procedure: k6217 
o|contracted procedure: k6233 
o|contracted procedure: k6237 
o|contracted procedure: k6265 
o|contracted procedure: k6271 
o|propagated global variable: g13591361 main#scheme-files 
o|contracted procedure: k4503 
o|contracted procedure: k4506 
o|contracted procedure: k4510 
o|contracted procedure: k4524 
o|contracted procedure: k4528 
o|contracted procedure: k4555 
o|contracted procedure: k4567 
o|contracted procedure: k4577 
o|contracted procedure: k4581 
o|contracted procedure: k4592 
o|contracted procedure: k4604 
o|contracted procedure: k4614 
o|contracted procedure: k4618 
o|contracted procedure: k4629 
o|contracted procedure: k4641 
o|contracted procedure: k4651 
o|contracted procedure: k4655 
o|contracted procedure: k4038 
o|contracted procedure: k4058 
o|contracted procedure: k4061 
o|contracted procedure: k4064 
o|contracted procedure: k4072 
o|contracted procedure: k4080 
o|contracted procedure: k4662 
o|contracted procedure: k4675 
o|contracted procedure: k4678 
o|contracted procedure: k4264 
o|contracted procedure: k4260 
o|contracted procedure: k4256 
o|contracted procedure: k4252 
o|contracted procedure: k4248 
o|contracted procedure: k4244 
o|contracted procedure: k4240 
o|contracted procedure: k4690 
o|contracted procedure: k4706 
o|contracted procedure: k4718 
o|contracted procedure: k4726 
o|contracted procedure: k4732 
o|contracted procedure: k4739 
o|contracted procedure: k4743 
o|contracted procedure: k4750 
o|contracted procedure: k4758 
o|contracted procedure: k4766 
o|contracted procedure: k4778 
o|contracted procedure: k4790 
o|contracted procedure: k4802 
o|contracted procedure: k4814 
o|contracted procedure: k4822 
o|contracted procedure: k4825 
o|contracted procedure: k4839 
o|contracted procedure: k4847 
o|contracted procedure: k4853 
o|contracted procedure: k4856 
o|contracted procedure: k4860 
o|contracted procedure: k4869 
o|contracted procedure: k4872 
o|contracted procedure: k4882 
o|contracted procedure: k4885 
o|contracted procedure: k4895 
o|contracted procedure: k4902 
o|contracted procedure: k4909 
o|contracted procedure: k4916 
o|contracted procedure: k4919 
o|contracted procedure: k4924 
o|contracted procedure: k4930 
o|contracted procedure: k4944 
o|contracted procedure: k4952 
o|contracted procedure: k4956 
o|contracted procedure: k4962 
o|contracted procedure: k4969 
o|contracted procedure: k4973 
o|contracted procedure: k4979 
o|contracted procedure: k4982 
o|contracted procedure: k4992 
o|contracted procedure: k4996 
o|contracted procedure: k5002 
o|contracted procedure: k4330 
o|contracted procedure: k5011 
o|contracted procedure: k5021 
o|contracted procedure: k5031 
o|contracted procedure: k5038 
o|contracted procedure: k5043 
o|contracted procedure: k5050 
o|contracted procedure: k5064 
o|contracted procedure: k5071 
o|contracted procedure: k5081 
o|contracted procedure: k5089 
o|contracted procedure: k5095 
o|contracted procedure: k5098 
o|contracted procedure: k5104 
o|contracted procedure: k5108 
o|contracted procedure: k5115 
o|contracted procedure: k5118 
o|contracted procedure: k5128 
o|contracted procedure: k5138 
o|contracted procedure: k5148 
o|contracted procedure: k5158 
o|contracted procedure: k5168 
o|contracted procedure: k5178 
o|contracted procedure: k5188 
o|contracted procedure: k5198 
o|contracted procedure: k5208 
o|contracted procedure: k5218 
o|contracted procedure: k5231 
o|contracted procedure: k5242 
o|contracted procedure: k5246 
o|contracted procedure: k5252 
o|contracted procedure: k5260 
o|contracted procedure: k5272 
o|contracted procedure: k5275 
o|contracted procedure: k5284 
o|contracted procedure: k5291 
o|contracted procedure: k5295 
o|contracted procedure: k5301 
o|contracted procedure: k5308 
o|contracted procedure: k5312 
o|contracted procedure: k5318 
o|contracted procedure: k5325 
o|contracted procedure: k5329 
o|contracted procedure: k5335 
o|contracted procedure: k5342 
o|contracted procedure: k5346 
o|contracted procedure: k5352 
o|contracted procedure: k5363 
o|contracted procedure: k5367 
o|contracted procedure: k5373 
o|contracted procedure: k5384 
o|contracted procedure: k5392 
o|contracted procedure: k5398 
o|contracted procedure: k5406 
o|contracted procedure: k5412 
o|contracted procedure: k5423 
o|contracted procedure: k5431 
o|contracted procedure: k5437 
o|contracted procedure: k5444 
o|contracted procedure: k5451 
o|contracted procedure: k5462 
o|contracted procedure: k5477 
o|contracted procedure: k5486 
o|contracted procedure: k5492 
o|contracted procedure: k5502 
o|contracted procedure: k5506 
o|contracted procedure: k5512 
o|contracted procedure: k5522 
o|contracted procedure: k5526 
o|contracted procedure: k5532 
o|contracted procedure: k5552 
o|contracted procedure: k5565 
o|contracted procedure: k5561 
o|contracted procedure: k5574 
o|contracted procedure: k5583 
o|contracted procedure: k5593 
o|contracted procedure: k5597 
o|contracted procedure: k5966 
o|contracted procedure: k5612 
o|contracted procedure: k5630 
o|contracted procedure: k5633 
o|contracted procedure: k5657 
o|contracted procedure: k5660 
o|contracted procedure: k5698 
o|contracted procedure: k5712 
o|contracted procedure: k5718 
o|contracted procedure: k5721 
o|contracted procedure: k5727 
o|contracted procedure: k5735 
o|contracted procedure: k5757 
o|contracted procedure: k5760 
o|contracted procedure: k5763 
o|contracted procedure: k5771 
o|contracted procedure: k5779 
o|contracted procedure: k5745 
o|contracted procedure: k5798 
o|contracted procedure: k5788 
o|contracted procedure: k3325 
o|contracted procedure: k3332 
o|contracted procedure: k3340 
o|contracted procedure: k3313 
o|contracted procedure: k3041 
o|contracted procedure: k3053 
o|contracted procedure: k3071 
o|contracted procedure: k3079 
o|contracted procedure: k5815 
o|contracted procedure: k5847 
o|contracted procedure: k5855 
o|contracted procedure: k5861 
o|contracted procedure: k5869 
o|contracted procedure: k5882 
o|contracted procedure: k5888 
o|contracted procedure: k5900 
o|contracted procedure: k5904 
o|contracted procedure: k5910 
o|contracted procedure: k5919 
o|contracted procedure: k5935 
o|contracted procedure: k5943 
o|contracted procedure: k5958 
o|contracted procedure: k5976 
o|contracted procedure: k5991 
o|contracted procedure: k6029 
o|contracted procedure: k7163 
o|contracted procedure: k7183 
o|contracted procedure: k7186 
o|contracted procedure: k7189 
o|contracted procedure: k7197 
o|contracted procedure: k7205 
o|contracted procedure: k7348 
o|contracted procedure: k7352 
o|contracted procedure: k7356 
o|contracted procedure: k7360 
o|simplifications: ((if . 4) (let . 86)) 
o|removed binding forms: 343 
o|contracted procedure: k6251 
o|inlining procedure: k5077 
o|inlining procedure: k5077 
o|inlining procedure: k5227 
o|inlining procedure: k5227 
o|inlining procedure: k5447 
o|inlining procedure: k5447 
o|substituted constant variable: r7349 
o|substituted constant variable: r7353 
o|substituted constant variable: r7357 
o|substituted constant variable: r7361 
o|simplifications: ((let . 2)) 
o|replaced variables: 10 
o|removed binding forms: 2 
o|removed binding forms: 16 
o|direct leaf routine/allocation: g523524 3 
o|direct leaf routine/allocation: loop563 0 
o|direct leaf routine/allocation: g12711272 3 
o|direct leaf routine/allocation: a3306 0 
o|contracted procedure: k4457 
o|converted assignments to bindings: (loop563) 
o|inlining procedure: "(csc.scm:798) k4669" 
o|contracted procedure: "(mini-srfi-1.scm:131) k3061" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|direct leaf routine/allocation: g495496 3 
x|eliminated type checks:
x|  C_i_check_list_2:	1
o|customizable procedures: (k3854 k7151 map-loop893918 k5263 k5546 k5549 k5603 k5927 k5891 k5704 foldr490493 foldl597605 map-loop12921310 k5454 shared-build1017 check1016 k4828 t-options1015 loop1039 k4022 k4026 map-loop947972 for-each-loop10471065 for-each-loop10721090 for-each-loop10971115 k4489 k4492 k6241 k6194 for-each-loop13521380 generate-target-filename1019 g13901407 for-each-loop13891420 k6518 k6397 g14001429 for-each-loop13991435 for-each-loop14421452 for-each-loop14591469 k6356 foldr508511 k4384 k6829 map-loop15431560 k6748 map-loop15201567 loop1574 loop453 loop473 main#linker-libraries main#exec for-each-loop14911501 main#cons* main#stop map-loop16121629 main#libchicken k6921 main#repo-path loop440) 
o|shared closure containers: 33 
o|shared closure users: 45 
o|calls to known targets: 268 
o|identified direct recursive calls: f_2869 1 
o|identified direct recursive calls: f_2925 2 
o|identified direct recursive calls: f_3092 1 
o|identified direct recursive calls: f_3205 1 
o|identified direct recursive calls: f_3048 1 
o|fast box initializations: 27 
o|fast global references: 376 
o|fast global assignments: 194 
o|dropping unused closure argument: f_2863 
o|dropping unused closure argument: f_3205 
o|dropping unused closure argument: f_3745 
o|dropping unused closure argument: f_3859 
o|dropping unused closure argument: f_4147 
o|dropping unused closure argument: f_4271 
o|dropping unused closure argument: f_4278 
o|dropping unused closure argument: f_4304 
o|dropping unused closure argument: f_4334 
o|dropping unused closure argument: f_6915 
o|dropping unused closure argument: f_6969 
*/
/* end of file */
