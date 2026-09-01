/* Generated from port.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: port.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file port.c -emit-import-library chicken.port
   unit: port
   uses: extras library
*/
#include "chicken.h"



#if !defined(_WIN32)
# include <sys/ioctl.h>
# include <termios.h>
#endif

#if !defined(__ANDROID__) && defined(TIOCGWINSZ)
static int get_tty_size(int fd, int *rows, int *cols)
{
  struct winsize tty_size;
  int r;

  memset(&tty_size, 0, sizeof tty_size);

  r = ioctl(fd, TIOCGWINSZ, &tty_size);
  if (r == 0) {
     *rows = tty_size.ws_row;
     *cols = tty_size.ws_col;
  }
  return r;
}
#else
static int get_tty_size(int fd, int *rows, int *cols)
{
  *rows = *cols = 0;
  errno = ENOSYS;
  return -1;
}
#endif

#if defined(_WIN32) && !defined(__CYGWIN__)
char *ttyname(int fd) {
  errno = ENOSYS;
  return NULL;
}
#endif



static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[117];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,112,111,115,105,116,105,111,110,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,112,111,114,116,35,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,32,109,111,100,101,32,46,32,115,105,122,101,41,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,102,111,114,45,101,97,99,104,32,102,110,32,116,104,117,110,107,41,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,120,115,41,0,0,0,0,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,109,97,112,32,102,110,32,116,104,117,110,107,41};
static C_char li6[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,97,99,99,41,0,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,114,116,45,102,111,108,100,32,102,110,32,97,99,99,32,116,104,117,110,107,41,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,50,50,49,32,105,41,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,112,41};
static C_char li11[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char li12[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,111,112,121,45,112,111,114,116,32,115,114,99,32,100,101,115,116,32,46,32,114,101,115,116,41};
static C_char li14[] C_aligned={C_lihdr(0,0,11),40,103,50,56,52,32,103,50,57,54,41,0,0,0,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,56,51,32,103,50,57,48,41,0};
static C_char li16[] C_aligned={C_lihdr(0,0,9),40,97,49,51,53,50,32,115,41,0,0,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,48,56,32,103,51,49,53,41,0};
static C_char li18[] C_aligned={C_lihdr(0,0,7),40,97,49,51,56,54,41,0};
static C_char li19[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,98,114,111,97,100,99,97,115,116,45,112,111,114,116,32,46,32,112,111,114,116,115,41,0,0,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,7),40,97,49,52,50,52,41,0};
static C_char li22[] C_aligned={C_lihdr(0,0,7),40,97,49,52,53,57,41,0};
static C_char li23[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,7),40,97,49,52,55,57,41,0};
static C_char li25[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,110,32,99,32,112,41,0,0,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,22),40,97,49,53,49,52,32,112,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,99,111,110,99,97,116,101,110,97,116,101,100,45,112,111,114,116,32,112,49,32,46,32,112,111,114,116,115,41};
static C_char li28[] C_aligned={C_lihdr(0,0,7),40,97,49,53,56,48,41,0};
static C_char li29[] C_aligned={C_lihdr(0,0,7),40,97,49,53,56,53,41,0};
static C_char li30[] C_aligned={C_lihdr(0,0,7),40,97,49,53,57,49,41,0};
static C_char li31[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,7),40,97,49,54,48,53,41,0};
static C_char li33[] C_aligned={C_lihdr(0,0,7),40,97,49,54,49,48,41,0};
static C_char li34[] C_aligned={C_lihdr(0,0,7),40,97,49,54,49,54,41,0};
static C_char li35[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,7),40,97,49,54,51,48,41,0};
static C_char li37[] C_aligned={C_lihdr(0,0,7),40,97,49,54,51,53,41,0};
static C_char li38[] C_aligned={C_lihdr(0,0,7),40,97,49,54,52,49,41,0};
static C_char li39[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,112,111,114,116,32,112,111,114,116,32,116,104,117,110,107,41,0,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,115,116,114,105,110,103,32,115,116,114,32,112,114,111,99,41,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,115,116,114,105,110,103,32,112,114,111,99,41,0,0,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,7),40,97,49,54,55,54,41,0};
static C_char li43[] C_aligned={C_lihdr(0,0,7),40,97,49,54,56,49,41,0};
static C_char li44[] C_aligned={C_lihdr(0,0,7),40,97,49,54,56,55,41,0};
static C_char li45[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,115,116,114,105,110,103,32,115,116,114,32,116,104,117,110,107,41,0};
static C_char li46[] C_aligned={C_lihdr(0,0,7),40,97,49,55,48,49,41,0};
static C_char li47[] C_aligned={C_lihdr(0,0,7),40,97,49,55,48,54,41,0};
static C_char li48[] C_aligned={C_lihdr(0,0,7),40,97,49,55,49,53,41,0};
static C_char li49[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,41,0,0,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,7),40,97,49,55,50,57,41,0};
static C_char li51[] C_aligned={C_lihdr(0,0,7),40,97,49,55,51,52,41,0};
static C_char li52[] C_aligned={C_lihdr(0,0,7),40,97,49,55,52,51,41,0};
static C_char li53[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,111,114,116,35,119,105,116,104,45,101,114,114,111,114,45,111,117,116,112,117,116,45,116,111,45,115,116,114,105,110,103,32,116,104,117,110,107,41};
static C_char li54[] C_aligned={C_lihdr(0,0,9),40,97,49,55,56,49,32,112,41,0,0,0,0,0,0,0};
static C_char li55[] C_aligned={C_lihdr(0,0,9),40,97,49,56,48,50,32,112,41,0,0,0,0,0,0,0};
static C_char li56[] C_aligned={C_lihdr(0,0,11),40,97,49,56,50,51,32,112,32,100,41,0,0,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,9),40,97,49,56,50,57,32,112,41,0,0,0,0,0,0,0};
static C_char li58[] C_aligned={C_lihdr(0,0,23),40,102,95,49,56,51,57,32,112,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0};
static C_char li59[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,105,110,112,117,116,45,112,111,114,116,32,114,101,97,100,32,114,101,97,100,121,63,32,99,108,111,115,101,32,46,32,114,41,0,0,0,0};
static C_char li60[] C_aligned={C_lihdr(0,0,11),40,97,49,56,56,48,32,112,32,99,41,0,0,0,0,0};
static C_char li61[] C_aligned={C_lihdr(0,0,20),40,97,49,56,57,48,32,112,32,98,118,32,102,114,111,109,32,116,111,41,0,0,0,0};
static C_char li62[] C_aligned={C_lihdr(0,0,11),40,97,49,57,48,51,32,112,32,100,41,0,0,0,0,0};
static C_char li63[] C_aligned={C_lihdr(0,0,9),40,97,49,57,48,57,32,112,41,0,0,0,0,0,0,0};
static C_char li64[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,111,117,116,112,117,116,45,112,111,114,116,32,119,114,105,116,101,32,99,108,111,115,101,32,46,32,114,41,0};
static C_char li65[] C_aligned={C_lihdr(0,0,23),40,102,95,50,48,53,53,32,112,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0};
static C_char li66[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li67[] C_aligned={C_lihdr(0,0,23),40,102,95,50,48,54,53,32,112,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0};
static C_char li68[] C_aligned={C_lihdr(0,0,15),40,102,95,49,57,52,55,32,100,101,115,116,32,105,41,0};
static C_char li69[] C_aligned={C_lihdr(0,0,9),40,97,49,57,57,53,32,112,41,0,0,0,0,0,0,0};
static C_char li70[] C_aligned={C_lihdr(0,0,9),40,97,50,48,49,52,32,112,41,0,0,0,0,0,0,0};
static C_char li71[] C_aligned={C_lihdr(0,0,11),40,97,50,48,52,51,32,112,32,100,41,0,0,0,0,0};
static C_char li72[] C_aligned={C_lihdr(0,0,9),40,97,50,48,52,57,32,112,41,0,0,0,0,0,0,0};
static C_char li73[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,98,105,110,97,114,121,45,105,110,112,117,116,45,112,111,114,116,32,114,101,97,100,32,114,101,97,100,121,63,32,99,108,111,115,101,32,46,32,114,101,115,116,41,0,0};
static C_char li74[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,32,101,110,100,41,0,0,0,0};
static C_char li75[] C_aligned={C_lihdr(0,0,21),40,102,95,50,49,53,53,32,98,118,32,115,116,97,114,116,32,101,110,100,41,0,0,0};
static C_char li76[] C_aligned={C_lihdr(0,0,11),40,97,50,49,50,53,32,112,32,99,41,0,0,0,0,0};
static C_char li77[] C_aligned={C_lihdr(0,0,20),40,97,50,49,51,52,32,112,32,98,118,32,102,114,111,109,32,116,111,41,0,0,0,0};
static C_char li78[] C_aligned={C_lihdr(0,0,11),40,97,50,49,52,48,32,112,32,100,41,0,0,0,0,0};
static C_char li79[] C_aligned={C_lihdr(0,0,9),40,97,50,49,52,54,32,112,41,0,0,0,0,0,0,0};
static C_char li80[] C_aligned={C_lihdr(0,0,57),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,98,105,110,97,114,121,45,111,117,116,112,117,116,45,112,111,114,116,32,119,114,105,116,101,32,99,108,111,115,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li81[] C_aligned={C_lihdr(0,0,9),40,97,50,50,48,48,32,95,41,0,0,0,0,0,0,0};
static C_char li82[] C_aligned={C_lihdr(0,0,9),40,97,50,50,48,54,32,95,41,0,0,0,0,0,0,0};
static C_char li83[] C_aligned={C_lihdr(0,0,11),40,97,50,50,49,50,32,95,32,99,41,0,0,0,0,0};
static C_char li84[] C_aligned={C_lihdr(0,0,20),40,97,50,50,49,56,32,95,32,98,118,32,102,114,111,109,32,116,111,41,0,0,0,0};
static C_char li85[] C_aligned={C_lihdr(0,0,11),40,97,50,50,50,52,32,95,32,100,41,0,0,0,0,0};
static C_char li86[] C_aligned={C_lihdr(0,0,9),40,97,50,50,52,57,32,95,41,0,0,0,0,0,0,0};
static C_char li87[] C_aligned={C_lihdr(0,0,9),40,97,50,50,53,53,32,95,41,0,0,0,0,0,0,0};
static C_char li88[] C_aligned={C_lihdr(0,0,15),40,97,50,50,54,49,32,95,32,110,32,100,32,115,41,0};
static C_char li89[] C_aligned={C_lihdr(0,0,11),40,97,50,50,55,49,32,95,32,108,41,0,0,0,0,0};
static C_char li90[] C_aligned={C_lihdr(0,0,7),40,97,50,50,55,55,41,0};
static C_char li91[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,109,97,107,101,45,98,105,100,105,114,101,99,116,105,111,110,97,108,45,112,111,114,116,32,105,32,111,41,0,0,0,0,0,0};
static C_char li92[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,111,114,116,35,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,32,108,111,99,32,109,115,103,32,97,114,103,115,41,0,0,0,0};
static C_char li93[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char li94[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,114,116,35,99,104,101,99,107,45,116,101,114,109,105,110,97,108,33,32,99,97,108,108,101,114,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char li95[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,110,97,109,101,32,112,111,114,116,41,0,0,0,0,0,0,0};
static C_char li96[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,111,114,116,35,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,41,0,0,0,0,0,0,0};
static C_char li97[] C_aligned={C_lihdr(0,0,14),40,97,50,52,50,48,32,46,32,114,101,115,116,41,0,0};
static C_char li98[] C_aligned={C_lihdr(0,0,17),40,97,50,52,51,56,32,112,111,114,116,32,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char li99[] C_aligned={C_lihdr(0,0,12),40,97,50,52,53,48,32,112,111,114,116,41,0,0,0,0};
static C_char li100[] C_aligned={C_lihdr(0,0,16),40,97,50,52,53,57,32,112,111,114,116,32,101,110,99,41};
static C_char li101[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k2387 */
C_regparm static C_word stub702(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int *t1=(int *)C_c_pointer_nn(C_a1);
int *t2=(int *)C_c_pointer_nn(C_a2);
C_r=C_fix((C_word)get_tty_size(t0,t1,t2));
return C_r;}

/* from k2357 */
C_regparm static C_word stub688(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from k2291 */
C_regparm static C_word stub666(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub165(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word p=(C_word )(C_a0);
int m=(int )C_unfix(C_a1);
int s=(int )C_unfix(C_a2);
C_return(setvbuf(C_port_file(p), NULL, m, s));
C_ret:
#undef return

return C_r;}

C_noret_decl(f2655)
static void C_ccall f2655(C_word c,C_word *av) C_noret;
C_noret_decl(f_1003)
static void C_ccall f_1003(C_word c,C_word *av) C_noret;
C_noret_decl(f_1009)
static void f_1009(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word *av) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word *av) C_noret;
C_noret_decl(f_1027)
static void C_ccall f_1027(C_word c,C_word *av) C_noret;
C_noret_decl(f_1033)
static void f_1033(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1037)
static void C_ccall f_1037(C_word c,C_word *av) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word *av) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word *av) C_noret;
C_noret_decl(f_1065)
static void f_1065(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1069)
static void C_ccall f_1069(C_word c,C_word *av) C_noret;
C_noret_decl(f_1082)
static void C_ccall f_1082(C_word c,C_word *av) C_noret;
C_noret_decl(f_1089)
static void C_ccall f_1089(C_word c,C_word *av) C_noret;
C_noret_decl(f_1092)
static void C_ccall f_1092(C_word c,C_word *av) C_noret;
C_noret_decl(f_1095)
static void C_ccall f_1095(C_word c,C_word *av) C_noret;
C_noret_decl(f_1100)
static void f_1100(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1104)
static void C_ccall f_1104(C_word c,C_word *av) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word *av) C_noret;
C_noret_decl(f_1122)
static void C_ccall f_1122(C_word c,C_word *av) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word *av) C_noret;
C_noret_decl(f_1130)
static void f_1130(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word *av) C_noret;
C_noret_decl(f_1143)
static void C_ccall f_1143(C_word c,C_word *av) C_noret;
C_noret_decl(f_1152)
static void C_ccall f_1152(C_word c,C_word *av) C_noret;
C_noret_decl(f_1173)
static void f_1173(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1183)
static void C_ccall f_1183(C_word c,C_word *av) C_noret;
C_noret_decl(f_1210)
static void f_1210(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word *av) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word *av) C_noret;
C_noret_decl(f_1232)
static void C_ccall f_1232(C_word c,C_word *av) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word *av) C_noret;
C_noret_decl(f_1240)
static void f_1240(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1244)
static void f_1244(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1247)
static void C_ccall f_1247(C_word c,C_word *av) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word *av) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word *av) C_noret;
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word *av) C_noret;
C_noret_decl(f_1353)
static void C_ccall f_1353(C_word c,C_word *av) C_noret;
C_noret_decl(f_1355)
static void f_1355(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1364)
static void f_1364(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word *av) C_noret;
C_noret_decl(f_1387)
static void C_ccall f_1387(C_word c,C_word *av) C_noret;
C_noret_decl(f_1393)
static void f_1393(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1403)
static void C_ccall f_1403(C_word c,C_word *av) C_noret;
C_noret_decl(f_1416)
static void C_ccall f_1416(C_word c,C_word *av) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word *av) C_noret;
C_noret_decl(f_1431)
static void f_1431(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word *av) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word *av) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word *av) C_noret;
C_noret_decl(f_1486)
static void f_1486(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word *av) C_noret;
C_noret_decl(f_1515)
static void C_ccall f_1515(C_word c,C_word *av) C_noret;
C_noret_decl(f_1521)
static void f_1521(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word *av) C_noret;
C_noret_decl(f_1540)
static void f_1540(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1572)
static void C_ccall f_1572(C_word c,C_word *av) C_noret;
C_noret_decl(f_1581)
static void C_ccall f_1581(C_word c,C_word *av) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word *av) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word *av) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word *av) C_noret;
C_noret_decl(f_1606)
static void C_ccall f_1606(C_word c,C_word *av) C_noret;
C_noret_decl(f_1611)
static void C_ccall f_1611(C_word c,C_word *av) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word *av) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word *av) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word *av) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word *av) C_noret;
C_noret_decl(f_1642)
static void C_ccall f_1642(C_word c,C_word *av) C_noret;
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word *av) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word *av) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word *av) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word *av) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663(C_word c,C_word *av) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word *av) C_noret;
C_noret_decl(f_1672)
static void C_ccall f_1672(C_word c,C_word *av) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word *av) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word *av) C_noret;
C_noret_decl(f_1688)
static void C_ccall f_1688(C_word c,C_word *av) C_noret;
C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word *av) C_noret;
C_noret_decl(f_1697)
static void C_ccall f_1697(C_word c,C_word *av) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word *av) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word *av) C_noret;
C_noret_decl(f_1711)
static void C_ccall f_1711(C_word c,C_word *av) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word *av) C_noret;
C_noret_decl(f_1721)
static void C_ccall f_1721(C_word c,C_word *av) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word *av) C_noret;
C_noret_decl(f_1730)
static void C_ccall f_1730(C_word c,C_word *av) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word *av) C_noret;
C_noret_decl(f_1739)
static void C_ccall f_1739(C_word c,C_word *av) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word *av) C_noret;
C_noret_decl(f_1749)
static void C_ccall f_1749(C_word c,C_word *av) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word *av) C_noret;
C_noret_decl(f_1774)
static void C_ccall f_1774(C_word c,C_word *av) C_noret;
C_noret_decl(f_1780)
static void C_ccall f_1780(C_word c,C_word *av) C_noret;
C_noret_decl(f_1782)
static void C_ccall f_1782(C_word c,C_word *av) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word *av) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word *av) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word *av) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word *av) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word *av) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word *av) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word *av) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word *av) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word *av) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word *av) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word *av) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word *av) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word *av) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word *av) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word *av) C_noret;
C_noret_decl(f_1947)
static C_word f_1947(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word *av) C_noret;
C_noret_decl(f_1994)
static void C_ccall f_1994(C_word c,C_word *av) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word *av) C_noret;
C_noret_decl(f_2013)
static void C_ccall f_2013(C_word c,C_word *av) C_noret;
C_noret_decl(f_2015)
static void C_ccall f_2015(C_word c,C_word *av) C_noret;
C_noret_decl(f_2029)
static void C_ccall f_2029(C_word c,C_word *av) C_noret;
C_noret_decl(f_2035)
static void C_ccall f_2035(C_word c,C_word *av) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word *av) C_noret;
C_noret_decl(f_2044)
static void C_ccall f_2044(C_word c,C_word *av) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word *av) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word *av) C_noret;
C_noret_decl(f_2063)
static void C_ccall f_2063(C_word c,C_word *av) C_noret;
C_noret_decl(f_2065)
static void C_ccall f_2065(C_word c,C_word *av) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word *av) C_noret;
C_noret_decl(f_2075)
static void f_2075(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word *av) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word *av) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word *av) C_noret;
C_noret_decl(f_2118)
static void C_ccall f_2118(C_word c,C_word *av) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word *av) C_noret;
C_noret_decl(f_2130)
static void C_ccall f_2130(C_word c,C_word *av) C_noret;
C_noret_decl(f_2135)
static void C_ccall f_2135(C_word c,C_word *av) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word *av) C_noret;
C_noret_decl(f_2147)
static void C_ccall f_2147(C_word c,C_word *av) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word *av) C_noret;
C_noret_decl(f_2168)
static void f_2168(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2175)
static void C_ccall f_2175(C_word c,C_word *av) C_noret;
C_noret_decl(f_2185)
static void C_ccall f_2185(C_word c,C_word *av) C_noret;
C_noret_decl(f_2192)
static void C_ccall f_2192(C_word c,C_word *av) C_noret;
C_noret_decl(f_2195)
static void C_ccall f_2195(C_word c,C_word *av) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word *av) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word *av) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word *av) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word *av) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word *av) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word *av) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word *av) C_noret;
C_noret_decl(f_2262)
static void C_ccall f_2262(C_word c,C_word *av) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word *av) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word *av) C_noret;
C_noret_decl(f_2294)
static void f_2294(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2298)
static void C_ccall f_2298(C_word c,C_word *av) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word *av) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word *av) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311(C_word c,C_word *av) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word *av) C_noret;
C_noret_decl(f_2329)
static void f_2329(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word *av) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word *av) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word *av) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word *av) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word *av) C_noret;
C_noret_decl(f_2415)
static void C_ccall f_2415(C_word c,C_word *av) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word *av) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word *av) C_noret;
C_noret_decl(f_2428)
static void C_ccall f_2428(C_word c,C_word *av) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word *av) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word *av) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word *av) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word *av) C_noret;
C_noret_decl(f_2460)
static void C_ccall f_2460(C_word c,C_word *av) C_noret;
C_noret_decl(f_2464)
static void C_ccall f_2464(C_word c,C_word *av) C_noret;
C_noret_decl(f_882)
static void C_ccall f_882(C_word c,C_word *av) C_noret;
C_noret_decl(f_885)
static void C_ccall f_885(C_word c,C_word *av) C_noret;
C_noret_decl(f_889)
static void C_ccall f_889(C_word c,C_word *av) C_noret;
C_noret_decl(f_893)
static void C_ccall f_893(C_word c,C_word *av) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word *av) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word *av) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word *av) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word *av) C_noret;
C_noret_decl(f_937)
static void C_ccall f_937(C_word c,C_word *av) C_noret;
C_noret_decl(f_946)
static void f_946(C_word t0,C_word t1) C_noret;
C_noret_decl(C_port_toplevel)
C_extern void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1009)
static void C_ccall trf_1009(C_word c,C_word *av) C_noret;
static void C_ccall trf_1009(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1009(t0,t1);}

C_noret_decl(trf_1033)
static void C_ccall trf_1033(C_word c,C_word *av) C_noret;
static void C_ccall trf_1033(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1033(t0,t1,t2);}

C_noret_decl(trf_1065)
static void C_ccall trf_1065(C_word c,C_word *av) C_noret;
static void C_ccall trf_1065(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1065(t0,t1,t2);}

C_noret_decl(trf_1100)
static void C_ccall trf_1100(C_word c,C_word *av) C_noret;
static void C_ccall trf_1100(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1100(t0,t1);}

C_noret_decl(trf_1130)
static void C_ccall trf_1130(C_word c,C_word *av) C_noret;
static void C_ccall trf_1130(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1130(t0,t1,t2);}

C_noret_decl(trf_1173)
static void C_ccall trf_1173(C_word c,C_word *av) C_noret;
static void C_ccall trf_1173(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1173(t0,t1,t2);}

C_noret_decl(trf_1210)
static void C_ccall trf_1210(C_word c,C_word *av) C_noret;
static void C_ccall trf_1210(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1210(t0,t1);}

C_noret_decl(trf_1240)
static void C_ccall trf_1240(C_word c,C_word *av) C_noret;
static void C_ccall trf_1240(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1240(t0,t1,t2);}

C_noret_decl(trf_1244)
static void C_ccall trf_1244(C_word c,C_word *av) C_noret;
static void C_ccall trf_1244(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1244(t0,t1);}

C_noret_decl(trf_1355)
static void C_ccall trf_1355(C_word c,C_word *av) C_noret;
static void C_ccall trf_1355(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1355(t0,t1,t2);}

C_noret_decl(trf_1364)
static void C_ccall trf_1364(C_word c,C_word *av) C_noret;
static void C_ccall trf_1364(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1364(t0,t1,t2);}

C_noret_decl(trf_1393)
static void C_ccall trf_1393(C_word c,C_word *av) C_noret;
static void C_ccall trf_1393(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1393(t0,t1,t2);}

C_noret_decl(trf_1431)
static void C_ccall trf_1431(C_word c,C_word *av) C_noret;
static void C_ccall trf_1431(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1431(t0,t1);}

C_noret_decl(trf_1486)
static void C_ccall trf_1486(C_word c,C_word *av) C_noret;
static void C_ccall trf_1486(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1486(t0,t1);}

C_noret_decl(trf_1521)
static void C_ccall trf_1521(C_word c,C_word *av) C_noret;
static void C_ccall trf_1521(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1521(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1540)
static void C_ccall trf_1540(C_word c,C_word *av) C_noret;
static void C_ccall trf_1540(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1540(t0,t1);}

C_noret_decl(trf_2075)
static void C_ccall trf_2075(C_word c,C_word *av) C_noret;
static void C_ccall trf_2075(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2075(t0,t1,t2);}

C_noret_decl(trf_2168)
static void C_ccall trf_2168(C_word c,C_word *av) C_noret;
static void C_ccall trf_2168(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2168(t0,t1,t2,t3);}

C_noret_decl(trf_2294)
static void C_ccall trf_2294(C_word c,C_word *av) C_noret;
static void C_ccall trf_2294(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2294(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2329)
static void C_ccall trf_2329(C_word c,C_word *av) C_noret;
static void C_ccall trf_2329(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2329(t0,t1,t2);}

C_noret_decl(trf_946)
static void C_ccall trf_946(C_word c,C_word *av) C_noret;
static void C_ccall trf_946(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_946(t0,t1);}

/* f2655 in a2420 in k887 in k883 in k880 */
static void C_ccall f2655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f2655,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(3));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.port#port-for-each in k891 in k887 in k883 in k880 */
static void C_ccall f_1003(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1003,c,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1009,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1009(t7,t1);}

/* loop in chicken.port#port-for-each in k891 in k887 in k883 in k880 */
static void f_1009(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1009,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1013,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* port.scm:169: thunk */
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1011 in loop in chicken.port#port-for-each in k891 in k887 in k883 in k880 */
static void C_ccall f_1013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1013,c,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1022,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:171: fn */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k1020 in k1011 in loop in chicken.port#port-for-each in k891 in k887 in k883 in k880 */
static void C_ccall f_1022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1022,c,av);}
/* port.scm:172: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1009(t2,((C_word*)t0)[3]);}

/* chicken.port#port-map in k891 in k887 in k883 in k880 */
static void C_ccall f_1027(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1027,c,av);}
a=C_alloc(8);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1033,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1033(t7,t1,C_SCHEME_END_OF_LIST);}

/* loop in chicken.port#port-map in k891 in k887 in k883 in k880 */
static void f_1033(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1033,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1037,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* port.scm:177: thunk */
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k1035 in loop in chicken.port#port-map in k891 in k887 in k883 in k880 */
static void C_ccall f_1037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1037,c,av);}
a=C_alloc(5);
if(C_truep(C_eofp(t1))){
/* port.scm:179: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[20]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1057,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* port.scm:180: fn */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k1055 in k1035 in loop in chicken.port#port-map in k891 in k887 in k883 in k880 */
static void C_ccall f_1057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1057,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* port.scm:180: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1033(t3,((C_word*)t0)[4],t2);}

/* chicken.port#port-fold in k891 in k887 in k883 in k880 */
static void C_ccall f_1059(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1059,c,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1065,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1065(t8,t1,t3);}

/* loop in chicken.port#port-fold in k891 in k887 in k883 in k880 */
static void f_1065(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1065,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1069,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* port.scm:184: thunk */
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k1067 in loop in chicken.port#port-fold in k891 in k887 in k883 in k880 */
static void C_ccall f_1069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1069,c,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1082,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:187: fn */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k1080 in k1067 in loop in chicken.port#port-fold in k891 in k887 in k883 in k880 */
static void C_ccall f_1082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1082,c,av);}
/* port.scm:187: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1065(t2,((C_word*)t0)[3],t1);}

/* k1087 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1089,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1092,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* port.scm:196: ##sys#check-port */
t3=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[28];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1090 in k1087 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1092,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1095,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* port.scm:197: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t3;
av2[2]=C_fix(1024);
tp(3,av2);}}

/* k1093 in k1090 in k1087 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1095(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1095,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1100,a[2]=t4,a[3]=t1,a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[3],a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1100(t6,((C_word*)t2)[4]);}

/* loop in k1093 in k1090 in k1087 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void f_1100(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_1100,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1104,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* port.scm:199: chicken.io#read-bytevector!/port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[26]);
C_word av2[6];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t2;
av2[2]=C_fix(1024);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[5];
av2[5]=C_fix(0);
tp(6,av2);}}

/* k1102 in loop in k1093 in k1090 in k1087 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_1104,c,av);}
a=C_alloc(4);
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1113,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:202: chicken.io#write-bytevector */
t4=C_fast_retrieve(lf[25]);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=C_fix(0);
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* k1111 in k1102 in loop in k1093 in k1090 in k1087 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1113,c,av);}
/* port.scm:203: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1100(t2,((C_word*)t0)[3]);}

/* k1120 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1122,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1125,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* port.scm:206: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
av2[2]=C_fix(1024);
tp(3,av2);}}

/* k1123 in k1120 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1125(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1125,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1130,a[2]=t1,a[3]=t4,a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[3],a[6]=((C_word*)t2)[4],a[7]=((C_word)li10),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1130(t6,((C_word*)t2)[5],C_fix(0));}

/* loop in k1123 in k1120 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void f_1130(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_1130,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1134,a[2]=C_SCHEME_UNDEFINED,a[3]=t1,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=C_SCHEME_UNDEFINED,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* port.scm:208: chicken.io#read-bytevector!/port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[26]);
C_word av2[6];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
av2[2]=C_fixnum_difference(C_fix(1024),t2);
av2[3]=((C_word*)t0)[2];
av2[4]=((C_word*)t0)[6];
av2[5]=t2;
tp(6,av2);}}

/* k1132 in loop in k1123 in k1120 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1134(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1134,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=C_utf_fragment_counts(((C_word*)t0)[5],C_fix(0),((C_word*)t0)[2]);
t4=C_fixnum_shift_right(t3,C_fix(4));
t5=C_mutate(((C_word *)t0)+7,t4);
t6=C_fixnum_and(t3,C_fix(7));
t7=C_mutate(((C_word *)t0)+4,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1143,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* port.scm:214: ##sys#buffer->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[4]);
tp(5,av2);}}

/* k1141 in k1132 in loop in k1123 in k1120 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1143(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_1143,c,av);}
a=C_alloc(17);
t2=((C_word*)t0)[2];
t3=C_eqp(((C_word*)t2)[2],C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1152,a[2]=t1,a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[3],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1173,a[2]=((C_word*)t2)[7],a[3]=t6,a[4]=((C_word*)t2)[8],a[5]=t1,a[6]=((C_word*)t2)[9],a[7]=((C_word)li9),tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_1173(t8,t4,C_fix(0));}}

/* k1150 in k1141 in k1132 in loop in k1123 in k1120 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1152(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1152,c,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_block_size(t2);
t4=C_fixnum_difference(t3,C_fix(1));
t5=C_fixnum_difference(t4,((C_word*)t0)[3]);
t6=C_copy_memory_with_offset(((C_word*)t0)[4],((C_word*)t0)[4],t5,C_fix(0),((C_word*)t0)[3]);
/* port.scm:224: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_1130(t7,((C_word*)t0)[6],((C_word*)t0)[3]);}

/* doloop221 in k1141 in k1132 in loop in k1123 in k1120 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void f_1173(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1173,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1183,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* port.scm:218: writer */
t4=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_string_ref(((C_word*)t0)[5],t2);
av2[3]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k1181 in doloop221 in k1141 in k1132 in loop in k1123 in k1120 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1183,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1173(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* loop in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void f_1210(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1210,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1214,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* port.scm:227: reader */
t3=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k1212 in loop in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1214,c,av);}
a=C_alloc(4);
if(C_truep(C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1223,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:229: writer */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k1221 in k1212 in loop in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1223,c,av);}
/* port.scm:230: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1210(t2,((C_word*)t0)[3]);}

/* k1230 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1232,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1235,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* port.scm:233: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
av2[2]=C_fixnum_plus(C_fix(4),C_fix(1024));
tp(3,av2);}}

/* k1233 in k1230 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1235(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1235,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1240,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=t4,a[5]=((C_word*)t2)[3],a[6]=((C_word*)t2)[4],a[7]=((C_word)li11),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1240(t6,((C_word*)t2)[5],C_fix(0));}

/* loop in k1233 in k1230 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void f_1240(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,5)))){
C_save_and_reclaim_args((void *)trf_1240,3,t0,t1,t2);}
a=C_alloc(15);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1244,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t3)[1],C_fix(1024)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1272,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* port.scm:236: chicken.io#write-bytevector */
t6=C_fast_retrieve(lf[25]);{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=C_fix(0);
av2[5]=((C_word*)t3)[1];
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}
else{
t5=t4;
f_1244(t5,C_SCHEME_UNDEFINED);}}

/* k1242 in loop in k1233 in k1230 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void f_1244(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1244,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* port.scm:238: reader */
t3=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k1245 in k1242 in loop in k1233 in k1230 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1247,c,av);}
if(C_truep(C_eofp(t1))){
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
/* port.scm:241: chicken.io#write-bytevector */
t2=C_fast_retrieve(lf[25]);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=C_fix(0);
av2[5]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
/* port.scm:243: loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_1240(t2,((C_word*)t0)[3],C_utf_insert(((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],t1));}}

/* k1270 in loop in k1233 in k1230 in chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1272,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];
f_1244(t3,t2);}

/* chicken.port#copy-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1278(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1278,c,av);}
a=C_alloc(10);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?((C_word*)t0)[2]:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?((C_word*)t0)[3]:C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_eqp(t5,((C_word*)t0)[2]);
if(C_truep(t10)){
t11=C_eqp(t8,((C_word*)t0)[3]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1089,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* port.scm:195: ##sys#check-port */
t13=*((C_word*)lf[9]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
av2[2]=t2;
av2[3]=lf[28];
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}
else{
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1122,a[2]=t8,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* port.scm:205: ##sys#check-port */
t13=*((C_word*)lf[9]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
av2[2]=t2;
av2[3]=lf[28];
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}}
else{
t11=C_eqp(t8,((C_word*)t0)[3]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1232,a[2]=t3,a[3]=t5,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* port.scm:232: ##sys#check-port */
t13=*((C_word*)lf[9]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
av2[2]=t3;
av2[3]=lf[28];
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}
else{
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1210,a[2]=t13,a[3]=t8,a[4]=t3,a[5]=t5,a[6]=t2,a[7]=((C_word)li12),tmp=(C_word)a,a+=8,tmp));
t15=((C_word*)t13)[1];
f_1210(t15,t1);}}}

/* chicken.port#make-broadcast-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_1347,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+8);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1353,a[2]=t2,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1387,a[2]=t2,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
/* port.scm:258: make-output-port */
t5=C_fast_retrieve(lf[33]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=*((C_word*)lf[34]+1);
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* a1352 in chicken.port#make-broadcast-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1353(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1353,c,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1355,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1364,a[2]=t5,a[3]=t3,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1364(t7,t1,((C_word*)t0)[2]);}

/* g284 in a1352 in chicken.port#make-broadcast-port in k891 in k887 in k883 in k880 */
static void f_1355(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1355,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[31]);
/* port.scm:259: g299 */
t4=C_fast_retrieve(lf[31]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* for-each-loop283 in a1352 in chicken.port#make-broadcast-port in k891 in k887 in k883 in k880 */
static void f_1364(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1364,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1374,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* port.scm:259: g284 */
t4=((C_word*)t0)[3];
f_1355(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1372 in for-each-loop283 in a1352 in chicken.port#make-broadcast-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1374,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1364(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* a1386 in chicken.port#make-broadcast-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1387(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1387,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1393,a[2]=t3,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1393(t5,t1,((C_word*)t0)[2]);}

/* for-each-loop308 in a1386 in chicken.port#make-broadcast-port in k891 in k887 in k883 in k880 */
static void f_1393(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1393,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1403,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* port.scm:261: g309 */
t4=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1401 in for-each-loop308 in a1386 in chicken.port#make-broadcast-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1403,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1393(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +21,c,8)))){
C_save_and_reclaim((void*)f_1416,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+21);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_a_i_cons(&a,2,t2,t3);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1425,a[2]=t6,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1460,a[2]=t6,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1480,a[2]=t6,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1515,a[2]=t6,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
/* port.scm:266: make-input-port */
t11=C_fast_retrieve(lf[40]);{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t11;
av2[1]=t1;
av2[2]=t7;
av2[3]=t8;
av2[4]=*((C_word*)lf[34]+1);
av2[5]=lf[41];
av2[6]=t9;
av2[7]=lf[42];
av2[8]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(9,av2);}}

/* a1424 in chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1425(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1425,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1431,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li20),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1431(t5,t1);}

/* loop in a1424 in chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void f_1431(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1431,2,t0,t1);}
a=C_alloc(5);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#read-char/port */
t3=C_fast_retrieve(lf[36]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1439 in loop in a1424 in chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1441,c,av);}
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* port.scm:274: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1431(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a1459 in chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1460,c,av);}
t2=C_i_nullp(((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_i_not(t2))){
/* port.scm:278: scheme#char-ready? */
t3=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a1479 in chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1480(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1480,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1486,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1486(t5,t1);}

/* loop in a1479 in chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void f_1486(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1486,2,t0,t1);}
a=C_alloc(5);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t2=t1;{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* port.scm:285: scheme#peek-char */
t3=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1494 in loop in a1479 in chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1496,c,av);}
if(C_truep(C_eofp(t1))){
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
/* port.scm:288: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1486(t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a1514 in chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1515(C_word c,C_word *av){
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
C_word t9;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1515,c,av);}
a=C_alloc(8);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1521,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t4,a[5]=((C_word)li25),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1521(t9,t1,t3,C_fix(0),t5);}

/* loop in a1514 in chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void f_1521(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(37,0,5)))){
C_save_and_reclaim_args((void *)trf_1521,5,t0,t1,t2,t3,t4);}
a=C_alloc(37);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1537,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
t6=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t7=C_s_a_i_plus(&a,2,t4,t2);
/* port.scm:296: chicken.io#read-bytevector! */
t8=C_fast_retrieve(lf[39]);{
C_word av2[6];
av2[0]=t8;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=t6;
av2[4]=t4;
av2[5]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}}}

/* k1535 in loop in a1514 in chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1537,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_lessp(t1,((C_word*)t0)[4]))){
t3=C_i_cdr(((C_word*)((C_word*)t0)[7])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t3);
t5=t2;
f_1540(t5,t4);}
else{
t3=t2;
f_1540(t3,C_SCHEME_UNDEFINED);}}

/* k1538 in k1535 in loop in a1514 in chicken.port#make-concatenated-port in k891 in k887 in k883 in k880 */
static void f_1540(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1540,2,t0,t1);}
/* port.scm:299: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1521(t2,((C_word*)t0)[3],C_fixnum_difference(((C_word*)t0)[4],((C_word*)t0)[5]),C_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]),C_fixnum_plus(((C_word*)t0)[7],((C_word*)t0)[5]));}

/* chicken.port#with-input-from-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1572(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1572,c,av);}
a=C_alloc(18);
t4=C_i_check_port_2(t2,C_fix(1),C_SCHEME_TRUE,lf[44]);
t5=t2;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1581,a[2]=t8,a[3]=t6,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1586,a[2]=t3,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1592,a[2]=t6,a[3]=t8,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp);
/* port.scm:306: ##sys#dynamic-wind */
t12=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t1;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* a1580 in chicken.port#with-input-from-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1581,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[5]+1));
t3=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1585 in chicken.port#with-input-from-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1586,c,av);}
/* port.scm:307: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1591 in chicken.port#with-input-from-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1592,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[5]+1));
t3=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-output-to-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1597(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1597,c,av);}
a=C_alloc(18);
t4=C_i_check_port_2(t2,C_fix(2),C_SCHEME_TRUE,lf[47]);
t5=t2;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1606,a[2]=t8,a[3]=t6,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1611,a[2]=t3,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1617,a[2]=t6,a[3]=t8,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp);
/* port.scm:311: ##sys#dynamic-wind */
t12=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t1;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* a1605 in chicken.port#with-output-to-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1606,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1610 in chicken.port#with-output-to-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1611,c,av);}
/* port.scm:312: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1616 in chicken.port#with-output-to-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1617,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-error-output-to-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1622(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1622,c,av);}
a=C_alloc(18);
t4=C_i_check_port_2(t2,C_fix(2),C_SCHEME_TRUE,lf[50]);
t5=t2;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1631,a[2]=t8,a[3]=t6,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1636,a[2]=t3,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1642,a[2]=t6,a[3]=t8,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
/* port.scm:316: ##sys#dynamic-wind */
t12=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t1;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* a1630 in chicken.port#with-error-output-to-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1631,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[51]+1));
t3=C_mutate((C_word*)lf[51]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1635 in chicken.port#with-error-output-to-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1636,c,av);}
/* port.scm:317: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1641 in chicken.port#with-error-output-to-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1642,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[51]+1));
t3=C_mutate((C_word*)lf[51]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#call-with-input-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1647,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1651,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:323: scheme#open-input-string */
t5=C_fast_retrieve(lf[53]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1649 in chicken.port#call-with-input-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1651,c,av);}
/* port.scm:324: proc */
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

/* chicken.port#call-with-output-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1656,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1660,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:328: scheme#open-output-string */
t4=C_fast_retrieve(lf[56]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1658 in chicken.port#call-with-output-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1660,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1663,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:329: proc */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k1661 in k1658 in chicken.port#call-with-output-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1663,c,av);}
/* port.scm:330: scheme#get-output-string */
t2=C_fast_retrieve(lf[55]);{
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

/* chicken.port#with-input-from-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1668,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1672,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:334: scheme#open-input-string */
t5=C_fast_retrieve(lf[53]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1670 in chicken.port#with-input-from-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1672(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1672,c,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1677,a[2]=t5,a[3]=t3,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1682,a[2]=((C_word*)t0)[2],a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1688,a[2]=t3,a[3]=t5,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp);
/* port.scm:334: ##sys#dynamic-wind */
t9=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1676 in k1670 in chicken.port#with-input-from-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1677,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[5]+1));
t3=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1681 in k1670 in chicken.port#with-input-from-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1682,c,av);}
/* port.scm:335: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1687 in k1670 in chicken.port#with-input-from-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1688,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[5]+1));
t3=C_mutate((C_word*)lf[5]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1693,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1697,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:339: scheme#open-output-string */
t4=C_fast_retrieve(lf[56]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1695 in chicken.port#with-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1697(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1697,c,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1702,a[2]=t5,a[3]=t3,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[2],a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1716,a[2]=t3,a[3]=t5,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp);
/* port.scm:339: ##sys#dynamic-wind */
t9=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1701 in k1695 in chicken.port#with-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1702,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1706 in k1695 in chicken.port#with-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1707,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1711,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* port.scm:340: thunk */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1709 in a1706 in k1695 in chicken.port#with-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1711,c,av);}
/* port.scm:341: scheme#get-output-string */
t2=C_fast_retrieve(lf[55]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[48]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1715 in k1695 in chicken.port#with-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1716,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[48]+1));
t3=C_mutate((C_word*)lf[48]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#with-error-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1721,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1725,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:345: scheme#open-output-string */
t4=C_fast_retrieve(lf[56]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1723 in chicken.port#with-error-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1725(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_1725,c,av);}
a=C_alloc(18);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1730,a[2]=t5,a[3]=t3,a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1735,a[2]=((C_word*)t0)[2],a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1744,a[2]=t3,a[3]=t5,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp);
/* port.scm:345: ##sys#dynamic-wind */
t9=*((C_word*)lf[45]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a1729 in k1723 in chicken.port#with-error-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1730,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[51]+1));
t3=C_mutate((C_word*)lf[51]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a1734 in k1723 in chicken.port#with-error-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1735,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1739,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* port.scm:346: thunk */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1737 in a1734 in k1723 in chicken.port#with-error-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1739,c,av);}
/* port.scm:347: scheme#get-output-string */
t2=C_fast_retrieve(lf[55]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[51]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1743 in k1723 in chicken.port#with-error-output-to-string in k891 in k887 in k883 in k880 */
static void C_ccall f_1744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1744,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[51]+1));
t3=C_mutate((C_word*)lf[51]+1 /* (set! ##sys#standard-error ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#make-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +10,c,4)))){
C_save_and_reclaim((void*)f_1749,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+10);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
t6=C_i_get_keyword(lf[41],t5,C_SCHEME_FALSE);
t7=C_i_get_keyword(lf[42],t5,C_SCHEME_FALSE);
t8=C_i_get_keyword(lf[60],t5,C_SCHEME_FALSE);
t9=C_i_get_keyword(lf[61],t5,C_SCHEME_FALSE);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1765,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t7,a[7]=t8,a[8]=t9,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t5))){
t11=C_get_rest_arg(c,5,av,5,t0);
if(C_truep(C_i_not(C_i_keywordp(t11)))){
/* port.scm:360: chicken.base#error */
t12=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t10;
av2[2]=lf[68];
av2[3]=lf[69];
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}
else{
t12=t10;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_SCHEME_UNDEFINED;
f_1765(2,av2);}}}
else{
t11=t10;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_1765(2,av2);}}}

/* k1763 in chicken.port#make-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1765(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(38,c,6)))){
C_save_and_reclaim((void *)f_1765,c,av);}
a=C_alloc(38);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1824,a[2]=((C_word*)t0)[4],a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1830,a[2]=((C_word*)t0)[5],a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp);
t6=(C_truep(((C_word*)t0)[6])?((C_word*)t0)[6]:(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1839,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t7=C_a_i_vector(&a,10,t2,t3,C_SCHEME_FALSE,C_SCHEME_FALSE,t4,C_SCHEME_FALSE,t5,t6,((C_word*)t0)[7],((C_word*)t0)[8]);
t8=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1774,a[2]=((C_word*)t0)[9],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* port.scm:391: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[65]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t9;
av2[2]=C_fix(1);
av2[3]=t7;
av2[4]=lf[66];
av2[5]=lf[67];
tp(6,av2);}}

/* k1772 in k1763 in chicken.port#make-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1774,c,av);}
a=C_alloc(4);
t2=C_i_set_i_slot(t1,C_fix(10),C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1780,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:393: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[64]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t3;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1778 in k1772 in k1763 in chicken.port#make-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1780,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1781 in k1763 in chicken.port#make-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1782(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1782,c,av);}
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* port.scm:365: read */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
if(C_truep(t3)){
t4=C_i_set_i_slot(t2,C_fix(10),C_SCHEME_FALSE);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* port.scm:369: read */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}}

/* a1802 in k1763 in chicken.port#make-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1803(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1803,c,av);}
a=C_alloc(4);
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
/* port.scm:372: peek-char */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1819,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:375: read */
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}}}

/* k1817 in a1802 in k1763 in chicken.port#make-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1819,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a1823 in k1763 in chicken.port#make-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1824,c,av);}
/* port.scm:381: close */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* a1829 in k1763 in chicken.port#make-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1830,c,av);}
/* port.scm:384: ready? */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* f_1839 in k1763 in chicken.port#make-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1839,c,av);}
/* port.scm:387: chicken.base#error */
t6=*((C_word*)lf[62]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[63];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* chicken.port#make-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,4)))){
C_save_and_reclaim((void*)f_1860,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t5=C_i_get_keyword(lf[70],t4,C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1867,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t4))){
t7=C_get_rest_arg(c,4,av,4,t0);
if(C_truep(C_i_not(C_i_keywordp(t7)))){
/* port.scm:400: chicken.base#error */
t8=*((C_word*)lf[62]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[72];
av2[3]=lf[73];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t8=t6;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_1867(2,av2);}}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_1867(2,av2);}}}

/* k1865 in chicken.port#make-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1867(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,6)))){
C_save_and_reclaim((void *)f_1867,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1881,a[2]=((C_word*)t0)[2],a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[2],a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1904,a[2]=((C_word*)t0)[3],a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1910,a[2]=((C_word*)t0)[4],a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,t2,t3,t4,t5,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t7=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1876,a[2]=((C_word*)t0)[5],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* port.scm:419: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[65]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t8;
av2[2]=C_fix(2);
av2[3]=t6;
av2[4]=lf[71];
av2[5]=lf[67];
tp(6,av2);}}

/* k1874 in k1865 in chicken.port#make-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1876,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1879,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:420: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[64]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1877 in k1874 in k1865 in chicken.port#make-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1879,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1880 in k1865 in chicken.port#make-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1881,c,av);}
a=C_alloc(8);
t4=C_a_i_string(&a,1,t3);
/* port.scm:406: write */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* a1890 in k1865 in chicken.port#make-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1891(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1891,c,av);}
a=C_alloc(4);
t6=C_fixnum_difference(t5,t4);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1902,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:409: ##sys#buffer->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[29]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t7;
av2[2]=t3;
av2[3]=t4;
av2[4]=t6;
tp(5,av2);}}

/* k1900 in a1890 in k1865 in chicken.port#make-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1902,c,av);}
/* port.scm:409: write */
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

/* a1903 in k1865 in chicken.port#make-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1904,c,av);}
/* port.scm:411: close */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* a1909 in k1865 in chicken.port#make-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1910(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1910,c,av);}
if(C_truep(((C_word*)t0)[2])){
/* port.scm:413: force-output */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +44,c,6)))){
C_save_and_reclaim((void*)f_1934,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+44);
t5=C_build_rest(&a,c,5,av);
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
t6=C_i_get_keyword(lf[75],t5,C_SCHEME_FALSE);
t7=C_i_get_keyword(lf[42],t5,C_SCHEME_FALSE);
t8=C_SCHEME_UNDEFINED;
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(C_truep(t7)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2055,a[2]=t10,a[3]=t7,a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2065,a[2]=t10,a[3]=t2,a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp));
t12=t8=t11;
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1947,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1996,a[2]=t2,a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2015,a[2]=t6,a[3]=t2,a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2044,a[2]=t4,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2050,a[2]=t3,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t18=C_a_i_vector(&a,10,t14,t15,C_SCHEME_FALSE,C_SCHEME_FALSE,t16,C_SCHEME_FALSE,t17,t8,C_SCHEME_FALSE,C_SCHEME_FALSE);
t19=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1982,a[2]=t1,a[3]=t19,tmp=(C_word)a,a+=4,tmp);
/* port.scm:489: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[65]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t20;
av2[2]=C_fix(1);
av2[3]=t18;
av2[4]=lf[78];
av2[5]=lf[67];
tp(6,av2);}}

/* f_1947 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static C_word f_1947(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t4=C_slot(t1,C_fix(10));
if(C_truep(t4)){
t5=C_fix(C_character_code(t4));
t6=C_setsubbyte(t2,t3,t5);
t7=C_i_set_i_slot(t1,C_fix(10),C_SCHEME_FALSE);
return(C_fix(1));}
else{
return(C_fix(0));}}

/* k1980 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1982(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1982,c,av);}
a=C_alloc(4);
t2=C_i_set_i_slot(t1,C_fix(10),C_SCHEME_FALSE);
t3=C_i_setslot(t1,C_fix(14),lf[77]);
t4=C_i_setslot(t1,C_fix(15),lf[77]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1994,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:493: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[64]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t5;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k1992 in k1980 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1994,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a1995 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_1996(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1996,c,av);}
a=C_alloc(3);
t3=C_slot(t2,C_fix(10));
if(C_truep(t3)){
t4=C_i_set_i_slot(t2,C_fix(10),C_SCHEME_FALSE);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2013,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* port.scm:469: read */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}}

/* k2011 in a1995 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2013,c,av);}
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* port.scm:461: scheme#integer->char */
t2=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* a2014 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2015(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_2015,c,av);}
a=C_alloc(9);
t3=C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2029,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* port.scm:472: peek-u8 */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}
else{
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2035,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2042,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* port.scm:475: read */
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}}}

/* k2027 in a2014 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2029,c,av);}
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* port.scm:461: scheme#integer->char */
t2=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k2033 in a2014 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2035,c,av);}
t2=C_i_set_i_slot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2040 in a2014 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2042,c,av);}
if(C_truep(C_eofp(t1))){
t2=C_i_set_i_slot(((C_word*)t0)[2],C_fix(10),t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* port.scm:461: scheme#integer->char */
t2=*((C_word*)lf[76]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* a2043 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2044,c,av);}
/* port.scm:481: close */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* a2049 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2050,c,av);}
/* port.scm:484: ready? */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* f_2055 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2055(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2055,c,av);}
a=C_alloc(4);
t6=(
/* port.scm:428: getlast */
  f_1947(t2,t4,t5)
);
t7=C_fixnum_plus(t5,t6);
t8=C_fixnum_difference(t3,t6);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2063,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* port.scm:433: read-bytevector */
t10=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=t4;
av2[3]=t7;
av2[4]=C_fixnum_plus(t7,t8);
((C_proc)C_fast_retrieve_proc(t10))(5,av2);}}

/* k2061 */
static void C_ccall f_2063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2063,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fixnum_plus(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2065 in chicken.port#make-binary-input-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2065(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_2065,c,av);}
a=C_alloc(14);
t6=(
/* port.scm:435: getlast */
  f_1947(t2,t4,t5)
);
t7=C_fixnum_plus(t5,t6);
t8=C_fixnum_difference(t3,t6);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2073,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2075,a[2]=t8,a[3]=t7,a[4]=t4,a[5]=t11,a[6]=((C_word*)t0)[3],a[7]=((C_word)li66),tmp=(C_word)a,a+=8,tmp));
t13=((C_word*)t11)[1];
f_2075(t13,t9,C_fix(0));}

/* k2071 */
static void C_ccall f_2073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2073,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fixnum_plus(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop */
static void f_2075(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_2075,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2082,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* port.scm:443: read */
t4=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}}

/* k2080 in loop */
static void C_ccall f_2082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2082,c,av);}
if(C_truep(C_eofp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_setsubbyte(((C_word*)t0)[5],t2,t1);
/* port.scm:450: loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2075(t4,((C_word*)t0)[2],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}}

/* chicken.port#make-binary-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +39,c,6)))){
C_save_and_reclaim((void*)f_2095,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+39);
t4=C_build_rest(&a,c,4,av);
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
t5=C_i_get_keyword(lf[70],t4,C_SCHEME_FALSE);
t6=C_i_get_keyword(lf[80],t4,C_SCHEME_FALSE);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(C_truep(t6)?t6:(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2155,a[2]=t2,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t8,0,t9);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2126,a[2]=t8,a[3]=((C_word)li76),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2135,a[2]=t8,a[3]=((C_word)li77),tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2141,a[2]=t3,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2147,a[2]=t5,a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp);
t15=C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,t11,t12,t13,t14,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t16=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2115,a[2]=t1,a[3]=t16,tmp=(C_word)a,a+=4,tmp);
/* port.scm:527: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[65]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t17;
av2[2]=C_fix(2);
av2[3]=t15;
av2[4]=lf[82];
av2[5]=lf[67];
tp(6,av2);}}

/* k2113 in chicken.port#make-binary-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2115,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2118,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* port.scm:528: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[64]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2116 in k2113 in chicken.port#make-binary-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2118,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],C_fix(15),lf[77]);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(14),lf[77]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2125 in chicken.port#make-binary-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2126(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2126,c,av);}
a=C_alloc(6);
t4=C_utf_bytes(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2130,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* port.scm:513: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[27]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t5;
av2[2]=t4;
tp(3,av2);}}

/* k2128 in a2125 in chicken.port#make-binary-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2130,c,av);}
t2=C_utf_insert(t1,C_fix(0),((C_word*)t0)[2]);
/* port.scm:515: write-bv */
t3=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* a2134 in chicken.port#make-binary-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2135,c,av);}
/* port.scm:517: write-bv */
t6=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=t5;
((C_proc)C_fast_retrieve_proc(t6))(5,av2);}}

/* a2140 in chicken.port#make-binary-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2141,c,av);}
/* port.scm:519: close */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* a2146 in chicken.port#make-binary-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2147(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2147,c,av);}
if(C_truep(((C_word*)t0)[2])){
/* port.scm:521: force-output */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* f_2155 in chicken.port#make-binary-output-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2155(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2155,c,av);}
a=C_alloc(8);
t5=C_i_check_bytevector_2(t2,lf[81]);
t6=(C_truep(t4)?t4:C_block_size(t2));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2168,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word)li74),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_2168(t10,t1,t3,t6);}

/* loop */
static void f_2168(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2168,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2175,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* port.scm:505: write */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_subbyte(((C_word*)t0)[4],t2);
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* k2173 in loop */
static void C_ccall f_2175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2175,c,av);}
/* port.scm:506: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2168(t2,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),((C_word*)t0)[5]);}

/* chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2185(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(56,c,6)))){
C_save_and_reclaim((void *)f_2185,c,av);}
a=C_alloc(56);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2201,a[2]=t2,a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2207,a[2]=t2,a[3]=((C_word)li82),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2213,a[2]=t3,a[3]=((C_word)li83),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2219,a[2]=t3,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2225,a[2]=t2,a[3]=t3,a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2250,a[2]=t3,a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2256,a[2]=t2,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2262,a[2]=t2,a[3]=((C_word)li88),tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2272,a[2]=t2,a[3]=((C_word)li89),tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2278,a[2]=t2,a[3]=((C_word)li90),tmp=(C_word)a,a+=4,tmp);
t14=C_a_i_vector(&a,10,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2192,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* port.scm:557: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[65]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t15;
av2[2]=C_fix(3);
av2[3]=t14;
av2[4]=lf[89];
av2[5]=lf[90];
tp(6,av2);}}

/* k2190 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2192(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2192,c,av);}
a=C_alloc(5);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2195,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_vector1(&a,1,C_SCHEME_FALSE);
/* port.scm:558: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[64]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
tp(4,av2);}}

/* k2193 in k2190 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2195,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2200 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2201,c,av);}
/* ##sys#read-char/port */
t3=C_fast_retrieve(lf[36]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a2206 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2207,c,av);}
/* port.scm:538: scheme#peek-char */
t3=*((C_word*)lf[38]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a2212 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2213,c,av);}
/* ##sys#write-char/port */
t4=C_fast_retrieve(lf[84]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a2218 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2219,c,av);}
/* port.scm:542: chicken.io#write-bytevector */
t6=C_fast_retrieve(lf[25]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=((C_word*)t0)[2];
av2[4]=t4;
av2[5]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}

/* a2224 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2225,c,av);}
switch(t3){
case C_fix(1):
/* port.scm:545: scheme#close-input-port */
t4=*((C_word*)lf[85]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(2):
/* port.scm:546: scheme#close-output-port */
t4=*((C_word*)lf[86]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
default:
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a2249 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2250,c,av);}
/* port.scm:548: chicken.base#flush-output */
t3=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a2255 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2256,c,av);}
/* port.scm:550: scheme#char-ready? */
t3=*((C_word*)lf[37]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a2261 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2262,c,av);}
/* port.scm:552: chicken.io#read-bytevector! */
t6=C_fast_retrieve(lf[39]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t4;
av2[3]=((C_word*)t0)[2];
av2[4]=t5;
av2[5]=C_fixnum_plus(t5,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}

/* a2271 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2272,c,av);}
/* port.scm:554: chicken.io#read-line */
t4=C_fast_retrieve(lf[87]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a2277 in chicken.port#make-bidirectional-port in k891 in k887 in k883 in k880 */
static void C_ccall f_2278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2278,c,av);}
/* port.scm:556: chicken.io#read-buffered */
t2=C_fast_retrieve(lf[88]);{
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

/* chicken.port#posix-error in k891 in k887 in k883 in k880 */
static void f_2294(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_2294,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2298,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* port.scm:566: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[96]);
C_word av2[2];
av2[0]=*((C_word*)lf[96]+1);
av2[1]=t6;
tp(2,av2);}}

/* k2296 in chicken.port#posix-error in k891 in k887 in k883 in k880 */
static void C_ccall f_2298(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_2298,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2309,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
/* port.scm:563: ##sys#peek-c-string */
t6=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=stub666(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2303 in k2296 in chicken.port#posix-error in k891 in k887 in k883 in k880 */
static void C_ccall f_2305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_2305,c,av);}{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[92]);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=t1;
av2[7]=((C_word*)t0)[6];
C_apply(8,av2);}}

/* k2307 in k2296 in chicken.port#posix-error in k891 in k887 in k883 in k880 */
static void C_ccall f_2309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2309,c,av);}
/* port.scm:568: string-append */
t2=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[94];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.port#terminal-port? in k891 in k887 in k883 in k880 */
static void C_ccall f_2311(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2311,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[98]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2317,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:573: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[99]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k2315 in chicken.port#terminal-port? in k891 in k887 in k883 in k880 */
static void C_ccall f_2317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2317,c,av);}
t2=C_eqp(C_fix(0),t1);
t3=C_i_not(t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_tty_portp(((C_word*)t0)[3]):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.port#check-terminal! in k891 in k887 in k883 in k880 */
static void f_2329(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_2329,3,t1,t2,t3);}
t4=C_i_check_port_2(t3,C_fix(0),C_SCHEME_TRUE,t2);
t5=C_slot(t3,C_fix(7));
t6=C_eqp(lf[13],t5);
t7=(C_truep(t6)?C_tty_portp(t3):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* port.scm:580: ##sys#error */
t8=*((C_word*)lf[6]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[101];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}}

/* chicken.port#terminal-name in k891 in k887 in k883 in k880 */
static void C_ccall f_2360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2360,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2364,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:585: check-terminal! */
f_2329(t3,lf[104],t2);}

/* k2362 in chicken.port#terminal-name in k891 in k887 in k883 in k880 */
static void C_ccall f_2364(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2364,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2367,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_port_fileno(((C_word*)t0)[3]);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
/* port.scm:583: ##sys#peek-c-string */
t6=*((C_word*)lf[95]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=stub688(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2365 in k2362 in chicken.port#terminal-name in k891 in k887 in k883 in k880 */
static void C_ccall f_2367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2367,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* port.scm:587: posix-error */
f_2294(((C_word*)t2)[2],lf[103],lf[104],lf[105],C_a_i_list(&a,1,((C_word*)t2)[3]));}}

/* chicken.port#terminal-size in k891 in k887 in k883 in k880 */
static void C_ccall f_2390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2390,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2394,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=t1,a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* port.scm:595: check-terminal! */
f_2329(t3,lf[107],t2);}

/* k2392 in chicken.port#terminal-size in k891 in k887 in k883 in k880 */
static void C_ccall f_2394(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_2394,c,av);}
a=C_alloc(9);
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=C_mutate(((C_word *)t0)+6,t2);
t4=C_a_i_bytevector(&a,1,C_fix(1));
t5=C_mutate(((C_word *)t0)+5,t4);
t6=C_port_fileno(((C_word*)t0)[7]);
t7=C_mutate(((C_word *)t0)+2,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2415,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* port.scm:599: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[109]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[110];
tp(6,av2);}}

/* k2413 in k2392 in chicken.port#terminal-size in k891 in k887 in k883 in k880 */
static void C_ccall f_2415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2415,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2419,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* port.scm:600: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[109]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[6];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[110];
tp(6,av2);}}

/* k2417 in k2413 in k2392 in chicken.port#terminal-size in k891 in k887 in k883 in k880 */
static void C_ccall f_2419(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2419,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(((C_word*)t2)[2]);
t4=C_i_foreign_pointer_argumentp(((C_word*)t2)[3]);
t5=C_i_foreign_pointer_argumentp(t1);
t6=C_eqp(C_fix(0),stub702(C_SCHEME_UNDEFINED,t3,t4,t5));
if(C_truep(t6)){
/* port.scm:601: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t2)[4];
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t2)[5])));
av2[3]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t2)[6])));
C_values(4,av2);}}
else{
/* port.scm:602: posix-error */
f_2294(((C_word*)t2)[4],lf[103],lf[107],lf[108],C_a_i_list(&a,1,((C_word*)t2)[7]));}}

/* a2420 in k887 in k883 in k880 */
static void C_ccall f_2421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2421,c,av);}
a=C_alloc(4);
if(C_truep(C_rest_nullp(c,2))){
t2=*((C_word*)lf[5]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f2655,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:134: ##sys#check-port */
t4=*((C_word*)lf[9]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[5]+1);
av2[3]=lf[111];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=C_get_rest_arg(c,2,av,2,t0);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2428,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:134: ##sys#check-port */
t4=*((C_word*)lf[9]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[111];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k2426 in a2420 in k887 in k883 in k880 */
static void C_ccall f_2428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2428,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(3));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2438 in k887 in k883 in k880 */
static void C_ccall f_2439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2439,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2443,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* port.scm:137: ##sys#check-port */
t5=*((C_word*)lf[9]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[112];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2441 in a2438 in k887 in k883 in k880 */
static void C_ccall f_2443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2443,c,av);}
t2=C_i_check_string_2(((C_word*)t0)[2],lf[112]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[4],C_fix(3),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2450 in k883 in k880 */
static void C_ccall f_2451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2451,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2455,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* port.scm:123: ##sys#check-port */
t4=*((C_word*)lf[9]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[115];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2453 in a2450 in k883 in k880 */
static void C_ccall f_2455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2455,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(15));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2459 in k883 in k880 */
static void C_ccall f_2460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2460,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2464,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* port.scm:126: ##sys#check-port */
t5=*((C_word*)lf[9]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[115];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2462 in a2459 in k883 in k880 */
static void C_ccall f_2464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2464,c,av);}
t2=C_i_check_symbol_2(((C_word*)t0)[2],lf[115]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[4],C_fix(15),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k880 */
static void C_ccall f_882(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_882,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_885,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k883 in k880 */
static void C_ccall f_885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_885,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_889,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2451,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2460,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp);
/* port.scm:121: chicken.base#getter-with-setter */
t5=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
av2[4]=lf[116];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k887 in k883 in k880 */
static void C_ccall f_889(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_889,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.port#port-encoding ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_893,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2421,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2439,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
/* port.scm:132: chicken.base#getter-with-setter */
t6=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=lf[114];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k891 in k887 in k883 in k880 */
static void C_ccall f_893(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(80,c,6)))){
C_save_and_reclaim((void *)f_893,c,av);}
a=C_alloc(80);
t2=C_mutate((C_word*)lf[3]+1 /* (set! chicken.port#port-name ...) */,t1);
t3=C_mutate((C_word*)lf[4]+1 /* (set! chicken.port#port-position ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_895,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[10]+1 /* (set! chicken.port#set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_927,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[18]+1 /* (set! chicken.port#port-for-each ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1003,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[19]+1 /* (set! chicken.port#port-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1027,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[21]+1 /* (set! chicken.port#port-fold ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1059,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[22]+1);
t9=*((C_word*)lf[23]+1);
t10=C_mutate((C_word*)lf[24]+1 /* (set! chicken.port#copy-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1278,a[2]=t8,a[3]=t9,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp));
t11=C_mutate((C_word*)lf[30]+1 /* (set! chicken.port#make-broadcast-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1347,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[35]+1 /* (set! chicken.port#make-concatenated-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1416,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[43]+1 /* (set! chicken.port#with-input-from-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1572,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[46]+1 /* (set! chicken.port#with-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1597,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[49]+1 /* (set! chicken.port#with-error-output-to-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1622,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[52]+1 /* (set! chicken.port#call-with-input-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1647,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[54]+1 /* (set! chicken.port#call-with-output-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1656,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[57]+1 /* (set! chicken.port#with-input-from-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1668,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[58]+1 /* (set! chicken.port#with-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1693,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[59]+1 /* (set! chicken.port#with-error-output-to-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1721,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[40]+1 /* (set! chicken.port#make-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1749,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[33]+1 /* (set! chicken.port#make-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1860,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[74]+1 /* (set! chicken.port#make-binary-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1934,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[79]+1 /* (set! chicken.port#make-binary-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2095,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[83]+1 /* (set! chicken.port#make-bidirectional-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2185,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate(&lf[91] /* (set! chicken.port#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2294,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[97]+1 /* (set! chicken.port#terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2311,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate(&lf[100] /* (set! chicken.port#check-terminal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2329,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[102]+1 /* (set! chicken.port#terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2360,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[106]+1 /* (set! chicken.port#terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2390,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t31=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t31;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t31+1)))(2,av2);}}

/* chicken.port#port-position in k891 in k887 in k883 in k880 */
static void C_ccall f_895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_895,c,av);}
a=C_alloc(4);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?*((C_word*)lf[5]+1):C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_902,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* port.scm:143: ##sys#check-port */
t5=*((C_word*)lf[9]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[7];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k900 in chicken.port#port-position in k891 in k887 in k883 in k880 */
static void C_ccall f_902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_902,c,av);}
if(C_truep(C_input_portp(((C_word*)t0)[2]))){
/* port.scm:145: ##sys#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=C_slot(((C_word*)t0)[2],C_fix(4));
av2[3]=C_slot(((C_word*)t0)[2],C_fix(5));
C_values(4,av2);}}
else{
/* port.scm:146: ##sys#error */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* chicken.port#set-buffering-mode! in k891 in k887 in k883 in k880 */
static void C_ccall f_927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_927,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_931,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* port.scm:149: ##sys#check-port */
t6=*((C_word*)lf[9]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[11];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k929 in chicken.port#set-buffering-mode! in k891 in k887 in k883 in k880 */
static void C_ccall f_931(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_931,c,av);}
a=C_alloc(6);
t2=C_i_pairp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_u_i_car(((C_word*)t0)[2]):C_fix((C_word)BUFSIZ));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_937,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=C_SCHEME_UNDEFINED,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(((C_word*)t0)[5],lf[14]);
if(C_truep(t5)){
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_fix((C_word)_IOFBF);
f_937(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[5],lf[15]);
if(C_truep(t6)){
t7=C_fix((C_word)_IOLBF);
t8=t4;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
f_937(2,av2);}}
else{
t7=C_eqp(((C_word*)t0)[5],lf[16]);
if(C_truep(t7)){
t8=t4;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_fix((C_word)_IONBF);
f_937(2,av2);}}
else{
/* port.scm:155: ##sys#error */
t8=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=lf[11];
av2[3]=lf[17];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}}}}

/* k935 in k929 in chicken.port#set-buffering-mode! in k891 in k887 in k883 in k880 */
static void C_ccall f_937(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_937,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=C_i_check_fixnum_2(((C_word*)t0)[5],lf[11]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_946,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(7));
t6=C_eqp(lf[13],t5);
if(C_truep(t6)){
t7=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t9=t4;
f_946(t9,C_fixnum_lessp(stub165(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t7,t8),C_fix(0)));}
else{
t7=t4;
f_946(t7,C_fixnum_lessp(C_fix(-1),C_fix(0)));}}

/* k944 in k935 in k929 in chicken.port#set-buffering-mode! in k891 in k887 in k883 in k880 */
static void f_946(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_946,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
/* port.scm:163: ##sys#error */
t3=*((C_word*)lf[6]+1);{
C_word av2[7];
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[11];
av2[3]=lf[12];
av2[4]=((C_word*)t2)[3];
av2[5]=((C_word*)t2)[4];
av2[6]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_port_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("port"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_port_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(686))){
C_save(t1);
C_rereclaim2(686*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,117);
lf[0]=C_h_intern(&lf[0],4, C_text("port"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.port#"));
lf[2]=C_h_intern(&lf[2],26, C_text("chicken.port#port-encoding"));
lf[3]=C_h_intern(&lf[3],22, C_text("chicken.port#port-name"));
lf[4]=C_h_intern(&lf[4],26, C_text("chicken.port#port-position"));
lf[5]=C_h_intern(&lf[5],20, C_text("##sys#standard-input"));
lf[6]=C_h_intern(&lf[6],11, C_text("##sys#error"));
lf[7]=C_h_intern(&lf[7],13, C_text("port-position"));
lf[8]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\143\141\156\156\157\164\040\143\157\155\160\165\164\145\040\160\157\163\151\164\151\157\156\040\157\146\040\160\157\162\164\000"));
lf[9]=C_h_intern(&lf[9],16, C_text("##sys#check-port"));
lf[10]=C_h_intern(&lf[10],32, C_text("chicken.port#set-buffering-mode!"));
lf[11]=C_h_intern(&lf[11],19, C_text("set-buffering-mode!"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\143\141\156\156\157\164\040\163\145\164\040\142\165\146\146\145\162\151\156\147\040\155\157\144\145\000"));
lf[13]=C_h_intern(&lf[13],6, C_text("stream"));
lf[14]=C_h_intern_kw(&lf[14],4, C_text("full"));
lf[15]=C_h_intern_kw(&lf[15],4, C_text("line"));
lf[16]=C_h_intern_kw(&lf[16],4, C_text("none"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\151\156\166\141\154\151\144\040\142\165\146\146\145\162\151\156\147\055\155\157\144\145\000"));
lf[18]=C_h_intern(&lf[18],26, C_text("chicken.port#port-for-each"));
lf[19]=C_h_intern(&lf[19],21, C_text("chicken.port#port-map"));
lf[20]=C_h_intern(&lf[20],18, C_text("##sys#fast-reverse"));
lf[21]=C_h_intern(&lf[21],22, C_text("chicken.port#port-fold"));
lf[22]=C_h_intern(&lf[22],16, C_text("scheme#read-char"));
lf[23]=C_h_intern(&lf[23],17, C_text("scheme#write-char"));
lf[24]=C_h_intern(&lf[24],22, C_text("chicken.port#copy-port"));
lf[25]=C_h_intern(&lf[25],27, C_text("chicken.io#write-bytevector"));
lf[26]=C_h_intern(&lf[26],32, C_text("chicken.io#read-bytevector!/port"));
lf[27]=C_h_intern(&lf[27],21, C_text("##sys#make-bytevector"));
lf[28]=C_h_intern(&lf[28],9, C_text("copy-port"));
lf[29]=C_h_intern(&lf[29],20, C_text("##sys#buffer->string"));
lf[30]=C_h_intern(&lf[30],32, C_text("chicken.port#make-broadcast-port"));
lf[31]=C_h_intern(&lf[31],19, C_text("scheme#write-string"));
lf[32]=C_h_intern(&lf[32],25, C_text("chicken.base#flush-output"));
lf[33]=C_h_intern(&lf[33],29, C_text("chicken.port#make-output-port"));
lf[34]=C_h_intern(&lf[34],17, C_text("chicken.base#void"));
lf[35]=C_h_intern(&lf[35],35, C_text("chicken.port#make-concatenated-port"));
lf[36]=C_h_intern(&lf[36],20, C_text("##sys#read-char/port"));
lf[37]=C_h_intern(&lf[37],18, C_text("scheme#char-ready?"));
lf[38]=C_h_intern(&lf[38],16, C_text("scheme#peek-char"));
lf[39]=C_h_intern(&lf[39],27, C_text("chicken.io#read-bytevector!"));
lf[40]=C_h_intern(&lf[40],28, C_text("chicken.port#make-input-port"));
lf[41]=C_h_intern_kw(&lf[41],9, C_text("peek-char"));
lf[42]=C_h_intern_kw(&lf[42],15, C_text("read-bytevector"));
lf[43]=C_h_intern(&lf[43],33, C_text("chicken.port#with-input-from-port"));
lf[44]=C_h_intern(&lf[44],20, C_text("with-input-from-port"));
lf[45]=C_h_intern(&lf[45],18, C_text("##sys#dynamic-wind"));
lf[46]=C_h_intern(&lf[46],32, C_text("chicken.port#with-output-to-port"));
lf[47]=C_h_intern(&lf[47],19, C_text("with-output-to-port"));
lf[48]=C_h_intern(&lf[48],21, C_text("##sys#standard-output"));
lf[49]=C_h_intern(&lf[49],38, C_text("chicken.port#with-error-output-to-port"));
lf[50]=C_h_intern(&lf[50],25, C_text("with-error-output-to-port"));
lf[51]=C_h_intern(&lf[51],20, C_text("##sys#standard-error"));
lf[52]=C_h_intern(&lf[52],35, C_text("chicken.port#call-with-input-string"));
lf[53]=C_h_intern(&lf[53],24, C_text("scheme#open-input-string"));
lf[54]=C_h_intern(&lf[54],36, C_text("chicken.port#call-with-output-string"));
lf[55]=C_h_intern(&lf[55],24, C_text("scheme#get-output-string"));
lf[56]=C_h_intern(&lf[56],25, C_text("scheme#open-output-string"));
lf[57]=C_h_intern(&lf[57],35, C_text("chicken.port#with-input-from-string"));
lf[58]=C_h_intern(&lf[58],34, C_text("chicken.port#with-output-to-string"));
lf[59]=C_h_intern(&lf[59],40, C_text("chicken.port#with-error-output-to-string"));
lf[60]=C_h_intern_kw(&lf[60],9, C_text("read-line"));
lf[61]=C_h_intern_kw(&lf[61],13, C_text("read-buffered"));
lf[62]=C_h_intern(&lf[62],18, C_text("chicken.base#error"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\123\142\151\156\141\162\171\040\111\057\117\040\156\157\164\040\163\165\160\160\157\162\164\145\144\040\146\157\162\040\143\165\163\164\157\155\040\164\145\170\164\040\151\156\160\165\164\040\160\157\162\164\040\167\151\164\150\157\165\164\040\142\171\164\145\166\145\143\164\157\162\055\162\145\141\144\040\155\145\164\150\157\144\000"));
lf[64]=C_h_intern(&lf[64],20, C_text("##sys#set-port-data!"));
lf[65]=C_h_intern(&lf[65],15, C_text("##sys#make-port"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\050\143\165\163\164\157\155\051\000"));
lf[67]=C_h_intern(&lf[67],6, C_text("custom"));
lf[68]=C_h_intern(&lf[68],15, C_text("make-input-port"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\151\156\166\141\154\151\144\040\151\156\166\157\143\141\164\151\157\156\040\055\040\165\163\145\040\153\145\171\167\157\162\144\040\160\141\162\141\155\145\164\145\162\163\000"));
lf[70]=C_h_intern_kw(&lf[70],12, C_text("force-output"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\050\143\165\163\164\157\155\051\000"));
lf[72]=C_h_intern(&lf[72],16, C_text("make-output-port"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\151\156\166\141\154\151\144\040\151\156\166\157\143\141\164\151\157\156\040\055\040\165\163\145\040\153\145\171\167\157\162\144\040\160\141\162\141\155\145\164\145\162\163\000"));
lf[74]=C_h_intern(&lf[74],35, C_text("chicken.port#make-binary-input-port"));
lf[75]=C_h_intern_kw(&lf[75],7, C_text("peek-u8"));
lf[76]=C_h_intern(&lf[76],20, C_text("scheme#integer->char"));
lf[77]=C_h_intern(&lf[77],6, C_text("binary"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\050\143\165\163\164\157\155\040\142\151\156\141\162\171\051\000"));
lf[79]=C_h_intern(&lf[79],36, C_text("chicken.port#make-binary-output-port"));
lf[80]=C_h_intern_kw(&lf[80],16, C_text("write-bytevector"));
lf[81]=C_h_intern(&lf[81],23, C_text("make-binary-output-port"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\050\143\165\163\164\157\155\040\142\151\156\141\162\171\051\000"));
lf[83]=C_h_intern(&lf[83],36, C_text("chicken.port#make-bidirectional-port"));
lf[84]=C_h_intern(&lf[84],21, C_text("##sys#write-char/port"));
lf[85]=C_h_intern(&lf[85],23, C_text("scheme#close-input-port"));
lf[86]=C_h_intern(&lf[86],24, C_text("scheme#close-output-port"));
lf[87]=C_h_intern(&lf[87],20, C_text("chicken.io#read-line"));
lf[88]=C_h_intern(&lf[88],24, C_text("chicken.io#read-buffered"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\050\142\151\144\151\162\145\143\164\151\157\156\141\154\051\000"));
lf[90]=C_h_intern(&lf[90],13, C_text("bidirectional"));
lf[92]=C_h_intern(&lf[92],23, C_text("##sys#signal-hook/errno"));
lf[93]=C_h_intern(&lf[93],20, C_text("scheme#string-append"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\055\040\000"));
lf[95]=C_h_intern(&lf[95],19, C_text("##sys#peek-c-string"));
lf[96]=C_h_intern(&lf[96],18, C_text("##sys#update-errno"));
lf[97]=C_h_intern(&lf[97],27, C_text("chicken.port#terminal-port?"));
lf[98]=C_h_intern(&lf[98],14, C_text("terminal-port?"));
lf[99]=C_h_intern(&lf[99],27, C_text("##sys#peek-unsigned-integer"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\160\157\162\164\040\151\163\040\156\157\164\040\143\157\156\156\145\143\164\145\144\040\164\157\040\141\040\164\145\162\155\151\156\141\154\000"));
lf[102]=C_h_intern(&lf[102],26, C_text("chicken.port#terminal-name"));
lf[103]=C_h_intern_kw(&lf[103],5, C_text("error"));
lf[104]=C_h_intern(&lf[104],13, C_text("terminal-name"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\143\141\156\156\157\164\040\144\145\164\145\162\155\151\156\145\040\164\145\162\155\151\156\141\154\040\156\141\155\145\000"));
lf[106]=C_h_intern(&lf[106],26, C_text("chicken.port#terminal-size"));
lf[107]=C_h_intern(&lf[107],13, C_text("terminal-size"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\143\141\156\156\157\164\040\144\145\164\145\162\155\151\156\145\040\164\145\162\155\151\156\141\154\040\163\151\172\145\000"));
lf[109]=C_h_intern(&lf[109],19, C_text("##sys#make-locative"));
lf[110]=C_h_intern(&lf[110],8, C_text("location"));
lf[111]=C_h_intern(&lf[111],9, C_text("port-name"));
lf[112]=C_h_intern(&lf[112],14, C_text("set-port-name!"));
lf[113]=C_h_intern(&lf[113],31, C_text("chicken.base#getter-with-setter"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\050\143\150\151\143\153\145\156\056\160\157\162\164\043\160\157\162\164\055\156\141\155\145\040\160\157\162\164\051\000"));
lf[115]=C_h_intern(&lf[115],13, C_text("port-encoding"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\050\143\150\151\143\153\145\156\056\160\157\162\164\043\160\157\162\164\055\145\156\143\157\144\151\156\147\040\160\157\162\164\051\000"));
C_register_lf2(lf,117,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_882,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[186] = {
{C_text("f2655:port_2escm"),(void*)f2655},
{C_text("f_1003:port_2escm"),(void*)f_1003},
{C_text("f_1009:port_2escm"),(void*)f_1009},
{C_text("f_1013:port_2escm"),(void*)f_1013},
{C_text("f_1022:port_2escm"),(void*)f_1022},
{C_text("f_1027:port_2escm"),(void*)f_1027},
{C_text("f_1033:port_2escm"),(void*)f_1033},
{C_text("f_1037:port_2escm"),(void*)f_1037},
{C_text("f_1057:port_2escm"),(void*)f_1057},
{C_text("f_1059:port_2escm"),(void*)f_1059},
{C_text("f_1065:port_2escm"),(void*)f_1065},
{C_text("f_1069:port_2escm"),(void*)f_1069},
{C_text("f_1082:port_2escm"),(void*)f_1082},
{C_text("f_1089:port_2escm"),(void*)f_1089},
{C_text("f_1092:port_2escm"),(void*)f_1092},
{C_text("f_1095:port_2escm"),(void*)f_1095},
{C_text("f_1100:port_2escm"),(void*)f_1100},
{C_text("f_1104:port_2escm"),(void*)f_1104},
{C_text("f_1113:port_2escm"),(void*)f_1113},
{C_text("f_1122:port_2escm"),(void*)f_1122},
{C_text("f_1125:port_2escm"),(void*)f_1125},
{C_text("f_1130:port_2escm"),(void*)f_1130},
{C_text("f_1134:port_2escm"),(void*)f_1134},
{C_text("f_1143:port_2escm"),(void*)f_1143},
{C_text("f_1152:port_2escm"),(void*)f_1152},
{C_text("f_1173:port_2escm"),(void*)f_1173},
{C_text("f_1183:port_2escm"),(void*)f_1183},
{C_text("f_1210:port_2escm"),(void*)f_1210},
{C_text("f_1214:port_2escm"),(void*)f_1214},
{C_text("f_1223:port_2escm"),(void*)f_1223},
{C_text("f_1232:port_2escm"),(void*)f_1232},
{C_text("f_1235:port_2escm"),(void*)f_1235},
{C_text("f_1240:port_2escm"),(void*)f_1240},
{C_text("f_1244:port_2escm"),(void*)f_1244},
{C_text("f_1247:port_2escm"),(void*)f_1247},
{C_text("f_1272:port_2escm"),(void*)f_1272},
{C_text("f_1278:port_2escm"),(void*)f_1278},
{C_text("f_1347:port_2escm"),(void*)f_1347},
{C_text("f_1353:port_2escm"),(void*)f_1353},
{C_text("f_1355:port_2escm"),(void*)f_1355},
{C_text("f_1364:port_2escm"),(void*)f_1364},
{C_text("f_1374:port_2escm"),(void*)f_1374},
{C_text("f_1387:port_2escm"),(void*)f_1387},
{C_text("f_1393:port_2escm"),(void*)f_1393},
{C_text("f_1403:port_2escm"),(void*)f_1403},
{C_text("f_1416:port_2escm"),(void*)f_1416},
{C_text("f_1425:port_2escm"),(void*)f_1425},
{C_text("f_1431:port_2escm"),(void*)f_1431},
{C_text("f_1441:port_2escm"),(void*)f_1441},
{C_text("f_1460:port_2escm"),(void*)f_1460},
{C_text("f_1480:port_2escm"),(void*)f_1480},
{C_text("f_1486:port_2escm"),(void*)f_1486},
{C_text("f_1496:port_2escm"),(void*)f_1496},
{C_text("f_1515:port_2escm"),(void*)f_1515},
{C_text("f_1521:port_2escm"),(void*)f_1521},
{C_text("f_1537:port_2escm"),(void*)f_1537},
{C_text("f_1540:port_2escm"),(void*)f_1540},
{C_text("f_1572:port_2escm"),(void*)f_1572},
{C_text("f_1581:port_2escm"),(void*)f_1581},
{C_text("f_1586:port_2escm"),(void*)f_1586},
{C_text("f_1592:port_2escm"),(void*)f_1592},
{C_text("f_1597:port_2escm"),(void*)f_1597},
{C_text("f_1606:port_2escm"),(void*)f_1606},
{C_text("f_1611:port_2escm"),(void*)f_1611},
{C_text("f_1617:port_2escm"),(void*)f_1617},
{C_text("f_1622:port_2escm"),(void*)f_1622},
{C_text("f_1631:port_2escm"),(void*)f_1631},
{C_text("f_1636:port_2escm"),(void*)f_1636},
{C_text("f_1642:port_2escm"),(void*)f_1642},
{C_text("f_1647:port_2escm"),(void*)f_1647},
{C_text("f_1651:port_2escm"),(void*)f_1651},
{C_text("f_1656:port_2escm"),(void*)f_1656},
{C_text("f_1660:port_2escm"),(void*)f_1660},
{C_text("f_1663:port_2escm"),(void*)f_1663},
{C_text("f_1668:port_2escm"),(void*)f_1668},
{C_text("f_1672:port_2escm"),(void*)f_1672},
{C_text("f_1677:port_2escm"),(void*)f_1677},
{C_text("f_1682:port_2escm"),(void*)f_1682},
{C_text("f_1688:port_2escm"),(void*)f_1688},
{C_text("f_1693:port_2escm"),(void*)f_1693},
{C_text("f_1697:port_2escm"),(void*)f_1697},
{C_text("f_1702:port_2escm"),(void*)f_1702},
{C_text("f_1707:port_2escm"),(void*)f_1707},
{C_text("f_1711:port_2escm"),(void*)f_1711},
{C_text("f_1716:port_2escm"),(void*)f_1716},
{C_text("f_1721:port_2escm"),(void*)f_1721},
{C_text("f_1725:port_2escm"),(void*)f_1725},
{C_text("f_1730:port_2escm"),(void*)f_1730},
{C_text("f_1735:port_2escm"),(void*)f_1735},
{C_text("f_1739:port_2escm"),(void*)f_1739},
{C_text("f_1744:port_2escm"),(void*)f_1744},
{C_text("f_1749:port_2escm"),(void*)f_1749},
{C_text("f_1765:port_2escm"),(void*)f_1765},
{C_text("f_1774:port_2escm"),(void*)f_1774},
{C_text("f_1780:port_2escm"),(void*)f_1780},
{C_text("f_1782:port_2escm"),(void*)f_1782},
{C_text("f_1803:port_2escm"),(void*)f_1803},
{C_text("f_1819:port_2escm"),(void*)f_1819},
{C_text("f_1824:port_2escm"),(void*)f_1824},
{C_text("f_1830:port_2escm"),(void*)f_1830},
{C_text("f_1839:port_2escm"),(void*)f_1839},
{C_text("f_1860:port_2escm"),(void*)f_1860},
{C_text("f_1867:port_2escm"),(void*)f_1867},
{C_text("f_1876:port_2escm"),(void*)f_1876},
{C_text("f_1879:port_2escm"),(void*)f_1879},
{C_text("f_1881:port_2escm"),(void*)f_1881},
{C_text("f_1891:port_2escm"),(void*)f_1891},
{C_text("f_1902:port_2escm"),(void*)f_1902},
{C_text("f_1904:port_2escm"),(void*)f_1904},
{C_text("f_1910:port_2escm"),(void*)f_1910},
{C_text("f_1934:port_2escm"),(void*)f_1934},
{C_text("f_1947:port_2escm"),(void*)f_1947},
{C_text("f_1982:port_2escm"),(void*)f_1982},
{C_text("f_1994:port_2escm"),(void*)f_1994},
{C_text("f_1996:port_2escm"),(void*)f_1996},
{C_text("f_2013:port_2escm"),(void*)f_2013},
{C_text("f_2015:port_2escm"),(void*)f_2015},
{C_text("f_2029:port_2escm"),(void*)f_2029},
{C_text("f_2035:port_2escm"),(void*)f_2035},
{C_text("f_2042:port_2escm"),(void*)f_2042},
{C_text("f_2044:port_2escm"),(void*)f_2044},
{C_text("f_2050:port_2escm"),(void*)f_2050},
{C_text("f_2055:port_2escm"),(void*)f_2055},
{C_text("f_2063:port_2escm"),(void*)f_2063},
{C_text("f_2065:port_2escm"),(void*)f_2065},
{C_text("f_2073:port_2escm"),(void*)f_2073},
{C_text("f_2075:port_2escm"),(void*)f_2075},
{C_text("f_2082:port_2escm"),(void*)f_2082},
{C_text("f_2095:port_2escm"),(void*)f_2095},
{C_text("f_2115:port_2escm"),(void*)f_2115},
{C_text("f_2118:port_2escm"),(void*)f_2118},
{C_text("f_2126:port_2escm"),(void*)f_2126},
{C_text("f_2130:port_2escm"),(void*)f_2130},
{C_text("f_2135:port_2escm"),(void*)f_2135},
{C_text("f_2141:port_2escm"),(void*)f_2141},
{C_text("f_2147:port_2escm"),(void*)f_2147},
{C_text("f_2155:port_2escm"),(void*)f_2155},
{C_text("f_2168:port_2escm"),(void*)f_2168},
{C_text("f_2175:port_2escm"),(void*)f_2175},
{C_text("f_2185:port_2escm"),(void*)f_2185},
{C_text("f_2192:port_2escm"),(void*)f_2192},
{C_text("f_2195:port_2escm"),(void*)f_2195},
{C_text("f_2201:port_2escm"),(void*)f_2201},
{C_text("f_2207:port_2escm"),(void*)f_2207},
{C_text("f_2213:port_2escm"),(void*)f_2213},
{C_text("f_2219:port_2escm"),(void*)f_2219},
{C_text("f_2225:port_2escm"),(void*)f_2225},
{C_text("f_2250:port_2escm"),(void*)f_2250},
{C_text("f_2256:port_2escm"),(void*)f_2256},
{C_text("f_2262:port_2escm"),(void*)f_2262},
{C_text("f_2272:port_2escm"),(void*)f_2272},
{C_text("f_2278:port_2escm"),(void*)f_2278},
{C_text("f_2294:port_2escm"),(void*)f_2294},
{C_text("f_2298:port_2escm"),(void*)f_2298},
{C_text("f_2305:port_2escm"),(void*)f_2305},
{C_text("f_2309:port_2escm"),(void*)f_2309},
{C_text("f_2311:port_2escm"),(void*)f_2311},
{C_text("f_2317:port_2escm"),(void*)f_2317},
{C_text("f_2329:port_2escm"),(void*)f_2329},
{C_text("f_2360:port_2escm"),(void*)f_2360},
{C_text("f_2364:port_2escm"),(void*)f_2364},
{C_text("f_2367:port_2escm"),(void*)f_2367},
{C_text("f_2390:port_2escm"),(void*)f_2390},
{C_text("f_2394:port_2escm"),(void*)f_2394},
{C_text("f_2415:port_2escm"),(void*)f_2415},
{C_text("f_2419:port_2escm"),(void*)f_2419},
{C_text("f_2421:port_2escm"),(void*)f_2421},
{C_text("f_2428:port_2escm"),(void*)f_2428},
{C_text("f_2439:port_2escm"),(void*)f_2439},
{C_text("f_2443:port_2escm"),(void*)f_2443},
{C_text("f_2451:port_2escm"),(void*)f_2451},
{C_text("f_2455:port_2escm"),(void*)f_2455},
{C_text("f_2460:port_2escm"),(void*)f_2460},
{C_text("f_2464:port_2escm"),(void*)f_2464},
{C_text("f_882:port_2escm"),(void*)f_882},
{C_text("f_885:port_2escm"),(void*)f_885},
{C_text("f_889:port_2escm"),(void*)f_889},
{C_text("f_893:port_2escm"),(void*)f_893},
{C_text("f_895:port_2escm"),(void*)f_895},
{C_text("f_902:port_2escm"),(void*)f_902},
{C_text("f_927:port_2escm"),(void*)f_927},
{C_text("f_931:port_2escm"),(void*)f_931},
{C_text("f_937:port_2escm"),(void*)f_937},
{C_text("f_946:port_2escm"),(void*)f_946},
{C_text("toplevel:port_2escm"),(void*)C_port_toplevel},
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
o|hiding unexported module binding: chicken.port#d 
o|hiding unexported module binding: chicken.port#define-alias 
o|hiding unexported module binding: chicken.port#posix-error 
o|hiding unexported module binding: chicken.port#check-terminal! 
S|applied compiler syntax:
S|  scheme#for-each		2
o|eliminated procedure checks: 44 
o|specializations:
o|  2 (##sys#check-open-port * *)
o|  2 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  2 (##sys#check-list (or pair list) *)
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  3 (scheme#car pair)
(o e)|safe calls: 191 
(o e)|assignments to immediate values: 1 
o|inlining procedure: k903 
o|inlining procedure: k903 
o|inlining procedure: k941 
o|inlining procedure: k941 
o|inlining procedure: k951 
o|contracted procedure: "(port.scm:157) g160161" 
o|inlining procedure: k951 
o|inlining procedure: k977 
o|inlining procedure: k977 
o|substituted constant variable: a993 
o|substituted constant variable: a995 
o|substituted constant variable: a997 
o|inlining procedure: k1014 
o|inlining procedure: k1014 
o|inlining procedure: k1038 
o|inlining procedure: k1038 
o|inlining procedure: k1070 
o|inlining procedure: k1070 
o|inlining procedure: k1292 
o|contracted procedure: "(port.scm:248) read-and-write197" 
o|inlining procedure: k1105 
o|inlining procedure: k1105 
o|contracted procedure: "(port.scm:249) read-and-delegate198" 
o|inlining procedure: k1144 
o|inlining procedure: k1144 
o|inlining procedure: k1175 
o|inlining procedure: k1175 
o|inlining procedure: k1292 
o|contracted procedure: "(port.scm:251) delegate-and-write200" 
o|inlining procedure: k1248 
o|inlining procedure: k1248 
o|contracted procedure: "(port.scm:252) delegate199" 
o|inlining procedure: k1215 
o|inlining procedure: k1215 
o|propagated global variable: g299300 scheme#write-string 
o|inlining procedure: k1366 
o|inlining procedure: k1366 
o|inlining procedure: k1395 
o|inlining procedure: k1395 
o|inlining procedure: k1433 
o|inlining procedure: k1433 
o|inlining procedure: k1462 
o|inlining procedure: k1462 
o|inlining procedure: k1488 
o|inlining procedure: k1488 
o|inlining procedure: k1523 
o|inlining procedure: k1523 
o|substituted constant variable: a1575 
o|substituted constant variable: a1576 
o|substituted constant variable: a1600 
o|substituted constant variable: a1601 
o|substituted constant variable: a1625 
o|substituted constant variable: a1626 
o|inlining procedure: k1787 
o|inlining procedure: k1787 
o|inlining procedure: k1808 
o|inlining procedure: k1808 
o|inlining procedure: k1912 
o|inlining procedure: k1912 
o|inlining procedure: k1952 
o|inlining procedure: k1952 
o|inlining procedure: k1965 
o|inlining procedure: k1965 
o|inlining procedure: k2001 
o|inlining procedure: k2001 
o|inlining procedure: k2020 
o|inlining procedure: k2020 
o|inlining procedure: k2077 
o|inlining procedure: k2077 
o|inlining procedure: k2149 
o|inlining procedure: k2149 
o|inlining procedure: k2170 
o|inlining procedure: k2170 
o|inlining procedure: k2227 
o|inlining procedure: k2227 
o|substituted constant variable: a2246 
o|substituted constant variable: a2248 
o|merged explicitly consed rest parameter: args673 
o|contracted procedure: "(port.scm:568) strerror663" 
o|substituted constant variable: a2314 
o|inlining procedure: k2318 
o|inlining procedure: k2318 
o|inlining procedure: k2333 
o|inlining procedure: k2333 
o|inlining procedure: k2368 
o|inlining procedure: k2368 
o|consed rest parameter at call site: "(port.scm:587) chicken.port#posix-error" 4 
o|contracted procedure: "(port.scm:586) ttyname686" 
o|inlining procedure: k2395 
o|inlining procedure: k2395 
o|consed rest parameter at call site: "(port.scm:602) chicken.port#posix-error" 4 
o|contracted procedure: "(port.scm:598) ttysize698" 
o|replaced variables: 359 
o|removed binding forms: 144 
o|substituted constant variable: r9522477 
o|substituted constant variable: r9522477 
o|substituted constant variable: r14342503 
o|substituted constant variable: r14632506 
o|substituted constant variable: r14892507 
o|substituted constant variable: r19532517 
o|substituted constant variable: r19532518 
o|substituted constant variable: r23192534 
o|replaced variables: 39 
o|removed binding forms: 314 
o|inlining procedure: k951 
o|inlining procedure: k1844 
o|inlining procedure: k1918 
o|inlining procedure: k2408 
o|inlining procedure: k2423 
o|propagated global variable: r24242653 ##sys#standard-input 
o|removed binding forms: 42 
o|substituted constant variable: r18452646 
o|substituted constant variable: r19192647 
o|removed binding forms: 2 
o|removed conditional forms: 2 
o|removed binding forms: 2 
o|simplifications: ((let . 12) (if . 12) (##core#call . 149)) 
o|  call simplifications:
o|    ##sys#check-symbol
o|    ##sys#check-string
o|    ##sys#foreign-pointer-argument	2
o|    chicken.fixnum#fx=
o|    scheme#values
o|    scheme#apply
o|    scheme#write-char
o|    ##sys#check-bytevector
o|    scheme#char->integer
o|    scheme#string
o|    ##sys#get-keyword	9
o|    ##sys#setislot	4
o|    scheme#vector	10
o|    ##sys#setslot	9
o|    chicken.fixnum#fx<=
o|    scheme#+
o|    scheme#not	4
o|    scheme#read-char	2
o|    scheme#cdr	5
o|    chicken.fixnum#fxshr
o|    chicken.fixnum#fxand
o|    chicken.fixnum#fx>=	3
o|    scheme#string-ref
o|    chicken.fixnum#fx+	5
o|    ##sys#size	2
o|    chicken.fixnum#fx-	6
o|    scheme#cons	2
o|    scheme#eof-object?	9
o|    scheme#pair?	5
o|    ##sys#check-fixnum
o|    scheme#eq?	13
o|    ##sys#foreign-fixnum-argument	5
o|    chicken.fixnum#fx<	3
o|    scheme#null?	10
o|    scheme#car	8
o|    ##sys#slot	17
o|    ##sys#values
o|contracted procedure: k920 
o|contracted procedure: k897 
o|contracted procedure: k910 
o|contracted procedure: k914 
o|contracted procedure: k998 
o|contracted procedure: k932 
o|contracted procedure: k938 
o|contracted procedure: k971 
o|contracted procedure: k954 
o|contracted procedure: k960 
o|contracted procedure: k964 
o|contracted procedure: k974 
o|contracted procedure: k980 
o|contracted procedure: k986 
o|contracted procedure: k1017 
o|contracted procedure: k1041 
o|contracted procedure: k1051 
o|contracted procedure: k1073 
o|contracted procedure: k1340 
o|contracted procedure: k1280 
o|contracted procedure: k1334 
o|contracted procedure: k1283 
o|contracted procedure: k1328 
o|contracted procedure: k1286 
o|contracted procedure: k1322 
o|contracted procedure: k1289 
o|contracted procedure: k1295 
o|contracted procedure: k1301 
o|contracted procedure: k1108 
o|contracted procedure: k1135 
o|contracted procedure: k1138 
o|contracted procedure: k1147 
o|contracted procedure: k1169 
o|contracted procedure: k1165 
o|contracted procedure: k1161 
o|contracted procedure: k1154 
o|contracted procedure: k1178 
o|contracted procedure: k1188 
o|contracted procedure: k1192 
o|contracted procedure: k1196 
o|contracted procedure: k1200 
o|contracted procedure: k1313 
o|contracted procedure: k1251 
o|contracted procedure: k1257 
o|contracted procedure: k1267 
o|contracted procedure: k1275 
o|contracted procedure: k1218 
o|contracted procedure: k1369 
o|contracted procedure: k1379 
o|contracted procedure: k1383 
o|contracted procedure: k1398 
o|contracted procedure: k1408 
o|contracted procedure: k1412 
o|contracted procedure: k1418 
o|contracted procedure: k1436 
o|contracted procedure: k1445 
o|contracted procedure: k1449 
o|contracted procedure: k1456 
o|contracted procedure: k1476 
o|contracted procedure: k1465 
o|contracted procedure: k1472 
o|contracted procedure: k1491 
o|contracted procedure: k1500 
o|contracted procedure: k1504 
o|contracted procedure: k1511 
o|contracted procedure: k1526 
o|contracted procedure: k1532 
o|contracted procedure: k1545 
o|contracted procedure: k1549 
o|contracted procedure: k1553 
o|contracted procedure: k1556 
o|contracted procedure: k1560 
o|contracted procedure: k1564 
o|contracted procedure: k1568 
o|contracted procedure: k1751 
o|contracted procedure: k1754 
o|contracted procedure: k1757 
o|contracted procedure: k1760 
o|contracted procedure: k1784 
o|contracted procedure: k1796 
o|contracted procedure: k1805 
o|contracted procedure: k1820 
o|contracted procedure: k1836 
o|contracted procedure: k1766 
o|contracted procedure: k1769 
o|contracted procedure: k1775 
o|contracted procedure: k1850 
o|contracted procedure: k1844 
o|contracted procedure: k1862 
o|contracted procedure: k1887 
o|contracted procedure: k1893 
o|contracted procedure: k1868 
o|contracted procedure: k1871 
o|contracted procedure: k1924 
o|contracted procedure: k1918 
o|contracted procedure: k1936 
o|contracted procedure: k1939 
o|contracted procedure: k1943 
o|contracted procedure: k2086 
o|contracted procedure: k1949 
o|contracted procedure: k1956 
o|contracted procedure: k1959 
o|contracted procedure: k1968 
o|contracted procedure: k1998 
o|contracted procedure: k2004 
o|contracted procedure: k2017 
o|contracted procedure: k2036 
o|contracted procedure: k1974 
o|contracted procedure: k1977 
o|contracted procedure: k1983 
o|contracted procedure: k1986 
o|contracted procedure: k1989 
o|contracted procedure: k2097 
o|contracted procedure: k2100 
o|contracted procedure: k2104 
o|contracted procedure: k2157 
o|contracted procedure: k2164 
o|contracted procedure: k2107 
o|contracted procedure: k2110 
o|contracted procedure: k2119 
o|contracted procedure: k2122 
o|contracted procedure: k2230 
o|contracted procedure: k2239 
o|contracted procedure: k2268 
o|contracted procedure: k2187 
o|contracted procedure: k2197 
o|contracted procedure: k2291 
o|contracted procedure: k2325 
o|contracted procedure: k2321 
o|contracted procedure: k2346 
o|contracted procedure: k2342 
o|contracted procedure: k2336 
o|contracted procedure: k2357 
o|contracted procedure: k2379 
o|contracted procedure: k2383 
o|contracted procedure: k2387 
o|contracted procedure: k2398 
o|contracted procedure: k2432 
o|contracted procedure: k2423 
o|contracted procedure: k2444 
o|contracted procedure: k2465 
o|simplifications: ((let . 44)) 
o|removed binding forms: 141 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest140141 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest140141 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest256259 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest256259 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest256259 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest256259 0 
(o x)|known list op on rest arg sublist: ##core#rest-car r455 0 
(o x)|known list op on rest arg sublist: ##core#rest-car r496 0 
o|inlining procedure: "(port.scm:469) tochar527" 
o|inlining procedure: "(port.scm:472) tochar527" 
o|inlining procedure: "(port.scm:475) tochar527" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest124125 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest124125 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1284 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1284 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1284 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1284 1 
o|removed side-effect free assignment to unused variable: tochar527 
o|replaced variables: 15 
o|inlining procedure: k2033 
o|removed binding forms: 10 
o|replaced variables: 2 
o|removed binding forms: 1 
o|direct leaf routine/allocation: getlast526 0 
o|contracted procedure: "(port.scm:428) k2057" 
o|contracted procedure: "(port.scm:435) k2067" 
o|removed binding forms: 2 
o|customizable procedures: (chicken.port#check-terminal! chicken.port#posix-error loop604 loop542 k1538 loop348 loop336 loop327 for-each-loop308318 g284291 for-each-loop283301 loop234 k1242 loop242 doloop221222 loop214 loop204 loop190 loop182 loop175 k944) 
o|shared closure containers: 8 
o|shared closure users: 10 
o|calls to known targets: 48 
o|unused rest argument: rest140141 f_895 
o|unused rest argument: rest256259 f_1278 
o|unused rest argument: rest124125 f_2421 
o|fast box initializations: 17 
o|fast global references: 4 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1947 
o|dropping unused closure argument: f_2294 
o|dropping unused closure argument: f_2329 
*/
/* end of file */
