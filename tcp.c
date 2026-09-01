/* Generated from tcp.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: tcp.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file tcp.c -emit-import-library chicken.tcp
   unit: tcp
   uses: scheduler port library
*/
#include "chicken.h"

#ifdef _WIN32
# include <winsock2.h>
# include <ws2tcpip.h>
/* Beware: winsock2.h must come BEFORE windows.h */
# define socklen_t	 int
static WSADATA wsa;
# ifndef SHUT_RD
#  define SHUT_RD	  SD_RECEIVE
# endif
# ifndef SHUT_WR
#  define SHUT_WR	  SD_SEND
# endif

# define typecorrect_getsockopt(socket, level, optname, optval, optlen)	\
    getsockopt(socket, level, optname, (char *)optval, optlen)

static C_word make_socket_nonblocking (C_word sock) {
  int fd = C_unfix(sock);
  C_return(C_mk_bool(ioctlsocket(fd, FIONBIO, (void *)&fd) != SOCKET_ERROR)) ;
}

/* This is a bit of a hack, but it keeps things simple */
static C_char *last_wsa_errorstring = NULL;

static char *errormsg_from_code(int code) {
  int bufsize;
  if (last_wsa_errorstring != NULL) {
    LocalFree(last_wsa_errorstring);
    last_wsa_errorstring = NULL;
  }
  bufsize = FormatMessage(
	FORMAT_MESSAGE_ALLOCATE_BUFFER |
	FORMAT_MESSAGE_FROM_SYSTEM |
	FORMAT_MESSAGE_IGNORE_INSERTS,
	NULL, code, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
	(LPTSTR) &last_wsa_errorstring, 0, NULL);
  if (bufsize == 0) return "ERROR WHILE FETCHING ERROR";
  return last_wsa_errorstring;
}

# define get_last_socket_error()  WSAGetLastError()
# define should_retry_call()      (WSAGetLastError() == WSAEWOULDBLOCK)
/* Not EINPROGRESS in winsock.  Nonblocking connect returns EWOULDBLOCK... */
# define call_in_progress()       (WSAGetLastError() == WSAEWOULDBLOCK)
# define call_was_interrupted()   (WSAGetLastError() == WSAEINTR) /* ? */

#else
# include <errno.h>
# include <fcntl.h>
# include <sys/socket.h>
# include <sys/time.h>
# include <netinet/in.h>
# include <netdb.h>
# include <signal.h>
# define closesocket     close
# define INVALID_SOCKET  -1
# define SOCKET_ERROR    -1
# define typecorrect_getsockopt getsockopt

static C_word make_socket_nonblocking (C_word sock) {
  int fd = C_unfix(sock);
  int val = fcntl(fd, F_GETFL, 0);
  if(val == -1) C_return(C_SCHEME_FALSE);
  C_return(C_mk_bool(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1));
}

# define get_last_socket_error()  errno
# define errormsg_from_code(e)    strerror(e)

# define should_retry_call()      (errno == EAGAIN || errno == EWOULDBLOCK)
# define call_was_interrupted()   (errno == EINTR)
# define call_in_progress()       (errno == EINPROGRESS)
#endif

#ifdef ECOS
#include <sys/sockio.h>
#endif

#ifndef h_addr
# define h_addr  h_addr_list[ 0 ]
#endif

static char addr_buffer[ 20 ];

static int C_set_socket_options(int socket)
{
  int yes = 1; 
  int r;

  r = setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (const char *)&yes, sizeof(int));
  
  if(r != 0) return r;

#ifdef SO_NOSIGPIPE
  /*
   * Avoid SIGPIPE (iOS uses *only* SIGPIPE otherwise, not returning EPIPE).
   * For consistency we do this everywhere the option is supported.
   */
  r = setsockopt(socket, SOL_SOCKET, SO_NOSIGPIPE, (const char *)&yes, sizeof(int));
#endif

  return r;
}


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_extern void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_extern void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[111];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,116,99,112,35,103,101,116,104,111,115,116,97,100,100,114,32,115,97,100,100,114,50,55,57,32,104,111,115,116,50,56,48,32,112,111,114,116,50,56,49,41,0,0,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,32,112,111,114,116,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,101,114,63,32,120,41,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,99,108,111,115,101,32,116,99,112,108,41,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,10),40,102,95,49,55,48,56,32,120,41,0,0,0,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,11),40,99,104,101,99,107,32,108,111,99,41,0,0,0,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,12),40,114,101,97,100,45,105,110,112,117,116,41,0,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,7),40,97,49,57,50,56,41,0};
static C_char li9[] C_aligned={C_lihdr(0,0,21),40,108,111,111,112,32,108,101,110,32,111,102,102,115,101,116,32,100,108,119,41,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,21),40,97,49,56,54,52,32,98,117,102,32,115,116,97,114,116,32,108,101,110,41,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,23),40,111,117,116,112,117,116,45,116,111,45,115,111,99,107,101,116,32,98,118,32,110,41,0};
static C_char li12[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,110,32,112,41,0,0,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,17),40,97,100,100,45,116,111,45,98,117,102,32,98,118,32,110,41,0,0,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,11),40,97,50,48,55,48,32,112,32,99,41,0,0,0,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,20),40,97,50,48,56,53,32,112,32,98,118,32,102,114,111,109,32,116,111,41,0,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,11),40,97,50,49,48,54,32,112,32,100,41,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,9),40,97,50,49,54,57,32,112,41,0,0,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,19),40,97,50,50,48,52,32,98,117,102,32,115,116,97,114,116,32,110,41,0,0,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,7),40,97,50,49,56,53,41,0};
static C_char li20[] C_aligned={C_lihdr(0,0,7),40,97,50,50,49,55,41,0};
static C_char li21[] C_aligned={C_lihdr(0,0,7),40,97,50,50,53,57,41,0};
static C_char li22[] C_aligned={C_lihdr(0,0,19),40,97,50,51,50,56,32,98,117,102,32,115,116,97,114,116,32,110,41,0,0,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,7),40,97,50,51,48,57,41,0};
static C_char li24[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,32,109,32,115,116,97,114,116,41};
static C_char li25[] C_aligned={C_lihdr(0,0,22),40,97,50,51,51,55,32,112,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,11),40,97,50,52,50,54,32,112,111,115,41,0,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,7),40,97,50,52,49,54,41,0};
static C_char li28[] C_aligned={C_lihdr(0,0,28),40,97,50,52,55,54,32,110,101,120,116,32,108,105,110,101,32,102,117,108,108,45,108,105,110,101,63,41,0,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,15),40,97,50,51,57,56,32,112,32,108,105,109,105,116,41,0};
static C_char li30[] C_aligned={C_lihdr(0,0,9),40,97,50,53,50,49,32,112,41,0,0,0,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,116,99,112,35,105,111,45,112,111,114,116,115,32,108,111,99,32,102,100,32,101,110,99,41,0,0,0,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,99,99,101,112,116,32,116,99,112,108,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,99,99,101,112,116,45,114,101,97,100,121,63,32,116,99,112,108,41,0,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li37[] C_aligned={C_lihdr(0,0,7),40,97,50,57,57,49,41,0};
static C_char li38[] C_aligned={C_lihdr(0,0,23),40,97,50,57,57,55,32,104,111,115,116,55,55,55,32,112,111,114,116,55,55,56,41,0};
static C_char li39[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,99,111,110,110,101,99,116,32,104,111,115,116,32,46,32,114,101,115,116,41,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,112,111,114,116,45,62,102,105,108,101,110,111,32,112,32,108,111,99,41,0,0,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,100,100,114,101,115,115,101,115,32,112,41,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,112,111,114,116,45,110,117,109,98,101,114,115,32,112,41};
static C_char li43[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,101,114,45,112,111,114,116,32,116,99,112,108,41,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,97,98,97,110,100,111,110,45,112,111,114,116,32,112,41};
static C_char li45[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,116,99,112,35,116,99,112,45,108,105,115,116,101,110,101,114,45,102,105,108,101,110,111,32,108,41,0,0,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub753(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int err, optlen;
optlen = sizeof(err);
if (typecorrect_getsockopt(socket, SOL_SOCKET, SO_ERROR, &err, (socklen_t *)&optlen) == SOCKET_ERROR)
  C_return(SOCKET_ERROR);
C_return(err);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub414(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer(C_a0);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a1);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;
memset(addr, 0, sizeof(struct sockaddr_in));
addr->sin_family = AF_INET;
addr->sin_port = htons(port);
addr->sin_addr.s_addr = htonl(INADDR_ANY);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word stub282(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer(C_a0);
char * host=(char * )C_string_or_null(C_a1);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a2);
struct hostent *he = gethostbyname(host);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;
if(he == NULL) C_return(0);
memset(addr, 0, sizeof(struct sockaddr_in));
addr->sin_family = AF_INET;
addr->sin_port = htons((short)port);
addr->sin_addr = *((struct in_addr *)he->h_addr);
C_return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub270(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * serv=(char * )C_string_or_null(C_a0);
char * proto=(char * )C_string_or_null(C_a1);
struct servent *se;
     if((se = getservbyname(serv, proto)) == NULL) C_return(0);
     else C_return(ntohs(se->s_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word stub265(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
#ifdef _WIN32
     C_return(WSAStartup(MAKEWORD(1, 1), &wsa) == 0);
#else
     signal(SIGPIPE, SIG_IGN);
     C_return(1);
#endif
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub260(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
unsigned char *ptr;
unsigned int len = sizeof(struct sockaddr_in);
if(getpeername(s, (struct sockaddr *)&sa, ((socklen_t *)&len)) != 0) C_return(NULL);
ptr = (unsigned char *)&sa.sin_addr;
C_snprintf(addr_buffer, sizeof(addr_buffer), "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);
C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub255(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
int len = sizeof(struct sockaddr_in);
if(getpeername(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);
else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub250(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
int len = sizeof(struct sockaddr_in);
if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) C_return(-1);
else C_return(ntohs(sa.sin_port));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub244(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;
unsigned char *ptr;
int len = sizeof(struct sockaddr_in);
if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)&len) != 0) C_return(NULL);
ptr = (unsigned char *)&sa.sin_addr;
C_snprintf(addr_buffer, sizeof(addr_buffer), "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);
C_return(addr_buffer);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub233(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
void * msg=(void * )C_data_pointer_or_null(C_a1);
int offset=(int )C_unfix(C_a2);
int len=(int )C_unfix(C_a3);
int flags=(int )C_unfix(C_a4);
C_return(send(s, (char *)msg+offset, len, flags));
C_ret:
#undef return

return C_r;}

/* from k1240 */
C_regparm static C_word stub224(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_set_socket_options(t0));
return C_r;}

/* from k1233 */
C_regparm static C_word stub219(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_check_fd_ready(t0));
return C_r;}

/* from k1223 */
C_regparm static C_word stub210(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)connect(t0,t1,t2));
return C_r;}

/* from k1208 */
C_regparm static C_word stub202(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)shutdown(t0,t1));
return C_r;}

/* from k1194 */
C_regparm static C_word stub191(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)recv(t0,t1,t2,t3));
return C_r;}

/* from k1175 */
C_regparm static C_word stub183(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)closesocket(t0));
return C_r;}

/* from k1162 */
C_regparm static C_word stub172(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
C_r=C_fix((C_word)accept(t0,t1,t2));
return C_r;}

/* from k1147 */
C_regparm static C_word stub164(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)listen(t0,t1));
return C_r;}

/* from k1133 */
C_regparm static C_word stub154(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)bind(t0,t1,t2));
return C_r;}

/* from k1118 */
C_regparm static C_word stub145(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)socket(t0,t1,t2));
return C_r;}

/* from chicken.tcp#interrupted? */
C_regparm static C_word stub139(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(call_was_interrupted());
return C_r;}

/* from chicken.tcp#in-progress? */
C_regparm static C_word stub136(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(call_in_progress());
return C_r;}

/* from chicken.tcp#retry? */
C_regparm static C_word stub133(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_mk_bool(should_retry_call());
return C_r;}

/* from k1094 */
C_regparm static C_word stub128(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)errormsg_from_code(t0));
return C_r;}

/* from chicken.tcp#last-error-code */
C_regparm static C_word stub124(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)get_last_socket_error());
return C_r;}

C_noret_decl(f3618)
static void C_ccall f3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word *av) C_noret;
C_noret_decl(f_1079)
static void C_ccall f_1079(C_word c,C_word *av) C_noret;
C_noret_decl(f_1082)
static void C_ccall f_1082(C_word c,C_word *av) C_noret;
C_noret_decl(f_1310)
static void C_ccall f_1310(C_word c,C_word *av) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word *av) C_noret;
C_noret_decl(f_1321)
static void C_ccall f_1321(C_word c,C_word *av) C_noret;
C_noret_decl(f_1337)
static void f_1337(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1346)
static void C_ccall f_1346(C_word c,C_word *av) C_noret;
C_noret_decl(f_1369)
static void f_1369(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word *av) C_noret;
C_noret_decl(f_1398)
static void C_ccall f_1398(C_word c,C_word *av) C_noret;
C_noret_decl(f_1401)
static void f_1401(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word *av) C_noret;
C_noret_decl(f_1414)
static void C_ccall f_1414(C_word c,C_word *av) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word *av) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word *av) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word *av) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word *av) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word *av) C_noret;
C_noret_decl(f_1469)
static void C_ccall f_1469(C_word c,C_word *av) C_noret;
C_noret_decl(f_1472)
static void C_ccall f_1472(C_word c,C_word *av) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word *av) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word *av) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word *av) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word *av) C_noret;
C_noret_decl(f_1516)
static void C_ccall f_1516(C_word c,C_word *av) C_noret;
C_noret_decl(f_1520)
static void C_ccall f_1520(C_word c,C_word *av) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word *av) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word *av) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word *av) C_noret;
C_noret_decl(f_1575)
static void f_1575(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word *av) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word *av) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word *av) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word *av) C_noret;
C_noret_decl(f_1649)
static void C_ccall f_1649(C_word c,C_word *av) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word *av) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word *av) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word *av) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word *av) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word *av) C_noret;
C_noret_decl(f_1706)
static void f_1706(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word *av) C_noret;
C_noret_decl(f_1723)
static void C_ccall f_1723(C_word c,C_word *av) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word *av) C_noret;
C_noret_decl(f_1731)
static void C_ccall f_1731(C_word c,C_word *av) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word *av) C_noret;
C_noret_decl(f_1737)
static void f_1737(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word *av) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word *av) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word *av) C_noret;
C_noret_decl(f_1753)
static void C_ccall f_1753(C_word c,C_word *av) C_noret;
C_noret_decl(f_1754)
static void f_1754(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1758)
static void C_ccall f_1758(C_word c,C_word *av) C_noret;
C_noret_decl(f_1761)
static void f_1761(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word *av) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word *av) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word *av) C_noret;
C_noret_decl(f_1791)
static void C_ccall f_1791(C_word c,C_word *av) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word *av) C_noret;
C_noret_decl(f_1822)
static void C_ccall f_1822(C_word c,C_word *av) C_noret;
C_noret_decl(f_1826)
static void C_ccall f_1826(C_word c,C_word *av) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word *av) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word *av) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word *av) C_noret;
C_noret_decl(f_1852)
static void f_1852(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word *av) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word *av) C_noret;
C_noret_decl(f_1873)
static void f_1873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1875)
static void f_1875(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1897)
static void C_ccall f_1897(C_word c,C_word *av) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word *av) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903(C_word c,C_word *av) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word *av) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word *av) C_noret;
C_noret_decl(f_1940)
static void C_ccall f_1940(C_word c,C_word *av) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word *av) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word *av) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988(C_word c,C_word *av) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word *av) C_noret;
C_noret_decl(f_1996)
static void f_1996(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2002)
static void f_2002(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word *av) C_noret;
C_noret_decl(f_2046)
static void C_ccall f_2046(C_word c,C_word *av) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word *av) C_noret;
C_noret_decl(f_2058)
static void C_ccall f_2058(C_word c,C_word *av) C_noret;
C_noret_decl(f_2071)
static void C_ccall f_2071(C_word c,C_word *av) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word *av) C_noret;
C_noret_decl(f_2086)
static void C_ccall f_2086(C_word c,C_word *av) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word *av) C_noret;
C_noret_decl(f_2115)
static void f_2115(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2118)
static void f_2118(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2124)
static void f_2124(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2131)
static void C_ccall f_2131(C_word c,C_word *av) C_noret;
C_noret_decl(f_2135)
static void C_ccall f_2135(C_word c,C_word *av) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word *av) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word *av) C_noret;
C_noret_decl(f_2170)
static void C_ccall f_2170(C_word c,C_word *av) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word *av) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word *av) C_noret;
C_noret_decl(f_2190)
static void C_ccall f_2190(C_word c,C_word *av) C_noret;
C_noret_decl(f_2205)
static void C_ccall f_2205(C_word c,C_word *av) C_noret;
C_noret_decl(f_2218)
static void C_ccall f_2218(C_word c,C_word *av) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word *av) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word *av) C_noret;
C_noret_decl(f_2248)
static void C_ccall f_2248(C_word c,C_word *av) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word *av) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word *av) C_noret;
C_noret_decl(f_2268)
static void f_2268(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2274)
static void f_2274(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word *av) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word *av) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word *av) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word *av) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word *av) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word *av) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word *av) C_noret;
C_noret_decl(f_2344)
static void f_2344(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word *av) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word *av) C_noret;
C_noret_decl(f_2403)
static void C_ccall f_2403(C_word c,C_word *av) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word *av) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word *av) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word *av) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word *av) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word *av) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word *av) C_noret;
C_noret_decl(f_2559)
static void C_ccall f_2559(C_word c,C_word *av) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word *av) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word *av) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word *av) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word *av) C_noret;
C_noret_decl(f_2587)
static void f_2587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word *av) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word *av) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word *av) C_noret;
C_noret_decl(f_2602)
static void C_ccall f_2602(C_word c,C_word *av) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word *av) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word *av) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word *av) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word *av) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word *av) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word *av) C_noret;
C_noret_decl(f_2685)
static void C_ccall f_2685(C_word c,C_word *av) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word *av) C_noret;
C_noret_decl(f_2702)
static void C_ccall f_2702(C_word c,C_word *av) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word *av) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word *av) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word *av) C_noret;
C_noret_decl(f_2744)
static void f_2744(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word *av) C_noret;
C_noret_decl(f_2753)
static void C_ccall f_2753(C_word c,C_word *av) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word *av) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word *av) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word *av) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word *av) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word *av) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word *av) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word *av) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word *av) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word *av) C_noret;
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word *av) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word *av) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833(C_word c,C_word *av) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word *av) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word *av) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word *av) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word *av) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word *av) C_noret;
C_noret_decl(f_2915)
static void C_ccall f_2915(C_word c,C_word *av) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word *av) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word *av) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941(C_word c,C_word *av) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word *av) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word *av) C_noret;
C_noret_decl(f_2965)
static void C_ccall f_2965(C_word c,C_word *av) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word *av) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word *av) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word *av) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word *av) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word *av) C_noret;
C_noret_decl(f_3008)
static void C_ccall f_3008(C_word c,C_word *av) C_noret;
C_noret_decl(f_3034)
static void f_3034(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word *av) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word *av) C_noret;
C_noret_decl(f_3058)
static void C_ccall f_3058(C_word c,C_word *av) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word *av) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word *av) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word *av) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word *av) C_noret;
C_noret_decl(f_3082)
static void C_ccall f_3082(C_word c,C_word *av) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word *av) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word *av) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word *av) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word *av) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word *av) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word *av) C_noret;
C_noret_decl(f_3125)
static void C_ccall f_3125(C_word c,C_word *av) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word *av) C_noret;
C_noret_decl(f_3137)
static void C_ccall f_3137(C_word c,C_word *av) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word *av) C_noret;
C_noret_decl(f_3154)
static void C_ccall f_3154(C_word c,C_word *av) C_noret;
C_noret_decl(f_3158)
static void C_ccall f_3158(C_word c,C_word *av) C_noret;
C_noret_decl(f_3174)
static void C_ccall f_3174(C_word c,C_word *av) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178(C_word c,C_word *av) C_noret;
C_noret_decl(f_3182)
static void C_ccall f_3182(C_word c,C_word *av) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190(C_word c,C_word *av) C_noret;
C_noret_decl(f_3203)
static void C_ccall f_3203(C_word c,C_word *av) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word *av) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word *av) C_noret;
C_noret_decl(f_3221)
static void C_ccall f_3221(C_word c,C_word *av) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word *av) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word *av) C_noret;
C_noret_decl(f_3245)
static void C_ccall f_3245(C_word c,C_word *av) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word *av) C_noret;
C_noret_decl(f_3260)
static void C_ccall f_3260(C_word c,C_word *av) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word *av) C_noret;
C_noret_decl(f_3268)
static void C_ccall f_3268(C_word c,C_word *av) C_noret;
C_noret_decl(C_tcp_toplevel)
C_extern void C_ccall C_tcp_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1337)
static void C_ccall trf_1337(C_word c,C_word *av) C_noret;
static void C_ccall trf_1337(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1337(t0,t1,t2,t3);}

C_noret_decl(trf_1369)
static void C_ccall trf_1369(C_word c,C_word *av) C_noret;
static void C_ccall trf_1369(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1369(t0,t1,t2);}

C_noret_decl(trf_1401)
static void C_ccall trf_1401(C_word c,C_word *av) C_noret;
static void C_ccall trf_1401(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1401(t0,t1);}

C_noret_decl(trf_1575)
static void C_ccall trf_1575(C_word c,C_word *av) C_noret;
static void C_ccall trf_1575(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1575(t0,t1);}

C_noret_decl(trf_1706)
static void C_ccall trf_1706(C_word c,C_word *av) C_noret;
static void C_ccall trf_1706(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1706(t0,t1);}

C_noret_decl(trf_1737)
static void C_ccall trf_1737(C_word c,C_word *av) C_noret;
static void C_ccall trf_1737(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1737(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1754)
static void C_ccall trf_1754(C_word c,C_word *av) C_noret;
static void C_ccall trf_1754(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1754(t0,t1);}

C_noret_decl(trf_1761)
static void C_ccall trf_1761(C_word c,C_word *av) C_noret;
static void C_ccall trf_1761(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1761(t0,t1);}

C_noret_decl(trf_1852)
static void C_ccall trf_1852(C_word c,C_word *av) C_noret;
static void C_ccall trf_1852(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1852(t0,t1,t2,t3);}

C_noret_decl(trf_1873)
static void C_ccall trf_1873(C_word c,C_word *av) C_noret;
static void C_ccall trf_1873(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1873(t0,t1);}

C_noret_decl(trf_1875)
static void C_ccall trf_1875(C_word c,C_word *av) C_noret;
static void C_ccall trf_1875(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1875(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1996)
static void C_ccall trf_1996(C_word c,C_word *av) C_noret;
static void C_ccall trf_1996(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1996(t0,t1,t2,t3);}

C_noret_decl(trf_2002)
static void C_ccall trf_2002(C_word c,C_word *av) C_noret;
static void C_ccall trf_2002(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2002(t0,t1,t2,t3);}

C_noret_decl(trf_2115)
static void C_ccall trf_2115(C_word c,C_word *av) C_noret;
static void C_ccall trf_2115(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2115(t0,t1);}

C_noret_decl(trf_2118)
static void C_ccall trf_2118(C_word c,C_word *av) C_noret;
static void C_ccall trf_2118(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2118(t0,t1);}

C_noret_decl(trf_2124)
static void C_ccall trf_2124(C_word c,C_word *av) C_noret;
static void C_ccall trf_2124(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2124(t0,t1);}

C_noret_decl(trf_2268)
static void C_ccall trf_2268(C_word c,C_word *av) C_noret;
static void C_ccall trf_2268(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2268(t0,t1);}

C_noret_decl(trf_2274)
static void C_ccall trf_2274(C_word c,C_word *av) C_noret;
static void C_ccall trf_2274(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2274(t0,t1);}

C_noret_decl(trf_2344)
static void C_ccall trf_2344(C_word c,C_word *av) C_noret;
static void C_ccall trf_2344(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2344(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2587)
static void C_ccall trf_2587(C_word c,C_word *av) C_noret;
static void C_ccall trf_2587(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2587(t0,t1);}

C_noret_decl(trf_2744)
static void C_ccall trf_2744(C_word c,C_word *av) C_noret;
static void C_ccall trf_2744(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2744(t0,t1);}

C_noret_decl(trf_3034)
static void C_ccall trf_3034(C_word c,C_word *av) C_noret;
static void C_ccall trf_3034(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3034(t0,t1,t2);}

/* f3618 in loop in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f3618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f3618,c,av);}
/* tcp.scm:651: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* k1074 */
static void C_ccall f_1076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1076,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1079,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scheduler_toplevel(2,av2);}}

/* k1077 in k1074 */
static void C_ccall f_1079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_1079,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1082,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k1080 in k1077 in k1074 */
static void C_ccall f_1082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1082,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1310,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(stub265(C_SCHEME_UNDEFINED))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_1310(2,av2);}}
else{
/* tcp.scm:238: ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[7];
av2[3]=lf[110];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1310(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1310,c,av);}
a=C_alloc(15);
t2=C_mutate(&lf[2] /* (set! chicken.tcp#gethostaddr ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1337,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! chicken.tcp#tcp-listen ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1550,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[22]+1 /* (set! chicken.tcp#tcp-listener? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1649,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[23]+1 /* (set! chicken.tcp#tcp-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1658,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:346: scheme#make-parameter */
t7=C_fast_retrieve(lf[105]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k1315 in k1396 in k1392 in loop in a2991 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1317(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1317,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1321,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
/* tcp.scm:241: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
av2[2]=C_i_foreign_string_argumentp(((C_word*)t0)[3]);
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_1401(t3,stub270(C_SCHEME_UNDEFINED,t1,C_SCHEME_FALSE));}}

/* k1319 in k1315 in k1396 in k1392 in loop in a2991 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1321,c,av);}
t2=((C_word*)t0)[2];
f_1401(t2,stub270(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1));}

/* chicken.tcp#gethostaddr in k1308 in k1080 in k1077 in k1074 */
static void f_1337(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1337,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=C_i_foreign_block_argumentp(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1346,a[2]=t1,a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* tcp.scm:247: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word av2[3];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t6;
av2[2]=C_i_foreign_string_argumentp(t3);
tp(3,av2);}}
else{
t7=C_fix((C_word)sizeof(unsigned short) * CHAR_BIT);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=stub282(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE,C_i_foreign_unsigned_ranged_integer_argumentp(t4,t7));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k1344 in chicken.tcp#gethostaddr in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1346,c,av);}
t2=C_fix((C_word)sizeof(unsigned short) * CHAR_BIT);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub282(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1,C_i_foreign_unsigned_ranged_integer_argumentp(((C_word*)t0)[4],t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in a2991 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_1369(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_1369,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* tcp.scm:283: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t2);
if(C_truep(C_u_i_char_equalp(t3,C_make_character(58)))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1394,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:287: substring */
t5=*((C_word*)lf[85]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fixnum_plus(t2,C_fix(1));
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
/* tcp.scm:293: loop */
t6=t1;
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}}

/* k1392 in loop in a2991 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1394,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1398,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:288: substring */
t3=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1396 in k1392 in loop in a2991 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1398,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1317,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
/* tcp.scm:241: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t3;
av2[2]=C_i_foreign_string_argumentp(t1);
tp(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_1317(2,av2);}}}

/* k1399 in k1396 in k1392 in loop in a2991 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_1401(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_1401,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_fix(0),t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1414,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1418,a[2]=t4,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t5;
av2[2]=lf[84];
av2[3]=lf[13];
tp(4,av2);}}
else{
/* tcp.scm:286: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_values(4,av2);}}}

/* k1402 in k1399 in k1396 in k1392 in loop in a2991 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1404,c,av);}
/* tcp.scm:286: scheme#values */{
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
C_values(4,av2);}}

/* k1412 in k1399 in k1396 in k1392 in loop in a2991 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1414,c,av);}
/* tcp.scm:291: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[74];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1416 in k1399 in k1396 in k1392 in loop in a2991 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1418(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1418,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1422,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1420 in k1416 in k1399 in k1396 in k1392 in loop in a2991 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1422,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:291: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1457,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1542,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:306: gethostaddr */
f_1337(t3,t1,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t3=C_i_foreign_block_argumentp(t1);
t4=C_fix((C_word)sizeof(unsigned short) * CHAR_BIT);
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=stub414(C_SCHEME_UNDEFINED,t3,C_i_foreign_unsigned_ranged_integer_argumentp(((C_word*)t0)[5],t4));
f_1460(2,av2);}}}

/* k1458 in k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1460,c,av);}
a=C_alloc(7);
t2=C_fix((C_word)AF_INET);
t3=stub145(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(t2),C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]),C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1466,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t5=C_eqp(C_fix((C_word)INVALID_SOCKET),t3);
if(C_truep(t5)){
/* tcp.scm:313: ##sys#error */
t6=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=lf[17];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_1466(2,av2);}}}

/* k1464 in k1458 in k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1466(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1466,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1469,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=C_eqp(C_fix((C_word)SOCKET_ERROR),stub224(C_SCHEME_UNDEFINED,t3));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1512,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1516,a[2]=t5,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t6;
av2[2]=lf[15];
av2[3]=lf[13];
tp(4,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1469(2,av2);}}}

/* k1467 in k1464 in k1458 in k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1469(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_1469,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1472,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_fix((C_word)sizeof(struct sockaddr_in));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t2)[3]);
t6=(C_truep(((C_word*)t2)[4])?C_i_foreign_block_argumentp(((C_word*)t2)[4]):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t4);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),stub154(C_SCHEME_UNDEFINED,t5,t6,t7));
if(C_truep(t8)){
t9=stub124(C_SCHEME_UNDEFINED);
t10=C_i_foreign_fixnum_argumentp(((C_word*)t2)[3]);
t11=stub183(C_SCHEME_UNDEFINED,t10);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1488,a[2]=t3,a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1492,a[2]=t12,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t13;
av2[2]=lf[14];
av2[3]=lf[13];
tp(4,av2);}}
else{
t9=((C_word*)t2)[2];
f_1575(t9,((C_word*)t2)[3]);}}

/* k1470 in k1467 in k1464 in k1458 in k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1472,c,av);}
t2=((C_word*)t0)[2];
f_1575(t2,((C_word*)t0)[3]);}

/* k1486 in k1467 in k1464 in k1458 in k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1488,c,av);}
/* tcp.scm:318: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k1490 in k1467 in k1464 in k1458 in k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1492,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1496,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:172: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub128(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k1494 in k1490 in k1467 in k1464 in k1458 in k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1496,c,av);}
/* tcp.scm:318: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k1510 in k1464 in k1458 in k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1512,c,av);}
/* tcp.scm:316: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1514 in k1464 in k1458 in k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1516(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1516,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1520,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1518 in k1514 in k1464 in k1458 in k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1520,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:316: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* k1540 in k1455 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1542,c,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_1460(2,av2);}}
else{
/* tcp.scm:307: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=lf[18];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}}

/* chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1550(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_1550,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_fix(100):C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_i_check_fixnum(t2);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1569,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t11=C_fixnum_lessp(t2,C_fix(0));
if(C_truep(t11)){
if(C_truep(t11)){
/* tcp.scm:326: ##sys#signal-hook */
t12=*((C_word*)lf[6]+1);{
C_word av2[6];
av2[0]=t12;
av2[1]=t10;
av2[2]=lf[20];
av2[3]=lf[8];
av2[4]=lf[21];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t12+1)))(6,av2);}}
else{
t12=t10;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_SCHEME_UNDEFINED;
f_1569(2,av2);}}}
else{
if(C_truep(C_fixnum_greaterp(t2,C_fix(65535)))){
/* tcp.scm:326: ##sys#signal-hook */
t12=*((C_word*)lf[6]+1);{
C_word av2[6];
av2[0]=t12;
av2[1]=t10;
av2[2]=lf[20];
av2[3]=lf[8];
av2[4]=lf[21];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t12+1)))(6,av2);}}
else{
t12=t10;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_SCHEME_UNDEFINED;
f_1569(2,av2);}}}}

/* k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_1569,c,av);}
a=C_alloc(11);
t2=C_i_check_fixnum(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1575,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_fix((C_word)SOCK_STREAM);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1457,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:304: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t5;
av2[2]=C_fix((C_word)sizeof(struct sockaddr_in));
tp(3,av2);}}

/* k1573 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void f_1575(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_1575,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1578,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(t1);
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t5=C_eqp(C_fix((C_word)SOCKET_ERROR),stub164(C_SCHEME_UNDEFINED,t3,t4));
if(C_truep(t5)){
t6=stub124(C_SCHEME_UNDEFINED);
t7=C_i_foreign_fixnum_argumentp(t1);
t8=stub183(C_SCHEME_UNDEFINED,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1597,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1601,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[12];
av2[3]=lf[13];
tp(4,av2);}}
else{
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_a_i_record2(&a,2,lf[5],t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k1576 in k1573 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1578,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_record2(&a,2,lf[5],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1595 in k1573 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1597,c,av);}
/* tcp.scm:330: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[8];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k1599 in k1573 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1601,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1605,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:172: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub128(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k1603 in k1599 in k1573 in k1567 in chicken.tcp#tcp-listen in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1605,c,av);}
/* tcp.scm:330: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-listener? in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1649,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_structurep(t2,lf[5]):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.tcp#tcp-close in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1658(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1658,c,av);}
a=C_alloc(8);
t3=C_i_check_structure(t2,lf[5]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=C_eqp(C_fix((C_word)SOCKET_ERROR),stub183(C_SCHEME_UNDEFINED,t5));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1678,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1682,a[2]=t7,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t8;
av2[2]=lf[25];
av2[3]=lf[13];
tp(4,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k1676 in chicken.tcp#tcp-close in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1678,c,av);}
/* tcp.scm:341: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[24];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1680 in chicken.tcp#tcp-close in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1682(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1682,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1686,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1684 in k1680 in chicken.tcp#tcp-close in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1686,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:341: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1700(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_1700,c,av);}
a=C_alloc(16);
t2=C_mutate((C_word*)lf[26]+1 /* (set! chicken.tcp#tcp-buffer-size ...) */,t1);
t3=C_set_block_item(lf[27] /* chicken.tcp#tcp-read-timeout */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[28] /* chicken.tcp#tcp-write-timeout */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[29] /* chicken.tcp#tcp-connect-timeout */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[30] /* chicken.tcp#tcp-accept-timeout */,0,C_SCHEME_UNDEFINED);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1706,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t12=C_fixnum_times(C_fix(60),C_fix(1000));
t13=C_set_block_item(t10,0,t12);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1723,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3268,a[2]=t14,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:357: check */
f_1706(t15,lf[109]);}

/* check in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_1706(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1706,2,t1,t2);}
a=C_alloc(4);
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1708,a[2]=t2,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_1708 in check in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1708,c,av);}
if(C_truep(t2)){
t3=C_i_check_fixnum_2(t2,((C_word*)t0)[2]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1723,c,av);}
a=C_alloc(8);
t2=C_mutate((C_word*)lf[27]+1 /* (set! chicken.tcp#tcp-read-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1727,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3264,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:358: check */
f_1706(t4,lf[108]);}

/* k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1727,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[28]+1 /* (set! chicken.tcp#tcp-write-timeout ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1731,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3260,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:359: check */
f_1706(t4,lf[107]);}

/* k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1731,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[29]+1 /* (set! chicken.tcp#tcp-connect-timeout ...) */,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1735,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3256,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:360: check */
f_1706(t5,lf[106]);}

/* k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1735(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,5)))){
C_save_and_reclaim((void *)f_1735,c,av);}
a=C_alloc(31);
t2=C_mutate((C_word*)lf[30]+1 /* (set! chicken.tcp#tcp-accept-timeout ...) */,t1);
t3=C_fast_retrieve(lf[26]);
t4=C_mutate(&lf[31] /* (set! chicken.tcp#io-ports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1737,a[2]=t3,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[65]+1 /* (set! chicken.tcp#tcp-accept ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2571,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[70]+1 /* (set! chicken.tcp#tcp-accept-ready? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2675,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[73]+1 /* (set! chicken.tcp#tcp-connect ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2725,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[86] /* (set! chicken.tcp#tcp-port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3034,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[90]+1 /* (set! chicken.tcp#tcp-addresses ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3052,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[94]+1 /* (set! chicken.tcp#tcp-port-numbers ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3119,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[98]+1 /* (set! chicken.tcp#tcp-listener-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3190,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[101]+1 /* (set! chicken.tcp#tcp-abandon-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3229,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[103]+1 /* (set! chicken.tcp#tcp-listener-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3245,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t14=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}

/* chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_1737(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_1737,5,t0,t1,t2,t3,t4);}
a=C_alloc(15);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1741,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(make_socket_nonblocking(t3))){
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_1741(2,av2);}}
else{
t6=stub124(C_SCHEME_UNDEFINED);
t7=C_i_foreign_fixnum_argumentp(t3);
t8=stub183(C_SCHEME_UNDEFINED,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2559,a[2]=t5,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2563,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[64];
av2[3]=lf[13];
tp(4,av2);}}}

/* k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1741,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1744,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:367: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t2;
av2[2]=C_fix(1024);
tp(3,av2);}}

/* k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1744(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,2)))){
C_save_and_reclaim((void *)f_1744,c,av);}
a=C_alloc(26);
t2=((C_word*)t0)[2];
t3=C_a_i_vector5(&a,5,((C_word*)t2)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t1,C_fix(0));
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1750,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=t5,a[5]=t3,a[6]=t7,a[7]=C_SCHEME_UNDEFINED,a[8]=t11,a[9]=t9,a[10]=((C_word*)t2)[3],a[11]=((C_word*)t2)[4],tmp=(C_word)a,a+=12,tmp);
/* tcp.scm:373: tbs */
t13=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1750,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+7,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1753,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[7])){
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[7],C_fix(0)))){
/* tcp.scm:376: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_1753(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_1753(2,av2);}}}

/* k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1753(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(73,c,12)))){
C_save_and_reclaim((void *)f_1753,c,av);}
a=C_alloc(73);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1754,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1851,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[6],a[4]=((C_word*)t2)[7],a[5]=t1,a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[9],a[8]=((C_word*)t2)[5],a[9]=t5,a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],tmp=(C_word)a,a+=12,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2186,a[2]=((C_word*)t2)[6],a[3]=((C_word*)t2)[4],a[4]=t5,a[5]=((C_word*)t2)[3],a[6]=t3,a[7]=((C_word)li19),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2218,a[2]=((C_word*)t2)[6],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word)li20),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2260,a[2]=((C_word*)t2)[9],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[8],a[5]=((C_word*)t2)[5],a[6]=((C_word)li21),tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2310,a[2]=((C_word*)t2)[6],a[3]=((C_word*)t2)[4],a[4]=t5,a[5]=((C_word*)t2)[3],a[6]=t3,a[7]=((C_word)li23),tmp=(C_word)a,a+=8,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2338,a[2]=((C_word*)t2)[6],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[3],a[5]=t3,a[6]=((C_word)li25),tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2399,a[2]=((C_word*)t2)[6],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[3],a[5]=t3,a[6]=t5,a[7]=((C_word)li29),tmp=(C_word)a,a+=8,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2522,a[2]=((C_word*)t2)[6],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[3],a[5]=t5,a[6]=((C_word)li30),tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:405: chicken.port#make-input-port */
t14=C_fast_retrieve(lf[59]);{
C_word *av2;
if(c >= 13) {
  av2=av;
} else {
  av2=C_alloc(13);
}
av2[0]=t14;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=t9;
av2[5]=lf[60];
av2[6]=t10;
av2[7]=lf[61];
av2[8]=t11;
av2[9]=lf[62];
av2[10]=t12;
av2[11]=lf[63];
av2[12]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(13,av2);}}

/* read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_1754(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1754,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:379: tcp-read-timeout */
t3=C_fast_retrieve(lf[27]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1756 in read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_1758,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1848,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:380: chicken.time#current-process-milliseconds */
t4=C_fast_retrieve(lf[41]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;
f_1761(t3,C_SCHEME_FALSE);}}

/* k1759 in k1756 in read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_1761(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_1761,2,t0,t1);}
a=C_alloc(13);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1766,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word)li6),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[8];
f_1766(2,av2);}}

/* loop in k1759 in k1756 in read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1766(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1766,c,av);}
a=C_alloc(8);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=C_fix(1024);
t5=C_fix(0);
t6=stub191(C_SCHEME_UNDEFINED,t2,t3,t4,t5);
t7=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t7)){
if(C_truep(stub133(C_SCHEME_UNDEFINED))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1785,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
/* tcp.scm:386: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t8;
av2[2]=C_fast_retrieve(lf[32]);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_1785(2,av2);}}}
else{
if(C_truep(stub139(C_SCHEME_UNDEFINED))){
/* tcp.scm:396: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1822,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1826,a[2]=t8,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=lf[40];
av2[3]=lf[13];
tp(4,av2);}}}}
else{
t8=C_set_block_item(((C_word*)t0)[7],0,t6);
t9=C_i_set_i_slot(((C_word*)t0)[8],C_fix(4),t6);
t10=C_set_block_item(((C_word*)t0)[9],0,C_fix(0));
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}

/* k1783 in loop in k1759 in k1756 in read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1785,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1788,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:388: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[32]);
av2[3]=((C_word*)t0)[5];
av2[4]=lf[37];
tp(5,av2);}}

/* k1786 in k1783 in loop in k1759 in k1756 in read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1788,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1791,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:389: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t3;
tp(2,av2);}}

/* k1789 in k1786 in k1783 in loop in k1759 in k1756 in read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_1791,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1794,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_slot(C_fast_retrieve(lf[32]),C_fix(13)))){
/* tcp.scm:391: ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[33];
av2[3]=lf[34];
av2[4]=((C_word*)t2)[4];
av2[5]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
/* tcp.scm:394: loop */
t4=((C_word*)((C_word*)t2)[2])[1];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t2)[3];
f_1766(2,av2);}}}

/* k1792 in k1789 in k1786 in k1783 in loop in k1759 in k1756 in read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 in ... */
static void C_ccall f_1794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1794,c,av);}
/* tcp.scm:394: loop */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_1766(2,av2);}}

/* k1820 in loop in k1759 in k1756 in read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1822,c,av);}
/* tcp.scm:398: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1824 in loop in k1759 in k1756 in read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1826(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1826,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1830,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1828 in k1824 in loop in k1759 in k1756 in read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1830,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:398: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* k1846 in k1756 in read-input in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_1848,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_1761(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1851(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(62,c,6)))){
C_save_and_reclaim((void *)f_1851,c,av);}
a=C_alloc(62);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1852,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1996,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word)li13),tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2071,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=t4,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2086,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=t4,a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2107,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],a[8]=t4,a[9]=((C_word)li16),tmp=(C_word)a,a+=10,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2170,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp);
t10=C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,t6,t7,t8,t9,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2046,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=t3,a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* tcp.scm:577: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t11;
av2[2]=C_fix(2);
av2[3]=t10;
av2[4]=lf[51];
av2[5]=lf[48];
tp(6,av2);}}

/* output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_1852(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_1852,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:498: tcp-write-timeout */
t5=C_fast_retrieve(lf[28]);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1856,c,av);}
a=C_alloc(5);
t2=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(15));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:499: ##sys#encode-buffer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[6];
av2[5]=t2;
av2[6]=t3;
tp(7,av2);}}

/* a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_1865,c,av);}
a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1873,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[3])){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1995,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:504: chicken.time#current-process-milliseconds */
t7=C_fast_retrieve(lf[41]);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=t5;
f_1873(t6,C_SCHEME_FALSE);}}

/* k1871 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_1873(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1873,2,t0,t1);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li9),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1875(t5,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1);}

/* loop in k1871 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_1875(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_1875,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_i_fixnum_min(C_fix(8192),t2);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t7=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t8=C_i_foreign_fixnum_argumentp(t3);
t9=C_i_foreign_fixnum_argumentp(t5);
t10=C_fix(0);
t11=stub233(C_SCHEME_UNDEFINED,t6,t7,t8,t9,t10);
t12=C_eqp(C_fix((C_word)SOCKET_ERROR),t11);
if(C_truep(t12)){
if(C_truep(stub133(C_SCHEME_UNDEFINED))){
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1897,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
/* tcp.scm:510: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word av2[4];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t13;
av2[2]=C_fast_retrieve(lf[32]);
av2[3]=t4;
tp(4,av2);}}
else{
t14=t13;{
C_word av2[2];
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_1897(2,av2);}}}
else{
if(C_truep(stub139(C_SCHEME_UNDEFINED))){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1929,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word)li8),tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:518: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word av2[3];
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=t13;
tp(3,av2);}}
else{
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1940,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1944,a[2]=t13,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t14;
av2[2]=lf[44];
av2[3]=lf[13];
tp(4,av2);}}}}
else{
if(C_truep(C_fixnum_lessp(t11,t2))){
t13=C_fixnum_difference(t2,t11);
t14=C_fixnum_plus(t3,t11);
t15=C_eqp(t11,C_fix(0));
if(C_truep(t15)){
/* tcp.scm:523: loop */
t18=t1;
t19=t13;
t20=t14;
t21=((C_word*)t0)[5];
t1=t18;
t2=t19;
t3=t20;
t4=t21;
goto loop;}
else{
if(C_truep(((C_word*)t0)[5])){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1988,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t13,a[6]=t14,tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:527: chicken.time#current-process-milliseconds */
t17=C_fast_retrieve(lf[41]);{
C_word av2[2];
av2[0]=t17;
av2[1]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}
else{
/* tcp.scm:523: loop */
t18=t1;
t19=t13;
t20=t14;
t21=C_SCHEME_FALSE;
t1=t18;
t2=t19;
t3=t20;
t4=t21;
goto loop;}}}
else{
t13=t1;{
C_word av2[2];
av2[0]=t13;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}}

/* k1895 in loop in k1871 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1897,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1900,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:511: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[32]);
av2[3]=((C_word*)t0)[8];
av2[4]=lf[43];
tp(5,av2);}}

/* k1898 in k1895 in loop in k1871 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 in ... */
static void C_ccall f_1900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1900,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1903,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:512: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t3;
tp(2,av2);}}

/* k1901 in k1898 in k1895 in loop in k1871 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in ... */
static void C_ccall f_1903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1903,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1906,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(C_fast_retrieve(lf[32]),C_fix(13)))){
/* tcp.scm:514: ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[33];
av2[3]=lf[42];
av2[4]=((C_word*)t2)[7];
av2[5]=((C_word*)t2)[8];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
/* tcp.scm:516: loop */
t4=((C_word*)((C_word*)t2)[2])[1];
f_1875(t4,((C_word*)t2)[3],((C_word*)t2)[4],((C_word*)t2)[5],((C_word*)t2)[6]);}}

/* k1904 in k1901 in k1898 in k1895 in loop in k1871 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in ... */
static void C_ccall f_1906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1906,c,av);}
/* tcp.scm:516: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1875(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* a1928 in loop in k1871 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1929,c,av);}
/* tcp.scm:519: g649 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1875(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k1938 in loop in k1871 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1940,c,av);}
/* tcp.scm:521: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k1942 in loop in k1871 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1944(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_1944,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1948,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k1946 in k1942 in loop in k1871 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 in ... */
static void C_ccall f_1948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1948,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:521: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* k1986 in loop in k1871 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_1988,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,t1,((C_word*)t0)[2]);
/* tcp.scm:523: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1875(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k1993 in a1864 in k1854 in output-to-socket in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_1995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_1995,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_1873(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* add-to-buf in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_1996(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_1996,4,t0,t1,t2,t3);}
a=C_alloc(11);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t5,a[7]=((C_word*)t0)[5],a[8]=((C_word)li12),tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_2002(t7,t1,t3,C_fix(0));}

/* loop in add-to-buf in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_2002(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2002,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t2);
if(C_truep(C_fixnum_greaterp(t5,((C_word*)t0)[3]))){
t6=C_fixnum_difference(((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);
t7=C_copy_memory_with_offset(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1],t3,t6);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t2,a[6]=t6,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:537: output-to-socket */
t9=((C_word*)t0)[7];
f_1852(t9,t8,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t6=C_copy_memory_with_offset(((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1],t3,t2);
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t2);
t8=C_set_block_item(((C_word*)t0)[2],0,t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}

/* k2022 in loop in add-to-buf in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2024,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
/* tcp.scm:539: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2002(t3,((C_word*)t0)[4],C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[6]),C_fixnum_plus(((C_word*)t0)[7],((C_word*)t0)[6]));}

/* k2044 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2046,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=C_i_setslot(((C_word*)t0)[3],C_fix(3),lf[47]);
t4=C_i_setslot(((C_word*)t0)[3],C_fix(7),lf[48]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2055,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:580: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[8];
tp(4,av2);}}

/* k2053 in k2044 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2055,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2058,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:581: ##sys#set-port-data! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[5];
av2[3]=((C_word*)t2)[8];
tp(4,av2);}}

/* k2056 in k2053 in k2044 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2058,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_i_setslot(((C_word*)t0)[3],C_fix(15),((C_word*)t0)[6]);
t5=C_i_setslot(((C_word*)t0)[5],C_fix(15),((C_word*)t0)[6]);
/* tcp.scm:586: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[7];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[5];
C_values(4,av2);}}

/* a2070 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2071,c,av);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2075,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm:549: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t4;
av2[2]=C_fix(4);
tp(3,av2);}}

/* k2073 in a2070 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2075,c,av);}
t2=C_utf_insert(t1,C_fix(0),((C_word*)t0)[2]);
if(C_truep(((C_word*)t0)[3])){
/* tcp.scm:552: add-to-buf */
t3=((C_word*)t0)[4];
f_1996(t3,((C_word*)t0)[5],t1,t2);}
else{
/* tcp.scm:553: output-to-socket */
t3=((C_word*)t0)[6];
f_1852(t3,((C_word*)t0)[5],t1,t2);}}

/* a2085 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2086(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2086,c,av);}
t6=C_fixnum_difference(t5,t4);
if(C_truep(C_fixnum_greaterp(t6,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* tcp.scm:558: add-to-buf */
t7=((C_word*)t0)[3];
f_1996(t7,t1,t3,t6);}
else{
/* tcp.scm:559: output-to-socket */
t7=((C_word*)t0)[4];
f_1852(t7,t1,t3,t6);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* a2106 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2107(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_2107,c,av);}
a=C_alloc(10);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2115,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t6=(C_truep(((C_word*)t0)[6])?C_fixnum_greaterp(((C_word*)((C_word*)t0)[7])[1],C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2164,a[2]=((C_word*)t0)[7],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:564: output-to-socket */
t8=((C_word*)t0)[8];
f_1852(t8,t7,((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}
else{
t7=t5;
f_2115(t7,C_SCHEME_UNDEFINED);}}}

/* k2113 in a2106 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_2115(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2115,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(2)))){
t3=t2;
f_2118(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_fix((C_word)SHUT_WR);
t4=t2;
f_2118(t4,stub202(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]),C_i_foreign_fixnum_argumentp(t3)));}}

/* k2116 in k2113 in a2106 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_2118(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2118,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=t2;
f_2124(t4,C_eqp(C_fix((C_word)SOCKET_ERROR),stub183(C_SCHEME_UNDEFINED,t3)));}
else{
t3=t2;
f_2124(t3,C_SCHEME_FALSE);}}

/* k2122 in k2116 in k2113 in a2106 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_2124(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2124,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2131,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2135,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=lf[46];
av2[3]=lf[13];
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2129 in k2122 in k2116 in k2113 in a2106 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2131,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:568: ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2133 in k2122 in k2116 in k2113 in a2106 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2135(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2135,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2139,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2137 in k2133 in k2122 in k2116 in k2113 in a2106 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2139,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:568: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* k2162 in a2106 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2164,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];
f_2115(t3,t2);}

/* a2169 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2170,c,av);}
a=C_alloc(4);
t3=(C_truep(((C_word*)t0)[2])?C_fixnum_greaterp(((C_word*)((C_word*)t0)[3])[1],C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:571: output-to-socket */
t5=((C_word*)t0)[4];
f_1852(t5,t4,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2178 in a2169 in k1849 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2180,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2185 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2186,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:408: read-input */
t3=((C_word*)t0)[6];
f_1754(t3,t2);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2190(2,av2);}}}

/* k2188 in a2185 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_2190,c,av);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)((C_word*)t0)[5])[1],C_fix(15));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2205,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:411: ##sys#decode-buffer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[52]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=C_fix(1);
av2[5]=t2;
av2[6]=t3;
tp(7,av2);}}}

/* a2204 in k2188 in a2185 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2205,c,av);}
t5=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t4);
t6=C_set_block_item(((C_word*)t0)[2],0,t5);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_utf_decode(t2,t3);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* a2217 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2218(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2218,c,av);}
a=C_alloc(12);
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t4=stub219(C_SCHEME_UNDEFINED,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2231,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix((C_word)SOCKET_ERROR),t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2244,a[2]=t5,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2248,a[2]=t7,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t8;
av2[2]=lf[53];
av2[3]=lf[13];
tp(4,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_eqp(t4,C_fix(1));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* k2229 in a2217 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2231,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2242 in a2217 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2244,c,av);}
/* tcp.scm:421: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2246 in a2217 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2248(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2248,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2252,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2250 in k2246 in a2217 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2252,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:421: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* a2259 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_2260,c,av);}
a=C_alloc(5);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2268,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(1)))){
t4=t3;
f_2268(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_fix((C_word)SHUT_RD);
t5=t3;
f_2268(t5,stub202(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]),C_i_foreign_fixnum_argumentp(t4)));}}}

/* k2266 in a2259 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_2268(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2268,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=t2;
f_2274(t4,C_eqp(C_fix((C_word)SOCKET_ERROR),stub183(C_SCHEME_UNDEFINED,t3)));}
else{
t3=t2;
f_2274(t3,C_SCHEME_FALSE);}}

/* k2272 in k2266 in a2259 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_2274(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2274,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2281,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2285,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word av2[4];
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t3;
av2[2]=lf[54];
av2[3]=lf[13];
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k2279 in k2272 in k2266 in a2259 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2281,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:428: ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
av2[5]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k2283 in k2272 in k2266 in a2259 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2285(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2285,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2289,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2287 in k2283 in k2272 in k2266 in a2259 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2289,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:428: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* a2309 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2310,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:432: read-input */
t3=((C_word*)t0)[6];
f_1754(t3,t2);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2314(2,av2);}}}

/* k2312 in a2309 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_2314,c,av);}
a=C_alloc(3);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)((C_word*)t0)[5])[1],C_fix(15));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2329,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:435: ##sys#decode-buffer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[52]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=C_fix(1);
av2[5]=t2;
av2[6]=t3;
tp(7,av2);}}}

/* a2328 in k2312 in a2309 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2329,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_utf_decode(t2,t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a2337 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2338(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_2338,c,av);}
a=C_alloc(11);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=((C_word)li24),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_2344(t9,t1,t3,C_fix(0),t5);}

/* loop in a2337 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_2344(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2344,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t6=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);
t7=C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=C_copy_memory_with_offset(((C_word*)t0)[4],((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[2])[1],t8);
t10=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t8);
t11=C_set_block_item(((C_word*)t0)[2],0,t10);
/* tcp.scm:448: loop */
t13=t1;
t14=C_fixnum_difference(t2,t8);
t15=C_fixnum_plus(t3,t8);
t16=C_fixnum_plus(t4,t8);
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2388,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:450: read-input */
t7=((C_word*)t0)[7];
f_1754(t7,t6);}}}

/* k2386 in loop in a2337 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2388,c,av);}
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* tcp.scm:453: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2344(t3,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* a2398 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2399,c,av);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:457: read-input */
t5=((C_word*)t0)[5];
f_1754(t5,t4);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2403(2,av2);}}}

/* k2401 in a2398 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2403(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,5)))){
C_save_and_reclaim((void *)f_2403,c,av);}
a=C_alloc(16);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[5]:C_fixnum_difference(C_fast_retrieve(lf[55]),((C_word*)((C_word*)t0)[2])[1]));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2417,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li27),tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2477,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:461: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}}

/* a2416 in k2401 in a2398 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,6)))){
C_save_and_reclaim((void *)f_2417,c,av);}
a=C_alloc(8);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li26),tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:462: ##sys#scan-buffer-line */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)((C_word*)t0)[2])[1];
av2[5]=t4;
av2[6]=C_slot(((C_word*)((C_word*)t0)[7])[1],C_fix(15));
tp(7,av2);}}

/* a2426 in a2416 in k2401 in a2398 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2427,c,av);}
a=C_alloc(8);
t3=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)((C_word*)t0)[3])[1]))){
/* tcp.scm:469: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=t2;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2443,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm:470: read-input */
t5=((C_word*)t0)[6];
f_1754(t5,t4);}}

/* k2441 in a2426 in a2416 in k2401 in a2398 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2443,c,av);}
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
t3=C_set_block_item(((C_word*)t0)[2],0,t2);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[5])[1]))){
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[2])[1]);
/* tcp.scm:473: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=C_i_fixnum_min(((C_word*)((C_word*)t0)[5])[1],t4);
C_values(5,av2);}}
else{
/* tcp.scm:476: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* a2476 in k2401 in a2398 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2477(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2477,c,av);}
if(C_truep(t4)){
t5=C_slot(((C_word*)t0)[2],C_fix(4));
t6=C_fixnum_plus(t5,C_fix(1));
t7=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t6);
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_fix(0));
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t5=C_slot(((C_word*)t0)[2],C_fix(5));
t6=C_i_string_length(t3);
t7=C_fixnum_plus(t5,t6);
t8=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* a2521 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_2522,c,av);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[57];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:491: ##sys#buffer->string/encoding */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=((C_word*)((C_word*)t0)[3])[1];
av2[5]=C_slot(((C_word*)((C_word*)t0)[5])[1],C_fix(15));
tp(6,av2);}}}

/* k2530 in a2521 in k1751 in k1748 in k1742 in k1739 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2532,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2557 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2559,c,av);}
/* tcp.scm:366: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2561 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2563(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2563,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2567,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:172: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub128(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2565 in k2561 in chicken.tcp#io-ports in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2567,c,av);}
/* tcp.scm:366: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2571(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2571,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?lf[66]:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_structure(t2,lf[5]);
t6=C_slot(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2584,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:591: tcp-accept-timeout */
t8=C_fast_retrieve(lf[30]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k2582 in chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2584(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2584,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2667,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:592: chicken.time#current-process-milliseconds */
t4=C_fast_retrieve(lf[41]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;
f_2587(t3,C_SCHEME_FALSE);}}

/* k2585 in k2582 in chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_2587(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_2587,2,t0,t1);}
a=C_alloc(11);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word)li32),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[6];
f_2592(2,av2);}}

/* loop in k2585 in k2582 in chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2592,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
/* tcp.scm:595: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[32]);
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2596(2,av2);}}}

/* k2594 in loop in k2585 in k2582 in chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2596,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2599,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:596: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[32]);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[37];
tp(5,av2);}}

/* k2597 in k2594 in loop in k2585 in k2582 in chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2599,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2602,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:597: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=t3;
tp(2,av2);}}

/* k2600 in k2597 in k2594 in loop in k2585 in k2582 in chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_2602,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2605,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(C_fast_retrieve(lf[32]),C_fix(13)))){
/* tcp.scm:599: ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[33];
av2[3]=lf[67];
av2[4]=lf[69];
av2[5]=((C_word*)t2)[7];
av2[6]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2605(2,av2);}}}

/* k2603 in k2600 in k2597 in k2594 in loop in k2585 in k2582 in chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2605(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2605,c,av);}
a=C_alloc(8);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub172(C_SCHEME_UNDEFINED,t2,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=C_eqp(C_fix((C_word)INVALID_SOCKET),t3);
if(C_truep(C_i_not(t4))){
/* tcp.scm:605: io-ports */
t5=C_retrieve2(lf[31],C_text("chicken.tcp#io-ports"));
f_1737(t5,((C_word*)t0)[3],lf[67],t3,((C_word*)t0)[4]);}
else{
if(C_truep(stub139(C_SCHEME_UNDEFINED))){
/* tcp.scm:607: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[5])[1];
tp(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2637,a[2]=t5,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t6;
av2[2]=lf[68];
av2[3]=lf[13];
tp(4,av2);}}}}

/* k2631 in k2603 in k2600 in k2597 in k2594 in loop in k2585 in k2582 in chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2633,c,av);}
/* tcp.scm:609: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[67];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2635 in k2603 in k2600 in k2597 in k2594 in loop in k2585 in k2582 in chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2637(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2637,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2641,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2639 in k2635 in k2603 in k2600 in k2597 in k2594 in loop in k2585 in k2582 in chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2641,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:609: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* k2665 in k2582 in chicken.tcp#tcp-accept in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_2667,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_2587(t2,C_s_a_i_plus(&a,2,((C_word*)t0)[3],t1));}

/* chicken.tcp#tcp-accept-ready? in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2675(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_2675,c,av);}
a=C_alloc(12);
t3=C_i_check_structure_2(t2,lf[5],lf[71]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub219(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2685,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix((C_word)SOCKET_ERROR),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2698,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2702,a[2]=t9,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[72];
av2[3]=lf[13];
tp(4,av2);}}
else{
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_eqp(C_fix(1),t6);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k2683 in chicken.tcp#tcp-accept-ready? in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2685,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2696 in chicken.tcp#tcp-accept-ready? in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2698,c,av);}
/* tcp.scm:616: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[71];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2700 in chicken.tcp#tcp-accept-ready? in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2702(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2702,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2706,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2704 in k2700 in chicken.tcp#tcp-accept-ready? in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2706,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:616: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2725(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_2725,c,av);}
a=C_alloc(10);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_rest_nullp(c,3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_rest_nullp(c,3);
t9=C_rest_nullp(c,4);
t10=(C_truep(t9)?lf[66]:C_get_rest_arg(c,4,av,3,t0));
t11=C_rest_nullp(c,4);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2741,a[2]=t3,a[3]=t7,a[4]=t1,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
/* tcp.scm:628: tcp-connect-timeout */
t13=C_fast_retrieve(lf[29]);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_2741,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3008,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:629: chicken.time#current-process-milliseconds */
t4=C_fast_retrieve(lf[41]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;
f_2744(t3,C_SCHEME_FALSE);}}

/* k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_2744(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_2744,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2747,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:630: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[19]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t3;
av2[2]=C_fix((C_word)sizeof(struct sockaddr_in));
tp(3,av2);}}

/* k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2747(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_2747,c,av);}
a=C_alloc(22);
t2=((C_word*)t0)[2];
t3=C_i_check_string(((C_word*)((C_word*)t2)[2])[1]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2753,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=t1,a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t2)[3])[1])){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2753(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2984,a[2]=((C_word*)t2)[3],a[3]=t4,a[4]=((C_word*)t2)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2992,a[2]=((C_word*)t2)[2],a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2998,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:633: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}}

/* k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2753,c,av);}
a=C_alloc(7);
t2=C_i_check_fixnum(((C_word*)((C_word*)t0)[2])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2759,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2978,a[2]=t3,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:636: gethostaddr */
f_1337(t4,((C_word*)t0)[5],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2759(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_2759,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=C_fix((C_word)AF_INET);
t4=C_fix((C_word)SOCK_STREAM);
t5=stub145(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(t3),C_i_foreign_fixnum_argumentp(t4),C_fix(0));
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2765,a[2]=t5,a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[2],tmp=(C_word)a,a+=9,tmp);
t7=C_eqp(C_fix((C_word)INVALID_SOCKET),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2961,a[2]=t6,a[3]=((C_word*)t2)[7],a[4]=((C_word*)t2)[2],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2965,a[2]=t8,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=lf[80];
av2[3]=lf[13];
tp(4,av2);}}
else{
t8=t6;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_2765(2,av2);}}}

/* k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2765(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2765,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2768,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t4=C_eqp(C_fix((C_word)SOCKET_ERROR),stub224(C_SCHEME_UNDEFINED,t3));
if(C_truep(t4)){
t5=stub124(C_SCHEME_UNDEFINED);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t7=stub183(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2937,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2941,a[2]=t8,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=lf[79];
av2[3]=lf[13];
tp(4,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_2768(2,av2);}}}

/* k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2768(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2768,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2771,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(make_socket_nonblocking(((C_word*)t2)[2]))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2771(2,av2);}}
else{
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_i_foreign_fixnum_argumentp(((C_word*)t2)[2]);
t6=stub183(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2911,a[2]=t3,a[3]=((C_word*)t2)[2],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2915,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t8;
av2[2]=lf[78];
av2[3]=lf[13];
tp(4,av2);}}}

/* k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2771(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_2771,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2774,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2837,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[6],a[5]=t5,a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word)li35),tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t3;
f_2837(2,av2);}}

/* k2772 in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2774(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_2774,c,av);}
a=C_alloc(11);
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=stub753(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2780,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t5=C_eqp(C_fix((C_word)SOCKET_ERROR),t3);
if(C_truep(t5)){
t6=stub124(C_SCHEME_UNDEFINED);
t7=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t8=stub183(C_SCHEME_UNDEFINED,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2799,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2803,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[75];
av2[3]=lf[13];
tp(4,av2);}}
else{
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t7=stub183(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2825,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2829,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=lf[76];
av2[3]=lf[13];
tp(4,av2);}}
else{
/* tcp.scm:663: io-ports */
t6=C_retrieve2(lf[31],C_text("chicken.tcp#io-ports"));
f_1737(t6,((C_word*)t0)[3],lf[74],((C_word*)t0)[2],((C_word*)t0)[4]);}}}

/* k2778 in k2772 in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2780,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:663: io-ports */
t3=C_retrieve2(lf[31],C_text("chicken.tcp#io-ports"));
f_1737(t3,((C_word*)t2)[3],lf[74],((C_word*)t2)[2],((C_word*)t2)[4]);}

/* k2797 in k2772 in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2799,c,av);}
/* tcp.scm:659: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[74];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2801 in k2772 in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2803,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:172: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub128(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2805 in k2801 in k2772 in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2807,c,av);}
/* tcp.scm:659: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2823 in k2772 in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2825,c,av);}
/* tcp.scm:662: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[74];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k2827 in k2772 in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2829,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2833,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:172: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub128(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2831 in k2827 in k2772 in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2833,c,av);}
/* tcp.scm:662: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* loop in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2837(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_2837,c,av);}
a=C_alloc(10);
t2=C_fix((C_word)sizeof(struct sockaddr_in));
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t4=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t5=C_i_foreign_fixnum_argumentp(t2);
t6=C_eqp(C_fix((C_word)SOCKET_ERROR),stub210(C_SCHEME_UNDEFINED,t3,t4,t5));
if(C_truep(t6)){
if(C_truep(stub136(C_SCHEME_UNDEFINED))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2853,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
/* tcp.scm:649: ##sys#thread-block-for-timeout! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t7;
av2[2]=C_fast_retrieve(lf[32]);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f3618,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:650: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t8;
av2[2]=C_fast_retrieve(lf[32]);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[43];
tp(5,av2);}}}
else{
if(C_truep(stub139(C_SCHEME_UNDEFINED))){
/* tcp.scm:653: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
tp(3,av2);}}
else{
t7=stub124(C_SCHEME_UNDEFINED);
t8=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t9=stub183(C_SCHEME_UNDEFINED,t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2884,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2888,a[2]=t10,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t11;
av2[2]=lf[77];
av2[3]=lf[13];
tp(4,av2);}}}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k2851 in loop in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2853,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm:650: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
av2[2]=C_fast_retrieve(lf[32]);
av2[3]=((C_word*)t0)[3];
av2[4]=lf[43];
tp(5,av2);}}

/* k2854 in k2851 in loop in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2856,c,av);}
/* tcp.scm:651: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[35]);
C_word *av2=av;
av2[0]=*((C_word*)lf[35]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}

/* k2882 in loop in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_2884,c,av);}
/* tcp.scm:655: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[74];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)((C_word*)t0)[4])[1];
av2[7]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(8,av2);}}

/* k2886 in loop in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2888,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2892,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:172: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub128(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2890 in k2886 in loop in k2769 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2892,c,av);}
/* tcp.scm:655: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2909 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2911,c,av);}
/* tcp.scm:644: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[74];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2913 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2915,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:172: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub128(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2917 in k2913 in k2766 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2919,c,av);}
/* tcp.scm:644: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2935 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2937,c,av);}
/* tcp.scm:642: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[74];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2939 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2941,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
/* tcp.scm:172: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub128(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2943 in k2939 in k2763 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2945,c,av);}
/* tcp.scm:642: scheme#string-append */
t2=*((C_word*)lf[9]+1);{
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

/* k2959 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2961,c,av);}
/* tcp.scm:640: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[74];
av2[4]=t1;
av2[5]=((C_word*)((C_word*)t0)[3])[1];
av2[6]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k2963 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2965(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2965,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2969,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k2967 in k2963 in k2757 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2969,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:640: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* k2976 in k2751 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2978,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_2759(2,av2);}}
else{
/* tcp.scm:637: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[74];
av2[4]=lf[81];
av2[5]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k2982 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2984,c,av);}
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2753(2,av2);}}
else{
/* tcp.scm:634: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[20];
av2[3]=lf[74];
av2[4]=lf[82];
av2[5]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* a2991 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2992(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2992,c,av);}
a=C_alloc(9);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=lf[83];
t4=C_i_string_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1369,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=((C_word)li36),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1369(t8,t1,C_fix(0));}

/* a2997 in k2745 in k2742 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_2998(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2998,c,av);}
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3006 in k2739 in chicken.tcp#tcp-connect in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_3008,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
f_2744(t2,C_s_a_i_plus(&a,2,t1,((C_word*)t0)[3]));}

/* chicken.tcp#tcp-port->fileno in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void f_3034(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3034,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3038,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:666: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[89]);
C_word av2[3];
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k3036 in chicken.tcp#tcp-port->fileno in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3038,c,av);}
if(C_truep(C_i_vectorp(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* tcp.scm:669: chicken.base#error */
t2=*((C_word*)lf[87]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[88];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3052,c,av);}
a=C_alloc(5);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[91]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3058,a[2]=t1,a[3]=t2,a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm:673: tcp-port->fileno */
f_3034(t4,t2,lf[91]);}

/* k3056 in chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3058,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3065,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
/* tcp.scm:193: ##sys#peek-c-string */
t6=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=stub244(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k3063 in k3056 in chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3065,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3068,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
f_3068(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3103,a[2]=t3,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3107,a[2]=t4,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t5;
av2[2]=lf[93];
av2[3]=lf[13];
tp(4,av2);}}}

/* k3066 in k3063 in k3056 in chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3068,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3072,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
/* tcp.scm:217: ##sys#peek-c-string */
t5=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t2;
av2[2]=stub260(t3,t4);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3070 in k3066 in k3063 in k3056 in chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3072,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
/* tcp.scm:674: scheme#values */{
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
C_values(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3082,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3086,a[2]=t3,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t4;
av2[2]=lf[92];
av2[3]=lf[13];
tp(4,av2);}}}

/* k3073 in k3070 in k3066 in k3063 in k3056 in chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3075,c,av);}
/* tcp.scm:674: scheme#values */{
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
C_values(4,av2);}}

/* k3080 in k3070 in k3066 in k3063 in k3056 in chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3082,c,av);}
/* tcp.scm:678: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[91];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k3084 in k3070 in k3066 in k3063 in k3056 in chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3086(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3086,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3090,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k3088 in k3084 in k3070 in k3066 in k3063 in k3056 in chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3090,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:678: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* k3101 in k3063 in k3056 in chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3103,c,av);}
/* tcp.scm:676: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[91];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k3105 in k3063 in k3056 in chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3107(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3107,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3111,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k3109 in k3105 in k3063 in k3056 in chicken.tcp#tcp-addresses in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3111,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:676: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-port-numbers in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3119,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[95]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3125,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:682: tcp-port->fileno */
f_3034(t4,t2,lf[95]);}

/* k3123 in chicken.tcp#tcp-port-numbers in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3125(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3125,c,av);}
a=C_alloc(14);
t2=C_i_foreign_fixnum_argumentp(t1);
t3=stub250(C_SCHEME_UNDEFINED,t2);
t4=C_i_foreign_fixnum_argumentp(t1);
t5=stub255(C_SCHEME_UNDEFINED,t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3134,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t7=C_eqp(C_fix(-1),t3);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3174,a[2]=t6,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3178,a[2]=t8,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t9;
av2[2]=lf[97];
av2[3]=lf[13];
tp(4,av2);}}
else{
t8=t6;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_3134(2,av2);}}}

/* k3132 in k3123 in chicken.tcp#tcp-port-numbers in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3134,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3150,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3154,a[2]=t4,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t5;
av2[2]=lf[96];
av2[3]=lf[13];
tp(4,av2);}}
else{
/* tcp.scm:689: scheme#values */{
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
C_values(4,av2);}}}

/* k3135 in k3132 in k3123 in chicken.tcp#tcp-port-numbers in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3137,c,av);}
/* tcp.scm:689: scheme#values */{
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
C_values(4,av2);}}

/* k3148 in k3132 in k3123 in chicken.tcp#tcp-port-numbers in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3150,c,av);}
/* tcp.scm:688: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[95];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k3152 in k3132 in k3123 in chicken.tcp#tcp-port-numbers in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3154(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3154,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3158,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k3156 in k3152 in k3132 in k3123 in chicken.tcp#tcp-port-numbers in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3158,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:688: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* k3172 in k3123 in chicken.tcp#tcp-port-numbers in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3174,c,av);}
/* tcp.scm:686: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[95];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k3176 in k3123 in chicken.tcp#tcp-port-numbers in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3178(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3178,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3182,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k3180 in k3176 in k3123 in chicken.tcp#tcp-port-numbers in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3182,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:686: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-listener-port in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3190(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3190,c,av);}
a=C_alloc(13);
t3=C_i_check_structure_2(t2,lf[5],lf[99]);
t4=C_slot(t2,C_fix(1));
t5=C_i_foreign_fixnum_argumentp(t4);
t6=stub250(C_SCHEME_UNDEFINED,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3203,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3213,a[2]=t7,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3217,a[2]=t9,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
av2[2]=lf[100];
av2[3]=lf[13];
tp(4,av2);}}
else{
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k3201 in chicken.tcp#tcp-listener-port in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3203,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3211 in chicken.tcp#tcp-listener-port in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3213,c,av);}
/* tcp.scm:696: ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[7];
av2[3]=lf[99];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k3215 in chicken.tcp#tcp-listener-port in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3217(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3217,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3221,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=stub124(C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
/* tcp.scm:172: ##sys#peek-c-string */
t7=*((C_word*)lf[10]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub128(t5,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k3219 in k3215 in chicken.tcp#tcp-listener-port in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3221(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3221,c,av);}
t2=((C_word*)t0)[2];
/* tcp.scm:696: scheme#string-append */
t3=*((C_word*)lf[9]+1);{
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

/* chicken.tcp#tcp-abandon-port in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3229,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[102]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3239,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm:701: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[89]);
C_word *av2=av;
av2[0]=*((C_word*)lf[89]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k3237 in chicken.tcp#tcp-abandon-port in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3239,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_i_slot(t1,C_slot(((C_word*)t0)[3],C_fix(1)),C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.tcp#tcp-listener-fileno in k1733 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3245,c,av);}
t3=C_i_check_structure_2(t2,lf[5],lf[104]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3254 in k1729 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3256,c,av);}
/* tcp.scm:360: scheme#make-parameter */
t2=C_fast_retrieve(lf[105]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3258 in k1725 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3260,c,av);}
/* tcp.scm:359: scheme#make-parameter */
t2=C_fast_retrieve(lf[105]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_FALSE;
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3262 in k1721 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3264,c,av);}
/* tcp.scm:358: scheme#make-parameter */
t2=C_fast_retrieve(lf[105]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3266 in k1698 in k1308 in k1080 in k1077 in k1074 */
static void C_ccall f_3268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3268,c,av);}
/* tcp.scm:357: scheme#make-parameter */
t2=C_fast_retrieve(lf[105]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_tcp_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("tcp"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_tcp_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(483))){
C_save(t1);
C_rereclaim2(483*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,111);
lf[0]=C_h_intern(&lf[0],3, C_text("tcp"));
lf[1]=C_h_intern(&lf[1],12, C_text("chicken.tcp#"));
lf[3]=C_h_intern(&lf[3],19, C_text("##sys#make-c-string"));
lf[4]=C_h_intern(&lf[4],22, C_text("chicken.tcp#tcp-listen"));
lf[5]=C_h_intern(&lf[5],12, C_text("tcp-listener"));
lf[6]=C_h_intern(&lf[6],17, C_text("##sys#signal-hook"));
lf[7]=C_h_intern_kw(&lf[7],13, C_text("network-error"));
lf[8]=C_h_intern(&lf[8],10, C_text("tcp-listen"));
lf[9]=C_h_intern(&lf[9],20, C_text("scheme#string-append"));
lf[10]=C_h_intern(&lf[10],19, C_text("##sys#peek-c-string"));
lf[11]=C_h_intern(&lf[11],19, C_text("##sys#string-append"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\154\151\163\164\145\156\040\157\156\040\163\157\143\153\145\164\000"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\055\040\000"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\142\151\156\144\040\164\157\040\163\157\143\153\145\164\000"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\145\162\162\157\162\040\167\150\151\154\145\040\163\145\164\164\151\156\147\040\165\160\040\163\157\143\153\145\164\000"));
lf[16]=C_h_intern(&lf[16],11, C_text("##sys#error"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\143\141\156\156\157\164\040\143\162\145\141\164\145\040\163\157\143\153\145\164\000"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\147\145\164\164\151\156\147\040\154\151\163\164\145\156\145\162\040\150\157\163\164\040\111\120\040\146\141\151\154\145\144\000"));
lf[19]=C_h_intern(&lf[19],21, C_text("##sys#make-bytevector"));
lf[20]=C_h_intern_kw(&lf[20],12, C_text("domain-error"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\151\156\166\141\154\151\144\040\160\157\162\164\040\156\165\155\142\145\162\000"));
lf[22]=C_h_intern(&lf[22],25, C_text("chicken.tcp#tcp-listener?"));
lf[23]=C_h_intern(&lf[23],21, C_text("chicken.tcp#tcp-close"));
lf[24]=C_h_intern(&lf[24],9, C_text("tcp-close"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\143\154\157\163\145\040\124\103\120\040\163\157\143\153\145\164\000"));
lf[26]=C_h_intern(&lf[26],27, C_text("chicken.tcp#tcp-buffer-size"));
lf[27]=C_h_intern(&lf[27],28, C_text("chicken.tcp#tcp-read-timeout"));
lf[28]=C_h_intern(&lf[28],29, C_text("chicken.tcp#tcp-write-timeout"));
lf[29]=C_h_intern(&lf[29],31, C_text("chicken.tcp#tcp-connect-timeout"));
lf[30]=C_h_intern(&lf[30],30, C_text("chicken.tcp#tcp-accept-timeout"));
lf[32]=C_h_intern(&lf[32],20, C_text("##sys#current-thread"));
lf[33]=C_h_intern_kw(&lf[33],21, C_text("network-timeout-error"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\162\145\141\144\040\157\160\145\162\141\164\151\157\156\040\164\151\155\145\144\040\157\165\164\000"));
lf[35]=C_h_intern(&lf[35],19, C_text("##sys#thread-yield!"));
lf[36]=C_h_intern(&lf[36],27, C_text("##sys#thread-block-for-i/o!"));
lf[37]=C_h_intern_kw(&lf[37],5, C_text("input"));
lf[38]=C_h_intern(&lf[38],31, C_text("##sys#thread-block-for-timeout!"));
lf[39]=C_h_intern(&lf[39],24, C_text("##sys#dispatch-interrupt"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\162\145\141\144\040\146\162\157\155\040\163\157\143\153\145\164\000"));
lf[41]=C_h_intern(&lf[41],41, C_text("chicken.time#current-process-milliseconds"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\167\162\151\164\145\040\157\160\145\162\141\164\151\157\156\040\164\151\155\145\144\040\157\165\164\000"));
lf[43]=C_h_intern_kw(&lf[43],6, C_text("output"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\143\141\156\156\157\164\040\167\162\151\164\145\040\164\157\040\163\157\143\153\145\164\000"));
lf[45]=C_h_intern(&lf[45],19, C_text("##sys#encode-buffer"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\143\141\156\156\157\164\040\143\154\157\163\145\040\163\157\143\153\145\164\040\157\165\164\160\165\164\040\160\157\162\164\000"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\050\164\143\160\051\000"));
lf[48]=C_h_intern(&lf[48],6, C_text("socket"));
lf[49]=C_h_intern(&lf[49],20, C_text("##sys#set-port-data!"));
lf[50]=C_h_intern(&lf[50],15, C_text("##sys#make-port"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\050\164\143\160\051\000"));
lf[52]=C_h_intern(&lf[52],19, C_text("##sys#decode-buffer"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\143\141\156\156\157\164\040\143\150\145\143\153\040\163\157\143\153\145\164\040\146\157\162\040\151\156\160\165\164\000"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\143\141\156\156\157\164\040\143\154\157\163\145\040\163\157\143\153\145\164\040\151\156\160\165\164\040\160\157\162\164\000"));
lf[55]=C_h_intern(&lf[55],35, C_text("chicken.fixnum#most-positive-fixnum"));
lf[56]=C_h_intern(&lf[56],22, C_text("##sys#scan-buffer-line"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[58]=C_h_intern(&lf[58],29, C_text("##sys#buffer->string/encoding"));
lf[59]=C_h_intern(&lf[59],28, C_text("chicken.port#make-input-port"));
lf[60]=C_h_intern_kw(&lf[60],9, C_text("peek-char"));
lf[61]=C_h_intern_kw(&lf[61],15, C_text("read-bytevector"));
lf[62]=C_h_intern_kw(&lf[62],9, C_text("read-line"));
lf[63]=C_h_intern_kw(&lf[63],13, C_text("read-buffered"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\143\162\145\141\164\145\040\124\103\120\040\160\157\162\164\163\000"));
lf[65]=C_h_intern(&lf[65],22, C_text("chicken.tcp#tcp-accept"));
lf[66]=C_h_intern(&lf[66],5, C_text("utf-8"));
lf[67]=C_h_intern(&lf[67],10, C_text("tcp-accept"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\143\157\165\154\144\040\156\157\164\040\141\143\143\145\160\164\040\146\162\157\155\040\154\151\163\164\145\156\145\162\000"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\141\143\143\145\160\164\040\157\160\145\162\141\164\151\157\156\040\164\151\155\145\144\040\157\165\164\000"));
lf[70]=C_h_intern(&lf[70],29, C_text("chicken.tcp#tcp-accept-ready?"));
lf[71]=C_h_intern(&lf[71],17, C_text("tcp-accept-ready?"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\143\141\156\156\157\164\040\143\150\145\143\153\040\163\157\143\153\145\164\040\146\157\162\040\151\156\160\165\164\000"));
lf[73]=C_h_intern(&lf[73],23, C_text("chicken.tcp#tcp-connect"));
lf[74]=C_h_intern(&lf[74],11, C_text("tcp-connect"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\147\145\164\163\157\143\153\157\160\164\050\051\040\146\141\151\154\145\144\000"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\143\141\156\156\157\164\040\143\162\145\141\164\145\040\163\157\143\153\145\164\000"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\143\141\156\156\157\164\040\143\157\156\156\145\143\164\040\164\157\040\163\157\143\153\145\164\000"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\146\143\156\164\154\050\051\040\146\141\151\154\145\144\000"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\145\162\162\157\162\040\167\150\151\154\145\040\163\145\164\164\151\156\147\040\165\160\040\163\157\143\153\145\164\000"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\143\141\156\156\157\164\040\143\162\145\141\164\145\040\163\157\143\153\145\164\000"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\143\141\156\156\157\164\040\146\151\156\144\040\150\157\163\164\040\141\144\144\162\145\163\163\000"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\156\157\040\160\157\162\164\040\163\160\145\143\151\146\151\145\144\000"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\164\143\160\000"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\143\141\156\156\157\164\040\143\157\155\160\165\164\145\040\160\157\162\164\040\146\162\157\155\040\163\145\162\166\151\143\145\000"));
lf[85]=C_h_intern(&lf[85],16, C_text("scheme#substring"));
lf[87]=C_h_intern(&lf[87],18, C_text("chicken.base#error"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\141\162\147\165\155\145\156\164\040\144\157\145\163\040\156\157\164\040\141\160\160\145\141\162\040\164\157\040\142\145\040\141\040\124\103\120\040\160\157\162\164\000"));
lf[89]=C_h_intern(&lf[89],15, C_text("##sys#port-data"));
lf[90]=C_h_intern(&lf[90],25, C_text("chicken.tcp#tcp-addresses"));
lf[91]=C_h_intern(&lf[91],13, C_text("tcp-addresses"));
lf[92]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\143\141\156\156\157\164\040\143\157\155\160\165\164\145\040\162\145\155\157\164\145\040\141\144\144\162\145\163\163\000"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\143\141\156\156\157\164\040\143\157\155\160\165\164\145\040\154\157\143\141\154\040\141\144\144\162\145\163\163\000"));
lf[94]=C_h_intern(&lf[94],28, C_text("chicken.tcp#tcp-port-numbers"));
lf[95]=C_h_intern(&lf[95],16, C_text("tcp-port-numbers"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\143\141\156\156\157\164\040\143\157\155\160\165\164\145\040\162\145\155\157\164\145\040\160\157\162\164\000"));
lf[97]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\143\141\156\156\157\164\040\143\157\155\160\165\164\145\040\154\157\143\141\154\040\160\157\162\164\000"));
lf[98]=C_h_intern(&lf[98],29, C_text("chicken.tcp#tcp-listener-port"));
lf[99]=C_h_intern(&lf[99],17, C_text("tcp-listener-port"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\143\141\156\156\157\164\040\157\142\164\141\151\156\040\154\151\163\164\145\156\145\162\040\160\157\162\164\000"));
lf[101]=C_h_intern(&lf[101],28, C_text("chicken.tcp#tcp-abandon-port"));
lf[102]=C_h_intern(&lf[102],16, C_text("tcp-abandon-port"));
lf[103]=C_h_intern(&lf[103],31, C_text("chicken.tcp#tcp-listener-fileno"));
lf[104]=C_h_intern(&lf[104],19, C_text("tcp-listener-fileno"));
lf[105]=C_h_intern(&lf[105],21, C_text("scheme#make-parameter"));
lf[106]=C_h_intern(&lf[106],18, C_text("tcp-accept-timeout"));
lf[107]=C_h_intern(&lf[107],19, C_text("tcp-connect-timeout"));
lf[108]=C_h_intern(&lf[108],17, C_text("tcp-write-timeout"));
lf[109]=C_h_intern(&lf[109],16, C_text("tcp-read-timeout"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\143\141\156\156\157\164\040\151\156\151\164\151\141\154\151\172\145\040\127\151\156\163\157\143\153\000"));
C_register_lf2(lf,111,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1076,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[223] = {
{C_text("f3618:tcp_2escm"),(void*)f3618},
{C_text("f_1076:tcp_2escm"),(void*)f_1076},
{C_text("f_1079:tcp_2escm"),(void*)f_1079},
{C_text("f_1082:tcp_2escm"),(void*)f_1082},
{C_text("f_1310:tcp_2escm"),(void*)f_1310},
{C_text("f_1317:tcp_2escm"),(void*)f_1317},
{C_text("f_1321:tcp_2escm"),(void*)f_1321},
{C_text("f_1337:tcp_2escm"),(void*)f_1337},
{C_text("f_1346:tcp_2escm"),(void*)f_1346},
{C_text("f_1369:tcp_2escm"),(void*)f_1369},
{C_text("f_1394:tcp_2escm"),(void*)f_1394},
{C_text("f_1398:tcp_2escm"),(void*)f_1398},
{C_text("f_1401:tcp_2escm"),(void*)f_1401},
{C_text("f_1404:tcp_2escm"),(void*)f_1404},
{C_text("f_1414:tcp_2escm"),(void*)f_1414},
{C_text("f_1418:tcp_2escm"),(void*)f_1418},
{C_text("f_1422:tcp_2escm"),(void*)f_1422},
{C_text("f_1457:tcp_2escm"),(void*)f_1457},
{C_text("f_1460:tcp_2escm"),(void*)f_1460},
{C_text("f_1466:tcp_2escm"),(void*)f_1466},
{C_text("f_1469:tcp_2escm"),(void*)f_1469},
{C_text("f_1472:tcp_2escm"),(void*)f_1472},
{C_text("f_1488:tcp_2escm"),(void*)f_1488},
{C_text("f_1492:tcp_2escm"),(void*)f_1492},
{C_text("f_1496:tcp_2escm"),(void*)f_1496},
{C_text("f_1512:tcp_2escm"),(void*)f_1512},
{C_text("f_1516:tcp_2escm"),(void*)f_1516},
{C_text("f_1520:tcp_2escm"),(void*)f_1520},
{C_text("f_1542:tcp_2escm"),(void*)f_1542},
{C_text("f_1550:tcp_2escm"),(void*)f_1550},
{C_text("f_1569:tcp_2escm"),(void*)f_1569},
{C_text("f_1575:tcp_2escm"),(void*)f_1575},
{C_text("f_1578:tcp_2escm"),(void*)f_1578},
{C_text("f_1597:tcp_2escm"),(void*)f_1597},
{C_text("f_1601:tcp_2escm"),(void*)f_1601},
{C_text("f_1605:tcp_2escm"),(void*)f_1605},
{C_text("f_1649:tcp_2escm"),(void*)f_1649},
{C_text("f_1658:tcp_2escm"),(void*)f_1658},
{C_text("f_1678:tcp_2escm"),(void*)f_1678},
{C_text("f_1682:tcp_2escm"),(void*)f_1682},
{C_text("f_1686:tcp_2escm"),(void*)f_1686},
{C_text("f_1700:tcp_2escm"),(void*)f_1700},
{C_text("f_1706:tcp_2escm"),(void*)f_1706},
{C_text("f_1708:tcp_2escm"),(void*)f_1708},
{C_text("f_1723:tcp_2escm"),(void*)f_1723},
{C_text("f_1727:tcp_2escm"),(void*)f_1727},
{C_text("f_1731:tcp_2escm"),(void*)f_1731},
{C_text("f_1735:tcp_2escm"),(void*)f_1735},
{C_text("f_1737:tcp_2escm"),(void*)f_1737},
{C_text("f_1741:tcp_2escm"),(void*)f_1741},
{C_text("f_1744:tcp_2escm"),(void*)f_1744},
{C_text("f_1750:tcp_2escm"),(void*)f_1750},
{C_text("f_1753:tcp_2escm"),(void*)f_1753},
{C_text("f_1754:tcp_2escm"),(void*)f_1754},
{C_text("f_1758:tcp_2escm"),(void*)f_1758},
{C_text("f_1761:tcp_2escm"),(void*)f_1761},
{C_text("f_1766:tcp_2escm"),(void*)f_1766},
{C_text("f_1785:tcp_2escm"),(void*)f_1785},
{C_text("f_1788:tcp_2escm"),(void*)f_1788},
{C_text("f_1791:tcp_2escm"),(void*)f_1791},
{C_text("f_1794:tcp_2escm"),(void*)f_1794},
{C_text("f_1822:tcp_2escm"),(void*)f_1822},
{C_text("f_1826:tcp_2escm"),(void*)f_1826},
{C_text("f_1830:tcp_2escm"),(void*)f_1830},
{C_text("f_1848:tcp_2escm"),(void*)f_1848},
{C_text("f_1851:tcp_2escm"),(void*)f_1851},
{C_text("f_1852:tcp_2escm"),(void*)f_1852},
{C_text("f_1856:tcp_2escm"),(void*)f_1856},
{C_text("f_1865:tcp_2escm"),(void*)f_1865},
{C_text("f_1873:tcp_2escm"),(void*)f_1873},
{C_text("f_1875:tcp_2escm"),(void*)f_1875},
{C_text("f_1897:tcp_2escm"),(void*)f_1897},
{C_text("f_1900:tcp_2escm"),(void*)f_1900},
{C_text("f_1903:tcp_2escm"),(void*)f_1903},
{C_text("f_1906:tcp_2escm"),(void*)f_1906},
{C_text("f_1929:tcp_2escm"),(void*)f_1929},
{C_text("f_1940:tcp_2escm"),(void*)f_1940},
{C_text("f_1944:tcp_2escm"),(void*)f_1944},
{C_text("f_1948:tcp_2escm"),(void*)f_1948},
{C_text("f_1988:tcp_2escm"),(void*)f_1988},
{C_text("f_1995:tcp_2escm"),(void*)f_1995},
{C_text("f_1996:tcp_2escm"),(void*)f_1996},
{C_text("f_2002:tcp_2escm"),(void*)f_2002},
{C_text("f_2024:tcp_2escm"),(void*)f_2024},
{C_text("f_2046:tcp_2escm"),(void*)f_2046},
{C_text("f_2055:tcp_2escm"),(void*)f_2055},
{C_text("f_2058:tcp_2escm"),(void*)f_2058},
{C_text("f_2071:tcp_2escm"),(void*)f_2071},
{C_text("f_2075:tcp_2escm"),(void*)f_2075},
{C_text("f_2086:tcp_2escm"),(void*)f_2086},
{C_text("f_2107:tcp_2escm"),(void*)f_2107},
{C_text("f_2115:tcp_2escm"),(void*)f_2115},
{C_text("f_2118:tcp_2escm"),(void*)f_2118},
{C_text("f_2124:tcp_2escm"),(void*)f_2124},
{C_text("f_2131:tcp_2escm"),(void*)f_2131},
{C_text("f_2135:tcp_2escm"),(void*)f_2135},
{C_text("f_2139:tcp_2escm"),(void*)f_2139},
{C_text("f_2164:tcp_2escm"),(void*)f_2164},
{C_text("f_2170:tcp_2escm"),(void*)f_2170},
{C_text("f_2180:tcp_2escm"),(void*)f_2180},
{C_text("f_2186:tcp_2escm"),(void*)f_2186},
{C_text("f_2190:tcp_2escm"),(void*)f_2190},
{C_text("f_2205:tcp_2escm"),(void*)f_2205},
{C_text("f_2218:tcp_2escm"),(void*)f_2218},
{C_text("f_2231:tcp_2escm"),(void*)f_2231},
{C_text("f_2244:tcp_2escm"),(void*)f_2244},
{C_text("f_2248:tcp_2escm"),(void*)f_2248},
{C_text("f_2252:tcp_2escm"),(void*)f_2252},
{C_text("f_2260:tcp_2escm"),(void*)f_2260},
{C_text("f_2268:tcp_2escm"),(void*)f_2268},
{C_text("f_2274:tcp_2escm"),(void*)f_2274},
{C_text("f_2281:tcp_2escm"),(void*)f_2281},
{C_text("f_2285:tcp_2escm"),(void*)f_2285},
{C_text("f_2289:tcp_2escm"),(void*)f_2289},
{C_text("f_2310:tcp_2escm"),(void*)f_2310},
{C_text("f_2314:tcp_2escm"),(void*)f_2314},
{C_text("f_2329:tcp_2escm"),(void*)f_2329},
{C_text("f_2338:tcp_2escm"),(void*)f_2338},
{C_text("f_2344:tcp_2escm"),(void*)f_2344},
{C_text("f_2388:tcp_2escm"),(void*)f_2388},
{C_text("f_2399:tcp_2escm"),(void*)f_2399},
{C_text("f_2403:tcp_2escm"),(void*)f_2403},
{C_text("f_2417:tcp_2escm"),(void*)f_2417},
{C_text("f_2427:tcp_2escm"),(void*)f_2427},
{C_text("f_2443:tcp_2escm"),(void*)f_2443},
{C_text("f_2477:tcp_2escm"),(void*)f_2477},
{C_text("f_2522:tcp_2escm"),(void*)f_2522},
{C_text("f_2532:tcp_2escm"),(void*)f_2532},
{C_text("f_2559:tcp_2escm"),(void*)f_2559},
{C_text("f_2563:tcp_2escm"),(void*)f_2563},
{C_text("f_2567:tcp_2escm"),(void*)f_2567},
{C_text("f_2571:tcp_2escm"),(void*)f_2571},
{C_text("f_2584:tcp_2escm"),(void*)f_2584},
{C_text("f_2587:tcp_2escm"),(void*)f_2587},
{C_text("f_2592:tcp_2escm"),(void*)f_2592},
{C_text("f_2596:tcp_2escm"),(void*)f_2596},
{C_text("f_2599:tcp_2escm"),(void*)f_2599},
{C_text("f_2602:tcp_2escm"),(void*)f_2602},
{C_text("f_2605:tcp_2escm"),(void*)f_2605},
{C_text("f_2633:tcp_2escm"),(void*)f_2633},
{C_text("f_2637:tcp_2escm"),(void*)f_2637},
{C_text("f_2641:tcp_2escm"),(void*)f_2641},
{C_text("f_2667:tcp_2escm"),(void*)f_2667},
{C_text("f_2675:tcp_2escm"),(void*)f_2675},
{C_text("f_2685:tcp_2escm"),(void*)f_2685},
{C_text("f_2698:tcp_2escm"),(void*)f_2698},
{C_text("f_2702:tcp_2escm"),(void*)f_2702},
{C_text("f_2706:tcp_2escm"),(void*)f_2706},
{C_text("f_2725:tcp_2escm"),(void*)f_2725},
{C_text("f_2741:tcp_2escm"),(void*)f_2741},
{C_text("f_2744:tcp_2escm"),(void*)f_2744},
{C_text("f_2747:tcp_2escm"),(void*)f_2747},
{C_text("f_2753:tcp_2escm"),(void*)f_2753},
{C_text("f_2759:tcp_2escm"),(void*)f_2759},
{C_text("f_2765:tcp_2escm"),(void*)f_2765},
{C_text("f_2768:tcp_2escm"),(void*)f_2768},
{C_text("f_2771:tcp_2escm"),(void*)f_2771},
{C_text("f_2774:tcp_2escm"),(void*)f_2774},
{C_text("f_2780:tcp_2escm"),(void*)f_2780},
{C_text("f_2799:tcp_2escm"),(void*)f_2799},
{C_text("f_2803:tcp_2escm"),(void*)f_2803},
{C_text("f_2807:tcp_2escm"),(void*)f_2807},
{C_text("f_2825:tcp_2escm"),(void*)f_2825},
{C_text("f_2829:tcp_2escm"),(void*)f_2829},
{C_text("f_2833:tcp_2escm"),(void*)f_2833},
{C_text("f_2837:tcp_2escm"),(void*)f_2837},
{C_text("f_2853:tcp_2escm"),(void*)f_2853},
{C_text("f_2856:tcp_2escm"),(void*)f_2856},
{C_text("f_2884:tcp_2escm"),(void*)f_2884},
{C_text("f_2888:tcp_2escm"),(void*)f_2888},
{C_text("f_2892:tcp_2escm"),(void*)f_2892},
{C_text("f_2911:tcp_2escm"),(void*)f_2911},
{C_text("f_2915:tcp_2escm"),(void*)f_2915},
{C_text("f_2919:tcp_2escm"),(void*)f_2919},
{C_text("f_2937:tcp_2escm"),(void*)f_2937},
{C_text("f_2941:tcp_2escm"),(void*)f_2941},
{C_text("f_2945:tcp_2escm"),(void*)f_2945},
{C_text("f_2961:tcp_2escm"),(void*)f_2961},
{C_text("f_2965:tcp_2escm"),(void*)f_2965},
{C_text("f_2969:tcp_2escm"),(void*)f_2969},
{C_text("f_2978:tcp_2escm"),(void*)f_2978},
{C_text("f_2984:tcp_2escm"),(void*)f_2984},
{C_text("f_2992:tcp_2escm"),(void*)f_2992},
{C_text("f_2998:tcp_2escm"),(void*)f_2998},
{C_text("f_3008:tcp_2escm"),(void*)f_3008},
{C_text("f_3034:tcp_2escm"),(void*)f_3034},
{C_text("f_3038:tcp_2escm"),(void*)f_3038},
{C_text("f_3052:tcp_2escm"),(void*)f_3052},
{C_text("f_3058:tcp_2escm"),(void*)f_3058},
{C_text("f_3065:tcp_2escm"),(void*)f_3065},
{C_text("f_3068:tcp_2escm"),(void*)f_3068},
{C_text("f_3072:tcp_2escm"),(void*)f_3072},
{C_text("f_3075:tcp_2escm"),(void*)f_3075},
{C_text("f_3082:tcp_2escm"),(void*)f_3082},
{C_text("f_3086:tcp_2escm"),(void*)f_3086},
{C_text("f_3090:tcp_2escm"),(void*)f_3090},
{C_text("f_3103:tcp_2escm"),(void*)f_3103},
{C_text("f_3107:tcp_2escm"),(void*)f_3107},
{C_text("f_3111:tcp_2escm"),(void*)f_3111},
{C_text("f_3119:tcp_2escm"),(void*)f_3119},
{C_text("f_3125:tcp_2escm"),(void*)f_3125},
{C_text("f_3134:tcp_2escm"),(void*)f_3134},
{C_text("f_3137:tcp_2escm"),(void*)f_3137},
{C_text("f_3150:tcp_2escm"),(void*)f_3150},
{C_text("f_3154:tcp_2escm"),(void*)f_3154},
{C_text("f_3158:tcp_2escm"),(void*)f_3158},
{C_text("f_3174:tcp_2escm"),(void*)f_3174},
{C_text("f_3178:tcp_2escm"),(void*)f_3178},
{C_text("f_3182:tcp_2escm"),(void*)f_3182},
{C_text("f_3190:tcp_2escm"),(void*)f_3190},
{C_text("f_3203:tcp_2escm"),(void*)f_3203},
{C_text("f_3213:tcp_2escm"),(void*)f_3213},
{C_text("f_3217:tcp_2escm"),(void*)f_3217},
{C_text("f_3221:tcp_2escm"),(void*)f_3221},
{C_text("f_3229:tcp_2escm"),(void*)f_3229},
{C_text("f_3239:tcp_2escm"),(void*)f_3239},
{C_text("f_3245:tcp_2escm"),(void*)f_3245},
{C_text("f_3256:tcp_2escm"),(void*)f_3256},
{C_text("f_3260:tcp_2escm"),(void*)f_3260},
{C_text("f_3264:tcp_2escm"),(void*)f_3264},
{C_text("f_3268:tcp_2escm"),(void*)f_3268},
{C_text("toplevel:tcp_2escm"),(void*)C_tcp_toplevel},
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
o|hiding unexported module binding: chicken.tcp#d 
o|hiding unexported module binding: chicken.tcp#define-alias 
o|hiding unexported module binding: chicken.tcp#last-error-code 
o|hiding unexported module binding: chicken.tcp#error-code->message 
o|hiding unexported module binding: chicken.tcp#retry? 
o|hiding unexported module binding: chicken.tcp#in-progress? 
o|hiding unexported module binding: chicken.tcp#interrupted? 
o|hiding unexported module binding: chicken.tcp#socket 
o|hiding unexported module binding: chicken.tcp#bind 
o|hiding unexported module binding: chicken.tcp#listen 
o|hiding unexported module binding: chicken.tcp#accept 
o|hiding unexported module binding: chicken.tcp#close 
o|hiding unexported module binding: chicken.tcp#recv 
o|hiding unexported module binding: chicken.tcp#shutdown 
o|hiding unexported module binding: chicken.tcp#connect 
o|hiding unexported module binding: chicken.tcp#check-fd-ready 
o|hiding unexported module binding: chicken.tcp#set-socket-options 
o|hiding unexported module binding: chicken.tcp#send 
o|hiding unexported module binding: chicken.tcp#getsockname 
o|hiding unexported module binding: chicken.tcp#getsockport 
o|hiding unexported module binding: chicken.tcp#getpeerport 
o|hiding unexported module binding: chicken.tcp#getpeername 
o|hiding unexported module binding: chicken.tcp#startup 
o|hiding unexported module binding: chicken.tcp#getservbyname 
o|hiding unexported module binding: chicken.tcp#gethostaddr 
o|hiding unexported module binding: chicken.tcp#network-error 
o|hiding unexported module binding: chicken.tcp#network-error/close 
o|hiding unexported module binding: chicken.tcp#network-error/code 
o|hiding unexported module binding: chicken.tcp#parse-host 
o|hiding unexported module binding: chicken.tcp#fresh-addr 
o|hiding unexported module binding: chicken.tcp#bind-socket 
o|hiding unexported module binding: chicken.tcp#io-ports 
o|hiding unexported module binding: chicken.tcp#get-socket-error 
o|hiding unexported module binding: chicken.tcp#tcp-port->fileno 
o|eliminated procedure checks: 69 
o|specializations:
o|  3 (##sys#check-open-port * *)
o|  24 (scheme#string-append string string)
o|  1 (scheme#char=? char char)
(o e)|safe calls: 364 
(o e)|assignments to immediate values: 10 
o|safe globals: (chicken.tcp#startup chicken.tcp#getpeername chicken.tcp#getpeerport chicken.tcp#getsockport chicken.tcp#getsockname chicken.tcp#send chicken.tcp#set-socket-options chicken.tcp#check-fd-ready chicken.tcp#connect chicken.tcp#shutdown chicken.tcp#recv chicken.tcp#close chicken.tcp#accept chicken.tcp#listen chicken.tcp#bind chicken.tcp#socket chicken.tcp#interrupted? chicken.tcp#in-progress? chicken.tcp#retry? chicken.tcp#error-code->message chicken.tcp#last-error-code) 
o|inlining procedure: k1371 
o|inlining procedure: k1371 
o|substituted constant variable: a1387 
o|inlining procedure: k1402 
o|inlining procedure: "(tcp.scm:291) chicken.tcp#last-error-code" 
o|substituted constant variable: a1427 
o|substituted constant variable: a1428 
o|inlining procedure: k1402 
o|contracted procedure: "(tcp.scm:289) chicken.tcp#getservbyname" 
o|inlining procedure: k1319 
o|inlining procedure: k1319 
o|inlining procedure: k1576 
o|substituted constant variable: a1606 
o|substituted constant variable: a1607 
o|inlining procedure: "(tcp.scm:330) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:330) chicken.tcp#last-error-code" 
o|inlining procedure: k1576 
o|contracted procedure: "(tcp.scm:329) chicken.tcp#listen" 
o|contracted procedure: "(tcp.scm:328) chicken.tcp#bind-socket" 
o|inlining procedure: k1470 
o|substituted constant variable: a1497 
o|substituted constant variable: a1498 
o|inlining procedure: "(tcp.scm:318) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:318) chicken.tcp#last-error-code" 
o|inlining procedure: k1470 
o|contracted procedure: "(tcp.scm:317) chicken.tcp#bind" 
o|inlining procedure: "(tcp.scm:316) chicken.tcp#last-error-code" 
o|substituted constant variable: a1525 
o|substituted constant variable: a1526 
o|inlining procedure: "(tcp.scm:315) chicken.tcp#set-socket-options" 
o|inlining procedure: k1537 
o|inlining procedure: k1537 
o|contracted procedure: "(tcp.scm:310) chicken.tcp#fresh-addr" 
o|inlining procedure: k1651 
o|inlining procedure: k1651 
o|inlining procedure: k1666 
o|inlining procedure: "(tcp.scm:341) chicken.tcp#last-error-code" 
o|substituted constant variable: a1691 
o|substituted constant variable: a1692 
o|inlining procedure: k1666 
o|inlining procedure: "(tcp.scm:340) chicken.tcp#close" 
o|inlining procedure: k1710 
o|inlining procedure: k1710 
o|inlining procedure: k1771 
o|inlining procedure: k1792 
o|inlining procedure: k1792 
o|inlining procedure: k1807 
o|inlining procedure: k1807 
o|inlining procedure: "(tcp.scm:398) chicken.tcp#last-error-code" 
o|substituted constant variable: a1835 
o|substituted constant variable: a1836 
o|inlining procedure: "(tcp.scm:395) chicken.tcp#interrupted?" 
o|inlining procedure: "(tcp.scm:384) chicken.tcp#retry?" 
o|inlining procedure: k1771 
o|contracted procedure: "(tcp.scm:382) chicken.tcp#recv" 
o|inlining procedure: k1883 
o|inlining procedure: k1919 
o|inlining procedure: k1919 
o|inlining procedure: "(tcp.scm:521) chicken.tcp#last-error-code" 
o|substituted constant variable: a1953 
o|substituted constant variable: a1954 
o|inlining procedure: "(tcp.scm:517) chicken.tcp#interrupted?" 
o|inlining procedure: "(tcp.scm:508) chicken.tcp#retry?" 
o|inlining procedure: k1883 
o|inlining procedure: k1973 
o|inlining procedure: k1973 
o|contracted procedure: "(tcp.scm:506) chicken.tcp#send" 
o|inlining procedure: k2004 
o|inlining procedure: k2004 
o|inlining procedure: k2076 
o|inlining procedure: k2076 
o|inlining procedure: k2091 
o|inlining procedure: k2091 
o|inlining procedure: k2109 
o|inlining procedure: k2109 
o|inlining procedure: "(tcp.scm:568) chicken.tcp#last-error-code" 
o|substituted constant variable: a2144 
o|substituted constant variable: a2145 
o|inlining procedure: "(tcp.scm:567) chicken.tcp#close" 
o|inlining procedure: k2172 
o|inlining procedure: k2172 
o|inlining procedure: k2191 
o|inlining procedure: k2191 
o|inlining procedure: k2223 
o|inlining procedure: k2223 
o|inlining procedure: "(tcp.scm:421) chicken.tcp#last-error-code" 
o|substituted constant variable: a2257 
o|substituted constant variable: a2258 
o|inlining procedure: "(tcp.scm:419) chicken.tcp#check-fd-ready" 
o|inlining procedure: k2262 
o|inlining procedure: k2262 
o|inlining procedure: "(tcp.scm:428) chicken.tcp#last-error-code" 
o|substituted constant variable: a2294 
o|substituted constant variable: a2295 
o|inlining procedure: "(tcp.scm:427) chicken.tcp#close" 
o|inlining procedure: k2315 
o|inlining procedure: k2315 
o|inlining procedure: k2346 
o|inlining procedure: k2346 
o|inlining procedure: k2389 
o|inlining procedure: k2389 
o|inlining procedure: k2404 
o|inlining procedure: k2404 
o|inlining procedure: k2432 
o|inlining procedure: k2432 
o|inlining procedure: k2479 
o|inlining procedure: k2479 
o|inlining procedure: k2524 
o|inlining procedure: k2524 
o|inlining procedure: k2538 
o|inlining procedure: k2538 
o|substituted constant variable: a2568 
o|substituted constant variable: a2569 
o|inlining procedure: "(tcp.scm:366) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:366) chicken.tcp#last-error-code" 
o|inlining procedure: k2609 
o|inlining procedure: k2609 
o|inlining procedure: "(tcp.scm:609) chicken.tcp#last-error-code" 
o|substituted constant variable: a2646 
o|substituted constant variable: a2647 
o|inlining procedure: "(tcp.scm:606) chicken.tcp#interrupted?" 
o|contracted procedure: "(tcp.scm:603) chicken.tcp#accept" 
o|inlining procedure: k1162 
o|inlining procedure: k1162 
o|inlining procedure: k2683 
o|inlining procedure: "(tcp.scm:616) chicken.tcp#last-error-code" 
o|substituted constant variable: a2711 
o|substituted constant variable: a2712 
o|inlining procedure: k2683 
o|inlining procedure: "(tcp.scm:614) chicken.tcp#check-fd-ready" 
o|substituted constant variable: a2808 
o|substituted constant variable: a2809 
o|inlining procedure: "(tcp.scm:659) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:659) chicken.tcp#last-error-code" 
o|inlining procedure: k2810 
o|substituted constant variable: a2834 
o|substituted constant variable: a2835 
o|inlining procedure: "(tcp.scm:661) chicken.tcp#close" 
o|inlining procedure: k2810 
o|contracted procedure: "(tcp.scm:657) chicken.tcp#get-socket-error" 
o|inlining procedure: k2839 
o|inlining procedure: k2863 
o|inlining procedure: k2863 
o|substituted constant variable: a2893 
o|substituted constant variable: a2894 
o|inlining procedure: "(tcp.scm:655) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:655) chicken.tcp#last-error-code" 
o|inlining procedure: "(tcp.scm:652) chicken.tcp#interrupted?" 
o|contracted procedure: "(tcp.scm:647) chicken.tcp#in-progress?" 
o|inlining procedure: k2839 
o|contracted procedure: "(tcp.scm:646) chicken.tcp#connect" 
o|substituted constant variable: a2920 
o|substituted constant variable: a2921 
o|inlining procedure: "(tcp.scm:644) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:644) chicken.tcp#last-error-code" 
o|substituted constant variable: a2946 
o|substituted constant variable: a2947 
o|inlining procedure: "(tcp.scm:642) chicken.tcp#close" 
o|inlining procedure: "(tcp.scm:642) chicken.tcp#last-error-code" 
o|inlining procedure: "(tcp.scm:641) chicken.tcp#set-socket-options" 
o|inlining procedure: "(tcp.scm:640) chicken.tcp#last-error-code" 
o|substituted constant variable: a2974 
o|substituted constant variable: a2975 
o|inlining procedure: k2985 
o|inlining procedure: k2985 
o|inlining procedure: k3039 
o|inlining procedure: k3039 
o|substituted constant variable: a3055 
o|inlining procedure: k3073 
o|inlining procedure: k3073 
o|inlining procedure: "(tcp.scm:678) chicken.tcp#last-error-code" 
o|substituted constant variable: a3095 
o|substituted constant variable: a3096 
o|contracted procedure: "(tcp.scm:677) chicken.tcp#getpeername" 
o|inlining procedure: "(tcp.scm:676) chicken.tcp#last-error-code" 
o|substituted constant variable: a3116 
o|substituted constant variable: a3117 
o|contracted procedure: "(tcp.scm:675) chicken.tcp#getsockname" 
o|substituted constant variable: a3122 
o|inlining procedure: k3135 
o|inlining procedure: "(tcp.scm:688) chicken.tcp#last-error-code" 
o|substituted constant variable: a3163 
o|substituted constant variable: a3164 
o|inlining procedure: k3135 
o|inlining procedure: "(tcp.scm:686) chicken.tcp#last-error-code" 
o|substituted constant variable: a3187 
o|substituted constant variable: a3188 
o|contracted procedure: "(tcp.scm:684) chicken.tcp#getpeerport" 
o|inlining procedure: "(tcp.scm:683) chicken.tcp#getsockport" 
o|inlining procedure: k3201 
o|inlining procedure: "(tcp.scm:696) chicken.tcp#last-error-code" 
o|substituted constant variable: a3226 
o|substituted constant variable: a3227 
o|inlining procedure: k3201 
o|inlining procedure: "(tcp.scm:694) chicken.tcp#getsockport" 
o|substituted constant variable: a3232 
o|contracted procedure: "(tcp.scm:237) chicken.tcp#startup" 
o|replaced variables: 595 
o|removed binding forms: 154 
o|removed side-effect free assignment to unused variable: chicken.tcp#last-error-code 
o|removed side-effect free assignment to unused variable: chicken.tcp#retry? 
o|removed side-effect free assignment to unused variable: chicken.tcp#interrupted? 
o|removed side-effect free assignment to unused variable: chicken.tcp#close 
o|removed side-effect free assignment to unused variable: chicken.tcp#check-fd-ready 
o|removed side-effect free assignment to unused variable: chicken.tcp#set-socket-options 
o|removed side-effect free assignment to unused variable: chicken.tcp#getsockport 
o|substituted constant variable: r16523326 
o|substituted constant variable: int190197 
o|substituted constant variable: int189196 
o|inlining procedure: k1973 
o|substituted constant variable: flags232240 
o|substituted constant variable: r21923385 
o|inlining procedure: k2229 
o|substituted constant variable: r23163405 
o|substituted constant variable: r24053411 
o|substituted constant variable: r25253423 
o|substituted constant variable: r25393426 
o|substituted constant variable: c-pointer171178 
o|substituted constant variable: c-pointer171178 
o|substituted constant variable: r11633440 
o|substituted constant variable: r11633440 
o|substituted constant variable: c-pointer170177 
o|substituted constant variable: c-pointer170177 
o|inlining procedure: k2778 
o|contracted procedure: "(tcp.scm:633) chicken.tcp#parse-host" 
o|substituted constant variable: r13203286 
o|substituted constant variable: r13203286 
o|replaced variables: 148 
o|removed binding forms: 504 
o|removed conditional forms: 2 
o|inlining procedure: k1609 
o|inlining procedure: k1500 
o|inlining procedure: k1522 
o|inlining procedure: k1528 
o|inlining procedure: k1615 
o|inlining procedure: k1688 
o|inlining procedure: k1694 
o|inlining procedure: k1832 
o|inlining procedure: k1904 
o|inlining procedure: k1950 
o|substituted constant variable: r19743552 
o|inlining procedure: k2141 
o|inlining procedure: k2150 
o|inlining procedure: k2254 
o|inlining procedure: k2291 
o|inlining procedure: k2300 
o|inlining procedure: k2643 
o|contracted procedure: k1158 
o|inlining procedure: k2708 
o|inlining procedure: k2851 
o|inlining procedure: k2896 
o|inlining procedure: k2949 
o|inlining procedure: k2971 
o|inlining procedure: k1424 
o|inlining procedure: k3092 
o|inlining procedure: k3113 
o|inlining procedure: k3160 
o|inlining procedure: k3184 
o|inlining procedure: k3223 
o|inlining procedure: k3269 
o|replaced variables: 1 
o|removed binding forms: 171 
o|contracted procedure: k1585 
o|contracted procedure: k1588 
o|contracted procedure: k1476 
o|contracted procedure: k1479 
o|contracted procedure: k1768 
o|contracted procedure: k1780 
o|contracted procedure: k1810 
o|contracted procedure: k1880 
o|contracted procedure: k1892 
o|contracted procedure: k1922 
o|contracted procedure: k2226 
o|contracted procedure: k2547 
o|contracted procedure: k2550 
o|contracted procedure: k2606 
o|substituted constant variable: r1159 
o|contracted procedure: k2621 
o|contracted procedure: k2680 
o|contracted procedure: k2775 
o|contracted procedure: k2787 
o|contracted procedure: k2790 
o|contracted procedure: k2816 
o|contracted procedure: k2848 
o|contracted procedure: k2866 
o|contracted procedure: k2872 
o|contracted procedure: k2875 
o|contracted procedure: k2899 
o|contracted procedure: k2902 
o|contracted procedure: k2925 
o|contracted procedure: k2928 
o|contracted procedure: k3126 
o|contracted procedure: k3129 
o|contracted procedure: k3198 
o|simplifications: ((let . 8)) 
o|replaced variables: 1 
o|removed binding forms: 61 
o|removed binding forms: 2 
o|simplifications: ((if . 18) (##core#call . 213) (let . 27)) 
o|  call simplifications:
o|    chicken.fixnum#fx*
o|    scheme#vector?
o|    ##sys#check-string
o|    scheme#string-ref
o|    scheme#not
o|    ##sys#call-with-values	2
o|    scheme#string-length	2
o|    chicken.fixnum#fx>=	9
o|    scheme#vector	2
o|    ##sys#setslot	4
o|    scheme#values	11
o|    chicken.fixnum#fxmin	3
o|    chicken.fixnum#fx-	9
o|    chicken.fixnum#fx+	14
o|    chicken.fixnum#fx=
o|    scheme#+	5
o|    ##sys#setislot	5
o|    ##sys#check-structure	5
o|    ##sys#slot	19
o|    ##sys#structure?
o|    scheme#car	5
o|    scheme#null?	9
o|    scheme#cdr	4
o|    chicken.fixnum#fx<	6
o|    chicken.fixnum#fx>	7
o|    ##sys#check-fixnum	4
o|    scheme#eq?	27
o|    ##sys#make-structure	2
o|    ##sys#foreign-block-argument	6
o|    ##sys#foreign-string-argument	3
o|    ##sys#foreign-unsigned-ranged-integer-argument	2
o|    ##sys#foreign-fixnum-argument	41
o|contracted procedure: k1094 
o|contracted procedure: k1110 
o|contracted procedure: k1114 
o|contracted procedure: k1118 
o|contracted procedure: k1204 
o|contracted procedure: k1208 
o|contracted procedure: k1340 
o|contracted procedure: k1348 
o|contracted procedure: k1356 
o|contracted procedure: k1642 
o|contracted procedure: k1552 
o|contracted procedure: k1636 
o|contracted procedure: k1555 
o|contracted procedure: k1630 
o|contracted procedure: k1558 
o|contracted procedure: k1624 
o|contracted procedure: k1561 
o|contracted procedure: k1564 
o|contracted procedure: k1570 
o|contracted procedure: k1143 
o|contracted procedure: k1147 
o|contracted procedure: k1582 
o|contracted procedure: k11753298 
o|contracted procedure: k1125 
o|contracted procedure: k1129 
o|contracted procedure: k1133 
o|contracted procedure: k1473 
o|contracted procedure: k11753312 
o|contracted procedure: k12403322 
o|contracted procedure: k1503 
o|contracted procedure: k1531 
o|contracted procedure: k1444 
o|contracted procedure: k1448 
o|contracted procedure: k1612 
o|contracted procedure: k1615 
o|contracted procedure: k1660 
o|contracted procedure: k1663 
o|contracted procedure: k11753335 
o|contracted procedure: k1669 
o|contracted procedure: k1710 
o|contracted procedure: k1717 
o|contracted procedure: k1745 
o|contracted procedure: k1182 
o|contracted procedure: k1186 
o|contracted procedure: k1190 
o|contracted procedure: k1194 
o|contracted procedure: k1774 
o|contracted procedure: k1798 
o|contracted procedure: k1838 
o|contracted procedure: k1861 
o|contracted procedure: k1877 
o|contracted procedure: k1247 
o|contracted procedure: k1251 
o|contracted procedure: k1255 
o|contracted procedure: k1259 
o|contracted procedure: k1263 
o|contracted procedure: k1886 
o|contracted procedure: k1910 
o|contracted procedure: k1958 
o|contracted procedure: k1965 
o|contracted procedure: k1969 
o|contracted procedure: k1976 
o|contracted procedure: k1973 
o|contracted procedure: k2007 
o|contracted procedure: k2010 
o|contracted procedure: k2016 
o|contracted procedure: k2019 
o|contracted procedure: k2030 
o|contracted procedure: k2034 
o|contracted procedure: k2038 
o|contracted procedure: k2088 
o|contracted procedure: k2094 
o|contracted procedure: k11753382 
o|contracted procedure: k2153 
o|contracted procedure: k2159 
o|contracted procedure: k2175 
o|contracted procedure: k2041 
o|contracted procedure: k2047 
o|contracted procedure: k2050 
o|contracted procedure: k2061 
o|contracted procedure: k2064 
o|contracted procedure: k2194 
o|contracted procedure: k2201 
o|contracted procedure: k2208 
o|contracted procedure: k2211 
o|contracted procedure: k2220 
o|contracted procedure: k12333395 
o|contracted procedure: k2235 
o|contracted procedure: k11753404 
o|contracted procedure: k2303 
o|contracted procedure: k2318 
o|contracted procedure: k2325 
o|contracted procedure: k2331 
o|contracted procedure: k2349 
o|contracted procedure: k2355 
o|contracted procedure: k2358 
o|contracted procedure: k2383 
o|contracted procedure: k2361 
o|contracted procedure: k2365 
o|contracted procedure: k2372 
o|contracted procedure: k2376 
o|contracted procedure: k2380 
o|contracted procedure: k2392 
o|contracted procedure: k2407 
o|contracted procedure: k2410 
o|contracted procedure: k2473 
o|contracted procedure: k2423 
o|contracted procedure: k2429 
o|contracted procedure: k2435 
o|contracted procedure: k2445 
o|contracted procedure: k2451 
o|contracted procedure: k2462 
o|contracted procedure: k2458 
o|contracted procedure: k2469 
o|contracted procedure: k2494 
o|contracted procedure: k2490 
o|contracted procedure: k2483 
o|inlining procedure: k2479 
o|contracted procedure: k2505 
o|contracted procedure: k2509 
o|contracted procedure: k2501 
o|inlining procedure: k2479 
o|contracted procedure: k2515 
o|contracted procedure: k2527 
o|contracted procedure: k2535 
o|contracted procedure: k2541 
o|contracted procedure: k11753432 
o|contracted procedure: k2668 
o|contracted procedure: k2573 
o|contracted procedure: k2576 
o|contracted procedure: k2579 
o|contracted procedure: k1154 
o|contracted procedure: k2649 
o|contracted procedure: k2612 
o|contracted procedure: k2652 
o|contracted procedure: k2677 
o|contracted procedure: k2714 
o|contracted procedure: k12333458 
o|contracted procedure: k2689 
o|contracted procedure: k3027 
o|contracted procedure: k2727 
o|contracted procedure: k3021 
o|contracted procedure: k2730 
o|contracted procedure: k3015 
o|contracted procedure: k2733 
o|contracted procedure: k3009 
o|contracted procedure: k2736 
o|contracted procedure: k2748 
o|contracted procedure: k2754 
o|contracted procedure: k2721 
o|contracted procedure: k2784 
o|contracted procedure: k11753464 
o|contracted procedure: k2813 
o|contracted procedure: k11753472 
o|contracted procedure: k1215 
o|contracted procedure: k1219 
o|contracted procedure: k1223 
o|contracted procedure: k2842 
o|contracted procedure: k11753482 
o|contracted procedure: k11753491 
o|contracted procedure: k12403505 
o|contracted procedure: k2922 
o|contracted procedure: k11753498 
o|contracted procedure: k2952 
o|contracted procedure: k1362 
o|contracted procedure: k1374 
o|contracted procedure: k1380 
o|contracted procedure: k1405 
o|contracted procedure: k1326 
o|contracted procedure: k1333 
o|contracted procedure: k1430 
o|contracted procedure: k1437 
o|contracted procedure: k3042 
o|contracted procedure: k1302 
o|contracted procedure: k1277 
o|contracted procedure: k12843534 
o|contracted procedure: k1291 
o|contracted procedure: k3141 
o|contracted procedure: k3165 
o|contracted procedure: k3192 
o|contracted procedure: k3195 
o|contracted procedure: k12843545 
o|contracted procedure: k3204 
o|contracted procedure: k3241 
o|contracted procedure: k3247 
o|simplifications: ((let . 45)) 
o|removed binding forms: 183 
o|inlining procedure: k1344 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest446448 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest446448 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest446448 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest446448 0 
o|inlining procedure: "(tcp.scm:330) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:318) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:316) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:311) chicken.tcp#socket" 
o|inlining procedure: "(tcp.scm:341) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:398) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:521) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:568) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:566) chicken.tcp#shutdown" 
o|inlining procedure: "(tcp.scm:421) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:428) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:426) chicken.tcp#shutdown" 
o|inlining procedure: "(tcp.scm:366) chicken.tcp#error-code->message" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest714716 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest714716 0 
o|inlining procedure: "(tcp.scm:609) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:616) chicken.tcp#error-code->message" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest760762 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest760762 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest760762 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest760762 0 
o|inlining procedure: "(tcp.scm:659) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:662) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:655) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:644) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:642) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:640) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:638) chicken.tcp#socket" 
o|inlining procedure: "(tcp.scm:291) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:678) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:676) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:688) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:686) chicken.tcp#error-code->message" 
o|inlining procedure: "(tcp.scm:696) chicken.tcp#error-code->message" 
o|removed binding forms: 1 
o|removed side-effect free assignment to unused variable: chicken.tcp#error-code->message 
o|removed side-effect free assignment to unused variable: chicken.tcp#socket 
o|removed side-effect free assignment to unused variable: chicken.tcp#shutdown 
o|substituted constant variable: r13453708 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1556 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1556 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1556 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1556 1 
o|substituted constant variable: int1441493725 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2731 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2731 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2731 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2731 1 
o|substituted constant variable: int1441493807 
o|replaced variables: 39 
o|removed binding forms: 49 
o|contracted procedure: k1461 
o|contracted procedure: k2760 
o|removed binding forms: 2 
o|customizable procedures: (check492 chicken.tcp#tcp-port->fileno k2742 loop400 k1399 k2585 chicken.tcp#io-ports loop582 k2266 k2272 read-input526 k2113 k2116 k2122 add-to-buf658 output-to-socket621 loop661 k1871 loop628 k1759 chicken.tcp#gethostaddr k1573) 
o|shared closure containers: 31 
o|shared closure users: 35 
o|calls to known targets: 90 
o|unused rest argument: rest446448 f_1550 
o|identified direct recursive calls: f_1875 2 
o|identified direct recursive calls: f_2344 1 
o|unused rest argument: rest714716 f_2571 
o|identified direct recursive calls: f_1369 1 
o|unused rest argument: rest760762 f_2725 
o|fast box initializations: 8 
o|fast global references: 7 
o|fast global assignments: 3 
o|dropping unused closure argument: f_1337 
o|dropping unused closure argument: f_1706 
o|dropping unused closure argument: f_3034 
*/
/* end of file */
