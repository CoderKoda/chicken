/* Generated from posix.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: posix.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file posixunix.c -feature platform-unix -emit-import-library chicken.errno -emit-import-library chicken.file.posix -emit-import-library chicken.time.posix -emit-import-library chicken.process -emit-import-library chicken.process.signal -emit-import-library chicken.process-context.posix -no-module-registration
   unit: posix
   uses: extras scheduler port pathname lolevel library
*/
#include "chicken.h"


#include <signal.h>

static int C_not_implemented(void);
int C_not_implemented() { return -1; }

#if defined(_WIN32) && !defined(__CYGWIN__)
static struct _stat64i32 C_statbuf;
#define C_fstat   _fstat64i32
#else
static struct stat C_statbuf;
#define C_fstat   fstat
#endif

#define C_stat_type         (C_statbuf.st_mode & S_IFMT)
#define C_stat_perm         (C_statbuf.st_mode & ~S_IFMT)

#define C_u_i_stat(fn)      C_fix(C_stat(C_OS_FILENAME(fn, 0), &C_statbuf))
#define C_u_i_fstat(fd)     C_fix(C_fstat(C_unfix(fd), &C_statbuf))

#ifndef S_IFSOCK
# define S_IFSOCK           0140000
#endif

#ifndef S_IRUSR
# define S_IRUSR  S_IREAD
#endif
#ifndef S_IWUSR
# define S_IWUSR  S_IWRITE
#endif
#ifndef S_IXUSR
# define S_IXUSR  S_IEXEC
#endif

#ifndef S_IRGRP
# define S_IRGRP  S_IREAD
#endif
#ifndef S_IWGRP
# define S_IWGRP  S_IWRITE
#endif
#ifndef S_IXGRP
# define S_IXGRP  S_IEXEC
#endif

#ifndef S_IROTH
# define S_IROTH  S_IREAD
#endif
#ifndef S_IWOTH
# define S_IWOTH  S_IWRITE
#endif
#ifndef S_IXOTH
# define S_IXOTH  S_IEXEC
#endif

#define cpy_tmvec_to_tmstc08(ptm, v) \
    ((ptm)->tm_sec = C_unfix(C_block_item((v), 0)), \
    (ptm)->tm_min = C_unfix(C_block_item((v), 1)), \
    (ptm)->tm_hour = C_unfix(C_block_item((v), 2)), \
    (ptm)->tm_mday = C_unfix(C_block_item((v), 3)), \
    (ptm)->tm_mon = C_unfix(C_block_item((v), 4)), \
    (ptm)->tm_year = C_unfix(C_block_item((v), 5)), \
    (ptm)->tm_wday = C_unfix(C_block_item((v), 6)), \
    (ptm)->tm_yday = C_unfix(C_block_item((v), 7)), \
    (ptm)->tm_isdst = (C_block_item((v), 8) != C_SCHEME_FALSE))

#define cpy_tmvec_to_tmstc9(ptm, v) \
    (((struct tm *)ptm)->tm_gmtoff = -C_unfix(C_block_item((v), 9)))

#define C_tm_set_08(v, tm)  cpy_tmvec_to_tmstc08( (tm), (v) )
#define C_tm_set_9(v, tm)   cpy_tmvec_to_tmstc9( (tm), (v) )

static struct tm *
C_tm_set( C_word v, void *tm )
{
  C_tm_set_08( v, (struct tm *)tm );
#if defined(C_GNU_ENV) && !defined(__CYGWIN__) && !defined(__uClinux__)
  C_tm_set_9( v, (struct tm *)tm );
#endif
  return tm;
}

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

#define C_strftime(v, f, tm) \
        (strftime(C_time_string, sizeof(C_time_string), C_c_string(f), C_tm_set((v), (tm))) ? C_time_string : NULL)
#define C_a_mktime(ptr, c, v, tm)  C_int64_to_num(ptr, mktime(C_tm_set((v), C_data_pointer(tm))))
#define C_asctime(v, tm)    (asctime(C_tm_set((v), (tm))))

#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_dup(x)            C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)        C_fix(dup2(C_unfix(x), C_unfix(y)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

/* It is assumed that 'int' is-a 'long' */
#define C_ftell(a, n, p)    C_int64_to_num(a, ftell(C_port_file(p)))
#define C_fseek(p, n, w)    C_mk_nbool(fseek(C_port_file(p), C_num_to_int64(n), C_unfix(w)))
#define C_lseek(fd, o, w)     C_fix(lseek(C_unfix(fd), C_num_to_int64(o), C_unfix(w)))

#ifndef S_IFLNK
#define S_IFLNK S_IFREG
#endif

#ifndef S_IFREG
#define S_IFREG S_IFREG
#endif

#ifndef S_IFDIR
#define S_IFDIR S_IFREG
#endif

#ifndef S_IFCHR
#define S_IFCHR S_IFREG
#endif

#ifndef S_IFBLK
#define S_IFBLK S_IFREG
#endif

#ifndef S_IFSOCK
#define S_IFSOCK S_IFREG
#endif

#ifndef S_IFIFO
#define S_IFIFO S_IFREG
#endif



static int C_wait_status;

#include <sys/time.h>
#include <sys/wait.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>
#include <utime.h>

#if defined(__sun) && defined(__SVR4)
# include <sys/tty.h>
# include <termios.h>
#endif

#if defined(__linux__) || defined(__GLIBC__) || (defined(__sun) && defined(__SVR4))
# include <sys/file.h>
#endif

#ifdef __HAIKU__
# include <posix/sys/file.h>
#endif

#include <sys/mman.h>
#include <poll.h>

#ifndef O_FSYNC
# define O_FSYNC O_SYNC
#endif

#ifndef PIPE_BUF
# ifdef __CYGWIN__
#  define PIPE_BUF       _POSIX_PIPE_BUF
# else
#  define PIPE_BUF 1024
# endif
#endif

#ifndef O_BINARY
# define O_BINARY        0
#endif
#ifndef O_TEXT
# define O_TEXT          0
#endif

#ifndef MAP_FILE
# define MAP_FILE    0
#endif

#ifndef MAP_ANON
# define MAP_ANON    0
#endif

#ifndef FILENAME_MAX
# define FILENAME_MAX          1024
#endif

static DIR *temphandle;
static struct passwd *C_user;

/* Android doesn't provide pw_gecos in the passwd struct */
#ifdef __ANDROID__
# define C_PW_GECOS ("")
#else
# define C_PW_GECOS (C_user->pw_gecos)
#endif

static int C_pipefds[ 2 ];
static time_t C_secs;
static struct timeval C_timeval;
static struct stat C_statbuf;

#define C_fchdir(fd)        C_fix(fchdir(C_unfix(fd)))

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)                        C_fix(pclose(C_port_file(p)))

#define C_fork              fork
#define C_waitpid(id, o)    C_fix(waitpid(C_unfix(id), &C_wait_status, C_unfix(o)))
#define C_getppid           getppid
#define C_kill(id, s)       C_fix(kill(C_unfix(id), C_unfix(s)))
#define C_getuid            getuid
#define C_getgid            getgid
#define C_geteuid           geteuid
#define C_getegid           getegid
#define C_chown(fn, u, g)   C_fix(chown(C_c_string(fn), C_unfix(u), C_unfix(g)))
#define C_fchown(fd, u, g)  C_fix(fchown(C_unfix(fd), C_unfix(u), C_unfix(g)))
#define C_chmod(fn, m)      C_fix(chmod(C_c_string(fn), C_unfix(m)))
#define C_fchmod(fd, m)     C_fix(fchmod(C_unfix(fd), C_unfix(m)))
#define C_setuid(id)        C_fix(setuid(C_unfix(id)))
#define C_setgid(id)        C_fix(setgid(C_unfix(id)))
#define C_seteuid(id)       C_fix(seteuid(C_unfix(id)))
#define C_setegid(id)       C_fix(setegid(C_unfix(id)))
#define C_setsid(dummy)     C_fix(setsid())
#define C_setpgid(x, y)     C_fix(setpgid(C_unfix(x), C_unfix(y)))
#define C_getpgid(x)        C_fix(getpgid(C_unfix(x)))
#define C_symlink(o, n)     C_fix(symlink(C_c_string(o), C_c_string(n)))
#define C_do_readlink(f, b) C_fix(readlink(C_c_string(f), C_c_string(b), FILENAME_MAX))
#define C_getpwnam(n)       C_mk_bool((C_user = getpwnam(C_c_string(n))) != NULL)
#define C_getpwuid(u)       C_mk_bool((C_user = getpwuid(C_unfix(u))) != NULL)
#define C_pipe(d)           C_fix(pipe(C_pipefds))
#define C_truncate(f, n)    C_fix(truncate(C_c_string(f), C_num_to_int(n)))
#define C_ftruncate(f, n)   C_fix(ftruncate(C_unfix(f), C_num_to_int(n)))
#define C_alarm             alarm
#define C_close(fd)         C_fix(close(C_unfix(fd)))
#define C_umask(m)          C_fix(umask(C_unfix(m)))

#define C_u_i_lstat(fn)     C_fix(lstat(C_c_string(fn), &C_statbuf))

#define C_u_i_execvp(f,a)   C_fix(execvp(C_c_string(f), (char *const *)C_c_pointer_vector_or_null(a)))
#define C_u_i_execve(f,a,e) C_fix(execve(C_c_string(f), (char *const *)C_c_pointer_vector_or_null(a), (char *const *)C_c_pointer_vector_or_null(e)))

static int C_uw;
#define C_WIFEXITED(n)      (C_uw = C_unfix(n), C_mk_bool(WIFEXITED(C_uw)))
#define C_WIFSIGNALED(n)    (C_uw = C_unfix(n), C_mk_bool(WIFSIGNALED(C_uw)))
#define C_WIFSTOPPED(n)     (C_uw = C_unfix(n), C_mk_bool(WIFSTOPPED(C_uw)))
#define C_WEXITSTATUS(n)    (C_uw = C_unfix(n), C_fix(WEXITSTATUS(C_uw)))
#define C_WTERMSIG(n)       (C_uw = C_unfix(n), C_fix(WTERMSIG(C_uw)))
#define C_WSTOPSIG(n)       (C_uw = C_unfix(n), C_fix(WSTOPSIG(C_uw)))

#ifdef __CYGWIN__
# define C_mkfifo(fn, m)    C_fix(-1)
#else
# define C_mkfifo(fn, m)    C_fix(mkfifo(C_c_string(fn), C_unfix(m)))
#endif

static C_word C_flock(C_word n, C_word f)
{
    return C_fix(flock(C_unfix(n), C_unfix(f)));
}

static sigset_t C_sigset;
#define C_sigemptyset(d)    (sigemptyset(&C_sigset), C_SCHEME_UNDEFINED)
#define C_sigaddset(s)      (sigaddset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigdelset(s)      (sigdelset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigismember(s)    C_mk_bool(sigismember(&C_sigset, C_unfix(s)))
#define C_sigprocmask_set(d)        C_fix(sigprocmask(SIG_SETMASK, &C_sigset, NULL))
#define C_sigprocmask_block(d)      C_fix(sigprocmask(SIG_BLOCK, &C_sigset, NULL))
#define C_sigprocmask_unblock(d)    C_fix(sigprocmask(SIG_UNBLOCK, &C_sigset, NULL))
#define C_sigprocmask_get(d)        C_fix(sigprocmask(SIG_SETMASK, NULL, &C_sigset))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_c_string(b), C_unfix(n)))
#define C_write(fd, b, start, n)   C_fix(write(C_unfix(fd), C_c_string(b) + C_unfix(start), C_unfix(n)))
#define C_mkstemp(t)        C_fix(mkstemp(C_c_string(t)))

#define C_ctime(n)          (C_secs = (n), ctime(&C_secs))

#if defined(__SVR4) || defined(C_MACOSX) || defined(__ANDROID__) || defined(_AIX)
/* Seen here: http://lists.samba.org/archive/samba-technical/2002-November/025571.html */

static time_t C_timegm(struct tm *t)
{
  time_t tl, tb;
  struct tm *tg;

  tl = mktime (t);
  if (tl == -1)
    {
      t->tm_hour--;
      tl = mktime (t);
      if (tl == -1)
        return -1; /* can't deal with output from strptime */
      tl += 3600;
    }
  tg = gmtime (&tl);
  tg->tm_isdst = 0;
  tb = mktime (tg);
  if (tb == -1)
    {
      tg->tm_hour--;
      tb = mktime (tg);
      if (tb == -1)
        return -1; /* can't deal with output from gmtime */
      tb += 3600;
    }
  return (tl - (tb - tl));
}
#else
#define C_timegm timegm
#endif

#define C_a_timegm(ptr, c, v, tm)  C_int64_to_num(ptr, C_timegm(C_tm_set((v), C_data_pointer(tm))))

#ifdef __linux__
extern char *strptime(const char *s, const char *format, struct tm *tm);
extern pid_t getpgid(pid_t pid);
#endif

/* tm_get could be in posix-common, but it's only used in here */
#define cpy_tmstc08_to_tmvec(v, ptm) \
    (C_set_block_item((v), 0, C_fix(((struct tm *)ptm)->tm_sec)), \
    C_set_block_item((v), 1, C_fix((ptm)->tm_min)), \
    C_set_block_item((v), 2, C_fix((ptm)->tm_hour)), \
    C_set_block_item((v), 3, C_fix((ptm)->tm_mday)), \
    C_set_block_item((v), 4, C_fix((ptm)->tm_mon)), \
    C_set_block_item((v), 5, C_fix((ptm)->tm_year)), \
    C_set_block_item((v), 6, C_fix((ptm)->tm_wday)), \
    C_set_block_item((v), 7, C_fix((ptm)->tm_yday)), \
    C_set_block_item((v), 8, ((ptm)->tm_isdst ? C_SCHEME_TRUE : C_SCHEME_FALSE)))

#define cpy_tmstc9_to_tmvec(v, ptm) \
    (C_set_block_item((v), 9, C_fix(-(ptm)->tm_gmtoff)))

#define C_tm_get_08(v, tm)  cpy_tmstc08_to_tmvec( (v), (tm) )
#define C_tm_get_9(v, tm)   cpy_tmstc9_to_tmvec( (v), (tm) )

static C_word
C_tm_get( C_word v, void *tm )
{
  C_tm_get_08( v, (struct tm *)tm );
#if defined(C_GNU_ENV) && !defined(__CYGWIN__) && !defined(__uClinux__)
  C_tm_get_9( v, (struct tm *)tm );
#endif
  return v;
}

#define C_strptime(s, f, v, stm) \
        (strptime(C_c_string(s), C_c_string(f), ((struct tm *)(stm))) ? C_tm_get((v), (stm)) : C_SCHEME_FALSE)

static int set_file_mtime(C_word filename, C_word atime, C_word mtime)
{
  struct stat sb;
  struct utimbuf tb;
  C_word bv = C_block_item(filename, 0);

  /* Only lstat if needed */
  if (atime == C_SCHEME_FALSE || mtime == C_SCHEME_FALSE) {
    if (lstat(C_c_string(bv), &sb) == -1) return -1;
  }

  if (atime == C_SCHEME_FALSE) {
    tb.actime = sb.st_atime;
  } else {
    tb.actime = C_num_to_int64(atime);
  }
  if (mtime == C_SCHEME_FALSE) {
    tb.modtime = sb.st_mtime;
  } else {
    tb.modtime = C_num_to_int64(mtime);
  }
  return utime(C_c_string(bv), &tb);
}



static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_extern void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_extern void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_extern void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_extern void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[528];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,115,121,115,116,101,109,32,99,109,100,41,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,115,121,115,116,101,109,42,32,115,116,114,41,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,8),40,103,50,53,56,32,99,41};
static C_char li3[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,50,53,50,32,103,50,54,52,41,0,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,113,115,32,115,116,114,32,46,32,114,101,115,116,41,0};
static C_char li5[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,32,108,111,99,32,109,115,103,32,46,32,97,114,103,115,41,0};
static C_char li6[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,115,116,97,116,32,102,105,108,101,32,108,105,110,107,32,101,114,114,32,108,111,99,41,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,116,97,116,32,102,32,46,32,114,101,115,116,41,0};
static C_char li8[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,112,101,114,109,105,115,115,105,111,110,115,33,32,102,32,112,41,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,109,111,100,105,102,105,99,97,116,105,111,110,45,116,105,109,101,32,102,41,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,97,99,99,101,115,115,45,116,105,109,101,32,102,41,0};
static C_char li11[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,104,97,110,103,101,45,116,105,109,101,32,102,41,0};
static C_char li12[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,116,105,109,101,115,33,32,102,32,46,32,114,101,115,116,41,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,105,122,101,32,102,41};
static C_char li14[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,111,119,110,101,114,33,32,102,32,117,105,100,41,0,0,0,0,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,103,114,111,117,112,33,32,102,32,103,105,100,41,0,0,0,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,121,112,101,32,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,114,101,103,117,108,97,114,45,102,105,108,101,63,32,102,105,108,101,41,0};
static C_char li18[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,121,109,98,111,108,105,99,45,108,105,110,107,63,32,102,105,108,101,41};
static C_char li19[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,98,108,111,99,107,45,100,101,118,105,99,101,63,32,102,105,108,101,41,0};
static C_char li20[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,104,97,114,97,99,116,101,114,45,100,101,118,105,99,101,63,32,102,105,108,101,41,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,102,111,63,32,102,105,108,101,41,0};
static C_char li22[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,111,99,107,101,116,63,32,102,105,108,101,41,0,0,0,0,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,100,105,114,101,99,116,111,114,121,63,32,102,105,108,101,41,0,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,57),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,32,112,111,115,32,46,32,119,104,101,110,99,101,41,0,0,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,16),40,109,111,100,101,32,105,110,112,32,109,32,108,111,99,41};
static C_char li26[] C_aligned={C_lihdr(0,0,24),40,99,104,101,99,107,32,108,111,99,32,102,100,32,105,110,112,32,114,32,101,110,99,41};
static C_char li27[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,32,46,32,114,101,115,116,41,0};
static C_char li28[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,32,46,32,114,101,115,116,41};
static C_char li29[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,41,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,32,46,32,110,101,119,41,0};
static C_char li31[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,42,32,102,100,41,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,45,104,111,111,107,32,100,105,114,41,0,0,0,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,16),67,95,100,101,99,111,100,101,95,115,101,99,111,110,100,115};
static C_char li35[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,32,116,109,41};
static C_char li36[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,114,101,115,116,41,0};
static C_char li37[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,114,101,115,116,41,0,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,41,0,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,32,112,114,111,99,41,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,11),40,97,52,50,53,52,32,115,105,103,41,0,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,11),40,103,49,48,51,52,32,115,105,103,41,0,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,15),40,102,95,52,50,54,51,32,46,32,114,101,115,116,41,0};
static C_char li45[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,51,51,32,103,49,48,52,48,41,0,0,0,0,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,109,97,107,101,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,32,46,32,115,105,103,115,41,0,0,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,105,103,110,111,114,101,32,115,105,103,41,0,0,0,0,0,0};
static C_char li48[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,100,101,102,97,117,108,116,32,115,105,103,41,0,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,26),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,63,32,120,41,0,0,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,105,100,32,120,41,0,0,0,0};
static C_char li51[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,114,101,116,117,114,110,101,100,45,110,111,114,109,97,108,108,121,63,32,120,41,0,0,0,0};
static C_char li52[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,105,110,112,117,116,45,112,111,114,116,32,120,41,0,0,0,0};
static C_char li53[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,111,117,116,112,117,116,45,112,111,114,116,32,120,41,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,101,114,114,111,114,45,112,111,114,116,32,120,41,0,0,0,0};
static C_char li55[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,101,120,105,116,45,115,116,97,116,117,115,32,120,41,0,0,0};
static C_char li56[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,108,101,101,112,32,110,41,0,0,0,0,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,7),40,97,52,53,55,55,41,0};
static C_char li58[] C_aligned={C_lihdr(0,0,5),40,114,101,99,41,0,0,0};
static C_char li59[] C_aligned={C_lihdr(0,0,24),40,97,52,53,56,51,32,101,112,105,100,32,101,110,111,114,109,32,101,99,111,100,101,41};
static C_char li60[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,41,0,0,0};
static C_char li61[] C_aligned={C_lihdr(0,0,7),40,97,52,54,57,54,41,0};
static C_char li62[] C_aligned={C_lihdr(0,0,11),40,97,52,54,57,48,32,101,120,110,41,0,0,0,0,0};
static C_char li63[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,49,50,48,56,32,115,108,32,105,41,0,0,0,0,0,0,0};
static C_char li64[] C_aligned={C_lihdr(0,0,10),40,116,109,112,49,50,56,50,54,41,0,0,0,0,0,0};
static C_char li65[] C_aligned={C_lihdr(0,0,7),40,97,52,55,55,48,41,0};
static C_char li66[] C_aligned={C_lihdr(0,0,15),40,116,109,112,50,50,56,50,55,32,97,114,103,115,41,0};
static C_char li67[] C_aligned={C_lihdr(0,0,7),40,97,52,55,48,53,41,0};
static C_char li68[] C_aligned={C_lihdr(0,0,9),40,97,52,54,56,52,32,107,41,0,0,0,0,0,0,0};
static C_char li69[] C_aligned={C_lihdr(0,0,61),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,108,105,115,116,45,62,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,115,116,114,105,110,103,45,108,105,115,116,32,99,111,110,118,101,114,116,32,108,111,99,41,0,0,0};
static C_char li70[] C_aligned={C_lihdr(0,0,14),40,100,111,108,111,111,112,49,50,50,55,32,105,41,0,0};
static C_char li71[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,102,114,101,101,45,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,98,117,102,102,101,114,45,97,114,114,97,121,41,0,0,0,0,0,0,0};
static C_char li72[] C_aligned={C_lihdr(0,0,7),40,103,49,50,52,48,41,0};
static C_char li73[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,51,57,41,0,0,0,0,0};
static C_char li74[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,101,99,107,45,101,110,118,105,114,111,110,109,101,110,116,45,108,105,115,116,32,108,115,116,32,108,111,99,41,0,0};
static C_char li75[] C_aligned={C_lihdr(0,0,7),40,110,111,112,32,120,41,0};
static C_char li76[] C_aligned={C_lihdr(0,0,7),40,97,52,56,57,53,41,0};
static C_char li77[] C_aligned={C_lihdr(0,0,11),40,97,52,56,56,57,32,101,120,110,41,0,0,0,0,0};
static C_char li78[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,56,49,32,103,49,50,57,51,41,0,0,0,0};
static C_char li79[] C_aligned={C_lihdr(0,0,7),40,97,52,57,49,54,41,0};
static C_char li80[] C_aligned={C_lihdr(0,0,7),40,97,52,57,57,55,41,0};
static C_char li81[] C_aligned={C_lihdr(0,0,14),40,97,52,57,57,49,32,46,32,97,114,103,115,41,0,0};
static C_char li82[] C_aligned={C_lihdr(0,0,7),40,97,52,57,49,48,41,0};
static C_char li83[] C_aligned={C_lihdr(0,0,9),40,97,52,56,56,51,32,107,41,0,0,0,0,0,0,0};
static C_char li84[] C_aligned={C_lihdr(0,0,77),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,97,108,108,45,119,105,116,104,45,101,120,101,99,45,97,114,103,115,32,108,111,99,32,102,105,108,101,110,97,109,101,32,97,114,103,99,111,110,118,32,97,114,103,108,105,115,116,32,101,110,118,108,105,115,116,32,112,114,111,99,41,0,0,0};
static C_char li85[] C_aligned={C_lihdr(0,0,21),40,99,104,101,99,107,32,108,111,99,32,99,109,100,32,105,110,112,32,114,41,0,0,0};
static C_char li86[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0,0};
static C_char li87[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0};
static C_char li88[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,41,0};
static C_char li89[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,41};
static C_char li90[] C_aligned={C_lihdr(0,0,7),40,97,53,49,54,48,41,0};
static C_char li91[] C_aligned={C_lihdr(0,0,17),40,97,53,49,55,49,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char li92[] C_aligned={C_lihdr(0,0,7),40,97,53,49,54,53,41,0};
static C_char li93[] C_aligned={C_lihdr(0,0,7),40,97,53,49,56,48,41,0};
static C_char li94[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0};
static C_char li95[] C_aligned={C_lihdr(0,0,7),40,97,53,49,57,52,41,0};
static C_char li96[] C_aligned={C_lihdr(0,0,17),40,97,53,50,48,48,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char li97[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0};
static C_char li98[] C_aligned={C_lihdr(0,0,7),40,97,53,50,49,56,41,0};
static C_char li99[] C_aligned={C_lihdr(0,0,17),40,97,53,50,50,52,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char li100[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0,0};
static C_char li101[] C_aligned={C_lihdr(0,0,7),40,97,53,50,52,50,41,0};
static C_char li102[] C_aligned={C_lihdr(0,0,17),40,97,53,50,53,51,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char li103[] C_aligned={C_lihdr(0,0,7),40,97,53,50,52,55,41,0};
static C_char li104[] C_aligned={C_lihdr(0,0,7),40,97,53,50,54,50,41,0};
static C_char li105[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0,0};
static C_char li106[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,102,105,108,101,45,110,111,110,98,108,111,99,107,105,110,103,33,32,102,100,49,52,57,54,41};
static C_char li107[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,108,101,45,115,101,108,101,99,116,45,111,110,101,32,105,110,116,49,53,48,49,41,0};
static C_char li108[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,111,110,116,114,111,108,32,102,100,32,99,109,100,32,46,32,114,101,115,116,41,0};
static C_char li109[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,32,102,108,97,103,115,32,46,32,109,111,100,101,41,0,0,0,0};
static C_char li110[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li111[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,108,111,115,101,32,102,100,41,0,0,0,0,0,0};
static C_char li112[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,114,101,97,100,32,102,100,32,115,105,122,101,32,46,32,98,117,102,102,101,114,41,0};
static C_char li113[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,119,114,105,116,101,32,102,100,32,98,117,102,102,101,114,32,46,32,115,105,122,101,41};
static C_char li114[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,41,0,0,0,0,0,0};
static C_char li115[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,53,57,51,32,102,100,115,114,108,41,0,0,0,0,0,0};
static C_char li116[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,53,57,52,32,102,100,115,119,108,41,0,0,0,0,0,0};
static C_char li117[] C_aligned={C_lihdr(0,0,14),40,108,112,32,105,32,114,101,115,32,102,100,115,41,0,0};
static C_char li118[] C_aligned={C_lihdr(0,0,14),40,108,112,32,105,32,114,101,115,32,102,100,115,41,0,0};
static C_char li119[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,101,108,101,99,116,32,102,100,115,114,32,102,100,115,119,32,46,32,116,105,109,101,111,117,116,41,0,0,0,0};
static C_char li120[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,114,101,97,116,101,45,112,105,112,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li121[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,48,54,41,0,0,0,0,0};
static C_char li122[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,115,41,0,0};
static C_char li123[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,115,105,103,41,0,0,0,0,0};
static C_char li124[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,41,0,0,0,0,0,0,0};
static C_char li125[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,115,105,103,41,0,0,0,0,0};
static C_char li126[] C_aligned={C_lihdr(0,0,60),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,117,115,101,114,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li127[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char li128[] C_aligned={C_lihdr(0,0,59),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char li129[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,111,119,110,32,108,111,99,32,102,32,117,105,100,32,103,105,100,41,0,0,0,0,0};
static C_char li130[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,101,115,115,105,111,110,41,0,0};
static C_char li131[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,111,108,100,32,110,101,119,41,0,0,0,0,0,0,0};
static C_char li132[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,32,108,111,99,97,116,105,111,110,41,0,0,0,0,0,0,0};
static C_char li133[] C_aligned={C_lihdr(0,0,7),40,97,54,50,54,54,41,0};
static C_char li134[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,99,111,109,112,111,110,101,110,116,115,32,114,101,115,117,108,116,41};
static C_char li135[] C_aligned={C_lihdr(0,0,55),40,97,54,50,55,50,32,98,97,115,101,45,111,114,105,103,105,110,32,98,97,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,101,99,116,111,114,121,45,99,111,109,112,111,110,101,110,116,115,41,0};
static C_char li136[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li137[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,105,110,107,32,111,108,100,32,110,101,119,41,0,0};
static C_char li138[] C_aligned={C_lihdr(0,0,8),40,114,101,97,100,121,63,41};
static C_char li139[] C_aligned={C_lihdr(0,0,19),40,97,54,52,55,57,32,98,117,102,32,115,116,97,114,116,32,110,41,0,0,0,0,0};
static C_char li140[] C_aligned={C_lihdr(0,0,6),40,112,101,101,107,41,0,0};
static C_char li141[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li142[] C_aligned={C_lihdr(0,0,7),40,102,101,116,99,104,41,0};
static C_char li143[] C_aligned={C_lihdr(0,0,19),40,97,54,54,49,50,32,98,117,102,32,115,116,97,114,116,32,110,41,0,0,0,0,0};
static C_char li144[] C_aligned={C_lihdr(0,0,7),40,97,54,53,57,51,41,0};
static C_char li145[] C_aligned={C_lihdr(0,0,7),40,97,54,54,50,53,41,0};
static C_char li146[] C_aligned={C_lihdr(0,0,7),40,97,54,54,51,55,41,0};
static C_char li147[] C_aligned={C_lihdr(0,0,7),40,97,54,54,53,51,41,0};
static C_char li148[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,110,32,109,32,115,116,97,114,116,41};
static C_char li149[] C_aligned={C_lihdr(0,0,25),40,97,54,54,54,56,32,112,111,114,116,32,110,32,100,101,115,116,32,115,116,97,114,116,41,0,0,0,0,0,0,0};
static C_char li150[] C_aligned={C_lihdr(0,0,11),40,97,54,55,54,56,32,112,111,115,41,0,0,0,0,0};
static C_char li151[] C_aligned={C_lihdr(0,0,7),40,97,54,55,53,56,41,0};
static C_char li152[] C_aligned={C_lihdr(0,0,28),40,97,54,56,49,56,32,110,101,120,116,32,108,105,110,101,32,102,117,108,108,45,108,105,110,101,63,41,0,0,0,0};
static C_char li153[] C_aligned={C_lihdr(0,0,15),40,97,54,55,52,48,32,112,32,108,105,109,105,116,41,0};
static C_char li154[] C_aligned={C_lihdr(0,0,12),40,97,54,56,54,51,32,112,111,114,116,41,0,0,0,0};
static C_char li155[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,99,117,115,116,111,109,45,105,110,112,117,116,45,112,111,114,116,32,108,111,99,32,110,97,109,32,102,100,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li156[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li157[] C_aligned={C_lihdr(0,0,23),40,112,111,107,101,50,48,48,52,32,98,118,32,115,116,97,114,116,32,108,101,110,41,0};
static C_char li158[] C_aligned={C_lihdr(0,0,11),40,97,55,48,55,51,32,115,116,114,41,0,0,0,0,0};
static C_char li159[] C_aligned={C_lihdr(0,0,7),40,97,55,48,55,57,41,0};
static C_char li160[] C_aligned={C_lihdr(0,0,7),40,97,55,48,57,53,41,0};
static C_char li161[] C_aligned={C_lihdr(0,0,12),40,102,95,55,49,48,52,32,115,116,114,41,0,0,0,0};
static C_char li162[] C_aligned={C_lihdr(0,0,20),40,108,111,111,112,32,114,101,109,32,115,116,97,114,116,32,108,101,110,41,0,0,0,0};
static C_char li163[] C_aligned={C_lihdr(0,0,12),40,102,95,55,49,50,54,32,115,116,114,41,0,0,0,0};
static C_char li164[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,99,117,115,116,111,109,45,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,32,110,97,109,32,102,100,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li165[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,114,117,110,99,97,116,101,32,102,110,97,109,101,32,111,102,102,41,0,0,0,0};
static C_char li166[] C_aligned={C_lihdr(0,0,14),40,102,105,108,101,110,111,32,120,32,108,111,99,41,0,0};
static C_char li167[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li168[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,32,112,111,114,116,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char li169[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li170[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,112,111,114,116,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li171[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li172[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,117,110,108,111,99,107,32,112,111,114,116,41,0,0,0};
static C_char li173[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,102,105,102,111,32,102,110,97,109,101,32,46,32,109,111,100,101,41,0,0,0};
static C_char li174[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,116,114,105,110,103,45,62,116,105,109,101,32,116,105,109,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li175[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,41,0,0,0,0,0,0,0};
static C_char li176[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41};
static C_char li177[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,97,108,97,114,109,33,32,105,110,116,50,49,55,55,41,0,0,0,0,0};
static C_char li178[] C_aligned={C_lihdr(0,0,7),40,97,55,54,51,51,41,0};
static C_char li179[] C_aligned={C_lihdr(0,0,7),40,97,55,54,53,49,41,0};
static C_char li180[] C_aligned={C_lihdr(0,0,16),40,97,55,54,52,53,32,99,111,110,116,105,110,117,101,41};
static C_char li181[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,114,101,115,116,41,0,0,0};
static C_char li182[] C_aligned={C_lihdr(0,0,9),40,97,55,55,48,56,32,120,41,0,0,0,0,0,0,0};
static C_char li183[] C_aligned={C_lihdr(0,0,25),40,97,55,55,49,49,32,112,114,103,32,97,114,103,98,117,102,32,101,110,118,98,117,102,41,0,0,0,0,0,0,0};
static C_char li184[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li185[] C_aligned={C_lihdr(0,0,7),40,97,55,55,55,56,41,0};
static C_char li186[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,119,97,105,116,45,105,109,112,108,32,112,105,100,32,110,111,104,97,110,103,41,0,0,0,0};
static C_char li187[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0,0,0,0};
static C_char li188[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,105,100,32,46,32,115,105,103,41,0,0,0,0,0,0,0};
static C_char li189[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,114,117,110,32,102,32,46,32,97,114,103,115,41,0,0};
static C_char li190[] C_aligned={C_lihdr(0,0,8),40,102,95,55,57,48,50,41};
static C_char li191[] C_aligned={C_lihdr(0,0,41),40,109,97,107,101,45,111,110,45,99,108,111,115,101,32,112,114,111,99,32,99,108,115,118,101,99,32,105,100,120,32,105,100,120,97,32,105,100,120,98,41,0,0,0,0,0,0,0};
static C_char li192[] C_aligned={C_lihdr(0,0,7),40,97,55,57,51,51,41,0};
static C_char li193[] C_aligned={C_lihdr(0,0,11),40,97,55,57,51,57,32,105,32,111,41,0,0,0,0,0};
static C_char li194[] C_aligned={C_lihdr(0,0,18),40,110,101,101,100,101,100,45,112,105,112,101,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char li195[] C_aligned={C_lihdr(0,0,26),40,99,111,110,110,101,99,116,45,112,97,114,101,110,116,32,112,105,112,101,32,112,111,114,116,41,0,0,0,0,0,0};
static C_char li196[] C_aligned={C_lihdr(0,0,31),40,99,111,110,110,101,99,116,45,99,104,105,108,100,32,112,105,112,101,32,112,111,114,116,32,115,116,100,102,100,41,0};
static C_char li197[] C_aligned={C_lihdr(0,0,7),40,97,56,48,51,56,41,0};
static C_char li198[] C_aligned={C_lihdr(0,0,10),40,97,56,48,51,50,32,101,120,41,0,0,0,0,0,0};
static C_char li199[] C_aligned={C_lihdr(0,0,10),40,116,109,112,49,50,57,48,51,41,0,0,0,0,0,0};
static C_char li200[] C_aligned={C_lihdr(0,0,7),40,97,56,48,53,55,41,0};
static C_char li201[] C_aligned={C_lihdr(0,0,15),40,116,109,112,50,50,57,48,52,32,97,114,103,115,41,0};
static C_char li202[] C_aligned={C_lihdr(0,0,7),40,97,56,48,52,52,41,0};
static C_char li203[] C_aligned={C_lihdr(0,0,9),40,97,56,48,50,54,32,107,41,0,0,0,0,0,0,0};
static C_char li204[] C_aligned={C_lihdr(0,0,7),40,97,56,48,48,56,41,0};
static C_char li205[] C_aligned={C_lihdr(0,0,43),40,115,112,97,119,110,32,99,109,100,32,97,114,103,115,32,101,110,118,32,115,116,100,111,117,116,102,32,115,116,100,105,110,102,32,115,116,100,101,114,114,102,41,0,0,0,0,0};
static C_char li206[] C_aligned={C_lihdr(0,0,43),40,105,110,112,117,116,45,112,111,114,116,32,108,111,99,32,99,109,100,32,112,105,112,101,32,115,116,100,102,32,111,110,45,99,108,111,115,101,32,101,110,99,41,0,0,0,0,0};
static C_char li207[] C_aligned={C_lihdr(0,0,44),40,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,32,99,109,100,32,112,105,112,101,32,115,116,100,102,32,111,110,45,99,108,111,115,101,32,101,110,99,41,0,0,0,0};
static C_char li208[] C_aligned={C_lihdr(0,0,7),40,97,56,49,48,53,41,0};
static C_char li209[] C_aligned={C_lihdr(0,0,35),40,97,56,49,49,49,32,105,110,112,105,112,101,32,111,117,116,112,105,112,101,32,101,114,114,112,105,112,101,32,112,114,111,99,41,0,0,0,0,0};
static C_char li210[] C_aligned={C_lihdr(0,0,72),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,105,109,112,108,32,108,111,99,32,99,109,100,32,97,114,103,115,32,101,110,118,32,115,116,100,111,117,116,102,32,115,116,100,105,110,102,32,115,116,100,101,114,114,102,32,101,110,99,41};
static C_char li211[] C_aligned={C_lihdr(0,0,7),40,103,50,51,57,53,41,0};
static C_char li212[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,51,57,52,41,0,0,0,0,0};
static C_char li213[] C_aligned={C_lihdr(0,0,15),40,99,104,107,115,116,114,108,115,116,32,108,115,116,41,0};
static C_char li214[] C_aligned={C_lihdr(0,0,36),40,37,112,114,111,99,101,115,115,32,108,111,99,32,101,114,114,63,32,99,109,100,32,97,114,103,115,32,101,110,118,32,101,110,99,41,0,0,0,0};
static C_char li215[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li216[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,42,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0};
static C_char li217[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,100,105,114,41,0};
static C_char li218[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,112,97,119,110,32,46,32,95,41,0,0,0,0,0};
static C_char li219[] C_aligned={C_lihdr(0,0,21),40,99,104,105,99,107,101,110,46,101,114,114,110,111,35,101,114,114,110,111,41,0,0,0};
static C_char li220[] C_aligned={C_lihdr(0,0,11),40,97,56,52,54,54,32,112,105,100,41,0,0,0,0,0};
static C_char li221[] C_aligned={C_lihdr(0,0,16),40,97,56,52,56,53,32,112,105,100,32,112,103,105,100,41};
static C_char li222[] C_aligned={C_lihdr(0,0,7),40,97,56,53,48,56,41,0};
static C_char li223[] C_aligned={C_lihdr(0,0,10),40,97,56,53,49,49,32,105,100,41,0,0,0,0,0,0};
static C_char li224[] C_aligned={C_lihdr(0,0,7),40,97,56,53,51,49,41,0};
static C_char li225[] C_aligned={C_lihdr(0,0,10),40,97,56,53,51,52,32,105,100,41,0,0,0,0,0,0};
static C_char li226[] C_aligned={C_lihdr(0,0,7),40,97,56,53,53,52,41,0};
static C_char li227[] C_aligned={C_lihdr(0,0,10),40,97,56,53,53,55,32,105,100,41,0,0,0,0,0,0};
static C_char li228[] C_aligned={C_lihdr(0,0,7),40,97,56,53,55,55,41,0};
static C_char li229[] C_aligned={C_lihdr(0,0,10),40,97,56,53,56,48,32,105,100,41,0,0,0,0,0,0};
static C_char li230[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,115,105,103,115,32,109,97,115,107,41};
static C_char li231[] C_aligned={C_lihdr(0,0,7),40,97,56,54,48,48,41,0};
static C_char li232[] C_aligned={C_lihdr(0,0,8),40,118,97,57,54,56,57,41};
static C_char li233[] C_aligned={C_lihdr(0,0,8),40,118,97,57,54,57,49,41};
static C_char li234[] C_aligned={C_lihdr(0,0,8),40,118,97,57,54,57,51,41};
static C_char li235[] C_aligned={C_lihdr(0,0,8),40,118,97,57,54,57,53,41};
static C_char li236[] C_aligned={C_lihdr(0,0,11),40,97,56,54,51,48,32,115,105,103,41,0,0,0,0,0};
static C_char li237[] C_aligned={C_lihdr(0,0,14),40,97,56,54,51,57,32,46,32,114,101,115,116,41,0,0};
static C_char li238[] C_aligned={C_lihdr(0,0,10),40,97,56,54,54,52,32,117,109,41,0,0,0,0,0,0};
static C_char li239[] C_aligned={C_lihdr(0,0,12),40,97,56,54,55,48,32,112,111,114,116,41,0,0,0,0};
static C_char li240[] C_aligned={C_lihdr(0,0,9),40,97,56,55,48,55,32,102,41,0,0,0,0,0,0,0};
static C_char li241[] C_aligned={C_lihdr(0,0,9),40,97,56,55,49,51,32,102,41,0,0,0,0,0,0,0};
static C_char li242[] C_aligned={C_lihdr(0,0,9),40,97,56,55,49,57,32,102,41,0,0,0,0,0,0,0};
static C_char li243[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k8386 in chicken.process-context.posix#set-root-directory! in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
C_regparm static C_word stub2465(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_c_string(C_a0);
C_r=C_fix((C_word)chroot(t0));
return C_r;}

/* from chicken.process-context.posix#parent-process-id in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
C_regparm static C_word stub2256(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getppid());
return C_r;}

/* from k7596 */
C_regparm static C_word stub2208(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_r=C_fix((C_word)C_fflush(t0));
return C_r;}

/* from fork */
C_regparm static C_word stub2188(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_fork());
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub2183(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word o=(C_word )(C_a0);
char *ptr = C_malloc(C_header_size(o)); 

if (ptr != NULL) {

  C_memcpy(ptr, C_data_pointer(o), C_header_size(o)); 

}

C_return(ptr);
C_ret:
#undef return

return C_r;}

/* from k7570 */
C_regparm static C_word stub2178(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_alarm(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub2174(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;

#if !defined(__CYGWIN__) && !defined(__SVR4) && !defined(__uClinux__) && !defined(__hpux__) && !defined(_AIX)

time_t clock = time(NULL);
struct tm *ltm = C_localtime(&clock);
char *z = ltm ? (char *)ltm->tm_zone : 0;

#else

char *z = (daylight ? tzname[1] : tzname[0]);

#endif

C_return(z);
C_ret:
#undef return

return C_r;}

/* from k7498 */
C_regparm static C_word stub2147(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
void * t3=(void * )C_data_pointer_or_null(C_a3);
C_r=((C_word)C_strptime(t0,t1,t2,t3));
return C_r;}

/* from k6356 in k6352 in chicken.file.posix#file-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
C_regparm static C_word stub1837(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_c_string(C_a0);
char * t1=(char * )C_c_string(C_a1);
C_r=C_fix((C_word)link(t0,t1));
return C_r;}

/* from a8508 in k6046 in k6042 in k6038 in k5996 */
C_regparm static C_word stub1756(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getegid());
return C_r;}

/* from a8531 in k6042 in k6038 in k5996 */
C_regparm static C_word stub1752(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getgid());
return C_r;}

/* from a8554 in k6038 in k5996 */
C_regparm static C_word stub1748(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_geteuid());
return C_r;}

/* from a8577 in k5996 */
C_regparm static C_word stub1744(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getuid());
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word stub1679(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
void * p=(void * )C_data_pointer_or_null(C_a1);
struct pollfd *fds = p;
C_return(fds[i].revents & (POLLOUT|POLLERR|POLLHUP|POLLNVAL));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word stub1660(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
void * p=(void * )C_data_pointer_or_null(C_a1);
struct pollfd *fds = p;
C_return(fds[i].revents & (POLLIN|POLLERR|POLLHUP|POLLNVAL));
C_ret:
#undef return

return C_r;}

/* from k5550 */
C_regparm static C_word stub1635(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)poll(t0,t1,t2));
return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub1620(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
int fd=(int )C_unfix(C_a1);
void * p=(void * )C_data_pointer_or_null(C_a2);
struct pollfd *fds = p;
fds[i].fd = fd; fds[i].events = POLLOUT;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub1603(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
int fd=(int )C_unfix(C_a1);
void * p=(void * )C_data_pointer_or_null(C_a2);
struct pollfd *fds = p;
fds[i].fd = fd; fds[i].events = POLLIN;
C_ret:
#undef return

return C_r;}

/* from k5311 */
C_regparm static C_word stub1509(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
long t2=(long )C_num_to_long(C_a2);
C_r=C_fix((C_word)fcntl(t0,t1,t2));
return C_r;}

/* from k5278 */
C_regparm static C_word stub1502(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_check_fd_ready(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
C_regparm static C_word stub1497(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);
if(val == -1) C_return(0);
C_return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

/* from k4156 */
C_regparm static C_word stub996(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
void * t2=(void * )C_data_pointer_or_null(C_a2);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1,t2));
return C_r;}

/* from k4143 */
C_regparm static C_word stub986(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0,t1));
return C_r;}

/* from k4075 */
C_regparm static C_word stub959(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from chicken.process-context.posix#current-process-id in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
C_regparm static C_word stub903(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from g753 */
C_regparm static C_word stub758(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
C_r=C_fix((C_word)set_file_mtime(t0,t1,t2));
return C_r;}

/* from k3256 */
C_regparm static C_word stub684(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f9700)
static void C_ccall f9700(C_word c,C_word *av) C_noret;
C_noret_decl(f9704)
static void C_ccall f9704(C_word c,C_word *av) C_noret;
C_noret_decl(f9752)
static void C_ccall f9752(C_word c,C_word *av) C_noret;
C_noret_decl(f9758)
static void C_ccall f9758(C_word c,C_word *av) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word *av) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word *av) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word *av) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word *av) C_noret;
C_noret_decl(f_2939)
static void C_ccall f_2939(C_word c,C_word *av) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word *av) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word *av) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word *av) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word *av) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word *av) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word *av) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word *av) C_noret;
C_noret_decl(f_3076)
static void f_3076(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3097)
static void C_ccall f_3097(C_word c,C_word *av) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word *av) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word *av) C_noret;
C_noret_decl(f_3117)
static void f_3117(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3142)
static void C_ccall f_3142(C_word c,C_word *av) C_noret;
C_noret_decl(f_3259)
static void C_ccall f_3259(C_word c,C_word *av) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word *av) C_noret;
C_noret_decl(f_3270)
static void C_ccall f_3270(C_word c,C_word *av) C_noret;
C_noret_decl(f_3274)
static void C_ccall f_3274(C_word c,C_word *av) C_noret;
C_noret_decl(f_3277)
static void f_3277(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word *av) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word *av) C_noret;
C_noret_decl(f_3306)
static void C_ccall f_3306(C_word c,C_word *av) C_noret;
C_noret_decl(f_3315)
static void C_ccall f_3315(C_word c,C_word *av) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word *av) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word *av) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word *av) C_noret;
C_noret_decl(f_3348)
static void C_ccall f_3348(C_word c,C_word *av) C_noret;
C_noret_decl(f_3366)
static void C_ccall f_3366(C_word c,C_word *av) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word *av) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word *av) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word *av) C_noret;
C_noret_decl(f_3389)
static void C_ccall f_3389(C_word c,C_word *av) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word *av) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word *av) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word *av) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word *av) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word *av) C_noret;
C_noret_decl(f_3407)
static void C_ccall f_3407(C_word c,C_word *av) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word *av) C_noret;
C_noret_decl(f_3422)
static void C_ccall f_3422(C_word c,C_word *av) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word *av) C_noret;
C_noret_decl(f_3475)
static void C_ccall f_3475(C_word c,C_word *av) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word *av) C_noret;
C_noret_decl(f_3483)
static void C_ccall f_3483(C_word c,C_word *av) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word *av) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word *av) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word *av) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word *av) C_noret;
C_noret_decl(f_3520)
static void C_ccall f_3520(C_word c,C_word *av) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word *av) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word *av) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word *av) C_noret;
C_noret_decl(f_3606)
static void C_ccall f_3606(C_word c,C_word *av) C_noret;
C_noret_decl(f_3608)
static void C_ccall f_3608(C_word c,C_word *av) C_noret;
C_noret_decl(f_3616)
static void C_ccall f_3616(C_word c,C_word *av) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word *av) C_noret;
C_noret_decl(f_3628)
static void C_ccall f_3628(C_word c,C_word *av) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word *av) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word *av) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word *av) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word *av) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word *av) C_noret;
C_noret_decl(f_3661)
static void C_ccall f_3661(C_word c,C_word *av) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word *av) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word *av) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word *av) C_noret;
C_noret_decl(f_3744)
static void f_3744(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word *av) C_noret;
C_noret_decl(f_3777)
static void f_3777(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3790)
static void C_ccall f_3790(C_word c,C_word *av) C_noret;
C_noret_decl(f_3799)
static void C_ccall f_3799(C_word c,C_word *av) C_noret;
C_noret_decl(f_3823)
static void C_ccall f_3823(C_word c,C_word *av) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word *av) C_noret;
C_noret_decl(f_3873)
static void C_ccall f_3873(C_word c,C_word *av) C_noret;
C_noret_decl(f_3899)
static void C_ccall f_3899(C_word c,C_word *av) C_noret;
C_noret_decl(f_3915)
static void C_ccall f_3915(C_word c,C_word *av) C_noret;
C_noret_decl(f_3924)
static void C_ccall f_3924(C_word c,C_word *av) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word *av) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word *av) C_noret;
C_noret_decl(f_3951)
static void f_3951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word *av) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word *av) C_noret;
C_noret_decl(f_3974)
static void C_ccall f_3974(C_word c,C_word *av) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word *av) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word *av) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word *av) C_noret;
C_noret_decl(f_4007)
static void f_4007(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4026)
static void C_ccall f_4026(C_word c,C_word *av) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word *av) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word *av) C_noret;
C_noret_decl(f_4047)
static void C_ccall f_4047(C_word c,C_word *av) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word *av) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word *av) C_noret;
C_noret_decl(f_4079)
static void C_ccall f_4079(C_word c,C_word *av) C_noret;
C_noret_decl(f_4083)
static void C_ccall f_4083(C_word c,C_word *av) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word *av) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word *av) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word *av) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word *av) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word *av) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word *av) C_noret;
C_noret_decl(f_4169)
static void C_ccall f_4169(C_word c,C_word *av) C_noret;
C_noret_decl(f_4178)
static void C_ccall f_4178(C_word c,C_word *av) C_noret;
C_noret_decl(f_4188)
static void C_ccall f_4188(C_word c,C_word *av) C_noret;
C_noret_decl(f_4192)
static void C_ccall f_4192(C_word c,C_word *av) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word *av) C_noret;
C_noret_decl(f_4216)
static void C_ccall f_4216(C_word c,C_word *av) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word *av) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word *av) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word *av) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word *av) C_noret;
C_noret_decl(f_4246)
static void f_4246(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word *av) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word *av) C_noret;
C_noret_decl(f_4263)
static void C_ccall f_4263(C_word c,C_word *av) C_noret;
C_noret_decl(f_4284)
static void f_4284(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word *av) C_noret;
C_noret_decl(f_4307)
static void C_ccall f_4307(C_word c,C_word *av) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word *av) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f_4348)
static void C_ccall f_4348(C_word c,C_word *av) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word *av) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word *av) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word *av) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word *av) C_noret;
C_noret_decl(f_4438)
static void C_ccall f_4438(C_word c,C_word *av) C_noret;
C_noret_decl(f_4495)
static C_word f_4495(C_word t0,C_word t1);
C_noret_decl(f_4527)
static void C_ccall f_4527(C_word c,C_word *av) C_noret;
C_noret_decl(f_4533)
static void C_ccall f_4533(C_word c,C_word *av) C_noret;
C_noret_decl(f_4552)
static void f_4552(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4570)
static void f_4570(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4578)
static void C_ccall f_4578(C_word c,C_word *av) C_noret;
C_noret_decl(f_4584)
static void C_ccall f_4584(C_word c,C_word *av) C_noret;
C_noret_decl(f_4606)
static void f_4606(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4612)
static void C_ccall f_4612(C_word c,C_word *av) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word *av) C_noret;
C_noret_decl(f_4669)
static void f_4669(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677(C_word c,C_word *av) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word *av) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word *av) C_noret;
C_noret_decl(f_4691)
static void C_ccall f_4691(C_word c,C_word *av) C_noret;
C_noret_decl(f_4697)
static void C_ccall f_4697(C_word c,C_word *av) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word *av) C_noret;
C_noret_decl(f_4706)
static void C_ccall f_4706(C_word c,C_word *av) C_noret;
C_noret_decl(f_4708)
static void f_4708(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712(C_word c,C_word *av) C_noret;
C_noret_decl(f_4714)
static void f_4714(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word *av) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word *av) C_noret;
C_noret_decl(f_4739)
static void C_ccall f_4739(C_word c,C_word *av) C_noret;
C_noret_decl(f_4755)
static void C_ccall f_4755(C_word c,C_word *av) C_noret;
C_noret_decl(f_4765)
static void f_4765(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4771)
static void C_ccall f_4771(C_word c,C_word *av) C_noret;
C_noret_decl(f_4782)
static void C_ccall f_4782(C_word c,C_word *av) C_noret;
C_noret_decl(f_4786)
static void f_4786(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word *av) C_noret;
C_noret_decl(f_4795)
static void f_4795(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word *av) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word *av) C_noret;
C_noret_decl(f_4820)
static void f_4820(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4825)
static C_word f_4825(C_word t0,C_word t1);
C_noret_decl(f_4844)
static C_word f_4844(C_word t0,C_word t1);
C_noret_decl(f_4867)
static void C_ccall f_4867(C_word c,C_word *av) C_noret;
C_noret_decl(f_4869)
static void f_4869(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word *av) C_noret;
C_noret_decl(f_4879)
static void C_ccall f_4879(C_word c,C_word *av) C_noret;
C_noret_decl(f_4884)
static void C_ccall f_4884(C_word c,C_word *av) C_noret;
C_noret_decl(f_4890)
static void C_ccall f_4890(C_word c,C_word *av) C_noret;
C_noret_decl(f_4896)
static void C_ccall f_4896(C_word c,C_word *av) C_noret;
C_noret_decl(f_4900)
static void C_ccall f_4900(C_word c,C_word *av) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word *av) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word *av) C_noret;
C_noret_decl(f_4917)
static void C_ccall f_4917(C_word c,C_word *av) C_noret;
C_noret_decl(f_4921)
static void f_4921(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4928)
static void C_ccall f_4928(C_word c,C_word *av) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word *av) C_noret;
C_noret_decl(f_4935)
static void C_ccall f_4935(C_word c,C_word *av) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word *av) C_noret;
C_noret_decl(f_4958)
static void f_4958(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4983)
static void C_ccall f_4983(C_word c,C_word *av) C_noret;
C_noret_decl(f_4992)
static void C_ccall f_4992(C_word c,C_word *av) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word *av) C_noret;
C_noret_decl(f_5023)
static void f_5023(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5036)
static void C_ccall f_5036(C_word c,C_word *av) C_noret;
C_noret_decl(f_5042)
static void C_ccall f_5042(C_word c,C_word *av) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word *av) C_noret;
C_noret_decl(f_5063)
static void C_ccall f_5063(C_word c,C_word *av) C_noret;
C_noret_decl(f_5073)
static void C_ccall f_5073(C_word c,C_word *av) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word *av) C_noret;
C_noret_decl(f_5096)
static void C_ccall f_5096(C_word c,C_word *av) C_noret;
C_noret_decl(f_5103)
static void C_ccall f_5103(C_word c,C_word *av) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word *av) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word *av) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word *av) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word *av) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word *av) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word *av) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word *av) C_noret;
C_noret_decl(f_5161)
static void C_ccall f_5161(C_word c,C_word *av) C_noret;
C_noret_decl(f_5166)
static void C_ccall f_5166(C_word c,C_word *av) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word *av) C_noret;
C_noret_decl(f_5176)
static void C_ccall f_5176(C_word c,C_word *av) C_noret;
C_noret_decl(f_5181)
static void C_ccall f_5181(C_word c,C_word *av) C_noret;
C_noret_decl(f_5186)
static void C_ccall f_5186(C_word c,C_word *av) C_noret;
C_noret_decl(f_5190)
static void C_ccall f_5190(C_word c,C_word *av) C_noret;
C_noret_decl(f_5195)
static void C_ccall f_5195(C_word c,C_word *av) C_noret;
C_noret_decl(f_5201)
static void C_ccall f_5201(C_word c,C_word *av) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word *av) C_noret;
C_noret_decl(f_5210)
static void C_ccall f_5210(C_word c,C_word *av) C_noret;
C_noret_decl(f_5214)
static void C_ccall f_5214(C_word c,C_word *av) C_noret;
C_noret_decl(f_5219)
static void C_ccall f_5219(C_word c,C_word *av) C_noret;
C_noret_decl(f_5225)
static void C_ccall f_5225(C_word c,C_word *av) C_noret;
C_noret_decl(f_5229)
static void C_ccall f_5229(C_word c,C_word *av) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word *av) C_noret;
C_noret_decl(f_5238)
static void C_ccall f_5238(C_word c,C_word *av) C_noret;
C_noret_decl(f_5243)
static void C_ccall f_5243(C_word c,C_word *av) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word *av) C_noret;
C_noret_decl(f_5254)
static void C_ccall f_5254(C_word c,C_word *av) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word *av) C_noret;
C_noret_decl(f_5263)
static void C_ccall f_5263(C_word c,C_word *av) C_noret;
C_noret_decl(f_5268)
static void C_ccall f_5268(C_word c,C_word *av) C_noret;
C_noret_decl(f_5275)
static void C_ccall f_5275(C_word c,C_word *av) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word *av) C_noret;
C_noret_decl(f_5348)
static void C_ccall f_5348(C_word c,C_word *av) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365(C_word c,C_word *av) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word *av) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word *av) C_noret;
C_noret_decl(f_5389)
static void C_ccall f_5389(C_word c,C_word *av) C_noret;
C_noret_decl(f_5411)
static void C_ccall f_5411(C_word c,C_word *av) C_noret;
C_noret_decl(f_5421)
static void C_ccall f_5421(C_word c,C_word *av) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424(C_word c,C_word *av) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word *av) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word *av) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word *av) C_noret;
C_noret_decl(f_5464)
static void C_ccall f_5464(C_word c,C_word *av) C_noret;
C_noret_decl(f_5482)
static void C_ccall f_5482(C_word c,C_word *av) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489(C_word c,C_word *av) C_noret;
C_noret_decl(f_5495)
static void C_ccall f_5495(C_word c,C_word *av) C_noret;
C_noret_decl(f_5502)
static void C_ccall f_5502(C_word c,C_word *av) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word *av) C_noret;
C_noret_decl(f_5521)
static void f_5521(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5524)
static void f_5524(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word *av) C_noret;
C_noret_decl(f_5593)
static void C_ccall f_5593(C_word c,C_word *av) C_noret;
C_noret_decl(f_5596)
static void C_ccall f_5596(C_word c,C_word *av) C_noret;
C_noret_decl(f_5603)
static void f_5603(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5633)
static void f_5633(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5692)
static void f_5692(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word *av) C_noret;
C_noret_decl(f_5760)
static void C_ccall f_5760(C_word c,C_word *av) C_noret;
C_noret_decl(f_5768)
static void C_ccall f_5768(C_word c,C_word *av) C_noret;
C_noret_decl(f_5770)
static C_word f_5770(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5812)
static C_word f_5812(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5893)
static void C_ccall f_5893(C_word c,C_word *av) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word *av) C_noret;
C_noret_decl(f_5949)
static void C_ccall f_5949(C_word c,C_word *av) C_noret;
C_noret_decl(f_5973)
static C_word f_5973(C_word t0);
C_noret_decl(f_5998)
static void C_ccall f_5998(C_word c,C_word *av) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word *av) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006(C_word c,C_word *av) C_noret;
C_noret_decl(f_6022)
static void C_ccall f_6022(C_word c,C_word *av) C_noret;
C_noret_decl(f_6040)
static void C_ccall f_6040(C_word c,C_word *av) C_noret;
C_noret_decl(f_6044)
static void C_ccall f_6044(C_word c,C_word *av) C_noret;
C_noret_decl(f_6048)
static void C_ccall f_6048(C_word c,C_word *av) C_noret;
C_noret_decl(f_6052)
static void C_ccall f_6052(C_word c,C_word *av) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word *av) C_noret;
C_noret_decl(f_6061)
static void f_6061(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word *av) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word *av) C_noret;
C_noret_decl(f_6082)
static void C_ccall f_6082(C_word c,C_word *av) C_noret;
C_noret_decl(f_6086)
static void C_ccall f_6086(C_word c,C_word *av) C_noret;
C_noret_decl(f_6090)
static void C_ccall f_6090(C_word c,C_word *av) C_noret;
C_noret_decl(f_6100)
static void C_ccall f_6100(C_word c,C_word *av) C_noret;
C_noret_decl(f_6108)
static void C_ccall f_6108(C_word c,C_word *av) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word *av) C_noret;
C_noret_decl(f_6120)
static void C_ccall f_6120(C_word c,C_word *av) C_noret;
C_noret_decl(f_6122)
static void C_ccall f_6122(C_word c,C_word *av) C_noret;
C_noret_decl(f_6130)
static void C_ccall f_6130(C_word c,C_word *av) C_noret;
C_noret_decl(f_6134)
static void C_ccall f_6134(C_word c,C_word *av) C_noret;
C_noret_decl(f_6136)
static void f_6136(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6146)
static void C_ccall f_6146(C_word c,C_word *av) C_noret;
C_noret_decl(f_6158)
static void C_ccall f_6158(C_word c,C_word *av) C_noret;
C_noret_decl(f_6162)
static void C_ccall f_6162(C_word c,C_word *av) C_noret;
C_noret_decl(f_6178)
static void C_ccall f_6178(C_word c,C_word *av) C_noret;
C_noret_decl(f_6183)
static void C_ccall f_6183(C_word c,C_word *av) C_noret;
C_noret_decl(f_6187)
static void C_ccall f_6187(C_word c,C_word *av) C_noret;
C_noret_decl(f_6197)
static void C_ccall f_6197(C_word c,C_word *av) C_noret;
C_noret_decl(f_6201)
static void C_ccall f_6201(C_word c,C_word *av) C_noret;
C_noret_decl(f_6203)
static void C_ccall f_6203(C_word c,C_word *av) C_noret;
C_noret_decl(f_6224)
static void C_ccall f_6224(C_word c,C_word *av) C_noret;
C_noret_decl(f_6228)
static void C_ccall f_6228(C_word c,C_word *av) C_noret;
C_noret_decl(f_6232)
static void C_ccall f_6232(C_word c,C_word *av) C_noret;
C_noret_decl(f_6233)
static void C_ccall f_6233(C_word c,C_word *av) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word *av) C_noret;
C_noret_decl(f_6252)
static void C_ccall f_6252(C_word c,C_word *av) C_noret;
C_noret_decl(f_6267)
static void C_ccall f_6267(C_word c,C_word *av) C_noret;
C_noret_decl(f_6273)
static void C_ccall f_6273(C_word c,C_word *av) C_noret;
C_noret_decl(f_6281)
static void C_ccall f_6281(C_word c,C_word *av) C_noret;
C_noret_decl(f_6283)
static void f_6283(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6293)
static void C_ccall f_6293(C_word c,C_word *av) C_noret;
C_noret_decl(f_6299)
static void C_ccall f_6299(C_word c,C_word *av) C_noret;
C_noret_decl(f_6308)
static void C_ccall f_6308(C_word c,C_word *av) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word *av) C_noret;
C_noret_decl(f_6314)
static void C_ccall f_6314(C_word c,C_word *av) C_noret;
C_noret_decl(f_6320)
static void C_ccall f_6320(C_word c,C_word *av) C_noret;
C_noret_decl(f_6354)
static void C_ccall f_6354(C_word c,C_word *av) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word *av) C_noret;
C_noret_decl(f_6367)
static void C_ccall f_6367(C_word c,C_word *av) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word *av) C_noret;
C_noret_decl(f_6423)
static void C_ccall f_6423(C_word c,C_word *av) C_noret;
C_noret_decl(f_6429)
static void C_ccall f_6429(C_word c,C_word *av) C_noret;
C_noret_decl(f_6430)
static void f_6430(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6434)
static void C_ccall f_6434(C_word c,C_word *av) C_noret;
C_noret_decl(f_6464)
static void f_6464(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480(C_word c,C_word *av) C_noret;
C_noret_decl(f_6482)
static void f_6482(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6488)
static void C_ccall f_6488(C_word c,C_word *av) C_noret;
C_noret_decl(f_6515)
static void C_ccall f_6515(C_word c,C_word *av) C_noret;
C_noret_decl(f_6518)
static void C_ccall f_6518(C_word c,C_word *av) C_noret;
C_noret_decl(f_6545)
static void C_ccall f_6545(C_word c,C_word *av) C_noret;
C_noret_decl(f_6551)
static void C_ccall f_6551(C_word c,C_word *av) C_noret;
C_noret_decl(f_6585)
static void C_ccall f_6585(C_word c,C_word *av) C_noret;
C_noret_decl(f_6594)
static void C_ccall f_6594(C_word c,C_word *av) C_noret;
C_noret_decl(f_6598)
static void C_ccall f_6598(C_word c,C_word *av) C_noret;
C_noret_decl(f_6613)
static void C_ccall f_6613(C_word c,C_word *av) C_noret;
C_noret_decl(f_6626)
static void C_ccall f_6626(C_word c,C_word *av) C_noret;
C_noret_decl(f_6638)
static void C_ccall f_6638(C_word c,C_word *av) C_noret;
C_noret_decl(f_6642)
static void C_ccall f_6642(C_word c,C_word *av) C_noret;
C_noret_decl(f_6654)
static void C_ccall f_6654(C_word c,C_word *av) C_noret;
C_noret_decl(f_6658)
static void C_ccall f_6658(C_word c,C_word *av) C_noret;
C_noret_decl(f_6669)
static void C_ccall f_6669(C_word c,C_word *av) C_noret;
C_noret_decl(f_6679)
static void f_6679(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6723)
static void C_ccall f_6723(C_word c,C_word *av) C_noret;
C_noret_decl(f_6741)
static void C_ccall f_6741(C_word c,C_word *av) C_noret;
C_noret_decl(f_6745)
static void C_ccall f_6745(C_word c,C_word *av) C_noret;
C_noret_decl(f_6759)
static void C_ccall f_6759(C_word c,C_word *av) C_noret;
C_noret_decl(f_6769)
static void C_ccall f_6769(C_word c,C_word *av) C_noret;
C_noret_decl(f_6789)
static void C_ccall f_6789(C_word c,C_word *av) C_noret;
C_noret_decl(f_6819)
static void C_ccall f_6819(C_word c,C_word *av) C_noret;
C_noret_decl(f_6864)
static void C_ccall f_6864(C_word c,C_word *av) C_noret;
C_noret_decl(f_6877)
static void C_ccall f_6877(C_word c,C_word *av) C_noret;
C_noret_decl(f_6959)
static void C_ccall f_6959(C_word c,C_word *av) C_noret;
C_noret_decl(f_6987)
static void C_ccall f_6987(C_word c,C_word *av) C_noret;
C_noret_decl(f_6988)
static void C_ccall f_6988(C_word c,C_word *av) C_noret;
C_noret_decl(f_6994)
static void C_ccall f_6994(C_word c,C_word *av) C_noret;
C_noret_decl(f_7021)
static void C_ccall f_7021(C_word c,C_word *av) C_noret;
C_noret_decl(f_7059)
static void f_7059(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7065)
static void C_ccall f_7065(C_word c,C_word *av) C_noret;
C_noret_decl(f_7074)
static void C_ccall f_7074(C_word c,C_word *av) C_noret;
C_noret_decl(f_7080)
static void C_ccall f_7080(C_word c,C_word *av) C_noret;
C_noret_decl(f_7084)
static void C_ccall f_7084(C_word c,C_word *av) C_noret;
C_noret_decl(f_7096)
static void C_ccall f_7096(C_word c,C_word *av) C_noret;
C_noret_decl(f_7104)
static void C_ccall f_7104(C_word c,C_word *av) C_noret;
C_noret_decl(f_7125)
static void C_ccall f_7125(C_word c,C_word *av) C_noret;
C_noret_decl(f_7126)
static void C_ccall f_7126(C_word c,C_word *av) C_noret;
C_noret_decl(f_7136)
static void C_ccall f_7136(C_word c,C_word *av) C_noret;
C_noret_decl(f_7155)
static void f_7155(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7165)
static void C_ccall f_7165(C_word c,C_word *av) C_noret;
C_noret_decl(f_7255)
static void C_ccall f_7255(C_word c,C_word *av) C_noret;
C_noret_decl(f_7259)
static void C_ccall f_7259(C_word c,C_word *av) C_noret;
C_noret_decl(f_7265)
static void f_7265(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7272)
static void C_ccall f_7272(C_word c,C_word *av) C_noret;
C_noret_decl(f_7279)
static void C_ccall f_7279(C_word c,C_word *av) C_noret;
C_noret_decl(f_7285)
static void C_ccall f_7285(C_word c,C_word *av) C_noret;
C_noret_decl(f_7289)
static void C_ccall f_7289(C_word c,C_word *av) C_noret;
C_noret_decl(f_7306)
static void f_7306(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7313)
static void C_ccall f_7313(C_word c,C_word *av) C_noret;
C_noret_decl(f_7319)
static void C_ccall f_7319(C_word c,C_word *av) C_noret;
C_noret_decl(f_7321)
static void C_ccall f_7321(C_word c,C_word *av) C_noret;
C_noret_decl(f_7330)
static void f_7330(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7335)
static void C_ccall f_7335(C_word c,C_word *av) C_noret;
C_noret_decl(f_7383)
static void C_ccall f_7383(C_word c,C_word *av) C_noret;
C_noret_decl(f_7392)
static void f_7392(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7397)
static void C_ccall f_7397(C_word c,C_word *av) C_noret;
C_noret_decl(f_7427)
static void C_ccall f_7427(C_word c,C_word *av) C_noret;
C_noret_decl(f_7433)
static void f_7433(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7438)
static void C_ccall f_7438(C_word c,C_word *av) C_noret;
C_noret_decl(f_7458)
static void C_ccall f_7458(C_word c,C_word *av) C_noret;
C_noret_decl(f_7482)
static void C_ccall f_7482(C_word c,C_word *av) C_noret;
C_noret_decl(f_7504)
static void C_ccall f_7504(C_word c,C_word *av) C_noret;
C_noret_decl(f_7521)
static void C_ccall f_7521(C_word c,C_word *av) C_noret;
C_noret_decl(f_7525)
static void C_ccall f_7525(C_word c,C_word *av) C_noret;
C_noret_decl(f_7533)
static void C_ccall f_7533(C_word c,C_word *av) C_noret;
C_noret_decl(f_7541)
static void C_ccall f_7541(C_word c,C_word *av) C_noret;
C_noret_decl(f_7545)
static void C_ccall f_7545(C_word c,C_word *av) C_noret;
C_noret_decl(f_7549)
static void C_ccall f_7549(C_word c,C_word *av) C_noret;
C_noret_decl(f_7560)
static void C_ccall f_7560(C_word c,C_word *av) C_noret;
C_noret_decl(f_7567)
static void C_ccall f_7567(C_word c,C_word *av) C_noret;
C_noret_decl(f_7579)
static void C_ccall f_7579(C_word c,C_word *av) C_noret;
C_noret_decl(f_7626)
static void C_ccall f_7626(C_word c,C_word *av) C_noret;
C_noret_decl(f_7634)
static void C_ccall f_7634(C_word c,C_word *av) C_noret;
C_noret_decl(f_7638)
static void C_ccall f_7638(C_word c,C_word *av) C_noret;
C_noret_decl(f_7646)
static void C_ccall f_7646(C_word c,C_word *av) C_noret;
C_noret_decl(f_7652)
static void C_ccall f_7652(C_word c,C_word *av) C_noret;
C_noret_decl(f_7685)
static void C_ccall f_7685(C_word c,C_word *av) C_noret;
C_noret_decl(f_7709)
static void C_ccall f_7709(C_word c,C_word *av) C_noret;
C_noret_decl(f_7712)
static void C_ccall f_7712(C_word c,C_word *av) C_noret;
C_noret_decl(f_7763)
static void f_7763(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7779)
static void C_ccall f_7779(C_word c,C_word *av) C_noret;
C_noret_decl(f_7801)
static void C_ccall f_7801(C_word c,C_word *av) C_noret;
C_noret_decl(f_7804)
static void C_ccall f_7804(C_word c,C_word *av) C_noret;
C_noret_decl(f_7811)
static void f_7811(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7853)
static void C_ccall f_7853(C_word c,C_word *av) C_noret;
C_noret_decl(f_7860)
static void C_ccall f_7860(C_word c,C_word *av) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word *av) C_noret;
C_noret_decl(f_7900)
static void f_7900(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7902)
static void C_ccall f_7902(C_word c,C_word *av) C_noret;
C_noret_decl(f_7909)
static void C_ccall f_7909(C_word c,C_word *av) C_noret;
C_noret_decl(f_7925)
static void f_7925(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7934)
static void C_ccall f_7934(C_word c,C_word *av) C_noret;
C_noret_decl(f_7940)
static void C_ccall f_7940(C_word c,C_word *av) C_noret;
C_noret_decl(f_7945)
static void f_7945(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7956)
static void C_ccall f_7956(C_word c,C_word *av) C_noret;
C_noret_decl(f_7957)
static void f_7957(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7968)
static void C_ccall f_7968(C_word c,C_word *av) C_noret;
C_noret_decl(f_7986)
static void f_7986(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7990)
static void C_ccall f_7990(C_word c,C_word *av) C_noret;
C_noret_decl(f_7993)
static void C_ccall f_7993(C_word c,C_word *av) C_noret;
C_noret_decl(f_7996)
static void C_ccall f_7996(C_word c,C_word *av) C_noret;
C_noret_decl(f_8003)
static void f_8003(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8007)
static void C_ccall f_8007(C_word c,C_word *av) C_noret;
C_noret_decl(f_8009)
static void C_ccall f_8009(C_word c,C_word *av) C_noret;
C_noret_decl(f_8013)
static void C_ccall f_8013(C_word c,C_word *av) C_noret;
C_noret_decl(f_8016)
static void C_ccall f_8016(C_word c,C_word *av) C_noret;
C_noret_decl(f_8019)
static void C_ccall f_8019(C_word c,C_word *av) C_noret;
C_noret_decl(f_8022)
static void C_ccall f_8022(C_word c,C_word *av) C_noret;
C_noret_decl(f_8027)
static void C_ccall f_8027(C_word c,C_word *av) C_noret;
C_noret_decl(f_8033)
static void C_ccall f_8033(C_word c,C_word *av) C_noret;
C_noret_decl(f_8039)
static void C_ccall f_8039(C_word c,C_word *av) C_noret;
C_noret_decl(f_8043)
static void C_ccall f_8043(C_word c,C_word *av) C_noret;
C_noret_decl(f_8045)
static void C_ccall f_8045(C_word c,C_word *av) C_noret;
C_noret_decl(f_8047)
static void f_8047(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8052)
static void f_8052(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8058)
static void C_ccall f_8058(C_word c,C_word *av) C_noret;
C_noret_decl(f_8069)
static void C_ccall f_8069(C_word c,C_word *av) C_noret;
C_noret_decl(f_8078)
static void f_8078(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_8082)
static void C_ccall f_8082(C_word c,C_word *av) C_noret;
C_noret_decl(f_8089)
static void f_8089(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_8093)
static void C_ccall f_8093(C_word c,C_word *av) C_noret;
C_noret_decl(f_8100)
static void f_8100(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_8106)
static void C_ccall f_8106(C_word c,C_word *av) C_noret;
C_noret_decl(f_8112)
static void C_ccall f_8112(C_word c,C_word *av) C_noret;
C_noret_decl(f_8119)
static void C_ccall f_8119(C_word c,C_word *av) C_noret;
C_noret_decl(f_8122)
static void C_ccall f_8122(C_word c,C_word *av) C_noret;
C_noret_decl(f_8125)
static void C_ccall f_8125(C_word c,C_word *av) C_noret;
C_noret_decl(f_8129)
static void C_ccall f_8129(C_word c,C_word *av) C_noret;
C_noret_decl(f_8133)
static void C_ccall f_8133(C_word c,C_word *av) C_noret;
C_noret_decl(f_8137)
static void C_ccall f_8137(C_word c,C_word *av) C_noret;
C_noret_decl(f_8141)
static void C_ccall f_8141(C_word c,C_word *av) C_noret;
C_noret_decl(f_8145)
static void C_ccall f_8145(C_word c,C_word *av) C_noret;
C_noret_decl(f_8149)
static void C_ccall f_8149(C_word c,C_word *av) C_noret;
C_noret_decl(f_8162)
static void f_8162(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8164)
static void f_8164(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8169)
static C_word f_8169(C_word t0,C_word t1);
C_noret_decl(f_8178)
static C_word f_8178(C_word t0,C_word t1);
C_noret_decl(f_8205)
static void C_ccall f_8205(C_word c,C_word *av) C_noret;
C_noret_decl(f_8208)
static void C_ccall f_8208(C_word c,C_word *av) C_noret;
C_noret_decl(f_8227)
static void C_ccall f_8227(C_word c,C_word *av) C_noret;
C_noret_decl(f_8305)
static void C_ccall f_8305(C_word c,C_word *av) C_noret;
C_noret_decl(f_8388)
static void C_ccall f_8388(C_word c,C_word *av) C_noret;
C_noret_decl(f_8393)
static void C_ccall f_8393(C_word c,C_word *av) C_noret;
C_noret_decl(f_8412)
static void C_ccall f_8412(C_word c,C_word *av) C_noret;
C_noret_decl(f_8418)
static void C_ccall f_8418(C_word c,C_word *av) C_noret;
C_noret_decl(f_8467)
static void C_ccall f_8467(C_word c,C_word *av) C_noret;
C_noret_decl(f_8474)
static void C_ccall f_8474(C_word c,C_word *av) C_noret;
C_noret_decl(f_8484)
static void C_ccall f_8484(C_word c,C_word *av) C_noret;
C_noret_decl(f_8486)
static void C_ccall f_8486(C_word c,C_word *av) C_noret;
C_noret_decl(f_8506)
static void C_ccall f_8506(C_word c,C_word *av) C_noret;
C_noret_decl(f_8509)
static void C_ccall f_8509(C_word c,C_word *av) C_noret;
C_noret_decl(f_8512)
static void C_ccall f_8512(C_word c,C_word *av) C_noret;
C_noret_decl(f_8529)
static void C_ccall f_8529(C_word c,C_word *av) C_noret;
C_noret_decl(f_8532)
static void C_ccall f_8532(C_word c,C_word *av) C_noret;
C_noret_decl(f_8535)
static void C_ccall f_8535(C_word c,C_word *av) C_noret;
C_noret_decl(f_8552)
static void C_ccall f_8552(C_word c,C_word *av) C_noret;
C_noret_decl(f_8555)
static void C_ccall f_8555(C_word c,C_word *av) C_noret;
C_noret_decl(f_8558)
static void C_ccall f_8558(C_word c,C_word *av) C_noret;
C_noret_decl(f_8575)
static void C_ccall f_8575(C_word c,C_word *av) C_noret;
C_noret_decl(f_8578)
static void C_ccall f_8578(C_word c,C_word *av) C_noret;
C_noret_decl(f_8581)
static void C_ccall f_8581(C_word c,C_word *av) C_noret;
C_noret_decl(f_8598)
static void C_ccall f_8598(C_word c,C_word *av) C_noret;
C_noret_decl(f_8601)
static void C_ccall f_8601(C_word c,C_word *av) C_noret;
C_noret_decl(f_8607)
static void f_8607(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8631)
static void C_ccall f_8631(C_word c,C_word *av) C_noret;
C_noret_decl(f_8640)
static void C_ccall f_8640(C_word c,C_word *av) C_noret;
C_noret_decl(f_8665)
static void C_ccall f_8665(C_word c,C_word *av) C_noret;
C_noret_decl(f_8671)
static void C_ccall f_8671(C_word c,C_word *av) C_noret;
C_noret_decl(f_8675)
static void C_ccall f_8675(C_word c,C_word *av) C_noret;
C_noret_decl(f_8678)
static void C_ccall f_8678(C_word c,C_word *av) C_noret;
C_noret_decl(f_8687)
static void C_ccall f_8687(C_word c,C_word *av) C_noret;
C_noret_decl(f_8708)
static void C_ccall f_8708(C_word c,C_word *av) C_noret;
C_noret_decl(f_8712)
static void C_ccall f_8712(C_word c,C_word *av) C_noret;
C_noret_decl(f_8714)
static void C_ccall f_8714(C_word c,C_word *av) C_noret;
C_noret_decl(f_8718)
static void C_ccall f_8718(C_word c,C_word *av) C_noret;
C_noret_decl(f_8720)
static void C_ccall f_8720(C_word c,C_word *av) C_noret;
C_noret_decl(f_8724)
static void C_ccall f_8724(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_extern void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va9689)
static void va9689(C_word t0,C_word t1) C_noret;
C_noret_decl(va9691)
static void va9691(C_word t0,C_word t1) C_noret;
C_noret_decl(va9693)
static void va9693(C_word t0,C_word t1) C_noret;
C_noret_decl(va9695)
static void va9695(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_3076)
static void C_ccall trf_3076(C_word c,C_word *av) C_noret;
static void C_ccall trf_3076(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3076(t0,t1,t2);}

C_noret_decl(trf_3117)
static void C_ccall trf_3117(C_word c,C_word *av) C_noret;
static void C_ccall trf_3117(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3117(t0,t1,t2);}

C_noret_decl(trf_3277)
static void C_ccall trf_3277(C_word c,C_word *av) C_noret;
static void C_ccall trf_3277(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3277(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3744)
static void C_ccall trf_3744(C_word c,C_word *av) C_noret;
static void C_ccall trf_3744(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3744(t0,t1,t2,t3);}

C_noret_decl(trf_3777)
static void C_ccall trf_3777(C_word c,C_word *av) C_noret;
static void C_ccall trf_3777(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3777(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3951)
static void C_ccall trf_3951(C_word c,C_word *av) C_noret;
static void C_ccall trf_3951(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3951(t0,t1);}

C_noret_decl(trf_4007)
static void C_ccall trf_4007(C_word c,C_word *av) C_noret;
static void C_ccall trf_4007(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4007(t0,t1,t2);}

C_noret_decl(trf_4246)
static void C_ccall trf_4246(C_word c,C_word *av) C_noret;
static void C_ccall trf_4246(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4246(t0,t1,t2);}

C_noret_decl(trf_4284)
static void C_ccall trf_4284(C_word c,C_word *av) C_noret;
static void C_ccall trf_4284(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4284(t0,t1,t2);}

C_noret_decl(trf_4552)
static void C_ccall trf_4552(C_word c,C_word *av) C_noret;
static void C_ccall trf_4552(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4552(t0,t1);}

C_noret_decl(trf_4570)
static void C_ccall trf_4570(C_word c,C_word *av) C_noret;
static void C_ccall trf_4570(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4570(t0,t1);}

C_noret_decl(trf_4606)
static void C_ccall trf_4606(C_word c,C_word *av) C_noret;
static void C_ccall trf_4606(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4606(t0,t1);}

C_noret_decl(trf_4669)
static void C_ccall trf_4669(C_word c,C_word *av) C_noret;
static void C_ccall trf_4669(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4669(t0,t1,t2,t3);}

C_noret_decl(trf_4708)
static void C_ccall trf_4708(C_word c,C_word *av) C_noret;
static void C_ccall trf_4708(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4708(t0,t1);}

C_noret_decl(trf_4714)
static void C_ccall trf_4714(C_word c,C_word *av) C_noret;
static void C_ccall trf_4714(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4714(t0,t1,t2,t3);}

C_noret_decl(trf_4765)
static void C_ccall trf_4765(C_word c,C_word *av) C_noret;
static void C_ccall trf_4765(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4765(t0,t1,t2);}

C_noret_decl(trf_4786)
static void C_ccall trf_4786(C_word c,C_word *av) C_noret;
static void C_ccall trf_4786(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4786(t0,t1);}

C_noret_decl(trf_4795)
static void C_ccall trf_4795(C_word c,C_word *av) C_noret;
static void C_ccall trf_4795(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4795(t0,t1,t2);}

C_noret_decl(trf_4820)
static void C_ccall trf_4820(C_word c,C_word *av) C_noret;
static void C_ccall trf_4820(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4820(t0,t1,t2);}

C_noret_decl(trf_4869)
static void C_ccall trf_4869(C_word c,C_word *av) C_noret;
static void C_ccall trf_4869(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_4869(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_4921)
static void C_ccall trf_4921(C_word c,C_word *av) C_noret;
static void C_ccall trf_4921(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4921(t0,t1);}

C_noret_decl(trf_4958)
static void C_ccall trf_4958(C_word c,C_word *av) C_noret;
static void C_ccall trf_4958(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4958(t0,t1,t2);}

C_noret_decl(trf_5023)
static void C_ccall trf_5023(C_word c,C_word *av) C_noret;
static void C_ccall trf_5023(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5023(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5521)
static void C_ccall trf_5521(C_word c,C_word *av) C_noret;
static void C_ccall trf_5521(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5521(t0,t1);}

C_noret_decl(trf_5524)
static void C_ccall trf_5524(C_word c,C_word *av) C_noret;
static void C_ccall trf_5524(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5524(t0,t1);}

C_noret_decl(trf_5603)
static void C_ccall trf_5603(C_word c,C_word *av) C_noret;
static void C_ccall trf_5603(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5603(t0,t1);}

C_noret_decl(trf_5633)
static void C_ccall trf_5633(C_word c,C_word *av) C_noret;
static void C_ccall trf_5633(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5633(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5692)
static void C_ccall trf_5692(C_word c,C_word *av) C_noret;
static void C_ccall trf_5692(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5692(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6061)
static void C_ccall trf_6061(C_word c,C_word *av) C_noret;
static void C_ccall trf_6061(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6061(t0,t1);}

C_noret_decl(trf_6136)
static void C_ccall trf_6136(C_word c,C_word *av) C_noret;
static void C_ccall trf_6136(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6136(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6283)
static void C_ccall trf_6283(C_word c,C_word *av) C_noret;
static void C_ccall trf_6283(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6283(t0,t1,t2,t3);}

C_noret_decl(trf_6430)
static void C_ccall trf_6430(C_word c,C_word *av) C_noret;
static void C_ccall trf_6430(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6430(t0,t1);}

C_noret_decl(trf_6464)
static void C_ccall trf_6464(C_word c,C_word *av) C_noret;
static void C_ccall trf_6464(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6464(t0,t1);}

C_noret_decl(trf_6482)
static void C_ccall trf_6482(C_word c,C_word *av) C_noret;
static void C_ccall trf_6482(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6482(t0,t1);}

C_noret_decl(trf_6679)
static void C_ccall trf_6679(C_word c,C_word *av) C_noret;
static void C_ccall trf_6679(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6679(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7059)
static void C_ccall trf_7059(C_word c,C_word *av) C_noret;
static void C_ccall trf_7059(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7059(t0,t1);}

C_noret_decl(trf_7155)
static void C_ccall trf_7155(C_word c,C_word *av) C_noret;
static void C_ccall trf_7155(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_7155(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7265)
static void C_ccall trf_7265(C_word c,C_word *av) C_noret;
static void C_ccall trf_7265(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7265(t0,t1);}

C_noret_decl(trf_7306)
static void C_ccall trf_7306(C_word c,C_word *av) C_noret;
static void C_ccall trf_7306(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7306(t0,t1,t2);}

C_noret_decl(trf_7330)
static void C_ccall trf_7330(C_word c,C_word *av) C_noret;
static void C_ccall trf_7330(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7330(t0,t1);}

C_noret_decl(trf_7392)
static void C_ccall trf_7392(C_word c,C_word *av) C_noret;
static void C_ccall trf_7392(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7392(t0,t1);}

C_noret_decl(trf_7433)
static void C_ccall trf_7433(C_word c,C_word *av) C_noret;
static void C_ccall trf_7433(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7433(t0,t1);}

C_noret_decl(trf_7763)
static void C_ccall trf_7763(C_word c,C_word *av) C_noret;
static void C_ccall trf_7763(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7763(t0,t1,t2);}

C_noret_decl(trf_7811)
static void C_ccall trf_7811(C_word c,C_word *av) C_noret;
static void C_ccall trf_7811(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7811(t0,t1);}

C_noret_decl(trf_7900)
static void C_ccall trf_7900(C_word c,C_word *av) C_noret;
static void C_ccall trf_7900(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7900(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7925)
static void C_ccall trf_7925(C_word c,C_word *av) C_noret;
static void C_ccall trf_7925(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7925(t0,t1);}

C_noret_decl(trf_7945)
static void C_ccall trf_7945(C_word c,C_word *av) C_noret;
static void C_ccall trf_7945(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7945(t0,t1,t2);}

C_noret_decl(trf_7957)
static void C_ccall trf_7957(C_word c,C_word *av) C_noret;
static void C_ccall trf_7957(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7957(t0,t1,t2,t3);}

C_noret_decl(trf_7986)
static void C_ccall trf_7986(C_word c,C_word *av) C_noret;
static void C_ccall trf_7986(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_7986(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_8003)
static void C_ccall trf_8003(C_word c,C_word *av) C_noret;
static void C_ccall trf_8003(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8003(t0,t1);}

C_noret_decl(trf_8047)
static void C_ccall trf_8047(C_word c,C_word *av) C_noret;
static void C_ccall trf_8047(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8047(t0,t1);}

C_noret_decl(trf_8052)
static void C_ccall trf_8052(C_word c,C_word *av) C_noret;
static void C_ccall trf_8052(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8052(t0,t1,t2);}

C_noret_decl(trf_8078)
static void C_ccall trf_8078(C_word c,C_word *av) C_noret;
static void C_ccall trf_8078(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_8078(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_8089)
static void C_ccall trf_8089(C_word c,C_word *av) C_noret;
static void C_ccall trf_8089(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_8089(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_8100)
static void C_ccall trf_8100(C_word c,C_word *av) C_noret;
static void C_ccall trf_8100(C_word c,C_word *av){
C_word t0=av[9];
C_word t1=av[8];
C_word t2=av[7];
C_word t3=av[6];
C_word t4=av[5];
C_word t5=av[4];
C_word t6=av[3];
C_word t7=av[2];
C_word t8=av[1];
C_word t9=av[0];
f_8100(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(trf_8162)
static void C_ccall trf_8162(C_word c,C_word *av) C_noret;
static void C_ccall trf_8162(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_8162(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_8164)
static void C_ccall trf_8164(C_word c,C_word *av) C_noret;
static void C_ccall trf_8164(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8164(t0,t1,t2);}

C_noret_decl(trf_8607)
static void C_ccall trf_8607(C_word c,C_word *av) C_noret;
static void C_ccall trf_8607(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8607(t0,t1,t2,t3);}

C_noret_decl(trva9689)
static void C_ccall trva9689(C_word c,C_word *av) C_noret;
static void C_ccall trva9689(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va9689(t0,t1);}

C_noret_decl(trva9691)
static void C_ccall trva9691(C_word c,C_word *av) C_noret;
static void C_ccall trva9691(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va9691(t0,t1);}

C_noret_decl(trva9693)
static void C_ccall trva9693(C_word c,C_word *av) C_noret;
static void C_ccall trva9693(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va9693(t0,t1);}

C_noret_decl(trva9695)
static void C_ccall trva9695(C_word c,C_word *av) C_noret;
static void C_ccall trva9695(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va9695(t0,t1);}

/* f9700 in chicken.time.posix#seconds->local-time in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f9700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9700,c,av);}
/* posix-common.scm:592: decode-seconds */
{C_proc tp=(C_proc)C_retrieve2_symbol_proc(lf[264],C_text("chicken.posix#decode-seconds"));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[264];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* f9704 in chicken.time.posix#seconds->utc-time in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f9704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f9704,c,av);}
/* posix-common.scm:597: decode-seconds */
{C_proc tp=(C_proc)C_retrieve2_symbol_proc(lf[264],C_text("chicken.posix#decode-seconds"));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[264];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* f9752 in k7858 in chicken.process#process-run in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f9752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f9752,c,av);}
a=C_alloc(6);
t2=(C_truep(t1)?t1:lf[437]);
t3=C_a_i_list2(&a,2,lf[438],((C_word*)t0)[2]);
/* posixunix.scm:1185: chicken.process#process-execute */
t4=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* f9758 in %process in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f9758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f9758,c,av);}
t2=(C_truep(t1)?t1:lf[437]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_8205(2,av2);}}

/* k2925 */
static void C_ccall f_2927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2927,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2930,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2928 in k2925 */
static void C_ccall f_2930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2930,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2931 in k2928 in k2925 */
static void C_ccall f_2933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2933,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_2936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2936,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2939,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_2939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_2939,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2942,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_2942(C_word c,C_word *av){
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
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word t145;
C_word t146;
C_word t147;
C_word t148;
C_word t149;
C_word t150;
C_word t151;
C_word t152;
C_word t153;
C_word t154;
C_word t155;
C_word t156;
C_word t157;
C_word t158;
C_word t159;
C_word t160;
C_word t161;
C_word t162;
C_word t163;
C_word t164;
C_word t165;
C_word t166;
C_word t167;
C_word t168;
C_word t169;
C_word t170;
C_word t171;
C_word t172;
C_word t173;
C_word t174;
C_word t175;
C_word t176;
C_word t177;
C_word t178;
C_word t179;
C_word t180;
C_word t181;
C_word t182;
C_word t183;
C_word t184;
C_word t185;
C_word t186;
C_word t187;
C_word t188;
C_word t189;
C_word t190;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(88,c,6)))){
C_save_and_reclaim((void *)f_2942,c,av);}
a=C_alloc(88);
t2=C_set_block_item(lf[2] /* chicken.file.posix#create-fifo */,0,C_SCHEME_UNDEFINED);
t3=C_set_block_item(lf[3] /* chicken.file.posix#create-symbolic-link */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[4] /* chicken.file.posix#read-symbolic-link */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[5] /* chicken.file.posix#duplicate-fileno */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[6] /* chicken.file.posix#fcntl/dupfd */,0,C_SCHEME_UNDEFINED);
t7=C_set_block_item(lf[7] /* chicken.file.posix#fcntl/getfd */,0,C_SCHEME_UNDEFINED);
t8=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/getfl */,0,C_SCHEME_UNDEFINED);
t9=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/setfd */,0,C_SCHEME_UNDEFINED);
t10=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/setfl */,0,C_SCHEME_UNDEFINED);
t11=C_set_block_item(lf[11] /* chicken.file.posix#file-close */,0,C_SCHEME_UNDEFINED);
t12=C_set_block_item(lf[12] /* chicken.file.posix#file-control */,0,C_SCHEME_UNDEFINED);
t13=C_set_block_item(lf[13] /* chicken.file.posix#file-creation-mode */,0,C_SCHEME_UNDEFINED);
t14=C_set_block_item(lf[14] /* chicken.file.posix#file-group */,0,C_SCHEME_UNDEFINED);
t15=C_set_block_item(lf[15] /* chicken.file.posix#file-link */,0,C_SCHEME_UNDEFINED);
t16=C_set_block_item(lf[16] /* chicken.file.posix#file-lock */,0,C_SCHEME_UNDEFINED);
t17=C_set_block_item(lf[17] /* chicken.file.posix#file-lock/blocking */,0,C_SCHEME_UNDEFINED);
t18=C_set_block_item(lf[18] /* chicken.file.posix#file-mkstemp */,0,C_SCHEME_UNDEFINED);
t19=C_set_block_item(lf[19] /* chicken.file.posix#file-open */,0,C_SCHEME_UNDEFINED);
t20=C_set_block_item(lf[20] /* chicken.file.posix#file-owner */,0,C_SCHEME_UNDEFINED);
t21=C_set_block_item(lf[21] /* chicken.file.posix#file-permissions */,0,C_SCHEME_UNDEFINED);
t22=C_set_block_item(lf[22] /* chicken.file.posix#file-position */,0,C_SCHEME_UNDEFINED);
t23=C_set_block_item(lf[23] /* chicken.file.posix#file-read */,0,C_SCHEME_UNDEFINED);
t24=C_set_block_item(lf[24] /* chicken.file.posix#file-select */,0,C_SCHEME_UNDEFINED);
t25=C_set_block_item(lf[25] /* chicken.file.posix#file-truncate */,0,C_SCHEME_UNDEFINED);
t26=C_set_block_item(lf[26] /* chicken.file.posix#file-unlock */,0,C_SCHEME_UNDEFINED);
t27=C_set_block_item(lf[27] /* chicken.file.posix#file-write */,0,C_SCHEME_UNDEFINED);
t28=C_set_block_item(lf[28] /* chicken.file.posix#file-type */,0,C_SCHEME_UNDEFINED);
t29=C_set_block_item(lf[29] /* chicken.file.posix#block-device? */,0,C_SCHEME_UNDEFINED);
t30=C_set_block_item(lf[30] /* chicken.file.posix#character-device? */,0,C_SCHEME_UNDEFINED);
t31=C_set_block_item(lf[31] /* chicken.file.posix#directory? */,0,C_SCHEME_UNDEFINED);
t32=C_set_block_item(lf[32] /* chicken.file.posix#fifo? */,0,C_SCHEME_UNDEFINED);
t33=C_set_block_item(lf[33] /* chicken.file.posix#regular-file? */,0,C_SCHEME_UNDEFINED);
t34=C_set_block_item(lf[34] /* chicken.file.posix#socket? */,0,C_SCHEME_UNDEFINED);
t35=C_set_block_item(lf[35] /* chicken.file.posix#symbolic-link? */,0,C_SCHEME_UNDEFINED);
t36=C_set_block_item(lf[36] /* chicken.file.posix#fileno/stderr */,0,C_SCHEME_UNDEFINED);
t37=C_set_block_item(lf[37] /* chicken.file.posix#fileno/stdin */,0,C_SCHEME_UNDEFINED);
t38=C_set_block_item(lf[38] /* chicken.file.posix#fileno/stdout */,0,C_SCHEME_UNDEFINED);
t39=C_set_block_item(lf[39] /* chicken.file.posix#open-input-file* */,0,C_SCHEME_UNDEFINED);
t40=C_set_block_item(lf[40] /* chicken.file.posix#open-output-file* */,0,C_SCHEME_UNDEFINED);
t41=C_set_block_item(lf[41] /* chicken.file.posix#open/append */,0,C_SCHEME_UNDEFINED);
t42=C_set_block_item(lf[42] /* chicken.file.posix#open/binary */,0,C_SCHEME_UNDEFINED);
t43=C_set_block_item(lf[43] /* chicken.file.posix#open/creat */,0,C_SCHEME_UNDEFINED);
t44=C_set_block_item(lf[44] /* chicken.file.posix#open/excl */,0,C_SCHEME_UNDEFINED);
t45=C_set_block_item(lf[45] /* chicken.file.posix#open/fsync */,0,C_SCHEME_UNDEFINED);
t46=C_set_block_item(lf[46] /* chicken.file.posix#open/noctty */,0,C_SCHEME_UNDEFINED);
t47=C_set_block_item(lf[47] /* chicken.file.posix#open/noinherit */,0,C_SCHEME_UNDEFINED);
t48=C_set_block_item(lf[48] /* chicken.file.posix#open/nonblock */,0,C_SCHEME_UNDEFINED);
t49=C_set_block_item(lf[49] /* chicken.file.posix#open/rdonly */,0,C_SCHEME_UNDEFINED);
t50=C_set_block_item(lf[50] /* chicken.file.posix#open/rdwr */,0,C_SCHEME_UNDEFINED);
t51=C_set_block_item(lf[51] /* chicken.file.posix#open/read */,0,C_SCHEME_UNDEFINED);
t52=C_set_block_item(lf[52] /* chicken.file.posix#open/sync */,0,C_SCHEME_UNDEFINED);
t53=C_set_block_item(lf[53] /* chicken.file.posix#open/text */,0,C_SCHEME_UNDEFINED);
t54=C_set_block_item(lf[54] /* chicken.file.posix#open/trunc */,0,C_SCHEME_UNDEFINED);
t55=C_set_block_item(lf[55] /* chicken.file.posix#open/write */,0,C_SCHEME_UNDEFINED);
t56=C_set_block_item(lf[56] /* chicken.file.posix#open/wronly */,0,C_SCHEME_UNDEFINED);
t57=C_set_block_item(lf[57] /* chicken.file.posix#perm/irgrp */,0,C_SCHEME_UNDEFINED);
t58=C_set_block_item(lf[58] /* chicken.file.posix#perm/iroth */,0,C_SCHEME_UNDEFINED);
t59=C_set_block_item(lf[59] /* chicken.file.posix#perm/irusr */,0,C_SCHEME_UNDEFINED);
t60=C_set_block_item(lf[60] /* chicken.file.posix#perm/irwxg */,0,C_SCHEME_UNDEFINED);
t61=C_set_block_item(lf[61] /* chicken.file.posix#perm/irwxo */,0,C_SCHEME_UNDEFINED);
t62=C_set_block_item(lf[62] /* chicken.file.posix#perm/irwxu */,0,C_SCHEME_UNDEFINED);
t63=C_set_block_item(lf[63] /* chicken.file.posix#perm/isgid */,0,C_SCHEME_UNDEFINED);
t64=C_set_block_item(lf[64] /* chicken.file.posix#perm/isuid */,0,C_SCHEME_UNDEFINED);
t65=C_set_block_item(lf[65] /* chicken.file.posix#perm/isvtx */,0,C_SCHEME_UNDEFINED);
t66=C_set_block_item(lf[66] /* chicken.file.posix#perm/iwgrp */,0,C_SCHEME_UNDEFINED);
t67=C_set_block_item(lf[67] /* chicken.file.posix#perm/iwoth */,0,C_SCHEME_UNDEFINED);
t68=C_set_block_item(lf[68] /* chicken.file.posix#perm/iwusr */,0,C_SCHEME_UNDEFINED);
t69=C_set_block_item(lf[69] /* chicken.file.posix#perm/ixgrp */,0,C_SCHEME_UNDEFINED);
t70=C_set_block_item(lf[70] /* chicken.file.posix#perm/ixoth */,0,C_SCHEME_UNDEFINED);
t71=C_set_block_item(lf[71] /* chicken.file.posix#perm/ixusr */,0,C_SCHEME_UNDEFINED);
t72=C_set_block_item(lf[72] /* chicken.file.posix#port->fileno */,0,C_SCHEME_UNDEFINED);
t73=C_set_block_item(lf[73] /* chicken.file.posix#seek/cur */,0,C_SCHEME_UNDEFINED);
t74=C_set_block_item(lf[74] /* chicken.file.posix#seek/end */,0,C_SCHEME_UNDEFINED);
t75=C_set_block_item(lf[75] /* chicken.file.posix#seek/set */,0,C_SCHEME_UNDEFINED);
t76=C_set_block_item(lf[76] /* chicken.file.posix#set-file-position! */,0,C_SCHEME_UNDEFINED);
t77=C_a_i_provide(&a,1,lf[77]);
t78=C_set_block_item(lf[78] /* chicken.time.posix#seconds->utc-time */,0,C_SCHEME_UNDEFINED);
t79=C_set_block_item(lf[79] /* chicken.time.posix#utc-time->seconds */,0,C_SCHEME_UNDEFINED);
t80=C_set_block_item(lf[80] /* chicken.time.posix#seconds->local-time */,0,C_SCHEME_UNDEFINED);
t81=C_set_block_item(lf[81] /* chicken.time.posix#seconds->string */,0,C_SCHEME_UNDEFINED);
t82=C_set_block_item(lf[82] /* chicken.time.posix#local-time->seconds */,0,C_SCHEME_UNDEFINED);
t83=C_set_block_item(lf[83] /* chicken.time.posix#string->time */,0,C_SCHEME_UNDEFINED);
t84=C_set_block_item(lf[84] /* chicken.time.posix#time->string */,0,C_SCHEME_UNDEFINED);
t85=C_set_block_item(lf[85] /* chicken.time.posix#local-timezone-abbreviation */,0,C_SCHEME_UNDEFINED);
t86=C_a_i_provide(&a,1,lf[86]);
t87=C_mutate((C_word*)lf[87]+1 /* (set! chicken.process#system ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3027,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t88=C_mutate((C_word*)lf[93]+1 /* (set! chicken.process#system* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3046,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[96]+1 /* (set! chicken.process#qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3062,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t90=C_set_block_item(lf[106] /* chicken.process#process-execute */,0,C_SCHEME_UNDEFINED);
t91=C_set_block_item(lf[107] /* chicken.process#process-fork */,0,C_SCHEME_UNDEFINED);
t92=C_set_block_item(lf[108] /* chicken.process#process-run */,0,C_SCHEME_UNDEFINED);
t93=C_set_block_item(lf[109] /* chicken.process#process-signal */,0,C_SCHEME_UNDEFINED);
t94=C_set_block_item(lf[110] /* chicken.process#process-spawn */,0,C_SCHEME_UNDEFINED);
t95=C_set_block_item(lf[111] /* chicken.process#process-wait */,0,C_SCHEME_UNDEFINED);
t96=C_set_block_item(lf[112] /* chicken.process#call-with-input-pipe */,0,C_SCHEME_UNDEFINED);
t97=C_set_block_item(lf[113] /* chicken.process#call-with-output-pipe */,0,C_SCHEME_UNDEFINED);
t98=C_set_block_item(lf[114] /* chicken.process#close-input-pipe */,0,C_SCHEME_UNDEFINED);
t99=C_set_block_item(lf[115] /* chicken.process#close-output-pipe */,0,C_SCHEME_UNDEFINED);
t100=C_set_block_item(lf[116] /* chicken.process#create-pipe */,0,C_SCHEME_UNDEFINED);
t101=C_set_block_item(lf[117] /* chicken.process#open-input-pipe */,0,C_SCHEME_UNDEFINED);
t102=C_set_block_item(lf[118] /* chicken.process#open-output-pipe */,0,C_SCHEME_UNDEFINED);
t103=C_set_block_item(lf[119] /* chicken.process#with-input-from-pipe */,0,C_SCHEME_UNDEFINED);
t104=C_set_block_item(lf[120] /* chicken.process#with-output-to-pipe */,0,C_SCHEME_UNDEFINED);
t105=C_set_block_item(lf[121] /* chicken.process#process */,0,C_SCHEME_UNDEFINED);
t106=C_set_block_item(lf[122] /* chicken.process#process* */,0,C_SCHEME_UNDEFINED);
t107=C_set_block_item(lf[123] /* chicken.process#process-sleep */,0,C_SCHEME_UNDEFINED);
t108=C_set_block_item(lf[124] /* chicken.process#process? */,0,C_SCHEME_UNDEFINED);
t109=C_set_block_item(lf[125] /* chicken.process#process-exit-status */,0,C_SCHEME_UNDEFINED);
t110=C_set_block_item(lf[126] /* chicken.process#process-returned-normally? */,0,C_SCHEME_UNDEFINED);
t111=C_set_block_item(lf[127] /* chicken.process#process-input-port */,0,C_SCHEME_UNDEFINED);
t112=C_set_block_item(lf[128] /* chicken.process#process-output-port */,0,C_SCHEME_UNDEFINED);
t113=C_set_block_item(lf[129] /* chicken.process#process-error-port */,0,C_SCHEME_UNDEFINED);
t114=C_set_block_item(lf[130] /* chicken.process#process-id */,0,C_SCHEME_UNDEFINED);
t115=C_set_block_item(lf[131] /* chicken.process#pipe/buf */,0,C_SCHEME_UNDEFINED);
t116=C_set_block_item(lf[132] /* chicken.process#spawn/overlay */,0,C_SCHEME_UNDEFINED);
t117=C_set_block_item(lf[133] /* chicken.process#spawn/wait */,0,C_SCHEME_UNDEFINED);
t118=C_set_block_item(lf[134] /* chicken.process#spawn/nowait */,0,C_SCHEME_UNDEFINED);
t119=C_set_block_item(lf[135] /* chicken.process#spawn/nowaito */,0,C_SCHEME_UNDEFINED);
t120=C_set_block_item(lf[136] /* chicken.process#spawn/detach */,0,C_SCHEME_UNDEFINED);
t121=C_a_i_provide(&a,1,lf[137]);
t122=C_set_block_item(lf[138] /* chicken.process.signal#set-alarm! */,0,C_SCHEME_UNDEFINED);
t123=C_set_block_item(lf[139] /* chicken.process.signal#set-signal-handler! */,0,C_SCHEME_UNDEFINED);
t124=C_set_block_item(lf[140] /* chicken.process.signal#set-signal-mask! */,0,C_SCHEME_UNDEFINED);
t125=C_set_block_item(lf[141] /* chicken.process.signal#signal-handler */,0,C_SCHEME_UNDEFINED);
t126=C_set_block_item(lf[142] /* chicken.process.signal#make-signal-handler */,0,C_SCHEME_UNDEFINED);
t127=C_set_block_item(lf[143] /* chicken.process.signal#signal-ignore */,0,C_SCHEME_UNDEFINED);
t128=C_set_block_item(lf[144] /* chicken.process.signal#signal-default */,0,C_SCHEME_UNDEFINED);
t129=C_set_block_item(lf[145] /* chicken.process.signal#signal-mask */,0,C_SCHEME_UNDEFINED);
t130=C_set_block_item(lf[146] /* chicken.process.signal#signal-mask! */,0,C_SCHEME_UNDEFINED);
t131=C_set_block_item(lf[147] /* chicken.process.signal#signal-masked? */,0,C_SCHEME_UNDEFINED);
t132=C_set_block_item(lf[148] /* chicken.process.signal#signal-unmask! */,0,C_SCHEME_UNDEFINED);
t133=C_set_block_item(lf[149] /* chicken.process.signal#signal/abrt */,0,C_SCHEME_UNDEFINED);
t134=C_set_block_item(lf[150] /* chicken.process.signal#signal/alrm */,0,C_SCHEME_UNDEFINED);
t135=C_set_block_item(lf[151] /* chicken.process.signal#signal/break */,0,C_SCHEME_UNDEFINED);
t136=C_set_block_item(lf[152] /* chicken.process.signal#signal/bus */,0,C_SCHEME_UNDEFINED);
t137=C_set_block_item(lf[153] /* chicken.process.signal#signal/chld */,0,C_SCHEME_UNDEFINED);
t138=C_set_block_item(lf[154] /* chicken.process.signal#signal/cont */,0,C_SCHEME_UNDEFINED);
t139=C_set_block_item(lf[155] /* chicken.process.signal#signal/fpe */,0,C_SCHEME_UNDEFINED);
t140=C_set_block_item(lf[156] /* chicken.process.signal#signal/hup */,0,C_SCHEME_UNDEFINED);
t141=C_set_block_item(lf[157] /* chicken.process.signal#signal/ill */,0,C_SCHEME_UNDEFINED);
t142=C_set_block_item(lf[158] /* chicken.process.signal#signal/int */,0,C_SCHEME_UNDEFINED);
t143=C_set_block_item(lf[159] /* chicken.process.signal#signal/io */,0,C_SCHEME_UNDEFINED);
t144=C_set_block_item(lf[160] /* chicken.process.signal#signal/kill */,0,C_SCHEME_UNDEFINED);
t145=C_set_block_item(lf[161] /* chicken.process.signal#signal/pipe */,0,C_SCHEME_UNDEFINED);
t146=C_set_block_item(lf[162] /* chicken.process.signal#signal/prof */,0,C_SCHEME_UNDEFINED);
t147=C_set_block_item(lf[163] /* chicken.process.signal#signal/quit */,0,C_SCHEME_UNDEFINED);
t148=C_set_block_item(lf[164] /* chicken.process.signal#signal/segv */,0,C_SCHEME_UNDEFINED);
t149=C_set_block_item(lf[165] /* chicken.process.signal#signal/stop */,0,C_SCHEME_UNDEFINED);
t150=C_set_block_item(lf[166] /* chicken.process.signal#signal/term */,0,C_SCHEME_UNDEFINED);
t151=C_set_block_item(lf[167] /* chicken.process.signal#signal/trap */,0,C_SCHEME_UNDEFINED);
t152=C_set_block_item(lf[168] /* chicken.process.signal#signal/tstp */,0,C_SCHEME_UNDEFINED);
t153=C_set_block_item(lf[169] /* chicken.process.signal#signal/urg */,0,C_SCHEME_UNDEFINED);
t154=C_set_block_item(lf[170] /* chicken.process.signal#signal/usr1 */,0,C_SCHEME_UNDEFINED);
t155=C_set_block_item(lf[171] /* chicken.process.signal#signal/usr2 */,0,C_SCHEME_UNDEFINED);
t156=C_set_block_item(lf[172] /* chicken.process.signal#signal/vtalrm */,0,C_SCHEME_UNDEFINED);
t157=C_set_block_item(lf[173] /* chicken.process.signal#signal/winch */,0,C_SCHEME_UNDEFINED);
t158=C_set_block_item(lf[174] /* chicken.process.signal#signal/xcpu */,0,C_SCHEME_UNDEFINED);
t159=C_set_block_item(lf[175] /* chicken.process.signal#signal/xfsz */,0,C_SCHEME_UNDEFINED);
t160=C_set_block_item(lf[176] /* chicken.process.signal#signals-list */,0,C_SCHEME_UNDEFINED);
t161=C_a_i_provide(&a,1,lf[177]);
t162=C_set_block_item(lf[178] /* chicken.process-context.posix#change-directory* */,0,C_SCHEME_UNDEFINED);
t163=C_set_block_item(lf[179] /* chicken.process-context.posix#set-root-directory! */,0,C_SCHEME_UNDEFINED);
t164=C_set_block_item(lf[180] /* chicken.process-context.posix#current-effective-group-id */,0,C_SCHEME_UNDEFINED);
t165=C_set_block_item(lf[181] /* chicken.process-context.posix#current-effective-user-id */,0,C_SCHEME_UNDEFINED);
t166=C_set_block_item(lf[182] /* chicken.process-context.posix#current-group-id */,0,C_SCHEME_UNDEFINED);
t167=C_set_block_item(lf[183] /* chicken.process-context.posix#current-user-id */,0,C_SCHEME_UNDEFINED);
t168=C_set_block_item(lf[184] /* chicken.process-context.posix#current-process-id */,0,C_SCHEME_UNDEFINED);
t169=C_set_block_item(lf[185] /* chicken.process-context.posix#parent-process-id */,0,C_SCHEME_UNDEFINED);
t170=C_set_block_item(lf[186] /* chicken.process-context.posix#current-user-name */,0,C_SCHEME_UNDEFINED);
t171=C_set_block_item(lf[187] /* chicken.process-context.posix#current-effective-user-name */,0,C_SCHEME_UNDEFINED);
t172=C_set_block_item(lf[188] /* chicken.process-context.posix#create-session */,0,C_SCHEME_UNDEFINED);
t173=C_set_block_item(lf[189] /* chicken.process-context.posix#process-group-id */,0,C_SCHEME_UNDEFINED);
t174=C_set_block_item(lf[190] /* chicken.process-context.posix#user-information */,0,C_SCHEME_UNDEFINED);
t175=C_a_i_provide(&a,1,lf[191]);
t176=C_mutate(&lf[192] /* (set! chicken.posix#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3259,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t177=C_mutate((C_word*)lf[195]+1 /* (set! ##sys#posix-error ...) */,lf[192]);
t178=C_mutate(&lf[196] /* (set! chicken.posix#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3277,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t179=C_mutate((C_word*)lf[204]+1 /* (set! chicken.file.posix#file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3323,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t180=C_mutate((C_word*)lf[206]+1 /* (set! chicken.file.posix#set-file-permissions! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3341,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t181=C_mutate((C_word*)lf[211]+1 /* (set! chicken.file.posix#file-modification-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3385,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t182=C_mutate((C_word*)lf[213]+1 /* (set! chicken.file.posix#file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3391,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t183=C_mutate((C_word*)lf[215]+1 /* (set! chicken.file.posix#file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3397,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t184=C_mutate((C_word*)lf[217]+1 /* (set! chicken.file.posix#set-file-times! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3403,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t185=C_mutate((C_word*)lf[222]+1 /* (set! chicken.file.posix#file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3471,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t186=C_mutate((C_word*)lf[224]+1 /* (set! chicken.file.posix#set-file-owner! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3477,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t187=C_mutate((C_word*)lf[227]+1 /* (set! chicken.file.posix#set-file-group! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3483,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t188=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t189=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8720,a[2]=((C_word)li242),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:321: chicken.base#getter-with-setter */
t190=*((C_word*)lf[496]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t190;
av2[1]=t188;
av2[2]=t189;
av2[3]=*((C_word*)lf[224]+1);
av2[4]=lf[527];
((C_proc)(void*)(*((C_word*)t190+1)))(5,av2);}}

/* chicken.process#system in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3027(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3027,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[88]);
t4=C_execute_shell_command(t2);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3044,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:204: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2=av;
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3042 in chicken.process#system in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3044,c,av);}
/* posix.scm:203: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[89]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[89]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[90];
av2[3]=t1;
av2[4]=lf[88];
av2[5]=lf[91];
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}

/* chicken.process#system* in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3046,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3050,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:210: system */
t4=*((C_word*)lf[87]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3048 in chicken.process#system* in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3050,c,av);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* posix.scm:212: ##sys#error */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[95];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* chicken.process#qs in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3062,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3066,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,3))){
/* posix.scm:217: chicken.platform#software-version */
t4=C_fast_retrieve(lf[105]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_get_rest_arg(c,3,av,3,t0);
f_3066(2,av2);}}}

/* k3064 in chicken.process#qs in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3066(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_3066,c,av);}
a=C_alloc(18);
t2=C_eqp(t1,lf[97]);
t3=(C_truep(t2)?C_make_character(34):C_make_character(39));
t4=C_eqp(t1,lf[97]);
t5=(C_truep(t4)?lf[98]:lf[99]);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3076,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3097,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=t10,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* ##sys#string->list */
t12=C_fast_retrieve(lf[104]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* g258 in k3064 in chicken.process#qs in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_3076(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3076,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_char_equalp(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_u_i_char_equalp(t2,C_make_character(0)))){
/* posix.scm:225: chicken.base#error */
t3=*((C_word*)lf[100]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[101];
av2[3]=lf[102];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k3095 in k3064 in chicken.process#qs in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3097,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3117,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li3),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_3117(t6,t2,t1);}

/* k3098 in k3095 in k3064 in chicken.process#qs in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3100,c,av);}
a=C_alloc(11);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3111,a[2]=t0,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[103]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* k3109 in k3098 in k3095 in k3064 in chicken.process#qs in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3111,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_a_i_string(&a,1,((C_word*)t2)[2]);
/* posix.scm:228: scheme#string-append */
t4=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t2)[3];
av2[2]=((C_word*)t2)[4];
av2[3]=t1;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* map-loop252 in k3095 in k3064 in chicken.process#qs in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_3117(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3117,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posix.scm:221: g258 */
t4=((C_word*)t0)[4];
f_3076(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3140 in map-loop252 in k3095 in k3064 in chicken.process#qs in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3142,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3117(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* chicken.posix#posix-error in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_3259,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+7);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3263,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:199: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2=av;
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t6;
tp(2,av2);}}

/* k3261 in chicken.posix#posix-error in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_3263,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3274,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
/* posix-common.scm:196: ##sys#peek-c-string */
t6=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=stub684(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k3268 in k3261 in chicken.posix#posix-error in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_3270,c,av);}{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[89]);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=t1;
av2[7]=((C_word*)t0)[6];
C_apply(8,av2);}}

/* k3272 in k3261 in chicken.posix#posix-error in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3274,c,av);}
/* posix-common.scm:201: string-append */
t2=*((C_word*)lf[103]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[193];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.posix#stat in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_3277(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3277,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3281,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_u_i_fstat(t2);
f_3281(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3302,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:244: scheme#port? */
t8=C_fast_retrieve(lf[203]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k3279 in chicken.posix#stat in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3281,c,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:255: posix-error */
t2=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[197];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[198];
av2[5]=((C_word*)t0)[5];
f_3259(6,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3300 in chicken.posix#stat in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3302,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3306,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:244: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:246: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}
else{
/* posix-common.scm:251: ##sys#signal-hook */
t2=*((C_word*)lf[200]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[201];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[202];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k3304 in k3300 in chicken.posix#stat in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3306,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_fstat(t1);
f_3281(2,av2);}}

/* k3313 in k3300 in chicken.posix#stat in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3315,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(((C_word*)t0)[3])?C_u_i_lstat(t1):C_u_i_stat(t1));
f_3281(2,av2);}}

/* chicken.file.posix#file-stat in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3323(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3323,c,av);}
a=C_alloc(3);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3330,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:261: stat */
f_3277(t5,t2,t4,C_SCHEME_TRUE,lf[205]);}

/* k3328 in chicken.file.posix#file-stat in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_3330,c,av);}
a=C_alloc(42);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_int64_to_num(&a,C_statbuf.st_size),C_int64_to_num(&a,C_statbuf.st_atime),C_int64_to_num(&a,C_statbuf.st_ctime),C_int64_to_num(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blksize),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blocks));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-permissions! in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3341(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3341,c,av);}
a=C_alloc(10);
t4=C_i_check_fixnum_2(t3,lf[207]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3348,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(t2))){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_fchmod(t2,t3);
f_3348(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3366,a[2]=t5,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:272: scheme#port? */
t7=C_fast_retrieve(lf[203]);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k3346 in chicken.file.posix#set-file-permissions! in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3348,c,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:281: posix-error */
t2=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[197];
av2[3]=lf[207];
av2[4]=lf[208];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_3259(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3364 in chicken.file.posix#set-file-permissions! in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3366,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:272: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:275: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[207];
tp(4,av2);}}
else{
/* posix-common.scm:277: ##sys#signal-hook */
t2=*((C_word*)lf[200]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[201];
av2[3]=lf[209];
av2[4]=lf[210];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k3368 in k3364 in chicken.file.posix#set-file-permissions! in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3370,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fchmod(t1,((C_word*)t0)[3]);
f_3348(2,av2);}}

/* k3378 in k3364 in chicken.file.posix#set-file-permissions! in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3380,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_chmod(t1,((C_word*)t0)[3]);
f_3348(2,av2);}}

/* chicken.file.posix#file-modification-time in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3385,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3389,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:285: stat */
f_3277(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[212]);}

/* k3387 in chicken.file.posix#file-modification-time in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3389,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_mtime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-access-time in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3391,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3395,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:289: stat */
f_3277(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[214]);}

/* k3393 in chicken.file.posix#file-access-time in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3395,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_atime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-change-time in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3397,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3401,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:293: stat */
f_3277(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[216]);}

/* k3399 in chicken.file.posix#file-change-time in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3401,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_ctime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-times! in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_3403,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3407,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(t3))){
/* posix-common.scm:298: chicken.time#current-seconds */
t5=C_fast_retrieve(lf[221]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_3407(2,av2);}}}

/* k3405 in chicken.file.posix#set-file-times! in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3407(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3407,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=C_i_nullp(((C_word*)t0)[6]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[6]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?((C_word*)t0)[3]:C_i_car(t4));
t7=C_mutate(((C_word *)t0)+4,t6);
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3419,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posix-common.scm:299: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t10;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[218];
tp(4,av2);}}
else{
t11=t10;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_3419(2,av2);}}}

/* k3417 in k3405 in chicken.file.posix#set-file-times! in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3419,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3422,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t2)[4])){
/* posix-common.scm:300: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
av2[3]=lf[218];
tp(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3422(2,av2);}}}

/* k3420 in k3417 in k3405 in chicken.file.posix#set-file-times! in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_3422,c,av);}
t2=((C_word*)t0)[2];
t3=stub758(C_SCHEME_UNDEFINED,((C_word*)t2)[2],((C_word*)t2)[3],((C_word*)t2)[4]);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t2)[5];
av2[2]=lf[192];
av2[3]=lf[197];
av2[4]=lf[218];
av2[5]=lf[219];
av2[6]=((C_word*)t2)[2];
av2[7]=((C_word*)t2)[6];
C_apply(8,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* chicken.file.posix#file-size in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3471,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3475,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:310: stat */
f_3277(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[223]);}

/* k3473 in chicken.file.posix#file-size in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3475,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_size);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-owner! in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3477,c,av);}
/* posix-common.scm:314: chown */
f_6136(t1,lf[226],t2,t3,C_fix(-1));}

/* chicken.file.posix#set-file-group! in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3483,c,av);}
/* posix-common.scm:318: chown */
f_6136(t1,lf[228],t2,C_fix(-1),t3);}

/* k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3491,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[20]+1 /* (set! chicken.file.posix#file-owner ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8714,a[2]=((C_word)li241),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:327: chicken.base#getter-with-setter */
t5=*((C_word*)lf[496]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[227]+1);
av2[4]=lf[525];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3495,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[14]+1 /* (set! chicken.file.posix#file-group ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3499,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8708,a[2]=((C_word)li240),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:333: chicken.base#getter-with-setter */
t5=*((C_word*)lf[496]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[206]+1);
av2[4]=lf[523];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3499(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_3499,c,av);}
a=C_alloc(33);
t2=C_mutate((C_word*)lf[21]+1 /* (set! chicken.file.posix#file-permissions ...) */,t1);
t3=C_mutate((C_word*)lf[28]+1 /* (set! chicken.file.posix#file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3501,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[33]+1 /* (set! chicken.file.posix#regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3588,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[35]+1 /* (set! chicken.file.posix#symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3598,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[29]+1 /* (set! chicken.file.posix#block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3608,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[30]+1 /* (set! chicken.file.posix#character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3618,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[32]+1 /* (set! chicken.file.posix#fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3628,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[34]+1 /* (set! chicken.file.posix#socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3638,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[31]+1 /* (set! chicken.file.posix#directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3648,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(lf[75] /* chicken.file.posix#seek/set */,0,C_fix((C_word)SEEK_SET));
t12=C_set_block_item(lf[74] /* chicken.file.posix#seek/end */,0,C_fix((C_word)SEEK_END));
t13=C_set_block_item(lf[73] /* chicken.file.posix#seek/cur */,0,C_fix((C_word)SEEK_CUR));
t14=C_mutate((C_word*)lf[76]+1 /* (set! chicken.file.posix#set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3661,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3716,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8671,a[2]=((C_word)li239),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:410: chicken.base#getter-with-setter */
t17=*((C_word*)lf[496]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=t16;
av2[3]=*((C_word*)lf[76]+1);
av2[4]=lf[522];
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}

/* chicken.file.posix#file-type in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3501(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3501,c,av);}
a=C_alloc(3);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_TRUE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3520,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:342: stat */
f_3277(t9,t2,t4,t7,lf[236]);}

/* k3518 in chicken.file.posix#file-type in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3520(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3520,c,av);}
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
t3=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=lf[229];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK));
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[230];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[231];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR));
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[232];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK));
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=lf[233];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO));
if(C_truep(t8)){
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=lf[234];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t10=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t10;
av2[1]=(C_truep(t9)?lf[235]:lf[229]);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}}}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file.posix#regular-file? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3588,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3596,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:356: chicken.file.posix#file-type */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3594 in chicken.file.posix#regular-file? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3596,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[229],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#symbolic-link? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3598,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3606,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:360: chicken.file.posix#file-type */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3604 in chicken.file.posix#symbolic-link? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3606,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[230],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#block-device? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3608,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3616,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:364: chicken.file.posix#file-type */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3614 in chicken.file.posix#block-device? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3616,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[233],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#character-device? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3618,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3626,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:368: chicken.file.posix#file-type */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3624 in chicken.file.posix#character-device? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3626,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[232],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#fifo? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3628,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3636,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:372: chicken.file.posix#file-type */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3634 in chicken.file.posix#fifo? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3636,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[234],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#socket? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3638,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3646,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:376: chicken.file.posix#file-type */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3644 in chicken.file.posix#socket? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3646,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[235],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#directory? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3648,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3656,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:380: chicken.file.posix#file-type */
t4=*((C_word*)lf[28]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3654 in chicken.file.posix#directory? in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3656(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3656,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[231],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-position! in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +11,c,2)))){
C_save_and_reclaim((void*)f_3661,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+11);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_get_rest_arg(c,4,av,4,t0):C_fix((C_word)SEEK_SET));
t7=C_i_check_fixnum_2(t3,lf[237]);
t8=C_i_check_fixnum_2(t6,lf[237]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3677,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3683,a[2]=t2,a[3]=t3,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:398: scheme#port? */
t11=C_fast_retrieve(lf[203]);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k3675 in chicken.file.posix#set-file-position! in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3677,c,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posix-common.scm:407: posix-error */
t2=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[197];
av2[3]=lf[237];
av2[4]=lf[238];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_3259(7,av2);}}}

/* k3681 in chicken.file.posix#set-file-position! in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_3683,c,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[239]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
if(C_truep(t4)){
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(6),C_SCHEME_FALSE);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
f_3677(2,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_3677(2,av2);}}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3677(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
f_3677(2,av2);}}
else{
/* posix-common.scm:406: ##sys#signal-hook */
t2=*((C_word*)lf[200]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[201];
av2[3]=lf[237];
av2[4]=lf[240];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3716(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(45,c,7)))){
C_save_and_reclaim((void *)f_3716,c,av);}
a=C_alloc(45);
t2=C_mutate((C_word*)lf[22]+1 /* (set! chicken.file.posix#file-position ...) */,t1);
t3=C_set_block_item(lf[37] /* chicken.file.posix#fileno/stdin */,0,C_fix((C_word)STDIN_FILENO));
t4=C_set_block_item(lf[38] /* chicken.file.posix#fileno/stdout */,0,C_fix((C_word)STDOUT_FILENO));
t5=C_set_block_item(lf[36] /* chicken.file.posix#fileno/stderr */,0,C_fix((C_word)STDERR_FILENO));
t6=C_set_block_item(lf[49] /* chicken.file.posix#open/rdonly */,0,C_fix((C_word)O_RDONLY));
t7=C_set_block_item(lf[56] /* chicken.file.posix#open/wronly */,0,C_fix((C_word)O_WRONLY));
t8=C_set_block_item(lf[50] /* chicken.file.posix#open/rdwr */,0,C_fix((C_word)O_RDWR));
t9=C_set_block_item(lf[51] /* chicken.file.posix#open/read */,0,C_fix((C_word)O_RDONLY));
t10=C_set_block_item(lf[55] /* chicken.file.posix#open/write */,0,C_fix((C_word)O_WRONLY));
t11=C_set_block_item(lf[43] /* chicken.file.posix#open/creat */,0,C_fix((C_word)O_CREAT));
t12=C_set_block_item(lf[41] /* chicken.file.posix#open/append */,0,C_fix((C_word)O_APPEND));
t13=C_set_block_item(lf[44] /* chicken.file.posix#open/excl */,0,C_fix((C_word)O_EXCL));
t14=C_set_block_item(lf[54] /* chicken.file.posix#open/trunc */,0,C_fix((C_word)O_TRUNC));
t15=C_set_block_item(lf[42] /* chicken.file.posix#open/binary */,0,C_fix((C_word)O_BINARY));
t16=C_set_block_item(lf[53] /* chicken.file.posix#open/text */,0,C_fix((C_word)O_TEXT));
t17=C_set_block_item(lf[59] /* chicken.file.posix#perm/irusr */,0,C_fix((C_word)S_IRUSR));
t18=C_set_block_item(lf[68] /* chicken.file.posix#perm/iwusr */,0,C_fix((C_word)S_IWUSR));
t19=C_set_block_item(lf[71] /* chicken.file.posix#perm/ixusr */,0,C_fix((C_word)S_IXUSR));
t20=C_set_block_item(lf[57] /* chicken.file.posix#perm/irgrp */,0,C_fix((C_word)S_IRGRP));
t21=C_set_block_item(lf[66] /* chicken.file.posix#perm/iwgrp */,0,C_fix((C_word)S_IWGRP));
t22=C_set_block_item(lf[69] /* chicken.file.posix#perm/ixgrp */,0,C_fix((C_word)S_IXGRP));
t23=C_set_block_item(lf[58] /* chicken.file.posix#perm/iroth */,0,C_fix((C_word)S_IROTH));
t24=C_set_block_item(lf[67] /* chicken.file.posix#perm/iwoth */,0,C_fix((C_word)S_IWOTH));
t25=C_set_block_item(lf[70] /* chicken.file.posix#perm/ixoth */,0,C_fix((C_word)S_IXOTH));
t26=C_set_block_item(lf[62] /* chicken.file.posix#perm/irwxu */,0,C_fix((C_word)S_IRUSR | S_IWUSR | S_IXUSR));
t27=C_set_block_item(lf[60] /* chicken.file.posix#perm/irwxg */,0,C_fix((C_word)S_IRGRP | S_IWGRP | S_IXGRP));
t28=C_set_block_item(lf[61] /* chicken.file.posix#perm/irwxo */,0,C_fix((C_word)S_IROTH | S_IWOTH | S_IXOTH));
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3744,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3777,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[39]+1 /* (set! chicken.file.posix#open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3799,a[2]=t32,a[3]=t30,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t36=C_mutate((C_word*)lf[40]+1 /* (set! chicken.file.posix#open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3849,a[2]=t32,a[3]=t30,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t37=C_mutate((C_word*)lf[72]+1 /* (set! chicken.file.posix#port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3899,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[5]+1 /* (set! chicken.file.posix#duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3944,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[184]+1 /* (set! chicken.process-context.posix#current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3971,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[178]+1 /* (set! chicken.process-context.posix#change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3974,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t41=C_fast_retrieve(lf[263]);
t42=C_mutate((C_word*)lf[263]+1 /* (set! ##sys#change-directory-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3990,a[2]=t41,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4004,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8640,a[2]=((C_word)li237),tmp=(C_word)a,a+=3,tmp);
t45=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8665,a[2]=((C_word)li238),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:568: chicken.base#getter-with-setter */
t46=*((C_word*)lf[496]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t46;
av2[1]=t43;
av2[2]=t44;
av2[3]=t45;
av2[4]=lf[518];
((C_proc)(void*)(*((C_word*)t46+1)))(5,av2);}}

/* mode in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_3744(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3744,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3752,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t6=C_eqp(t3,lf[241]);
if(C_truep(t6)){
if(C_truep(C_i_not(t2))){
/* posix-common.scm:491: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word av2[4];
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t1;
av2[2]=lf[242];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:493: ##sys#error */
t7=*((C_word*)lf[94]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[243];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
/* posix-common.scm:494: ##sys#error */
t7=*((C_word*)lf[94]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[244];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
if(C_truep(t2)){
/* posix-common.scm:491: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word av2[4];
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t1;
av2[2]=lf[245];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:491: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word av2[4];
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t1;
av2[2]=lf[246];
av2[3]=t4;
tp(4,av2);}}}}

/* k3750 in mode in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3752,c,av);}
/* posix-common.scm:491: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* check in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_3777(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,5)))){
C_save_and_reclaim_args((void *)trf_3777,6,t1,t2,t3,t4,t5,t6);}
a=C_alloc(5);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:500: posix-error */
t7=lf[192];{
C_word av2[6];
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[197];
av2[3]=t2;
av2[4]=lf[247];
av2[5]=t3;
f_3259(6,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3790,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
/* posix-common.scm:501: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[248]);
C_word av2[6];
av2[0]=*((C_word*)lf[248]+1);
av2[1]=t7;
av2[2]=C_fix(1);
av2[3]=C_fast_retrieve(lf[249]);
av2[4]=lf[250];
av2[5]=lf[239];
tp(6,av2);}}
else{
/* posix-common.scm:501: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[248]);
C_word av2[6];
av2[0]=*((C_word*)lf[248]+1);
av2[1]=t7;
av2[2]=C_fix(2);
av2[3]=C_fast_retrieve(lf[249]);
av2[4]=lf[250];
av2[5]=lf[239];
tp(6,av2);}}}}

/* k3788 in check in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3790,c,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=C_i_setslot(t1,C_fix(15),((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.file.posix#open-input-file* in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3799(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3799,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?lf[251]:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_i_check_fixnum_2(t2,lf[252]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3823,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:508: mode */
f_3744(t10,C_SCHEME_TRUE,t4,lf[252]);}

/* k3821 in chicken.file.posix#open-input-file* in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,6)))){
C_save_and_reclaim((void *)f_3823,c,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:508: check */
f_3777(((C_word*)t0)[4],lf[252],((C_word*)t0)[2],C_SCHEME_TRUE,t2,((C_word*)t0)[5]);}

/* chicken.file.posix#open-output-file* in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3849(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3849,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?lf[251]:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_i_check_fixnum_2(t2,lf[253]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3873,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:512: mode */
f_3744(t10,C_SCHEME_FALSE,t4,lf[253]);}

/* k3871 in chicken.file.posix#open-output-file* in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,6)))){
C_save_and_reclaim((void *)f_3873,c,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:512: check */
f_3777(((C_word*)t0)[4],lf[253],((C_word*)t0)[2],C_SCHEME_FALSE,t2,((C_word*)t0)[5]);}

/* chicken.file.posix#port->fileno in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3899(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3899,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[254]);
t4=C_slot(t2,C_fix(7));
t5=C_eqp(lf[235],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3915,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:522: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[255]);
C_word *av2=av;
av2[0]=*((C_word*)lf[255]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3938,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:523: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[258]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[258]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}}

/* k3913 in chicken.file.posix#port->fileno in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3915,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3922 in k3936 in chicken.file.posix#port->fileno in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3924,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3936 in chicken.file.posix#port->fileno in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3938,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(C_i_zerop(t1)))){
t2=C_port_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3924,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:526: posix-error */
t4=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[197];
av2[3]=lf[254];
av2[4]=lf[256];
av2[5]=((C_word*)t0)[2];
f_3259(6,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
/* posix-common.scm:528: posix-error */
t2=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[201];
av2[3]=lf[254];
av2[4]=lf[257];
av2[5]=((C_word*)t0)[2];
f_3259(6,av2);}}}

/* chicken.file.posix#duplicate-fileno in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3944(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3944,c,av);}
a=C_alloc(4);
t3=C_i_check_fixnum_2(t2,lf[259]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3951,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,3))){
t5=t4;
f_3951(t5,C_dup(t2));}
else{
t5=C_get_rest_arg(c,3,av,3,t0);
t6=C_i_check_fixnum_2(t5,lf[259]);
t7=t4;
f_3951(t7,C_dup2(t2,t5));}}

/* k3949 in chicken.file.posix#duplicate-fileno in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_3951(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3951,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3954,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:539: posix-error */
t3=lf[192];{
C_word av2[6];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[197];
av2[3]=lf[259];
av2[4]=lf[260];
av2[5]=((C_word*)t0)[3];
f_3259(6,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3952 in k3949 in chicken.file.posix#duplicate-fileno in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3954,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process-context.posix#current-process-id in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3971,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub903(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process-context.posix#change-directory* in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3974(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3974,c,av);}
a=C_alloc(4);
t3=C_i_check_fixnum_2(t2,lf[261]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3981,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(C_fix(0),C_fchdir(t2));
if(C_truep(t5)){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* posix-common.scm:555: posix-error */
t6=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=lf[197];
av2[3]=lf[261];
av2[4]=lf[262];
av2[5]=t2;
f_3259(6,av2);}}}

/* k3979 in chicken.process-context.posix#change-directory* in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3981,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#change-directory-hook in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_3990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3990,c,av);}
if(C_truep(C_fixnump(t2))){
t3=*((C_word*)lf[178]+1);
t4=*((C_word*)lf[178]+1);
/* posix-common.scm:560: g910 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[178]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[178]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
/* posix-common.scm:560: g910 */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}}

/* k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4004(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_4004,c,av);}
a=C_alloc(32);
t2=C_mutate((C_word*)lf[13]+1 /* (set! chicken.file.posix#file-creation-mode ...) */,t1);
t3=C_mutate(&lf[264] /* (set! chicken.posix#decode-seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_decode_seconds,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[265] /* (set! chicken.posix#check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4007,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[80]+1 /* (set! chicken.time.posix#seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4026,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[78]+1 /* (set! chicken.time.posix#seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4047,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[81]+1 /* (set! chicken.time.posix#seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4079,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t8=C_fix((C_word)sizeof(struct tm));
t9=C_mutate((C_word*)lf[82]+1 /* (set! chicken.time.posix#local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4117,a[2]=t8,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t10=C_fix((C_word)sizeof(struct tm));
t11=C_mutate((C_word*)lf[84]+1 /* (set! chicken.time.posix#time->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4162,a[2]=t10,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[139]+1 /* (set! chicken.process.signal#set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4224,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8631,a[2]=((C_word)li236),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:643: chicken.base#getter-with-setter */
t15=*((C_word*)lf[496]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
av2[3]=*((C_word*)lf[139]+1);
av2[4]=lf[516];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* chicken.posix#check-time-vector in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4007(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_4007,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:587: ##sys#error */
t6=*((C_word*)lf[94]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[266];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* chicken.time.posix#seconds->local-time in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4026,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:590: chicken.time#current-seconds */
t3=C_fast_retrieve(lf[221]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_get_rest_arg(c,2,av,2,t0);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f9700,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:591: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word av2[4];
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[267];
tp(4,av2);}}}

/* k4028 in chicken.time.posix#seconds->local-time in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4030,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4033,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:591: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[267];
tp(4,av2);}}

/* k4031 in k4028 in chicken.time.posix#seconds->local-time in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4033,c,av);}
t2=((C_word*)t0)[2];
/* posix-common.scm:592: decode-seconds */
{C_proc tp=(C_proc)C_retrieve2_symbol_proc(lf[264],C_text("chicken.posix#decode-seconds"));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[264];
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* chicken.time.posix#seconds->utc-time in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4047,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4051,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:595: chicken.time#current-seconds */
t3=C_fast_retrieve(lf[221]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_get_rest_arg(c,2,av,2,t0);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f9704,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:596: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word av2[4];
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[268];
tp(4,av2);}}}

/* k4049 in chicken.time.posix#seconds->utc-time in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4051,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4054,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:596: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[268];
tp(4,av2);}}

/* k4052 in k4049 in chicken.time.posix#seconds->utc-time in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4054,c,av);}
t2=((C_word*)t0)[2];
/* posix-common.scm:597: decode-seconds */
{C_proc tp=(C_proc)C_retrieve2_symbol_proc(lf[264],C_text("chicken.posix#decode-seconds"));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[264];
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* chicken.time.posix#seconds->string in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4079,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4083,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:601: chicken.time#current-seconds */
t3=C_fast_retrieve(lf[221]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_get_rest_arg(c,2,av,2,t0);
f_4083(2,av2);}}}

/* k4081 in chicken.time.posix#seconds->string in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4083,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4086,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:602: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[270];
tp(4,av2);}}

/* k4084 in k4081 in chicken.time.posix#seconds->string in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4086(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4086,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4089,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_fix((C_word)sizeof(int) * CHAR_BIT);
t6=C_i_foreign_ranged_integer_argumentp(((C_word*)t2)[3],t5);
/* posix-common.scm:600: ##sys#peek-c-string */
t7=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=stub959(t4,t6);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k4087 in k4084 in k4081 in chicken.time.posix#seconds->string in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4089,c,av);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_string_length(t1);
/* posix-common.scm:605: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[269]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[269]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(t3,C_fix(1));
tp(5,av2);}}
else{
/* posix-common.scm:606: ##sys#error */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[270];
av2[3]=lf[271];
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* chicken.time.posix#local-time->seconds in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4117,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4121,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:611: check-time-vector */
f_4007(t3,lf[272],t2);}

/* k4119 in chicken.time.posix#local-time->seconds in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4121,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:612: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[274]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[274]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
tp(4,av2);}}

/* k4123 in k4119 in chicken.time.posix#local-time->seconds in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4125,c,av);}
a=C_alloc(7);
t2=C_a_mktime(&a,2,((C_word*)t0)[2],t1);
if(C_truep(C_i_nequalp(C_fix(-1),t2))){
/* posix-common.scm:614: ##sys#error */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[272];
av2[3]=lf[273];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#time->string in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4162(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4162,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4169,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:622: check-time-vector */
f_4007(t5,lf[275],t2);}

/* k4167 in chicken.time.posix#time->string in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4169,c,av);}
a=C_alloc(9);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[275]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4178,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4188,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:626: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[275];
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4195,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4216,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:628: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[274]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[274]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
tp(4,av2);}}}

/* k4176 in k4167 in chicken.time.posix#time->string in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4178,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* posix-common.scm:627: ##sys#error */
t2=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[275];
av2[3]=lf[276];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k4186 in k4167 in chicken.time.posix#time->string in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4188,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:626: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[274]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[274]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
tp(4,av2);}}

/* k4190 in k4186 in k4167 in chicken.time.posix#time->string in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4192,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t3=C_i_foreign_block_argumentp(t1);
/* posix-common.scm:619: ##sys#peek-c-string */
t4=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=stub996(t2,((C_word*)t0)[3],((C_word*)t0)[4],t3);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* posix-common.scm:619: ##sys#peek-c-string */
t3=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=stub996(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k4193 in k4167 in chicken.time.posix#time->string in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4195,c,av);}
if(C_truep(t1)){
t2=C_i_string_length(t1);
/* posix-common.scm:630: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[269]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[269]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(t2,C_fix(1));
tp(5,av2);}}
else{
/* posix-common.scm:631: ##sys#error */
t2=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[275];
av2[3]=lf[277];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k4214 in k4167 in chicken.time.posix#time->string in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4216,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t3=C_i_foreign_block_argumentp(t1);
/* posix-common.scm:618: ##sys#peek-c-string */
t4=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=stub986(t2,((C_word*)t0)[3],t3);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
/* posix-common.scm:618: ##sys#peek-c-string */
t3=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=stub986(t2,((C_word*)t0)[3],C_SCHEME_FALSE);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* chicken.process.signal#set-signal-handler! in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4224(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4224,c,av);}
t4=C_i_check_fixnum_2(t2,lf[278]);
if(C_truep(t3)){
t5=C_establish_signal_handler(t2,t2);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_vector_set(C_fast_retrieve(lf[279]),t2,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_vector_set(C_fast_retrieve(lf[279]),t2,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4239(C_word c,C_word *av){
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
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(116,c,8)))){
C_save_and_reclaim((void *)f_4239,c,av);}
a=C_alloc(116);
t2=C_mutate((C_word*)lf[141]+1 /* (set! chicken.process.signal#signal-handler ...) */,t1);
t3=C_mutate((C_word*)lf[142]+1 /* (set! chicken.process.signal#make-signal-handler ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4241,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[143]+1 /* (set! chicken.process.signal#signal-ignore ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4307,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[144]+1 /* (set! chicken.process.signal#signal-default ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4316,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t6=lf[287] /* chicken.posix#children */ =C_SCHEME_END_OF_LIST;;
t7=C_mutate(&lf[288] /* (set! chicken.posix#process? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4333,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[290] /* (set! chicken.posix#process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4348,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[291] /* (set! chicken.posix#process-returned-normally? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4366,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[292] /* (set! chicken.posix#process-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4384,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[293] /* (set! chicken.posix#process-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4402,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[294] /* (set! chicken.posix#process-error-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4420,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate(&lf[295] /* (set! chicken.posix#process-exit-status ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4438,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[124]+1 /* (set! chicken.process#process? ...) */,C_retrieve2(lf[288],C_text("chicken.posix#process?")));
t15=C_mutate((C_word*)lf[130]+1 /* (set! chicken.process#process-id ...) */,C_retrieve2(lf[290],C_text("chicken.posix#process-id")));
t16=C_mutate((C_word*)lf[125]+1 /* (set! chicken.process#process-exit-status ...) */,C_retrieve2(lf[295],C_text("chicken.posix#process-exit-status")));
t17=C_mutate((C_word*)lf[126]+1 /* (set! chicken.process#process-returned-normally? ...) */,C_retrieve2(lf[291],C_text("chicken.posix#process-returned-normally?")));
t18=C_mutate((C_word*)lf[127]+1 /* (set! chicken.process#process-input-port ...) */,C_retrieve2(lf[292],C_text("chicken.posix#process-input-port")));
t19=C_mutate((C_word*)lf[128]+1 /* (set! chicken.process#process-output-port ...) */,C_retrieve2(lf[293],C_text("chicken.posix#process-output-port")));
t20=C_mutate((C_word*)lf[129]+1 /* (set! chicken.process#process-error-port ...) */,C_retrieve2(lf[294],C_text("chicken.posix#process-error-port")));
t21=C_mutate((C_word*)lf[123]+1 /* (set! chicken.process#process-sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4527,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[111]+1 /* (set! chicken.process#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4533,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate(&lf[301] /* (set! chicken.posix#list->c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4669,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate(&lf[303] /* (set! chicken.posix#free-c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4786,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate(&lf[312] /* (set! chicken.posix#check-environment-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4820,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4867,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
t27=C_mutate(&lf[313] /* (set! chicken.posix#call-with-exec-args ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4869,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=t26,a[8]=((C_word)li84),tmp=(C_word)a,a+=9,tmp));
t28=C_set_block_item(lf[131] /* chicken.process#pipe/buf */,0,C_fix((C_word)PIPE_BUF));
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5023,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
t30=C_mutate((C_word*)lf[117]+1 /* (set! chicken.process#open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5042,a[2]=t29,a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp));
t31=C_mutate((C_word*)lf[118]+1 /* (set! chicken.process#open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5082,a[2]=t29,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp));
t32=C_mutate((C_word*)lf[114]+1 /* (set! chicken.process#close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5122,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[115]+1 /* (set! chicken.process#close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5137,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[119]+1 /* (set! chicken.process#with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5152,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[113]+1 /* (set! chicken.process#call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5186,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[112]+1 /* (set! chicken.process#call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5210,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[120]+1 /* (set! chicken.process#with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5234,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[331]+1 /* (set! ##sys#file-nonblocking! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5268,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[332]+1 /* (set! ##sys#file-select-one ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5275,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t40=C_set_block_item(lf[6] /* chicken.file.posix#fcntl/dupfd */,0,C_fix((C_word)F_DUPFD));
t41=C_set_block_item(lf[7] /* chicken.file.posix#fcntl/getfd */,0,C_fix((C_word)F_GETFD));
t42=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/setfd */,0,C_fix((C_word)F_SETFD));
t43=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/getfl */,0,C_fix((C_word)F_GETFL));
t44=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/setfl */,0,C_fix((C_word)F_SETFL));
t45=C_set_block_item(lf[48] /* chicken.file.posix#open/nonblock */,0,C_fix((C_word)O_NONBLOCK));
t46=C_set_block_item(lf[46] /* chicken.file.posix#open/noctty */,0,C_fix((C_word)O_NOCTTY));
t47=C_set_block_item(lf[45] /* chicken.file.posix#open/fsync */,0,C_fix((C_word)O_FSYNC));
t48=C_set_block_item(lf[52] /* chicken.file.posix#open/sync */,0,C_fix((C_word)O_SYNC));
t49=C_set_block_item(lf[47] /* chicken.file.posix#open/noinherit */,0,C_fix(0));
t50=C_set_block_item(lf[132] /* chicken.process#spawn/overlay */,0,C_fix(0));
t51=C_set_block_item(lf[133] /* chicken.process#spawn/wait */,0,C_fix(0));
t52=C_set_block_item(lf[134] /* chicken.process#spawn/nowait */,0,C_fix(0));
t53=C_set_block_item(lf[135] /* chicken.process#spawn/nowaito */,0,C_fix(0));
t54=C_set_block_item(lf[136] /* chicken.process#spawn/detach */,0,C_fix(0));
t55=C_set_block_item(lf[65] /* chicken.file.posix#perm/isvtx */,0,C_fix((C_word)S_ISVTX));
t56=C_set_block_item(lf[64] /* chicken.file.posix#perm/isuid */,0,C_fix((C_word)S_ISUID));
t57=C_set_block_item(lf[63] /* chicken.file.posix#perm/isgid */,0,C_fix((C_word)S_ISGID));
t58=C_mutate((C_word*)lf[12]+1 /* (set! chicken.file.posix#file-control ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5315,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t59=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va9689,a[2]=((C_word*)t0)[2],a[3]=((C_word)li232),tmp=(C_word)a,a+=4,tmp);
t60=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va9691,a[2]=t59,a[3]=((C_word)li233),tmp=(C_word)a,a+=4,tmp);
t61=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va9693,a[2]=t60,a[3]=((C_word)li234),tmp=(C_word)a,a+=4,tmp);
t62=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va9695,a[2]=t61,a[3]=((C_word)li235),tmp=(C_word)a,a+=4,tmp);
t63=t62;
va9695(t63,C_s_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRUSR),C_fix((C_word)S_IWUSR)));}

/* chicken.process.signal#make-signal-handler in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4241,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4245,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:652: ##sys#make-event-queue */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[284]);
C_word *av2=av;
av2[0]=*((C_word*)lf[284]+1);
av2[1]=t3;
tp(2,av2);}}

/* k4243 in chicken.process.signal#make-signal-handler in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4245(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4245,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4246,a[2]=t1,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4262,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4284,a[2]=t5,a[3]=t2,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4284(t7,t3,((C_word*)t0)[3]);}

/* g1034 in k4243 in chicken.process.signal#make-signal-handler in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4246(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_4246,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_check_fixnum_2(t2,lf[280]);
t4=C_establish_signal_handler(t2,t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4255,a[2]=((C_word*)t0)[2],a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_vector_set(C_fast_retrieve(lf[279]),t2,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a4254 in g1034 in k4243 in chicken.process.signal#make-signal-handler in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4255,c,av);}
/* posix-common.scm:658: ##sys#add-event-to-queue! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[281]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[281]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
tp(4,av2);}}

/* k4260 in k4243 in chicken.process.signal#make-signal-handler in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4262,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4263,a[2]=((C_word*)t0)[3],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4263 in k4260 in k4243 in chicken.process.signal#make-signal-handler in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4263,c,av);}
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:663: ##sys#get-next-event */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[282]);
C_word av2[3];
av2[0]=*((C_word*)lf[282]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_get_rest_arg(c,2,av,2,t0))){
/* posix-common.scm:662: ##sys#wait-for-next-event */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[283]);
C_word av2[3];
av2[0]=*((C_word*)lf[283]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
/* posix-common.scm:663: ##sys#get-next-event */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[282]);
C_word av2[3];
av2[0]=*((C_word*)lf[282]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* for-each-loop1033 in k4243 in chicken.process.signal#make-signal-handler in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4284(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4284,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4294,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:653: g1034 */
t4=((C_word*)t0)[3];
f_4246(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4292 in for-each-loop1033 in k4243 in chicken.process.signal#make-signal-handler in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4294,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4284(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.process.signal#signal-ignore in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4307,c,av);}
t3=C_i_check_fixnum_2(t2,lf[285]);
t4=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_vector_set(C_fast_retrieve(lf[279]),t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.process.signal#signal-default in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4316,c,av);}
t3=C_i_check_fixnum_2(t2,lf[286]);
t4=C_establish_signal_handler(t2,C_SCHEME_TRUE);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_vector_set(C_fast_retrieve(lf[279]),t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.posix#process? in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4333,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[289]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.posix#process-id in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4348,c,av);}
t3=C_i_check_structure(t2,lf[289]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.posix#process-returned-normally? in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4366,c,av);}
t3=C_i_check_structure(t2,lf[289]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(2));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.posix#process-input-port in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4384,c,av);}
t3=C_i_check_structure(t2,lf[289]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.posix#process-output-port in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4402,c,av);}
t3=C_i_check_structure(t2,lf[289]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(4));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.posix#process-error-port in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4420,c,av);}
t3=C_i_check_structure(t2,lf[289]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(5));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.posix#process-exit-status in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4438,c,av);}
t3=C_i_check_structure(t2,lf[289]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(6));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* rec in k4604 in a4583 in k4568 in k4550 in chicken.process#process-wait in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static C_word f_4495(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_END_OF_LIST);}
else{
t2=C_i_caar(t1);
t3=C_eqp(((C_word*)t0)[2],t2);
if(C_truep(t3)){
return(C_u_i_cdr(t1));}
else{
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}}}

/* chicken.process#process-sleep in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4527,c,av);}
t3=C_i_check_fixnum_2(t2,lf[296]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_process_sleep(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.process#process-wait in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4533(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4533,c,av);}
a=C_alloc(7);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_rest_nullp(c,2);
t7=C_rest_nullp(c,3);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,2,t0));
t9=C_rest_nullp(c,3);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4552,a[2]=t8,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=((C_word*)t5)[1];
if(C_truep(C_i_structurep(t11,lf[289]))){
t12=((C_word*)t5)[1];
t13=C_i_check_structure(t12,lf[289]);
t14=t10;
f_4552(t14,C_i_block_ref(t12,C_fix(6)));}
else{
t12=t10;
f_4552(t12,C_SCHEME_FALSE);}}

/* k4550 in chicken.process#process-wait in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4552(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4552,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[3])[1];
t3=C_i_check_structure(t2,lf[289]);
t4=C_i_block_ref(t2,C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
t6=C_i_check_structure(t5,lf[289]);
t7=C_i_block_ref(t5,C_fix(2));
t8=((C_word*)((C_word*)t0)[3])[1];
t9=C_i_check_structure(t8,lf[289]);
/* posix-common.scm:719: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=t7;
av2[4]=C_i_block_ref(t8,C_fix(6));
C_values(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4570,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_a_i_list(&a,1,C_fix(-1));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
if(C_truep(C_fixnump(t3))){
t7=t2;
f_4570(t7,t3);}
else{
if(C_truep(C_i_structurep(t3,lf[289]))){
t7=C_SCHEME_UNDEFINED;
t8=t2;
f_4570(t8,C_i_block_ref(t3,C_fix(1)));}
else{
t7=t2;
f_4570(t7,t6);}}}}

/* k4568 in k4550 in chicken.process#process-wait in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4570(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_4570,2,t0,t1);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_i_check_fixnum_2(t1,lf[297]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4578,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4584,a[2]=t1,a[3]=((C_word*)t2)[3],a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:724: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t2)[4];
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a4577 in k4568 in k4550 in chicken.process#process-wait in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4578,c,av);}
/* posix-common.scm:724: process-wait-impl */
f_7763(t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a4583 in k4568 in k4550 in chicken.process#process-wait in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4584(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_4584,c,av);}
a=C_alloc(7);
switch(t2){
case C_fix(-1):
/* posix-common.scm:727: posix-error */
t5=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[90];
av2[3]=lf[297];
av2[4]=lf[299];
av2[5]=((C_word*)t0)[2];
f_3259(6,av2);}
case C_fix(0):
/* posix-common.scm:730: scheme#values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix(0);
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}
default:
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4606,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t6=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(C_i_structurep(t6,lf[289]))){
t7=t5;
f_4606(t7,C_SCHEME_UNDEFINED);}
else{
t7=C_i_assq(t2,C_retrieve2(lf[287],C_text("chicken.posix#children")));
if(C_truep(t7)){
t8=C_i_cdr(t7);
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t8);
t10=t5;
f_4606(t10,t9);}
else{
t8=C_SCHEME_UNDEFINED;
t9=t5;
f_4606(t9,t8);}}}}

/* k4604 in a4583 in k4568 in k4550 in chicken.process#process-wait in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4606(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_4606,2,t0,t1);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4495,a[2]=((C_word*)t0)[2],a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t3=(
  f_4495(t2,C_retrieve2(lf[287],C_text("chicken.posix#children")))
);
t4=C_mutate(&lf[287] /* (set! chicken.posix#children ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4612,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t6=((C_word*)((C_word*)t0)[6])[1];
if(C_truep(C_i_structurep(t6,lf[289]))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4621,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=((C_word*)((C_word*)t0)[6])[1];
t9=C_i_check_structure(t8,lf[289]);
/* posix-common.scm:682: ##sys#block-set! */
t10=*((C_word*)lf[300]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t7;
av2[2]=t8;
av2[3]=C_fix(2);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
/* posix-common.scm:740: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
C_values(5,av2);}}}

/* k4610 in k4604 in a4583 in k4568 in k4550 in chicken.process#process-wait in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4612,c,av);}
/* posix-common.scm:740: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
C_values(5,av2);}}

/* k4619 in k4604 in a4583 in k4568 in k4550 in chicken.process#process-wait in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4621,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_structure(t2,lf[289]);
/* posix-common.scm:682: ##sys#block-set! */
t4=*((C_word*)lf[300]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=C_fix(6);
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4669(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_4669,4,t1,t2,t3,t4);}
a=C_alloc(12);
t5=C_i_check_list_2(t2,t4);
t6=C_u_i_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4677,a[2]=t1,a[3]=t6,a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t8=C_a_i_fixnum_plus(&a,2,t6,C_fix(1));
/* posix-common.scm:749: chicken.memory#make-pointer-vector */
t9=C_fast_retrieve(lf[308]);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4677,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4685,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li68),tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:751: scheme#call-with-current-continuation */
t4=*((C_word*)lf[307]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4678 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4680,c,av);}
/* posix-common.scm:747: g1203 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4685,c,av);}
a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4691,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word)li67),tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:751: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[306]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a4690 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4691,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4697,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:751: k1200 */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4696 in a4690 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4697,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4701,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:753: free-c-string-buffer */
f_4786(t2,((C_word*)t0)[3]);}

/* k4699 in a4696 in a4690 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4701,c,av);}
/* posix-common.scm:753: chicken.condition#signal */
t2=C_fast_retrieve(lf[302]);{
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

/* a4705 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_4706,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li64),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4765,a[2]=((C_word*)t0)[7],a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4782,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp12826 */
t5=t2;
f_4708(t5,t4);}

/* tmp12826 in a4705 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4708(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_4708,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4712,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4714,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li63),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4714(t6,t2,((C_word*)t0)[6],C_fix(0));}

/* k4710 in tmp12826 in a4705 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4712,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop1208 in tmp12826 in a4705 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4714(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4714,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_nullp(t2);
t5=(C_truep(t4)?t4:C_eqp(t3,((C_word*)t0)[2]));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_i_car(t2);
t7=C_i_check_string_2(t6,((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4730,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4755,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:762: convert */
t10=((C_word*)t0)[6];{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=C_u_i_car(t2);
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}}

/* k4728 in doloop1208 in tmp12826 in a4705 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4730,c,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub2183(t2,t1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_4736(2,av2);}}
else{
/* posix-common.scm:764: chicken.base#error */
t5=*((C_word*)lf[100]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[305];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4734 in k4728 in doloop1208 in tmp12826 in a4705 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4736,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:765: chicken.memory#pointer-vector-set! */
t3=C_fast_retrieve(lf[304]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4737 in k4734 in k4728 in doloop1208 in tmp12826 in a4705 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4739,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4714(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k4753 in doloop1208 in tmp12826 in a4705 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4755,c,av);}
/* posix-common.scm:762: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* tmp22827 in a4705 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4765(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4765,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4771,a[2]=t2,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:751: k1200 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4770 in tmp22827 in a4705 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4771,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k4780 in a4705 in a4684 in k4675 in chicken.posix#list->c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4782,c,av);}
a=C_alloc(3);
/* tmp22827 */
t2=((C_word*)t0)[2];
f_4765(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* chicken.posix#free-c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4786(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4786,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4790,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:770: chicken.memory#pointer-vector-length */
t4=C_fast_retrieve(lf[311]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4788 in chicken.posix#free-c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4790,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4795,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4795(t5,((C_word*)t0)[3],C_fix(0));}

/* doloop1227 in k4788 in chicken.posix#free-c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4795(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4795,3,t0,t1,t2);}
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4805,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:773: chicken.memory#pointer-vector-ref */
t5=C_fast_retrieve(lf[310]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4803 in doloop1227 in k4788 in chicken.posix#free-c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4805,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4808,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* posix-common.scm:774: chicken.memory#free */
t3=C_fast_retrieve(lf[309]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
f_4795(t3,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}}

/* k4806 in k4803 in doloop1227 in k4788 in chicken.posix#free-c-string-buffer in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4808,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t2)[2])[1];
f_4795(t3,((C_word*)t2)[3],C_fixnum_plus(((C_word*)t2)[4],C_fix(1)));}

/* chicken.posix#check-environment-list in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4820(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4820,3,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_check_list_2(t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4825,a[2]=t3,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4844,a[2]=t5,a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  f_4844(t6,t2)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* g1240 in chicken.posix#check-environment-list in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static C_word f_4825(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_check_pair_2(t1,((C_word*)t0)[2]);
t3=C_i_check_string_2(C_u_i_car(t1),((C_word*)t0)[2]);
return(C_i_check_string_2(C_u_i_cdr(t1),((C_word*)t0)[2]));}

/* for-each-loop1239 in chicken.posix#check-environment-list in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static C_word f_4844(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* posix-common.scm:779: g1240 */
  f_4825(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* nop in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4867,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4869(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4869,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(6);
t8=C_mutate(((C_word *)t0)+3,t7);
t9=C_mutate(((C_word *)t0)+6,t6);
t10=C_mutate(((C_word *)t0)+4,t3);
t11=C_mutate(((C_word *)t0)+5,t2);
t12=C_mutate(((C_word *)t0)+2,t1);
t13=C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4876,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:790: list->c-string-buffer */
f_4669(t14,t13,t4,((C_word*)t0)[5]);}

/* k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4876(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4876,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4879,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4884,a[2]=t4,a[3]=t1,a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word)li83),tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:793: scheme#call-with-current-continuation */
t7=*((C_word*)lf[307]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k4877 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4879,c,av);}
/* posix-common.scm:789: g1273 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_4884,c,av);}
a=C_alloc(17);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4911,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word)li82),tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:793: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[306]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a4889 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4890,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4896,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li76),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:793: k1270 */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4895 in a4889 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4896,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4900,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:795: free-c-string-buffer */
f_4786(t2,((C_word*)t0)[4]);}

/* k4898 in a4895 in a4889 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4900,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* posix-common.scm:796: free-c-string-buffer */
f_4786(t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* posix-common.scm:797: chicken.condition#signal */
t3=C_fast_retrieve(lf[302]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4901 in k4898 in a4895 in a4889 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4903,c,av);}
/* posix-common.scm:797: chicken.condition#signal */
t2=C_fast_retrieve(lf[302]);{
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

/* a4910 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4911,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li79),tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4992,a[2]=((C_word*)t0)[9],a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:793: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a4916 in a4910 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4917,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4921,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4931,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:801: check-environment-list */
f_4820(t3,((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t3=t2;
f_4921(t3,C_SCHEME_UNDEFINED);}}

/* k4919 in a4916 in a4910 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4921(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4921,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:807: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word av2[4];
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}

/* k4926 in k4919 in a4916 in a4910 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4928,c,av);}
/* posix-common.scm:807: proc */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)((C_word*)t0)[5])[1];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k4929 in a4916 in a4910 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4931(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_4931,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[314]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4956,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4958,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4958(t12,t8,((C_word*)t0)[4]);}

/* k4933 in k4929 in a4916 in a4910 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4935(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4935,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4921(t3,t2);}

/* k4954 in k4929 in a4916 in a4910 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4956,c,av);}
/* posix-common.scm:803: list->c-string-buffer */
f_4669(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* map-loop1281 in k4929 in a4916 in a4910 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_4958(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4958,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* posix-common.scm:804: scheme#string-append */
t5=*((C_word*)lf[103]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_i_car(t4);
av2[3]=lf[315];
av2[4]=C_u_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4981 in map-loop1281 in k4929 in a4916 in a4910 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4983,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4958(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a4991 in a4910 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4992,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4998,a[2]=t2,a[3]=((C_word)li80),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:793: k1270 */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4997 in a4991 in a4910 in a4883 in k4874 in chicken.posix#call-with-exec-args in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_4998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4998,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* check in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void f_5023(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_5023,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:819: posix-error */
t6=lf[192];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[197];
av2[3]=t2;
av2[4]=lf[316];
av2[5]=t3;
f_3259(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5036,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* posix-common.scm:820: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[248]);
C_word av2[6];
av2[0]=*((C_word*)lf[248]+1);
av2[1]=t6;
av2[2]=C_fix(1);
av2[3]=C_fast_retrieve(lf[249]);
av2[4]=lf[317];
av2[5]=lf[239];
tp(6,av2);}}
else{
/* posix-common.scm:820: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[248]);
C_word av2[6];
av2[0]=*((C_word*)lf[248]+1);
av2[1]=t6;
av2[2]=C_fix(2);
av2[3]=C_fast_retrieve(lf[249]);
av2[4]=lf[317];
av2[5]=lf[239];
tp(6,av2);}}}}

/* k5034 in check in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5036,c,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.process#open-input-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_5042,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+10);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_i_check_string_2(t2,lf[318]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[319]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5056,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[319]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5063,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:831: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[318];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[320]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5073,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:832: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[318];
tp(4,av2);}}
else{
/* posix-common.scm:816: ##sys#error */
t10=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[321];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k5054 in chicken.process#open-input-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5056,c,av);}
/* posix-common.scm:827: check */
f_5023(((C_word*)t0)[3],lf[318],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* k5061 in chicken.process#open-input-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_5063,c,av);}
a=C_alloc(2);
t2=open_text_input_pipe(&a,1,t1);
/* posix-common.scm:827: check */
f_5023(((C_word*)t0)[3],lf[318],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k5071 in chicken.process#open-input-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_5073,c,av);}
a=C_alloc(2);
t2=open_binary_input_pipe(&a,1,t1);
/* posix-common.scm:827: check */
f_5023(((C_word*)t0)[3],lf[318],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* chicken.process#open-output-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_5082,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+10);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_i_check_string_2(t2,lf[322]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[319]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5096,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[319]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5103,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:842: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[322];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[320]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5113,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:843: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[322];
tp(4,av2);}}
else{
/* posix-common.scm:816: ##sys#error */
t10=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[321];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k5094 in chicken.process#open-output-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5096,c,av);}
/* posix-common.scm:838: check */
f_5023(((C_word*)t0)[3],lf[322],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* k5101 in chicken.process#open-output-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_5103,c,av);}
a=C_alloc(2);
t2=open_text_output_pipe(&a,1,t1);
/* posix-common.scm:838: check */
f_5023(((C_word*)t0)[3],lf[322],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k5111 in chicken.process#open-output-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_5113,c,av);}
a=C_alloc(2);
t2=open_binary_output_pipe(&a,1,t1);
/* posix-common.scm:838: check */
f_5023(((C_word*)t0)[3],lf[322],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* chicken.process#close-input-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5122(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5122,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(1),C_SCHEME_TRUE,lf[323]);
t4=close_pipe(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5129,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
/* posix-common.scm:850: posix-error */
t7=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[197];
av2[3]=lf[323];
av2[4]=lf[324];
av2[5]=t2;
f_3259(6,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5127 in chicken.process#close-input-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5129,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#close-output-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5137(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5137,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(2),C_SCHEME_TRUE,lf[325]);
t4=close_pipe(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5144,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
/* posix-common.scm:857: posix-error */
t7=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[197];
av2[3]=lf[325];
av2[4]=lf[326];
av2[5]=t2;
f_3259(6,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5142 in chicken.process#close-output-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5144,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#with-input-from-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_5152,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5156,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[117]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k5154 in chicken.process#with-input-from-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5156(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_5156,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5161,a[2]=t5,a[3]=t3,a[4]=((C_word)li90),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5166,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li92),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5181,a[2]=t3,a[3]=t5,a[4]=((C_word)li93),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:863: ##sys#dynamic-wind */
t9=*((C_word*)lf[329]+1);{
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

/* a5160 in k5154 in chicken.process#with-input-from-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5161,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[327]+1));
t3=C_mutate((C_word*)lf[327]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a5165 in k5154 in chicken.process#with-input-from-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5166,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[2],a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:864: scheme#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
C_call_with_values(4,av2);}}

/* a5171 in a5165 in k5154 in chicken.process#with-input-from-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_5172,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5176,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:866: chicken.process#close-input-pipe */
t4=*((C_word*)lf[114]+1);{
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

/* k5174 in a5171 in a5165 in k5154 in chicken.process#with-input-from-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5176,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[328]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a5180 in k5154 in chicken.process#with-input-from-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5181,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[327]+1));
t3=C_mutate((C_word*)lf[327]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.process#call-with-output-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_5186,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5190,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[118]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k5188 in chicken.process#call-with-output-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5190,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5195,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5201,a[2]=t1,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:872: scheme#call-with-values */{
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

/* a5194 in k5188 in chicken.process#call-with-output-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5195,c,av);}
/* posix-common.scm:873: proc */
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

/* a5200 in k5188 in chicken.process#call-with-output-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_5201,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5205,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:875: chicken.process#close-output-pipe */
t4=*((C_word*)lf[115]+1);{
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

/* k5203 in a5200 in k5188 in chicken.process#call-with-output-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5205,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[328]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#call-with-input-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_5210,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5214,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[117]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k5212 in chicken.process#call-with-input-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5214,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5219,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5225,a[2]=t1,a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:881: scheme#call-with-values */{
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

/* a5218 in k5212 in chicken.process#call-with-input-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5219,c,av);}
/* posix-common.scm:882: proc */
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

/* a5224 in k5212 in chicken.process#call-with-input-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_5225,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5229,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:884: chicken.process#close-input-pipe */
t4=*((C_word*)lf[114]+1);{
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

/* k5227 in a5224 in k5212 in chicken.process#call-with-input-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5229,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[328]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#with-output-to-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_5234,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5238,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[118]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k5236 in chicken.process#with-output-to-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
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
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_5238,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5243,a[2]=t5,a[3]=t3,a[4]=((C_word)li101),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5248,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5263,a[2]=t3,a[3]=t5,a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:890: ##sys#dynamic-wind */
t9=*((C_word*)lf[329]+1);{
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

/* a5242 in k5236 in chicken.process#with-output-to-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5243,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[330]+1));
t3=C_mutate((C_word*)lf[330]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a5247 in k5236 in chicken.process#with-output-to-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_5248,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5254,a[2]=((C_word*)t0)[2],a[3]=((C_word)li102),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:891: scheme#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
C_call_with_values(4,av2);}}

/* a5253 in a5247 in k5236 in chicken.process#with-output-to-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_5254,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5258,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:893: chicken.process#close-output-pipe */
t4=*((C_word*)lf[115]+1);{
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

/* k5256 in a5253 in a5247 in k5236 in chicken.process#with-output-to-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5258,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[328]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a5262 in k5236 in chicken.process#with-output-to-pipe in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5263,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[330]+1));
t3=C_mutate((C_word*)lf[330]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#file-nonblocking! in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5268,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub1497(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#file-select-one in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5275,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub1502(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.file.posix#file-control in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_5315(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5315,c,av);}
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_fix(0):C_get_rest_arg(c,4,av,4,t0));
t6=C_i_check_fixnum_2(t2,lf[333]);
t7=C_i_check_fixnum_2(t3,lf[333]);
t8=C_i_foreign_fixnum_argumentp(t2);
t9=C_i_foreign_fixnum_argumentp(t3);
t10=C_fix((C_word)sizeof(long) * CHAR_BIT);
t11=C_i_foreign_ranged_integer_argumentp(t5,t10);
t12=stub1509(C_SCHEME_UNDEFINED,t8,t9,t11);
t13=C_eqp(t12,C_fix(-1));
if(C_truep(t13)){
/* posixunix.scm:342: posix-error */
t14=lf[192];{
C_word av2[7];
av2[0]=t14;
av2[1]=t1;
av2[2]=lf[197];
av2[3]=lf[333];
av2[4]=lf[334];
av2[5]=t2;
av2[6]=t3;
f_3259(7,av2);}}
else{
t14=t1;{
C_word *av2=av;
av2[0]=t14;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}}

/* chicken.file.posix#file-open */
static void C_ccall f_5348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_5348,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_get_rest_arg(c,4,av,4,t0):((C_word*)t0)[2]);
t7=C_i_check_string_2(t2,lf[335]);
t8=C_i_check_fixnum_2(t3,lf[335]);
t9=C_i_check_fixnum_2(t6,lf[335]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5365,a[2]=t3,a[3]=t6,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:352: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2=av;
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[335];
tp(4,av2);}}

/* k5363 in chicken.file.posix#file-open */
static void C_ccall f_5365(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_5365,c,av);}
a=C_alloc(4);
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5368,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm:354: posix-error */
t5=lf[192];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[197];
av2[3]=lf[335];
av2[4]=lf[336];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[2];
av2[7]=((C_word*)t0)[3];
f_3259(8,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5366 in k5363 in chicken.file.posix#file-open */
static void C_ccall f_5368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5368,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-close */
static void C_ccall f_5380(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5380,c,av);}
a=C_alloc(7);
t3=C_i_check_fixnum_2(t2,lf[337]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5389,a[2]=t2,a[3]=t5,a[4]=((C_word)li110),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
f_5389(2,av2);}}

/* loop in chicken.file.posix#file-close */
static void C_ccall f_5389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5389,c,av);}
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[2]),C_fix(0)))){
t2=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t2)){
/* posixunix.scm:363: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[338]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[338]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
tp(3,av2);}}
else{
/* posixunix.scm:365: posix-error */
t3=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[197];
av2[3]=lf[337];
av2[4]=lf[339];
av2[5]=((C_word*)t0)[2];
f_3259(6,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.file.posix#file-read */
static void C_ccall f_5411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_5411,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t5=C_i_check_fixnum_2(t2,lf[340]);
t6=C_i_check_fixnum_2(t3,lf[340]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5421,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_get_rest_arg(c,4,av,4,t0);
f_5421(2,av2);}}
else{
/* posixunix.scm:371: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[274]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[274]+1);
av2[1]=t7;
av2[2]=t3;
tp(3,av2);}}}

/* k5419 in chicken.file.posix#file-read */
static void C_ccall f_5421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5421,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5424,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_5424(2,av2);}}
else{
/* posixunix.scm:373: ##sys#signal-hook */
t4=*((C_word*)lf[200]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[201];
av2[3]=lf[340];
av2[4]=lf[342];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* k5422 in k5419 in chicken.file.posix#file-read */
static void C_ccall f_5424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,6)))){
C_save_and_reclaim((void *)f_5424,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=C_read(((C_word*)t2)[2],((C_word*)t2)[3],((C_word*)t2)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5427,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(C_fix(-1),t3);
if(C_truep(t5)){
/* posixunix.scm:376: posix-error */
t6=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=lf[197];
av2[3]=lf[340];
av2[4]=lf[341];
av2[5]=((C_word*)t2)[2];
av2[6]=((C_word*)t2)[4];
f_3259(7,av2);}}
else{
t6=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,((C_word*)t2)[3],t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k5425 in k5422 in k5419 in chicken.file.posix#file-read */
static void C_ccall f_5427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_5427,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-write */
static void C_ccall f_5448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,5)))){
C_save_and_reclaim((void*)f_5448,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=C_i_check_fixnum_2(t2,lf[343]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5455,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_byteblockp(t3))){
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_5455(2,av2);}}
else{
/* posixunix.scm:383: ##sys#signal-hook */
t7=*((C_word*)lf[200]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[201];
av2[3]=lf[343];
av2[4]=lf[345];
av2[5]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}}

/* k5453 in chicken.file.posix#file-write */
static void C_ccall f_5455(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_5455,c,av);}
a=C_alloc(4);
t2=C_i_pairp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_u_i_car(((C_word*)t0)[2]):C_block_size(((C_word*)t0)[3]));
t4=C_i_check_fixnum_2(t3,lf[343]);
t5=C_write(((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5464,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posixunix.scm:388: posix-error */
t8=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=lf[197];
av2[3]=lf[343];
av2[4]=lf[344];
av2[5]=((C_word*)t0)[4];
av2[6]=t3;
f_3259(7,av2);}}
else{
t8=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5462 in k5453 in chicken.file.posix#file-write */
static void C_ccall f_5464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5464,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-mkstemp */
static void C_ccall f_5482(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5482,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[346]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5489,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:394: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[346];
tp(4,av2);}}

/* k5487 in chicken.file.posix#file-mkstemp */
static void C_ccall f_5489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_5489,c,av);}
a=C_alloc(6);
t2=C_mkstemp(t1);
t3=C_i_string_length(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5495,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
/* posixunix.scm:398: posix-error */
t6=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=lf[197];
av2[3]=lf[346];
av2[4]=lf[347];
av2[5]=((C_word*)t0)[3];
f_3259(6,av2);}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_5495(2,av2);}}}

/* k5493 in k5487 in chicken.file.posix#file-mkstemp */
static void C_ccall f_5495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5495,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:399: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[269]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[269]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
tp(5,av2);}}

/* k5500 in k5493 in k5487 in chicken.file.posix#file-mkstemp */
static void C_ccall f_5502(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5502,c,av);}
/* posixunix.scm:399: scheme#values */{
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

/* chicken.file.posix#file-select */
static void C_ccall f_5514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +13,c,2)))){
C_save_and_reclaim((void*)f_5514,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+13);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_get_rest_arg(c,4,av,4,t0):C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5521,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=t1,a[7]=t2,a[8]=t3,a[9]=t6,tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_not(t2))){
t8=t7;
f_5521(t8,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnump(t2))){
t8=t7;
f_5521(t8,C_a_i_list1(&a,1,t2));}
else{
t8=C_i_check_list_2(t2,lf[348]);
t9=t7;
f_5521(t9,t2);}}}

/* k5519 in chicken.file.posix#file-select */
static void f_5521(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5521,2,t0,t1);}
a=C_alloc(6);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5524,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_not(((C_word*)t0)[8]))){
t4=t3;
f_5524(t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[8]))){
t4=t3;
f_5524(t4,C_a_i_list1(&a,1,((C_word*)t0)[8]));}
else{
t4=C_i_check_list_2(((C_word*)t0)[8],lf[348]);
t5=t3;
f_5524(t5,((C_word*)t0)[8]);}}}

/* k5522 in k5519 in chicken.file.posix#file-select */
static void f_5524(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5524,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=C_u_i_length(((C_word*)t2)[2]);
t5=C_mutate(((C_word *)t2)+3,t4);
t6=C_u_i_length(((C_word*)t2)[4]);
t7=C_fixnum_plus(((C_word*)t2)[3],t6);
t8=C_mutate(((C_word *)t2)+5,t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5532,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_fix((C_word)sizeof(struct pollfd));
/* posixunix.scm:418: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[274]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[274]+1);
av2[1]=t9;
av2[2]=C_fixnum_times(((C_word*)t2)[5],t10);
tp(3,av2);}}

/* k5530 in k5522 in k5519 in chicken.file.posix#file-select */
static void C_ccall f_5532(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_5532,c,av);}
a=C_alloc(24);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5812,a[2]=t1,a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp);
t4=(
  f_5812(t3,C_fix(0),((C_word*)t2)[2])
);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5770,a[2]=t1,a[3]=((C_word)li116),tmp=(C_word)a,a+=4,tmp);
t6=(
  f_5770(t5,((C_word*)t2)[3],((C_word*)t2)[4])
);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5753,a[2]=t1,a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[6],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[3],a[8]=((C_word*)t2)[4],a[9]=((C_word*)t2)[2],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t2)[9])){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5760,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5768,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:433: scheme#max */
t10=*((C_word*)lf[353]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=C_fix(0);
av2[3]=((C_word*)t2)[9];
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}
else{
t8=t7;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_fix(-1);
f_5753(2,av2);}}}

/* k5591 in k5751 in k5530 in k5522 in k5519 in chicken.file.posix#file-select */
static void C_ccall f_5593(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5593,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5633,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word)li117),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5633(t6,t2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);}

/* k5594 in k5591 in k5751 in k5530 in k5522 in k5519 in chicken.file.posix#file-select */
static void C_ccall f_5596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5596,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5603,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(C_fixnump(((C_word*)t0)[4]))){
t3=C_i_memq(((C_word*)t0)[4],((C_word*)t0)[5]);
t4=t2;
f_5603(t4,(C_truep(t3)?((C_word*)t0)[4]:C_SCHEME_FALSE));}
else{
t3=t2;
f_5603(t3,((C_word*)t0)[5]);}}
else{
t3=t2;
f_5603(t3,C_SCHEME_FALSE);}}

/* k5601 in k5594 in k5591 in k5751 in k5530 in k5522 in k5519 in chicken.file.posix#file-select */
static void f_5603(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_5603,2,t0,t1);}
if(C_truep(((C_word*)t0)[2])){
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
if(C_truep(C_i_memq(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* posixunix.scm:454: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=((C_word*)t0)[2];
C_values(4,av2);}}
else{
/* posixunix.scm:454: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
/* posixunix.scm:454: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
C_values(4,av2);}}}
else{
/* posixunix.scm:454: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* lp in k5591 in k5751 in k5530 in k5522 in k5519 in chicken.file.posix#file-select */
static void f_5633(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_5633,5,t0,t1,t2,t3,t4);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t4))){
/* posixunix.scm:447: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[350]);
C_word av2[3];
av2[0]=*((C_word*)lf[350]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(((C_word*)t0)[2])?stub1679(C_SCHEME_UNDEFINED,t5,C_i_foreign_block_argumentp(((C_word*)t0)[2])):stub1679(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE));
if(C_truep(t6)){
t7=C_fixnum_plus(t2,C_fix(1));
t8=C_i_car(t4);
t9=C_a_i_cons(&a,2,t8,t3);
/* posixunix.scm:452: lp */
t11=t1;
t12=t7;
t13=t9;
t14=C_u_i_cdr(t4);
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}
else{
/* posixunix.scm:453: lp */
t11=t1;
t12=C_fixnum_plus(t2,C_fix(1));
t13=t3;
t14=C_i_cdr(t4);
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}}

/* lp in k5751 in k5530 in k5522 in k5519 in chicken.file.posix#file-select */
static void f_5692(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_5692,5,t0,t1,t2,t3,t4);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t4))){
/* posixunix.scm:439: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[350]);
C_word av2[3];
av2[0]=*((C_word*)lf[350]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}
else{
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(((C_word*)t0)[2])?stub1660(C_SCHEME_UNDEFINED,t5,C_i_foreign_block_argumentp(((C_word*)t0)[2])):stub1660(C_SCHEME_UNDEFINED,t5,C_SCHEME_FALSE));
if(C_truep(t6)){
t7=C_fixnum_plus(t2,C_fix(1));
t8=C_i_car(t4);
t9=C_a_i_cons(&a,2,t8,t3);
/* posixunix.scm:444: lp */
t11=t1;
t12=t7;
t13=t9;
t14=C_u_i_cdr(t4);
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}
else{
/* posixunix.scm:445: lp */
t11=t1;
t12=C_fixnum_plus(t2,C_fix(1));
t13=t3;
t14=C_i_cdr(t4);
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}}

/* k5751 in k5530 in k5522 in k5519 in chicken.file.posix#file-select */
static void C_ccall f_5753(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,6)))){
C_save_and_reclaim((void *)f_5753,c,av);}
a=C_alloc(15);
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_block_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=C_i_foreign_fixnum_argumentp(t1);
t5=stub1635(C_SCHEME_UNDEFINED,t2,t3,t4);
if(C_truep(C_fixnum_lessp(t5,C_fix(0)))){
/* posixunix.scm:435: posix-error */
t6=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[197];
av2[3]=lf[348];
av2[4]=lf[349];
av2[5]=((C_word*)t0)[5];
av2[6]=((C_word*)t0)[6];
f_3259(7,av2);}}
else{
t6=C_eqp(t5,C_fix(0));
if(C_truep(t6)){
t7=C_i_pairp(((C_word*)t0)[5]);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_SCHEME_FALSE);
if(C_truep(C_i_pairp(((C_word*)t0)[6]))){
/* posixunix.scm:436: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t8;
av2[3]=C_SCHEME_END_OF_LIST;
C_values(4,av2);}}
else{
/* posixunix.scm:436: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5593,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5692,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word)li118),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5692(t11,t7,C_fix(0),C_SCHEME_END_OF_LIST,((C_word*)t0)[9]);}}}

/* k5758 in k5530 in k5522 in k5519 in chicken.file.posix#file-select */
static void C_ccall f_5760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5760,c,av);}
/* posixunix.scm:433: scheme#inexact->exact */
t2=*((C_word*)lf[351]+1);{
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

/* k5766 in k5530 in k5522 in k5519 in chicken.file.posix#file-select */
static void C_ccall f_5768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_5768,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,t1,C_fix(1000));
/* posixunix.scm:433: scheme#truncate */
t3=*((C_word*)lf[352]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* doloop1594 in k5530 in k5522 in k5519 in chicken.file.posix#file-select */
static C_word f_5770(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_i_car(t2);
t4=C_i_foreign_fixnum_argumentp(t1);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=(C_truep(((C_word*)t0)[2])?stub1620(C_SCHEME_UNDEFINED,t4,t5,C_i_foreign_block_argumentp(((C_word*)t0)[2])):stub1620(C_SCHEME_UNDEFINED,t4,t5,C_SCHEME_FALSE));
t8=C_fixnum_plus(t1,C_fix(1));
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}

/* doloop1593 in k5530 in k5522 in k5519 in chicken.file.posix#file-select */
static C_word f_5812(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_i_car(t2);
t4=C_i_foreign_fixnum_argumentp(t1);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=(C_truep(((C_word*)t0)[2])?stub1603(C_SCHEME_UNDEFINED,t4,t5,C_i_foreign_block_argumentp(((C_word*)t0)[2])):stub1603(C_SCHEME_UNDEFINED,t4,t5,C_SCHEME_FALSE));
t8=C_fixnum_plus(t1,C_fix(1));
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}

/* chicken.process#create-pipe */
static void C_ccall f_5893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5893,c,av);}
a=C_alloc(3);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5900,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_pipe(C_SCHEME_FALSE),C_fix(0)))){
/* posixunix.scm:467: posix-error */
t5=lf[192];{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[197];
av2[3]=lf[354];
av2[4]=lf[355];
f_3259(5,av2);}}
else{
/* posixunix.scm:468: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix((C_word)C_pipefds[ 0 ]);
av2[3]=C_fix((C_word)C_pipefds[ 1 ]);
C_values(4,av2);}}}

/* k5898 in chicken.process#create-pipe */
static void C_ccall f_5900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5900,c,av);}
/* posixunix.scm:468: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix((C_word)C_pipefds[ 0 ]);
av2[3]=C_fix((C_word)C_pipefds[ 1 ]);
C_values(4,av2);}}

/* chicken.process.signal#set-signal-mask! */
static void C_ccall f_5949(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5949,c,av);}
a=C_alloc(3);
t3=C_i_check_list_2(t2,lf[356]);
t4=C_sigemptyset(C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5973,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
t6=(
  f_5973(t2)
);
if(C_truep(C_fixnum_lessp(C_sigprocmask_set(C_fix(0)),C_fix(0)))){
/* posixunix.scm:568: posix-error */
t7=lf[192];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[90];
av2[3]=lf[356];
av2[4]=lf[357];
f_3259(5,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* for-each-loop1706 in chicken.process.signal#set-signal-mask! */
static C_word f_5973(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_fixnum_2(t2,lf[356]);
t4=C_sigaddset(t2);
t6=C_slot(t1,C_fix(1));
t1=t6;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k5996 */
static void C_ccall f_5998(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_5998,c,av);}
a=C_alloc(18);
t2=C_mutate((C_word*)lf[145]+1 /* (set! chicken.process.signal#signal-mask ...) */,t1);
t3=C_mutate((C_word*)lf[147]+1 /* (set! chicken.process.signal#signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6000,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[146]+1 /* (set! chicken.process.signal#signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6006,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[148]+1 /* (set! chicken.process.signal#signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6022,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6040,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8578,a[2]=((C_word)li228),tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8581,a[2]=((C_word)li229),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:609: chicken.base#getter-with-setter */
t9=*((C_word*)lf[496]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
av2[4]=lf[513];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* chicken.process.signal#signal-masked? in k5996 */
static void C_ccall f_6000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6000,c,av);}
t3=C_i_check_fixnum_2(t2,lf[358]);
t4=C_sigprocmask_get(C_fix(0));
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_sigismember(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.process.signal#signal-mask! in k5996 */
static void C_ccall f_6006(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6006,c,av);}
t3=C_i_check_fixnum_2(t2,lf[359]);
t4=C_sigemptyset(C_fix(0));
t5=C_sigaddset(t2);
if(C_truep(C_fixnum_lessp(C_sigprocmask_block(C_fix(0)),C_fix(0)))){
/* posixunix.scm:595: posix-error */
t6=lf[192];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[90];
av2[3]=lf[359];
av2[4]=lf[360];
f_3259(5,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* chicken.process.signal#signal-unmask! in k5996 */
static void C_ccall f_6022(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6022,c,av);}
t3=C_i_check_fixnum_2(t2,lf[361]);
t4=C_sigemptyset(C_fix(0));
t5=C_sigaddset(t2);
if(C_truep(C_fixnum_lessp(C_sigprocmask_unblock(C_fix(0)),C_fix(0)))){
/* posixunix.scm:603: posix-error */
t6=lf[192];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[90];
av2[3]=lf[361];
av2[4]=lf[362];
f_3259(5,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k6038 in k5996 */
static void C_ccall f_6040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6040,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[183]+1 /* (set! chicken.process-context.posix#current-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8555,a[2]=((C_word)li226),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8558,a[2]=((C_word)li227),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:619: chicken.base#getter-with-setter */
t6=*((C_word*)lf[496]+1);{
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
av2[4]=lf[509];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6042 in k6038 in k5996 */
static void C_ccall f_6044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6044,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[181]+1 /* (set! chicken.process-context.posix#current-effective-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6048,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8532,a[2]=((C_word)li224),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8535,a[2]=((C_word)li225),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:630: chicken.base#getter-with-setter */
t6=*((C_word*)lf[496]+1);{
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
av2[4]=lf[505];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_6048,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[182]+1 /* (set! chicken.process-context.posix#current-group-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6052,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8509,a[2]=((C_word)li222),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8512,a[2]=((C_word)li223),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:640: chicken.base#getter-with-setter */
t6=*((C_word*)lf[496]+1);{
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
av2[4]=lf[501];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6052(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,6)))){
C_save_and_reclaim((void *)f_6052,c,av);}
a=C_alloc(24);
t2=C_mutate((C_word*)lf[180]+1 /* (set! chicken.process-context.posix#current-effective-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[190]+1 /* (set! chicken.process-context.posix#user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6054,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[186]+1 /* (set! chicken.process-context.posix#current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6108,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[187]+1 /* (set! chicken.process-context.posix#current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6122,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[225] /* (set! chicken.posix#chown ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6136,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[188]+1 /* (set! chicken.process-context.posix#create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6183,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6201,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8467,a[2]=((C_word)li220),tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8486,a[2]=((C_word)li221),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:712: chicken.base#getter-with-setter */
t11=*((C_word*)lf[496]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
av2[4]=lf[497];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* chicken.process-context.posix#user-information in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6054(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6054,c,av);}
a=C_alloc(7);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6061,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t6=t5;
f_6061(t6,C_getpwuid(t2));}
else{
t6=C_i_check_string_2(t2,lf[366]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6100,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:664: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word av2[4];
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[366];
tp(4,av2);}}}

/* k6059 in chicken.process-context.posix#user-information in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_6061(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6061,2,t0,t1);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[2])?*((C_word*)lf[363]+1):*((C_word*)lf[364]+1));
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6074,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=8,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[365]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_user->pw_name);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k6072 in k6059 in chicken.process-context.posix#user-information in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6074,c,av);}
a=C_alloc(6);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6078,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[365]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_user->pw_passwd);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k6076 in k6072 in k6059 in chicken.process-context.posix#user-information in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6078,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6082,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t5=*((C_word*)lf[365]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_PW_GECOS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6080 in k6076 in k6072 in k6059 in chicken.process-context.posix#user-information in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6082,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+6,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6086,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_user->pw_dir);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6084 in k6080 in k6076 in k6072 in k6059 in chicken.process-context.posix#user-information in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6086,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6090,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_user->pw_shell);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6088 in k6084 in k6080 in k6076 in k6072 in k6059 in chicken.process-context.posix#user-information in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_6090,c,av);}
t2=((C_word*)t0)[2];
/* posixunix.scm:665: g1774 */
t3=((C_word*)t2)[2];{
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=((C_word*)t2)[4];
av2[3]=((C_word*)t2)[5];
av2[4]=C_fix((C_word)C_user->pw_uid);
av2[5]=C_fix((C_word)C_user->pw_gid);
av2[6]=((C_word*)t2)[6];
av2[7]=((C_word*)t2)[7];
av2[8]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(9,av2);}}

/* k6098 in chicken.process-context.posix#user-information in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6100,c,av);}
t2=((C_word*)t0)[2];
f_6061(t2,C_getpwnam(t1));}

/* chicken.process-context.posix#current-user-name in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6108,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6116,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6120,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:678: chicken.process-context.posix#current-user-id */
t4=*((C_word*)lf[183]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6114 in chicken.process-context.posix#current-user-name in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6116,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_car(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6118 in chicken.process-context.posix#current-user-name in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6120,c,av);}
/* posixunix.scm:677: chicken.process-context.posix#user-information */
t2=*((C_word*)lf[190]+1);{
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

/* chicken.process-context.posix#current-effective-user-name in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6122,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6130,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6134,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:683: chicken.process-context.posix#current-effective-user-id */
t4=*((C_word*)lf[181]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6128 in chicken.process-context.posix#current-effective-user-name in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6130,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_car(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6132 in chicken.process-context.posix#current-effective-user-name in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6134,c,av);}
/* posixunix.scm:682: chicken.process-context.posix#user-information */
t2=*((C_word*)lf[190]+1);{
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

/* chicken.posix#chown in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_6136(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_6136,5,t1,t2,t3,t4,t5);}
a=C_alloc(14);
t6=C_i_check_fixnum_2(t4,t2);
t7=C_i_check_fixnum_2(t5,t2);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6146,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6158,a[2]=t8,a[3]=t4,a[4]=t5,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:690: scheme#port? */
t10=C_fast_retrieve(lf[203]);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k6144 in chicken.posix#chown in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6146,c,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm:701: posix-error */
t2=lf[192];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[197];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[367];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[5];
av2[7]=((C_word*)t0)[6];
f_3259(8,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6156 in chicken.posix#chown in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_6158,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:691: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fchown(((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[4]);
f_6146(2,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:696: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}
else{
/* posixunix.scm:697: ##sys#signal-hook */
t2=*((C_word*)lf[200]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[201];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[368];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}}

/* k6160 in k6156 in chicken.posix#chown in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6162,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fchown(t1,((C_word*)t0)[3],((C_word*)t0)[4]);
f_6146(2,av2);}}

/* k6176 in k6156 in chicken.posix#chown in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6178,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_chown(t1,((C_word*)t0)[3],((C_word*)t0)[4]);
f_6146(2,av2);}}

/* chicken.process-context.posix#create-session in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6183,c,av);}
a=C_alloc(7);
t2=C_setsid(C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6187,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6197,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:707: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2=av;
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6185 in chicken.process-context.posix#create-session in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6187,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6195 in chicken.process-context.posix#create-session in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6197,c,av);}
/* posixunix.scm:707: ##sys#error/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[369]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[369]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[370];
av2[4]=lf[371];
tp(5,av2);}}

/* k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6201,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[189]+1 /* (set! chicken.process-context.posix#process-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[3]+1 /* (set! chicken.file.posix#create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6203,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6232,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:746: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[274]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[274]+1);
av2[1]=t4;
av2[2]=C_fixnum_plus(C_fix((C_word)FILENAME_MAX),C_fix(1));
av2[3]=C_fix(0);
tp(4,av2);}}

/* chicken.file.posix#create-symbolic-link in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6203(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6203,c,av);}
a=C_alloc(6);
t4=C_i_check_string_2(t2,lf[372]);
t5=C_i_check_string_2(t3,lf[372]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6224,a[2]=C_SCHEME_UNDEFINED,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:738: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2=av;
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=lf[372];
tp(4,av2);}}

/* k6222 in chicken.file.posix#create-symbolic-link in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6224,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6228,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:739: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[372];
tp(4,av2);}}

/* k6226 in k6222 in chicken.file.posix#create-symbolic-link in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6228,c,av);}
t2=((C_word*)t0)[2];
if(C_truep(C_fixnum_lessp(C_symlink(((C_word*)t2)[2],t1),C_fix(0)))){
/* posixunix.scm:741: posix-error */
t3=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=lf[197];
av2[3]=lf[372];
av2[4]=lf[373];
av2[5]=((C_word*)t2)[4];
av2[6]=((C_word*)t2)[5];
f_3259(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6232(C_word c,C_word *av){
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
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(137,c,10)))){
C_save_and_reclaim((void *)f_6232,c,av);}
a=C_alloc(137);
t2=C_mutate((C_word*)lf[374]+1 /* (set! ##sys#read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6233,a[2]=t1,a[3]=((C_word)li132),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! chicken.file.posix#read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6252,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[15]+1 /* (set! chicken.file.posix#file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6367,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[388]+1 /* (set! ##sys#custom-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6389,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[408]+1 /* (set! ##sys#custom-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6959,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[25]+1 /* (set! chicken.file.posix#file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7255,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7306,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp);
t9=C_mutate((C_word*)lf[16]+1 /* (set! chicken.file.posix#file-lock ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7321,a[2]=t8,a[3]=((C_word)li168),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[17]+1 /* (set! chicken.file.posix#file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7383,a[2]=t8,a[3]=((C_word)li170),tmp=(C_word)a,a+=4,tmp));
t11=C_mutate((C_word*)lf[26]+1 /* (set! chicken.file.posix#file-unlock ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7427,a[2]=t8,a[3]=((C_word)li172),tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[2]+1 /* (set! chicken.file.posix#create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7458,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t13=C_fix((C_word)sizeof(struct tm));
t14=C_mutate((C_word*)lf[83]+1 /* (set! chicken.time.posix#string->time ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7504,a[2]=t13,a[3]=((C_word)li174),tmp=(C_word)a,a+=4,tmp));
t15=C_fix((C_word)sizeof(struct tm));
t16=C_mutate((C_word*)lf[79]+1 /* (set! chicken.time.posix#utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7541,a[2]=t15,a[3]=((C_word)li175),tmp=(C_word)a,a+=4,tmp));
t17=C_mutate((C_word*)lf[85]+1 /* (set! chicken.time.posix#local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7560,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[138]+1 /* (set! chicken.process.signal#set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7567,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[107]+1 /* (set! chicken.process#process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7579,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[106]+1 /* (set! chicken.process#process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7685,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate(&lf[298] /* (set! chicken.posix#process-wait-impl ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7763,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[185]+1 /* (set! chicken.process-context.posix#parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7801,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[109]+1 /* (set! chicken.process#process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7804,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[108]+1 /* (set! chicken.process#process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7853,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7900,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7925,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7945,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp);
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7957,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp);
t29=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7986,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=t28,a[8]=C_SCHEME_UNDEFINED,a[9]=C_SCHEME_UNDEFINED,a[10]=C_SCHEME_UNDEFINED,a[11]=t26,a[12]=((C_word)li205),tmp=(C_word)a,a+=13,tmp);
t30=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8078,a[2]=t27,a[3]=((C_word)li206),tmp=(C_word)a,a+=4,tmp);
t31=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8089,a[2]=t27,a[3]=((C_word)li207),tmp=(C_word)a,a+=4,tmp);
t32=C_mutate(&lf[444] /* (set! chicken.posix#process-impl ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8100,a[2]=t29,a[3]=t30,a[4]=t25,a[5]=t31,a[6]=((C_word)li210),tmp=(C_word)a,a+=7,tmp));
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8162,a[2]=((C_word)li214),tmp=(C_word)a,a+=3,tmp);
t34=C_mutate((C_word*)lf[121]+1 /* (set! chicken.process#process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8227,a[2]=t33,a[3]=((C_word)li215),tmp=(C_word)a,a+=4,tmp));
t35=C_mutate((C_word*)lf[122]+1 /* (set! chicken.process#process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8305,a[2]=t33,a[3]=((C_word)li216),tmp=(C_word)a,a+=4,tmp));
t36=C_mutate((C_word*)lf[179]+1 /* (set! chicken.process-context.posix#set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8393,a[2]=((C_word)li217),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[110]+1 /* (set! chicken.process#process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8412,a[2]=((C_word)li218),tmp=(C_word)a,a+=3,tmp));
t38=C_a_i_provide(&a,1,lf[450]);
t39=C_mutate((C_word*)lf[451]+1 /* (set! chicken.errno#errno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8418,a[2]=((C_word)li219),tmp=(C_word)a,a+=3,tmp));
t40=C_set_block_item(lf[453] /* chicken.errno#errno/2big */,0,C_fix((C_word)E2BIG));
t41=C_set_block_item(lf[454] /* chicken.errno#errno/acces */,0,C_fix((C_word)EACCES));
t42=C_set_block_item(lf[455] /* chicken.errno#errno/again */,0,C_fix((C_word)EAGAIN));
t43=C_set_block_item(lf[456] /* chicken.errno#errno/badf */,0,C_fix((C_word)EBADF));
t44=C_set_block_item(lf[457] /* chicken.errno#errno/busy */,0,C_fix((C_word)EBUSY));
t45=C_set_block_item(lf[458] /* chicken.errno#errno/child */,0,C_fix((C_word)ECHILD));
t46=C_set_block_item(lf[459] /* chicken.errno#errno/deadlk */,0,C_fix((C_word)EDEADLK));
t47=C_set_block_item(lf[460] /* chicken.errno#errno/dom */,0,C_fix((C_word)EDOM));
t48=C_set_block_item(lf[461] /* chicken.errno#errno/exist */,0,C_fix((C_word)EEXIST));
t49=C_set_block_item(lf[462] /* chicken.errno#errno/fault */,0,C_fix((C_word)EFAULT));
t50=C_set_block_item(lf[463] /* chicken.errno#errno/fbig */,0,C_fix((C_word)EFBIG));
t51=C_set_block_item(lf[464] /* chicken.errno#errno/ilseq */,0,C_fix((C_word)EILSEQ));
t52=C_set_block_item(lf[465] /* chicken.errno#errno/intr */,0,C_fix((C_word)EINTR));
t53=C_set_block_item(lf[466] /* chicken.errno#errno/inval */,0,C_fix((C_word)EINVAL));
t54=C_set_block_item(lf[467] /* chicken.errno#errno/io */,0,C_fix((C_word)EIO));
t55=C_set_block_item(lf[468] /* chicken.errno#errno/isdir */,0,C_fix((C_word)EISDIR));
t56=C_set_block_item(lf[469] /* chicken.errno#errno/mfile */,0,C_fix((C_word)EMFILE));
t57=C_set_block_item(lf[470] /* chicken.errno#errno/mlink */,0,C_fix((C_word)EMLINK));
t58=C_set_block_item(lf[471] /* chicken.errno#errno/nametoolong */,0,C_fix((C_word)ENAMETOOLONG));
t59=C_set_block_item(lf[472] /* chicken.errno#errno/nfile */,0,C_fix((C_word)ENFILE));
t60=C_set_block_item(lf[473] /* chicken.errno#errno/nodev */,0,C_fix((C_word)ENODEV));
t61=C_set_block_item(lf[474] /* chicken.errno#errno/noent */,0,C_fix((C_word)ENOENT));
t62=C_set_block_item(lf[475] /* chicken.errno#errno/noexec */,0,C_fix((C_word)ENOEXEC));
t63=C_set_block_item(lf[476] /* chicken.errno#errno/nolck */,0,C_fix((C_word)ENOLCK));
t64=C_set_block_item(lf[477] /* chicken.errno#errno/nomem */,0,C_fix((C_word)ENOMEM));
t65=C_set_block_item(lf[478] /* chicken.errno#errno/nospc */,0,C_fix((C_word)ENOSPC));
t66=C_set_block_item(lf[479] /* chicken.errno#errno/nosys */,0,C_fix((C_word)ENOSYS));
t67=C_set_block_item(lf[480] /* chicken.errno#errno/notdir */,0,C_fix((C_word)ENOTDIR));
t68=C_set_block_item(lf[481] /* chicken.errno#errno/notempty */,0,C_fix((C_word)ENOTEMPTY));
t69=C_set_block_item(lf[482] /* chicken.errno#errno/notty */,0,C_fix((C_word)ENOTTY));
t70=C_set_block_item(lf[483] /* chicken.errno#errno/nxio */,0,C_fix((C_word)ENXIO));
t71=C_set_block_item(lf[484] /* chicken.errno#errno/perm */,0,C_fix((C_word)EPERM));
t72=C_set_block_item(lf[485] /* chicken.errno#errno/pipe */,0,C_fix((C_word)EPIPE));
t73=C_set_block_item(lf[486] /* chicken.errno#errno/range */,0,C_fix((C_word)ERANGE));
t74=C_set_block_item(lf[487] /* chicken.errno#errno/rofs */,0,C_fix((C_word)EROFS));
t75=C_set_block_item(lf[488] /* chicken.errno#errno/spipe */,0,C_fix((C_word)ESPIPE));
t76=C_set_block_item(lf[489] /* chicken.errno#errno/srch */,0,C_fix((C_word)ESRCH));
t77=C_set_block_item(lf[490] /* chicken.errno#errno/wouldblock */,0,C_fix((C_word)EWOULDBLOCK));
t78=C_set_block_item(lf[491] /* chicken.errno#errno/xdev */,0,C_fix((C_word)EXDEV));
t79=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t79;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t79+1)))(2,av2);}}

/* ##sys#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6233,c,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6238,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:750: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2=av;
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}

/* k6236 in ##sys#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6238,c,av);}
t2=C_do_readlink(t1,((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm:753: posix-error */
t3=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[197];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[375];
av2[5]=((C_word*)t0)[5];
f_3259(6,av2);}}
else{
/* posixunix.scm:754: ##sys#buffer->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[376]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[376]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}}

/* chicken.file.posix#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6252(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_6252,c,av);}
a=C_alloc(7);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_string_2(t2,lf[377]);
if(C_truep(t4)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6267,a[2]=t2,a[3]=((C_word)li133),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6273,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:760: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}
else{
/* posixunix.scm:775: ##sys#read-symbolic-link */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[374]);
C_word av2[4];
av2[0]=*((C_word*)lf[374]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[377];
tp(4,av2);}}}

/* a6266 in chicken.file.posix#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6267,c,av);}
/* posixunix.scm:760: chicken.pathname#decompose-directory */
t2=C_fast_retrieve(lf[378]);{
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

/* a6272 in chicken.file.posix#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6273(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6273,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6281,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_truep(t2)?t2:lf[383]);
if(C_truep(t3)){
/* posixunix.scm:762: scheme#string-append */
t7=*((C_word*)lf[103]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* posixunix.scm:762: scheme#string-append */
t7=*((C_word*)lf[103]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[384];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k6279 in a6272 in chicken.file.posix#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6281,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6283,a[2]=t3,a[3]=((C_word)li134),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6283(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* loop in k6279 in a6272 in chicken.file.posix#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_6283(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6283,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6293,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:765: chicken.pathname#make-pathname */
t5=C_fast_retrieve(lf[379]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k6291 in loop in k6279 in a6272 in chicken.file.posix#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6293,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6299,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:766: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[382]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[382]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[377];
tp(6,av2);}}

/* k6297 in k6291 in loop in k6279 in a6272 in chicken.file.posix#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6299(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6299,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_u_i_cdr(((C_word*)t2)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6308,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6311,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=t3,a[5]=t4,a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:768: chicken.file.posix#symbolic-link? */
t6=*((C_word*)lf[35]+1);{
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
/* posixunix.scm:774: ##sys#signal-hook */
t3=*((C_word*)lf[200]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[4];
av2[2]=lf[197];
av2[3]=lf[377];
av2[4]=lf[381];
av2[5]=((C_word*)t2)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k6306 in k6297 in k6291 in loop in k6279 in a6272 in chicken.file.posix#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6308,c,av);}
/* posixunix.scm:767: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6283(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k6309 in k6297 in k6291 in loop in k6279 in a6272 in chicken.file.posix#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6311,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:769: ##sys#read-symbolic-link */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[374]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[374]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[377];
tp(4,av2);}}
else{
/* posixunix.scm:767: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6283(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* k6312 in k6309 in k6297 in k6291 in loop in k6279 in a6272 in chicken.file.posix#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6314,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6320,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:770: chicken.pathname#absolute-pathname? */
t4=C_fast_retrieve(lf[380]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6318 in k6312 in k6309 in k6297 in k6291 in loop in k6279 in a6272 in chicken.file.posix#read-symbolic-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6320,c,av);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
/* posixunix.scm:767: loop */
t3=((C_word*)((C_word*)t2)[2])[1];
f_6283(t3,((C_word*)t2)[3],((C_word*)t2)[4],((C_word*)t2)[5]);}
else{
/* posixunix.scm:772: chicken.pathname#make-pathname */
t3=C_fast_retrieve(lf[379]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[6];
av2[2]=((C_word*)t2)[7];
av2[3]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k6352 in chicken.file.posix#file-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6354,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6358,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:778: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t3;
av2[2]=C_i_foreign_string_argumentp(((C_word*)t0)[5]);
tp(3,av2);}}

/* k6356 in k6352 in chicken.file.posix#file-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6358,c,av);}
t2=((C_word*)t0)[2];
if(C_truep(C_fixnum_lessp(stub1837(C_SCHEME_UNDEFINED,((C_word*)t2)[2],t1),C_fix(0)))){
/* posixunix.scm:783: posix-error */
t3=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=lf[197];
av2[3]=lf[386];
av2[4]=lf[387];
av2[5]=((C_word*)t2)[4];
av2[6]=((C_word*)t2)[5];
f_3259(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* chicken.file.posix#file-link in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6367(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_6367,c,av);}
a=C_alloc(6);
t4=C_i_check_string_2(t2,lf[385]);
t5=C_i_check_string_2(t3,lf[385]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6354,a[2]=C_SCHEME_UNDEFINED,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:778: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2=av;
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t6;
av2[2]=C_i_foreign_string_argumentp(t2);
tp(3,av2);}}

/* ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6389(C_word c,C_word *av){
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
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6389,c,av);}
a=C_alloc(10);
t5=C_rest_nullp(c,5);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,5,t0));
t7=C_rest_nullp(c,5);
t8=C_rest_nullp(c,6);
t9=(C_truep(t8)?C_fix(1):C_get_rest_arg(c,6,av,5,t0));
t10=C_rest_nullp(c,6);
t11=C_rest_nullp(c,7);
t12=(C_truep(t11)?*((C_word*)lf[389]+1):C_get_rest_arg(c,7,av,5,t0));
t13=C_rest_nullp(c,7);
t14=C_rest_nullp(c,8);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_get_rest_arg(c,8,av,5,t0));
t16=C_rest_nullp(c,8);
t17=C_rest_nullp(c,9);
t18=(C_truep(t17)?C_SCHEME_FALSE:C_get_rest_arg(c,9,av,5,t0));
t19=C_rest_nullp(c,9);
t20=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6423,a[2]=t9,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t15,a[7]=t18,a[8]=t1,a[9]=t12,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t6)){
/* posixunix.scm:791: ##sys#file-nonblocking! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[331]);
C_word *av2=av;
av2[0]=*((C_word*)lf[331]+1);
av2[1]=t20;
av2[2]=t4;
tp(3,av2);}}
else{
t21=t20;{
C_word *av2=av;
av2[0]=t21;
av2[1]=C_SCHEME_UNDEFINED;
f_6423(2,av2);}}}

/* k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_6423,c,av);}
a=C_alloc(10);
t2=C_fixnump(((C_word*)t0)[2]);
t3=(C_truep(t2)?((C_word*)t0)[2]:C_block_size(((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6429,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
/* posixunix.scm:793: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[274]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[274]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
f_6429(2,av2);}}}

/* k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
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
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(87,c,12)))){
C_save_and_reclaim((void *)f_6429,c,av);}
a=C_alloc(87);
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6430,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li138),tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6464,a[2]=t5,a[3]=t3,a[4]=t7,a[5]=t1,a[6]=((C_word)li140),tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6482,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t5,a[10]=((C_word)li142),tmp=(C_word)a,a+=11,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6585,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6594,a[2]=t5,a[3]=t3,a[4]=t7,a[5]=t1,a[6]=t10,a[7]=((C_word)li144),tmp=(C_word)a,a+=8,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6626,a[2]=t5,a[3]=t3,a[4]=t8,a[5]=((C_word)li145),tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6638,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word)li146),tmp=(C_word)a,a+=7,tmp);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6654,a[2]=t9,a[3]=t5,a[4]=t3,a[5]=t10,a[6]=((C_word)li147),tmp=(C_word)a,a+=7,tmp);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6669,a[2]=t5,a[3]=t3,a[4]=t1,a[5]=t10,a[6]=((C_word)li149),tmp=(C_word)a,a+=7,tmp);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6741,a[2]=t5,a[3]=t3,a[4]=t1,a[5]=t10,a[6]=t7,a[7]=((C_word)li153),tmp=(C_word)a,a+=8,tmp);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6864,a[2]=t5,a[3]=t3,a[4]=t1,a[5]=t7,a[6]=((C_word)li154),tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:843: chicken.port#make-input-port */
t19=C_fast_retrieve(lf[403]);{
C_word *av2;
if(c >= 13) {
  av2=av;
} else {
  av2=C_alloc(13);
}
av2[0]=t19;
av2[1]=t11;
av2[2]=t12;
av2[3]=t13;
av2[4]=t14;
av2[5]=lf[404];
av2[6]=t15;
av2[7]=lf[405];
av2[8]=t16;
av2[9]=lf[406];
av2[10]=t17;
av2[11]=lf[407];
av2[12]=t18;
((C_proc)(void*)(*((C_word*)t19+1)))(13,av2);}}

/* ready? in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_6430(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6430,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6434,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:799: ##sys#file-select-one */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[332]);
C_word av2[3];
av2[0]=*((C_word*)lf[332]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k6432 in ready? in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6434(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6434,c,av);}
t2=((C_word*)t0)[2];
t3=C_eqp(C_fix(-1),t1);
if(C_truep(t3)){
t4=C_fix((C_word)errno);
t5=C_eqp(t4,C_fix((C_word)EWOULDBLOCK));
t6=(C_truep(t5)?t5:C_eqp(t4,C_fix((C_word)EAGAIN)));
if(C_truep(t6)){
t7=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* posixunix.scm:803: posix-error */
t7=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[197];
av2[3]=((C_word*)t2)[3];
av2[4]=lf[390];
av2[5]=((C_word*)t2)[4];
av2[6]=((C_word*)t2)[5];
f_3259(7,av2);}}}
else{
t4=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_eqp(C_fix(1),t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* peek in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_6464(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,6)))){
C_save_and_reclaim_args((void *)trf_6464,2,t0,t1);}
a=C_alloc(3);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=t1;{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)((C_word*)t0)[4])[1],C_fix(15));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6480,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:809: ##sys#decode-buffer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[391]);
C_word av2[7];
av2[0]=*((C_word*)lf[391]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=C_fix(1);
av2[5]=t2;
av2[6]=t3;
tp(7,av2);}}}

/* a6479 in peek in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6480(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6480,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_utf_decode(t2,t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* fetch in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_6482(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_6482,2,t0,t1);}
a=C_alloc(14);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word)li141),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];{
C_word av2[2];
av2[0]=t5;
av2[1]=t1;
f_6488(2,av2);}}

/* loop in fetch in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6488(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,6)))){
C_save_and_reclaim((void *)f_6488,c,av);}
a=C_alloc(8);
t2=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=C_fix((C_word)errno);
t5=C_eqp(t4,C_fix((C_word)EWOULDBLOCK));
t6=(C_truep(t5)?t5:C_eqp(t4,C_fix((C_word)EAGAIN)));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6515,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:819: ##sys#thread-block-for-i/o! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[393]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[393]+1);
av2[1]=t7;
av2[2]=C_fast_retrieve(lf[394]);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[395];
tp(5,av2);}}
else{
t7=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t7)){
/* posixunix.scm:823: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[338]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[338]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[5])[1];
tp(3,av2);}}
else{
/* posixunix.scm:824: posix-error */
t8=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[197];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[396];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[7];
f_3259(7,av2);}}}}
else{
t4=(C_truep(((C_word*)t0)[8])?C_eqp(t2,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[8])){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6545,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:830: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[392]);
C_word *av2=av;
av2[0]=*((C_word*)lf[392]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=C_read(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6551,a[2]=((C_word*)t0)[9],a[3]=t6,a[4]=((C_word*)t0)[10],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t8=C_eqp(((C_word*)t6)[1],C_fix(-1));
if(C_truep(t8)){
t9=C_fix((C_word)errno);
t10=C_eqp(t9,C_fix((C_word)EWOULDBLOCK));
t11=(C_truep(t10)?t10:C_eqp(t9,C_fix((C_word)EAGAIN)));
if(C_truep(t11)){
t12=C_set_block_item(t6,0,C_fix(0));
t13=C_mutate(((C_word *)((C_word*)t0)[9])+1,((C_word*)t6)[1]);
t14=C_set_block_item(((C_word*)t0)[10],0,C_fix(0));
t15=t1;{
C_word *av2=av;
av2[0]=t15;
av2[1]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
/* posixunix.scm:836: posix-error */
t12=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t12;
av2[1]=t7;
av2[2]=lf[197];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[397];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[7];
f_3259(7,av2);}}}
else{
t9=C_mutate(((C_word *)((C_word*)t0)[9])+1,((C_word*)t6)[1]);
t10=C_set_block_item(((C_word*)t0)[10],0,C_fix(0));
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[9])+1,t2);
t6=C_set_block_item(((C_word*)t0)[10],0,C_fix(0));
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* k6513 in loop in fetch in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6515,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6518,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:820: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[392]);
C_word *av2=av;
av2[0]=*((C_word*)lf[392]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6516 in k6513 in loop in fetch in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6518,c,av);}
t2=((C_word*)t0)[2];
/* posixunix.scm:821: loop */
t3=((C_word*)((C_word*)t2)[2])[1];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
f_6488(2,av2);}}

/* k6543 in loop in fetch in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6545,c,av);}
/* posixunix.scm:831: loop */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_6488(2,av2);}}

/* k6549 in loop in fetch in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6551,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6583 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6585,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(3),((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(15),((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a6593 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6594,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:846: fetch */
t3=((C_word*)t0)[6];
f_6482(t3,t2);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6598(2,av2);}}}

/* k6596 in a6593 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_6598,c,av);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_slot(((C_word*)((C_word*)t0)[5])[1],C_fix(15));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6613,a[2]=((C_word*)t0)[2],a[3]=((C_word)li143),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:849: ##sys#decode-buffer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[391]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[391]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=C_fix(1);
av2[5]=t2;
av2[6]=t3;
tp(7,av2);}}}

/* a6612 in k6596 in a6593 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6613(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6613,c,av);}
t5=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t4);
t6=C_set_block_item(((C_word*)t0)[2],0,t5);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_utf_decode(t2,t3);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* a6625 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6626,c,av);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posixunix.scm:855: ready? */
t3=((C_word*)t0)[4];
f_6430(t3,t1);}}

/* a6637 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_6638,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6642,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[3]),C_fix(0)))){
/* posixunix.scm:858: posix-error */
t3=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[197];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[398];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[5];
f_3259(7,av2);}}
else{
/* posixunix.scm:859: on-close */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}}

/* k6640 in a6637 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6642,c,av);}
/* posixunix.scm:859: on-close */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a6653 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6654,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6658,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm:863: fetch */
t3=((C_word*)t0)[5];
f_6482(t3,t2);}
else{
/* posixunix.scm:864: peek */
t3=((C_word*)t0)[2];
f_6464(t3,t1);}}

/* k6656 in a6653 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6658,c,av);}
/* posixunix.scm:864: peek */
t2=((C_word*)t0)[2];
f_6464(t2,((C_word*)t0)[3]);}

/* a6668 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6669(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_6669,c,av);}
a=C_alloc(11);
t6=(C_truep(t3)?t3:C_fixnum_difference(C_block_size(t4),t5));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t8,a[7]=((C_word*)t0)[5],a[8]=((C_word)li148),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_6679(t10,t1,t6,C_fix(0),t5);}

/* loop in a6668 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_6679(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim_args((void *)trf_6679,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_eqp(C_fix(0),t2);
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
/* posixunix.scm:877: loop */
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6723,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:879: fetch */
t7=((C_word*)t0)[7];
f_6482(t7,t6);}}}

/* k6721 in loop in a6668 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6723,c,av);}
t2=C_eqp(C_fix(0),((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posixunix.scm:882: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6679(t3,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* a6740 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6741(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6741,c,av);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:886: fetch */
t5=((C_word*)t0)[5];
f_6482(t5,t4);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_6745(2,av2);}}}

/* k6743 in a6740 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6745(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6745,c,av);}
a=C_alloc(16);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_FILE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[5]:C_fixnum_difference(C_fast_retrieve(lf[399]),((C_word*)((C_word*)t0)[2])[1]));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6759,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li151),tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6819,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word)li152),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:890: ##sys#call-with-values */{
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

/* a6758 in k6743 in a6740 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6759(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6759,c,av);}
a=C_alloc(8);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
t3=C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li150),tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm:891: ##sys#scan-buffer-line */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[400]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[400]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[5];
av2[3]=t3;
av2[4]=((C_word*)((C_word*)t0)[2])[1];
av2[5]=t4;
av2[6]=C_slot(((C_word*)((C_word*)t0)[7])[1],C_fix(15));
tp(7,av2);}}

/* a6768 in a6758 in k6743 in a6740 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6769(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6769,c,av);}
a=C_alloc(7);
t3=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)((C_word*)t0)[3])[1]))){
/* posixunix.scm:898: scheme#values */{
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
t4=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],t3);
t5=C_set_block_item(((C_word*)t0)[3],0,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:901: fetch */
t7=((C_word*)t0)[6];
f_6482(t7,t6);}}

/* k6787 in a6768 in a6758 in k6743 in a6740 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6789,c,av);}
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);
/* posixunix.scm:903: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=C_i_fixnum_min(((C_word*)((C_word*)t0)[3])[1],t2);
C_values(5,av2);}}
else{
/* posixunix.scm:906: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* a6818 in k6743 in a6740 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6819(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6819,c,av);}
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

/* a6863 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_6864,c,av);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[401];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:922: ##sys#buffer->string/encoding */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[402]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[402]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
av2[4]=t3;
av2[5]=C_slot(((C_word*)((C_word*)t0)[5])[1],C_fix(15));
tp(6,av2);}}}

/* k6875 in a6863 in k6427 in k6421 in ##sys#custom-input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6877,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6959(C_word c,C_word *av){
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
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6959,c,av);}
a=C_alloc(9);
t5=C_rest_nullp(c,5);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,5,t0));
t7=C_rest_nullp(c,5);
t8=C_rest_nullp(c,6);
t9=(C_truep(t8)?C_fix(0):C_get_rest_arg(c,6,av,5,t0));
t10=C_rest_nullp(c,6);
t11=C_rest_nullp(c,7);
t12=(C_truep(t11)?*((C_word*)lf[389]+1):C_get_rest_arg(c,7,av,5,t0));
t13=C_rest_nullp(c,7);
t14=C_rest_nullp(c,8);
t15=(C_truep(t14)?C_SCHEME_FALSE:C_get_rest_arg(c,8,av,5,t0));
t16=C_rest_nullp(c,8);
t17=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6987,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t9,a[6]=t15,a[7]=t1,a[8]=t12,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
/* posixunix.scm:933: ##sys#file-nonblocking! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[331]);
C_word *av2=av;
av2[0]=*((C_word*)lf[331]+1);
av2[1]=t17;
av2[2]=t4;
tp(3,av2);}}
else{
t18=t17;{
C_word *av2=av;
av2[0]=t18;
av2[1]=C_SCHEME_UNDEFINED;
f_6987(2,av2);}}}

/* k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6987(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,5)))){
C_save_and_reclaim((void *)f_6987,c,av);}
a=C_alloc(30);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6988,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li157),tmp=(C_word)a,a+=7,tmp);
t9=C_fixnump(((C_word*)t0)[5]);
t10=(C_truep(t9)?((C_word*)t0)[5]:C_block_size(((C_word*)t0)[5]));
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7059,a[2]=t3,a[3]=t5,a[4]=t8,a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[2],a[11]=((C_word*)t0)[3],tmp=(C_word)a,a+=12,tmp);
t12=C_eqp(C_fix(0),t10);
if(C_truep(t12)){
t13=t11;
f_7059(t13,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7104,a[2]=t5,a[3]=((C_word)li161),tmp=(C_word)a,a+=4,tmp));}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7125,a[2]=t11,a[3]=t5,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
/* posixunix.scm:957: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[274]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[274]+1);
av2[1]=t13;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
t14=t13;{
C_word *av2=av;
av2[0]=t14;
av2[1]=((C_word*)t0)[5];
f_7125(2,av2);}}}}

/* poke2004 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6988(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6988,c,av);}
a=C_alloc(13);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6994,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t6,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word)li156),tmp=(C_word)a,a+=11,tmp));
t8=((C_word*)t6)[1];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t1;
f_6994(2,av2);}}

/* loop in poke2004 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_6994(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_6994,c,av);}
a=C_alloc(7);
t2=C_write(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);
t3=C_eqp(C_fix(-1),t2);
if(C_truep(t3)){
t4=C_fix((C_word)errno);
t5=C_eqp(t4,C_fix((C_word)EWOULDBLOCK));
t6=(C_truep(t5)?t5:C_eqp(t4,C_fix((C_word)EAGAIN)));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7021,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:942: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[392]);
C_word *av2=av;
av2[0]=*((C_word*)lf[392]+1);
av2[1]=t7;
tp(2,av2);}}
else{
t7=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t7)){
/* posixunix.scm:945: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[338]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[338]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
tp(3,av2);}}
else{
/* posixunix.scm:947: posix-error */
t8=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[197];
av2[4]=lf[409];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[9];
f_3259(7,av2);}}}}
else{
if(C_truep(C_fixnum_lessp(t2,((C_word*)t0)[5]))){
/* posixunix.scm:949: poke */
t4=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fixnum_plus(((C_word*)t0)[4],t2);
av2[4]=C_fixnum_difference(((C_word*)t0)[5],t2);
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k7019 in loop in poke2004 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7021,c,av);}
/* posixunix.scm:943: poke */
t2=((C_word*)((C_word*)t0)[2])[1];{
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

/* k7057 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7059(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,5)))){
C_save_and_reclaim_args((void *)trf_7059,2,t0,t1);}
a=C_alloc(21);
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)t0)[4]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7074,a[2]=((C_word*)t0)[5],a[3]=((C_word)li158),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7080,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[6],a[6]=((C_word)li159),tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7096,a[2]=((C_word*)t0)[5],a[3]=((C_word)li160),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:978: chicken.port#make-output-port */
t9=C_fast_retrieve(lf[411]);{
C_word av2[6];
av2[0]=t9;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
av2[4]=lf[412];
av2[5]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(6,av2);}}

/* k7063 in k7057 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7065,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(3),((C_word*)t0)[3]);
t4=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(15),((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a7073 in k7057 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7074,c,av);}
/* posixunix.scm:979: store */
t3=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* a7079 in k7057 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,6)))){
C_save_and_reclaim((void *)f_7080,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7084,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[3]),C_fix(0)))){
/* posixunix.scm:982: posix-error */
t3=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[197];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[410];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[5];
f_3259(7,av2);}}
else{
/* posixunix.scm:983: on-close */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}}

/* k7082 in a7079 in k7057 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7084,c,av);}
/* posixunix.scm:983: on-close */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a7095 in k7057 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7096,c,av);}
/* posixunix.scm:986: store */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* f_7104 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7104,c,av);}
if(C_truep(t2)){
t3=C_slot(t2,C_fix(0));
t4=C_block_size(t3);
/* posixunix.scm:956: poke */
t5=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(t4,C_fix(1));
((C_proc)C_fast_retrieve_proc(t5))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7123 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_7125,c,av);}
a=C_alloc(9);
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[2];
f_7059(t4,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7126,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word)li163),tmp=(C_word)a,a+=7,tmp));}

/* f_7126 in k7123 in k6985 in ##sys#custom-output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7126(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_7126,c,av);}
a=C_alloc(17);
if(C_truep(t2)){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7136,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=C_fixnum_difference(((C_word*)t0)[5],((C_word*)((C_word*)t0)[2])[1]);
t6=C_block_size(t3);
t7=C_fixnum_difference(t6,C_fix(1));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7155,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word)li162),tmp=(C_word)a,a+=9,tmp));
t11=((C_word*)t9)[1];
f_7155(t11,t4,t5,C_fix(0),t7);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7134 */
static void C_ccall f_7136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7136,c,av);}
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)((C_word*)t0)[2])[1]))){
/* posixunix.scm:976: poke */
t2=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* loop */
static void f_7155(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_7155,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:966: poke */
t7=((C_word*)((C_word*)t0)[5])[1];{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t7))(5,av2);}}
else{
if(C_truep(C_fixnum_lessp(t2,t4))){
t6=C_copy_memory_with_offset(((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)((C_word*)t0)[2])[1],C_fix(0),t4);
/* posixunix.scm:971: loop */
t10=t1;
t11=C_fix(0);
t12=t2;
t13=C_fixnum_difference(t4,t2);
t1=t10;
t2=t11;
t3=t12;
t4=t13;
goto loop;}
else{
t6=C_copy_memory_with_offset(((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)((C_word*)t0)[2])[1],t3,t4);
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t4);
t8=C_set_block_item(((C_word*)t0)[2],0,t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}}

/* k7163 in loop */
static void C_ccall f_7165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7165,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
/* posixunix.scm:968: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7155(t3,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0),((C_word*)t0)[6]);}

/* chicken.file.posix#file-truncate in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7255,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7259,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:997: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word *av2=av;
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[413];
tp(4,av2);}}

/* k7257 in chicken.file.posix#file-truncate in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7259,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7265,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7272,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7279,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:998: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[413];
tp(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7285,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:999: scheme#port? */
t5=C_fast_retrieve(lf[203]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k7263 in k7257 in chicken.file.posix#file-truncate in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7265(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_7265,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
/* posixunix.scm:1003: posix-error */
t3=lf[192];{
C_word av2[7];
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[197];
av2[3]=lf[413];
av2[4]=lf[414];
av2[5]=((C_word*)t2)[3];
av2[6]=((C_word*)t2)[4];
f_3259(7,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7270 in k7257 in chicken.file.posix#file-truncate in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7272,c,av);}
t2=((C_word*)t0)[2];
f_7265(t2,C_fixnum_lessp(t1,C_fix(0)));}

/* k7277 in k7257 in chicken.file.posix#file-truncate in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7279,c,av);}
t2=((C_word*)t0)[2];
f_7265(t2,C_fixnum_lessp(C_truncate(t1,((C_word*)t0)[3]),C_fix(0)));}

/* k7283 in k7257 in chicken.file.posix#file-truncate in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7285,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:999: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[72]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[4]))){
t2=((C_word*)t0)[2];
f_7265(t2,C_fixnum_lessp(C_ftruncate(((C_word*)t0)[4],((C_word*)t0)[3]),C_fix(0)));}
else{
/* posixunix.scm:1001: ##sys#error */
t2=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[413];
av2[3]=lf[415];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}}

/* k7287 in k7283 in k7257 in chicken.file.posix#file-truncate in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7289,c,av);}
t2=((C_word*)t0)[2];
f_7265(t2,C_fixnum_lessp(C_ftruncate(t1,((C_word*)t0)[3]),C_fix(0)));}

/* fileno in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7306(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7306,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7313,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1017: scheme#port? */
t5=C_fast_retrieve(lf[203]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7311 in fileno in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7313,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* posixunix.scm:1018: chicken.file.posix#port->fileno */
t2=*((C_word*)lf[72]+1);{
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
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1020: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[220]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[220]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}}

/* k7317 in k7311 in fileno in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7319,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-lock in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7321(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7321,c,av);}
a=C_alloc(9);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7330,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word)li167),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_7330(t8,t1);}

/* loop in chicken.file.posix#file-lock in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7330(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7330,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7335,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1025: fileno */
f_7306(t2,((C_word*)t0)[4],lf[416]);}

/* k7333 in loop in chicken.file.posix#file-lock in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7335(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7335,c,av);}
t2=(C_truep(((C_word*)t0)[2])?C_fix((C_word)LOCK_SH):C_fix((C_word)LOCK_EX));
t3=C_fixnum_or(C_fix((C_word)LOCK_NB),t2);
t4=C_flock(t1,t3);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t6)){
/* posixunix.scm:1028: loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_7330(t7,((C_word*)t0)[3]);}
else{
t7=C_fix((C_word)errno);
t8=C_eqp(t7,C_fix((C_word)EWOULDBLOCK));
if(C_truep(t8)){
if(C_truep(t8)){
t9=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* posixunix.scm:1015: posix-error */
t9=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[197];
av2[3]=lf[416];
av2[4]=lf[417];
av2[5]=((C_word*)t0)[5];
f_3259(6,av2);}}}
else{
t9=C_eqp(t7,C_fix((C_word)EAGAIN));
if(C_truep(t9)){
t10=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
/* posixunix.scm:1015: posix-error */
t10=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t10;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[197];
av2[3]=lf[416];
av2[4]=lf[417];
av2[5]=((C_word*)t0)[5];
f_3259(6,av2);}}}}}}

/* chicken.file.posix#file-lock/blocking in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7383(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7383,c,av);}
a=C_alloc(9);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7392,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word)li169),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_7392(t8,t1);}

/* loop in chicken.file.posix#file-lock/blocking in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7392(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7392,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7397,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1034: fileno */
f_7306(t2,((C_word*)t0)[4],lf[418]);}

/* k7395 in loop in chicken.file.posix#file-lock/blocking in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7397,c,av);}
t2=(C_truep(((C_word*)t0)[2])?C_fix((C_word)LOCK_SH):C_fix((C_word)LOCK_EX));
t3=C_flock(t1,t2);
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t5)){
/* posixunix.scm:1037: loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7392(t6,((C_word*)t0)[3]);}
else{
/* posixunix.scm:1015: posix-error */
t6=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[197];
av2[3]=lf[418];
av2[4]=lf[419];
av2[5]=((C_word*)t0)[5];
f_3259(6,av2);}}}}

/* chicken.file.posix#file-unlock in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7427(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7427,c,av);}
a=C_alloc(8);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7433,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word)li171),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_7433(t6,t1);}

/* loop in chicken.file.posix#file-unlock in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7433(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7433,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7438,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1042: fileno */
f_7306(t2,((C_word*)t0)[3],lf[420]);}

/* k7436 in loop in chicken.file.posix#file-unlock in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7438,c,av);}
t2=C_flock(t1,C_fix((C_word)LOCK_UN));
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t4)){
/* posixunix.scm:1044: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_7433(t5,((C_word*)t0)[2]);}
else{
/* posixunix.scm:1015: posix-error */
t5=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[197];
av2[3]=lf[420];
av2[4]=lf[421];
av2[5]=((C_word*)t0)[4];
f_3259(6,av2);}}}}

/* chicken.file.posix#create-fifo in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_7458,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t4=C_i_check_string_2(t2,lf[422]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_get_rest_arg(c,3,av,3,t0):C_fixnum_or(C_fix((C_word)S_IRUSR | S_IWUSR | S_IXUSR),C_fixnum_or(C_fix((C_word)S_IRGRP | S_IWGRP | S_IXGRP),C_fix((C_word)S_IROTH | S_IWOTH | S_IXOTH))));
t7=C_i_check_fixnum_2(t6,lf[422]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7482,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1055: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t8;
av2[2]=t2;
av2[3]=lf[422];
tp(4,av2);}}

/* k7480 in chicken.file.posix#create-fifo in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_7482,c,av);}
if(C_truep(C_fixnum_lessp(C_mkfifo(t1,((C_word*)t0)[2]),C_fix(0)))){
/* posixunix.scm:1056: posix-error */
t2=lf[192];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[197];
av2[3]=lf[422];
av2[4]=lf[423];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[2];
f_3259(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#string->time in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7504(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7504,c,av);}
a=C_alloc(5);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?lf[424]:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_string_2(t2,lf[425]);
t6=C_i_check_string_2(t4,lf[425]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7521,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1067: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word av2[4];
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[425];
tp(4,av2);}}

/* k7519 in chicken.time.posix#string->time in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7521,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7525,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1067: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k7523 in k7519 in chicken.time.posix#string->time in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_7525,c,av);}
a=C_alloc(17);
t2=C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1067: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[274]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[274]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
tp(4,av2);}}

/* k7531 in k7523 in k7519 in chicken.time.posix#string->time in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7533,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?stub2147(C_SCHEME_UNDEFINED,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_i_foreign_block_argumentp(t1)):stub2147(C_SCHEME_UNDEFINED,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.time.posix#utc-time->seconds in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7541,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7545,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1072: check-time-vector */
f_4007(t3,lf[426],t2);}

/* k7543 in chicken.time.posix#utc-time->seconds in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7545,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1073: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[274]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[274]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
tp(4,av2);}}

/* k7547 in k7543 in chicken.time.posix#utc-time->seconds in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_7549,c,av);}
a=C_alloc(7);
t2=C_a_timegm(&a,2,((C_word*)t0)[2],t1);
if(C_truep(C_i_nequalp(C_fix(-1),t2))){
/* posixunix.scm:1075: ##sys#error */
t3=*((C_word*)lf[94]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[426];
av2[3]=lf[427];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#local-timezone-abbreviation in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7560,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
/* posixunix.scm:1079: ##sys#peek-c-string */
t3=*((C_word*)lf[194]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=stub2174(t2);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* chicken.process.signal#set-alarm! in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7567,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub2178(C_SCHEME_UNDEFINED,C_i_foreign_fixnum_argumentp(t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.process#process-fork in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7579(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_7579,c,av);}
a=C_alloc(14);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=stub2208(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
t9=stub2188(C_SCHEME_UNDEFINED);
t10=C_eqp(C_fix(-1),t9);
if(C_truep(t10)){
/* posixunix.scm:1113: posix-error */
t11=lf[192];{
C_word av2[5];
av2[0]=t11;
av2[1]=t1;
av2[2]=lf[90];
av2[3]=lf[428];
av2[4]=lf[429];
f_3259(5,av2);}}
else{
t11=C_eqp(C_fix(0),t9);
if(C_truep(t11)){
t12=lf[287] /* chicken.posix#children */ =C_SCHEME_END_OF_LIST;;
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7626,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t6)){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7646,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1117: scheme#call-with-current-continuation */
t15=*((C_word*)lf[307]+1);{
C_word av2[3];
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
((C_proc)(void*)(*((C_word*)t15+1)))(3,av2);}}
else{
t14=t13;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_7626(2,av2);}}}
else{
t12=C_a_i_record7(&a,7,lf[289],t9,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t13=C_a_i_cons(&a,2,t9,t12);
t14=C_a_i_cons(&a,2,t13,C_retrieve2(lf[287],C_text("chicken.posix#children")));
t15=C_mutate(&lf[287] /* (set! chicken.posix#children ...) */,t14);
t16=t1;{
C_word *av2=av;
av2[0]=t16;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}}}

/* k7624 in chicken.process#process-fork in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7626,c,av);}
a=C_alloc(4);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7634,a[2]=((C_word*)t0)[2],a[3]=((C_word)li178),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1120: ##sys#call-with-cthulhu */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[431]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[431]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
tp(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a7633 in k7624 in chicken.process#process-fork in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7634,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7638,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1122: thunk */
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k7636 in a7633 in k7624 in chicken.process#process-fork in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7638,c,av);}
/* posixunix.scm:1126: chicken.base#exit */
t2=C_fast_retrieve(lf[430]);{
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

/* a7645 in chicken.process#process-fork in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7646,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7652,a[2]=t2,a[3]=((C_word)li179),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1118: ##sys#kill-other-threads */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[432]);
C_word *av2=av;
av2[0]=*((C_word*)lf[432]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}

/* a7651 in a7645 in chicken.process#process-fork in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7652,c,av);}
/* posixunix.scm:1118: continue */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* chicken.process#process-execute in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7685(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,7)))){
C_save_and_reclaim((void *)f_7685,c,av);}
a=C_alloc(7);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7709,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7712,a[2]=t2,a[3]=((C_word)li183),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1133: call-with-exec-args */
t14=C_retrieve2(lf[313],C_text("chicken.posix#call-with-exec-args"));
f_4869(t14,t1,lf[433],t2,t12,t4,t7,t13);}

/* a7708 in chicken.process#process-execute in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7709,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a7711 in chicken.process#process-execute in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7712(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7712,c,av);}
t5=(C_truep(t4)?C_u_i_execve(t2,t3,t4):C_u_i_execvp(t2,t3));
t6=C_eqp(t5,C_fix(-1));
if(C_truep(t6)){
/* posixunix.scm:1140: posix-error */
t7=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[90];
av2[3]=lf[433];
av2[4]=lf[434];
av2[5]=((C_word*)t0)[2];
f_3259(6,av2);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* chicken.posix#process-wait-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7763(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_7763,3,t1,t2,t3);}
a=C_alloc(5);
t4=(C_truep(t3)?C_fix((C_word)WNOHANG):C_fix(0));
t5=C_waitpid(t2,t4);
t6=C_WIFEXITED(C_fix((C_word)C_wait_status));
t7=C_eqp(t5,C_fix(-1));
t8=(C_truep(t7)?C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7779,a[2]=t2,a[3]=t3,a[4]=((C_word)li185),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1149: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[338]);
C_word av2[3];
av2[0]=*((C_word*)lf[338]+1);
av2[1]=t1;
av2[2]=t9;
tp(3,av2);}}
else{
if(C_truep(t6)){
/* posixunix.scm:1151: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=C_WEXITSTATUS(C_fix((C_word)C_wait_status));
C_values(5,av2);}}
else{
if(C_truep(C_WIFSIGNALED(C_fix((C_word)C_wait_status)))){
/* posixunix.scm:1151: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=C_WTERMSIG(C_fix((C_word)C_wait_status));
C_values(5,av2);}}
else{
/* posixunix.scm:1151: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
av2[4]=C_WSTOPSIG(C_fix((C_word)C_wait_status));
C_values(5,av2);}}}}}

/* a7778 in chicken.posix#process-wait-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7779,c,av);}
/* posixunix.scm:1150: process-wait-impl */
f_7763(t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* chicken.process-context.posix#parent-process-id in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7801,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub2256(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#process-signal in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_7804,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_get_rest_arg(c,3,av,3,t0):C_fix((C_word)SIGTERM));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7811,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_structurep(t2,lf[289]))){
t7=C_SCHEME_UNDEFINED;
t8=t6;
f_7811(t8,C_i_block_ref(t2,C_fix(1)));}
else{
t7=t6;
f_7811(t7,t2);}}

/* k7809 in chicken.process#process-signal in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7811(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_7811,2,t0,t1);}
t2=C_i_check_fixnum_2(t1,lf[435]);
t3=C_i_check_fixnum_2(((C_word*)t0)[2],lf[435]);
t4=C_kill(t1,((C_word*)t0)[2]);
t5=C_eqp(t4,C_fix(-1));
if(C_truep(t5)){
/* posixunix.scm:1169: posix-error */
t6=lf[192];{
C_word av2[7];
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[90];
av2[3]=lf[435];
av2[4]=lf[436];
av2[5]=((C_word*)t0)[4];
av2[6]=((C_word*)t0)[2];
f_3259(7,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* chicken.process#process-run in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_7853,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_get_rest_arg(c,3,av,3,t0):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7860,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1181: chicken.process#process-fork */
t7=*((C_word*)lf[107]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k7858 in chicken.process#process-run in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7860,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[3])){
/* posixunix.scm:1183: chicken.process#process-execute */
t2=*((C_word*)lf[106]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f9752,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1173: chicken.process-context#get-environment-variable */
t3=C_fast_retrieve(lf[439]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[440];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k7894 in k7966 in connect-child in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7896,c,av);}
/* posixunix.scm:1213: chicken.file.posix#file-close */
t2=*((C_word*)lf[11]+1);{
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

/* make-on-close in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7900(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_7900,6,t1,t2,t3,t4,t5,t6);}
a=C_alloc(8);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7902,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t2,a[7]=((C_word)li190),tmp=(C_word)a,a+=8,tmp);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* f_7902 in make-on-close in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7902,c,av);}
a=C_alloc(3);
t2=C_i_vector_set(((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7909,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[4]))){
if(C_truep(C_i_vector_ref(((C_word*)t0)[2],((C_word*)t0)[5]))){
/* posixunix.scm:1219: chicken.process#process-wait */
t4=*((C_word*)lf[111]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=*((C_word*)lf[441]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=*((C_word*)lf[441]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7907 */
static void C_ccall f_7909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7909,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=*((C_word*)lf[441]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* needed-pipe in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7925(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_7925,2,t1,t2);}
a=C_alloc(6);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7934,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7940,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1224: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7933 in needed-pipe in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7934,c,av);}
/* posixunix.scm:1224: chicken.process#create-pipe */
t2=*((C_word*)lf[116]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7939 in needed-pipe in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7940,c,av);}
a=C_alloc(3);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* connect-parent in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7945(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_7945,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(t3)){
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7956,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1230: chicken.file.posix#file-close */
t7=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7954 in connect-parent in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7956,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* connect-child in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7957(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7957,4,t1,t2,t3,t4);}
a=C_alloc(5);
if(C_truep(t3)){
t5=C_i_car(t2);
t6=C_u_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7968,a[2]=t4,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:1236: chicken.file.posix#file-close */
t8=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7966 in connect-child in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7968,c,av);}
a=C_alloc(4);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7896,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1212: chicken.file.posix#duplicate-fileno */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_7986(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7986,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(3);
t8=C_mutate(((C_word *)t0)+8,t7);
t9=C_mutate(((C_word *)t0)+10,t6);
t10=C_mutate(((C_word *)t0)+9,t5);
t11=C_mutate(((C_word *)t0)+6,t4);
t12=C_mutate(((C_word *)t0)+5,t3);
t13=C_mutate(((C_word *)t0)+4,t2);
t14=C_mutate(((C_word *)t0)+2,t1);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7990,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1245: needed-pipe */
f_7925(t15,((C_word*)t0)[10]);}

/* k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7990,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7993,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1246: needed-pipe */
f_7925(t4,((C_word*)t2)[9]);}

/* k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7993,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7996,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],a[10]=((C_word*)t2)[9],a[11]=t1,a[12]=((C_word*)t2)[10],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1247: needed-pipe */
f_7925(t3,((C_word*)t2)[8]);}

/* k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_7996(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7996,c,av);}
a=C_alloc(6);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8003,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[11])){
t4=C_i_cdr(((C_word*)t0)[11]);
t5=C_u_i_car(((C_word*)t0)[11]);
t6=t3;
f_8003(t6,C_a_i_cons(&a,2,t4,t5));}
else{
t4=t3;
f_8003(t4,C_SCHEME_FALSE);}}

/* k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_8003(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_8003,2,t0,t1);}
a=C_alloc(19);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8007,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,a[5]=((C_word*)t2)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8009,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[6],a[4]=((C_word*)t2)[7],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[9],a[8]=((C_word*)t2)[3],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=((C_word)li204),tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm:1250: chicken.process#process-fork */
t5=*((C_word*)lf[107]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8005 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8007,c,av);}
/* posixunix.scm:1248: scheme#values */{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
C_values(6,av2);}}

/* a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_8009,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8013,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm:1252: connect-child */
f_7957(t2,((C_word*)t0)[10],((C_word*)t0)[11],*((C_word*)lf[37]+1));}

/* k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_8013,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t3=C_i_cdr(((C_word*)t0)[9]);
t4=C_u_i_car(((C_word*)t0)[9]);
t5=C_a_i_cons(&a,2,t3,t4);
/* posixunix.scm:1253: connect-child */
f_7957(t2,t5,((C_word*)t0)[10],*((C_word*)lf[38]+1));}
else{
/* posixunix.scm:1253: connect-child */
f_7957(t2,C_SCHEME_FALSE,((C_word*)t0)[10],*((C_word*)lf[38]+1));}}

/* k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_8016,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=C_i_cdr(((C_word*)t0)[6]);
t4=C_u_i_car(((C_word*)t0)[6]);
t5=C_a_i_cons(&a,2,t3,t4);
/* posixunix.scm:1254: connect-child */
f_7957(t2,t5,((C_word*)t0)[8],*((C_word*)lf[36]+1));}
else{
/* posixunix.scm:1254: connect-child */
f_7957(t2,C_SCHEME_FALSE,((C_word*)t0)[8],*((C_word*)lf[36]+1));}}

/* k8017 in k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_8019,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8022,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8027,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li203),tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm:1255: scheme#call-with-current-continuation */
t4=*((C_word*)lf[307]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8020 in k8017 in k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8022,c,av);}
/* posixunix.scm:1251: g2340 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a8026 in k8017 in k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8027,c,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8033,a[2]=t2,a[3]=((C_word)li198),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li202),tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1255: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[306]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a8032 in a8026 in k8017 in k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8033,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8039,a[2]=t2,a[3]=((C_word)li197),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1255: k2337 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a8038 in a8032 in a8026 in k8017 in k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8039,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8043,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:1257: chicken.condition#print-error-message */
t3=C_fast_retrieve(lf[442]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=*((C_word*)lf[443]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k8041 in a8038 in a8032 in a8026 in k8017 in k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8043,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_exit_runtime(C_fix(126));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8044 in a8026 in k8017 in k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8045,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li199),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8052,a[2]=((C_word*)t0)[5],a[3]=((C_word)li201),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8069,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp12903 */
t5=t2;
f_8047(t5,t4);}

/* tmp12903 in a8044 in a8026 in k8017 in k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_8047(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_8047,2,t0,t1);}
/* posixunix.scm:1259: chicken.process#process-execute */
t2=*((C_word*)lf[106]+1);{
C_word av2[5];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* tmp22904 in a8044 in a8026 in k8017 in k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_8052(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8052,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8058,a[2]=t2,a[3]=((C_word)li200),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1255: k2337 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a8057 in tmp22904 in a8044 in a8026 in k8017 in k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8058,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k8067 in a8044 in a8026 in k8017 in k8014 in k8011 in a8008 in k8001 in k7994 in k7991 in k7988 in spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8069,c,av);}
a=C_alloc(3);
/* tmp22904 */
t2=((C_word*)t0)[2];
f_8052(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_8078(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8078,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(7);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8082,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1262: connect-parent */
f_7945(t8,t4,t5);}

/* k8080 in input-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_8082,c,av);}
if(C_truep(t1)){
/* posixunix.scm:1263: ##sys#custom-input-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[388]);
C_word *av2;
if(c >= 10) {
  av2=av;
} else {
  av2=C_alloc(10);
}
av2[0]=*((C_word*)lf[388]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(256);
av2[7]=((C_word*)t0)[5];
av2[8]=C_SCHEME_FALSE;
av2[9]=((C_word*)t0)[6];
tp(10,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_8089(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8089,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(7);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8093,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm:1266: connect-parent */
f_7945(t8,t4,t5);}

/* k8091 in output-port in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_8093,c,av);}
if(C_truep(t1)){
/* posixunix.scm:1267: ##sys#custom-output-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[408]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[408]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(0);
av2[7]=((C_word*)t0)[5];
av2[8]=((C_word*)t0)[6];
tp(9,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_8100(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,6)))){
C_save_and_reclaim_args((void *)trf_8100,10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
a=C_alloc(22);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8106,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=((C_word)li208),tmp=(C_word)a,a+=10,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8112,a[2]=t7,a[3]=t6,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t3,a[8]=t9,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word)li209),tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm:1269: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t10;
av2[3]=t11;
C_call_with_values(4,av2);}}

/* a8105 in chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8106,c,av);}
/* posixunix.scm:1270: spawn */
t2=((C_word*)t0)[2];
f_7986(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* a8111 in chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8112(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,6)))){
C_save_and_reclaim((void *)f_8112,c,av);}
a=C_alloc(32);
t6=C_i_not(((C_word*)t0)[2]);
t7=C_i_not(((C_word*)t0)[3]);
t8=C_i_not(((C_word*)t0)[4]);
t9=C_a_i_vector3(&a,3,t6,t7,t8);
t10=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8119,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t9,a[12]=((C_word*)t0)[10],a[13]=t3,a[14]=((C_word*)t0)[3],tmp=(C_word)a,a+=15,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8145,a[2]=t5,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8149,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm:1278: make-on-close */
f_7900(t12,t5,t9,C_fix(0),C_fix(1),C_fix(2));}

/* k8117 in a8111 in chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,6)))){
C_save_and_reclaim((void *)f_8119,c,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8137,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8141,a[2]=((C_word*)t0)[12],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm:1283: make-on-close */
f_7900(t4,((C_word*)t0)[3],((C_word*)t0)[11],C_fix(1),C_fix(0),C_fix(2));}

/* k8120 in k8117 in a8111 in chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,6)))){
C_save_and_reclaim((void *)f_8122,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8129,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8133,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm:1288: make-on-close */
f_7900(t4,((C_word*)t0)[3],((C_word*)t0)[11],C_fix(2),C_fix(0),C_fix(1));}

/* k8123 in k8120 in k8117 in a8111 in chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8125,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8127 in k8120 in k8117 in a8111 in chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8129,c,av);}
t2=C_i_check_structure(((C_word*)t0)[2],lf[289]);
/* posix-common.scm:682: ##sys#block-set! */
t3=*((C_word*)lf[300]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(5);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8131 in k8120 in k8117 in a8111 in chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8133,c,av);}
/* posixunix.scm:1286: input-port */
t2=((C_word*)t0)[2];
f_8078(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1,((C_word*)t0)[8]);}

/* k8135 in k8117 in a8111 in chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8137,c,av);}
t2=C_i_check_structure(((C_word*)t0)[2],lf[289]);
/* posix-common.scm:682: ##sys#block-set! */
t3=*((C_word*)lf[300]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(3);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8139 in k8117 in a8111 in chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8141,c,av);}
/* posixunix.scm:1281: output-port */
t2=((C_word*)t0)[2];
f_8089(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1,((C_word*)t0)[8]);}

/* k8143 in a8111 in chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8145,c,av);}
t2=C_i_check_structure(((C_word*)t0)[2],lf[289]);
/* posix-common.scm:682: ##sys#block-set! */
t3=*((C_word*)lf[300]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(4);
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8147 in a8111 in chicken.posix#process-impl in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8149,c,av);}
/* posixunix.scm:1276: input-port */
t2=((C_word*)t0)[2];
f_8078(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t1,((C_word*)t0)[8]);}

/* %process in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_8162(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(27,0,3)))){
C_save_and_reclaim_args((void *)trf_8162,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(27);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8164,a[2]=t2,a[3]=((C_word)li213),tmp=(C_word)a,a+=4,tmp);
t11=C_i_check_string_2(((C_word*)t8)[1],t2);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8205,a[2]=t1,a[3]=t2,a[4]=t8,a[5]=t9,a[6]=t6,a[7]=t3,a[8]=t7,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixunix.scm:1303: chkstrlst */
t13=t10;
f_8164(t13,t12,((C_word*)t9)[1]);}
else{
t13=((C_word*)t8)[1];
t14=C_a_i_list2(&a,2,lf[438],t13);
t15=C_set_block_item(t9,0,t14);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f9758,a[2]=t8,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1173: chicken.process-context#get-environment-variable */
t17=C_fast_retrieve(lf[439]);{
C_word av2[3];
av2[0]=t17;
av2[1]=t16;
av2[2]=lf[440];
((C_proc)(void*)(*((C_word*)t17+1)))(3,av2);}}}

/* chkstrlst in %process in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void f_8164(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8164,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8169,a[2]=((C_word*)t0)[2],a[3]=((C_word)li211),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8178,a[2]=t4,a[3]=((C_word)li212),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  f_8178(t5,t2)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* g2395 in chkstrlst in %process in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static C_word f_8169(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_check_string_2(t1,((C_word*)t0)[2]));}

/* for-each-loop2394 in chkstrlst in %process in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static C_word f_8178(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* posixunix.scm:1300: g2395 */
  f_8169(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k8203 in %process in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8205,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8208,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posixunix.scm:1307: check-environment-list */
f_4820(t2,((C_word*)t0)[6],((C_word*)t0)[3]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8208(2,av2);}}}

/* k8206 in k8203 in %process in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,9)))){
C_save_and_reclaim((void *)f_8208,c,av);}
t2=((C_word*)t0)[2];
/* posixunix.scm:1308: process-impl */
t3=C_retrieve2(lf[444],C_text("chicken.posix#process-impl"));
f_8100(t3,((C_word*)t2)[2],((C_word*)t2)[3],((C_word*)((C_word*)t2)[4])[1],((C_word*)((C_word*)t2)[5])[1],((C_word*)t2)[6],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t2)[7],((C_word*)t2)[8]);}

/* chicken.process#process in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8227(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8227,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?lf[251]:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=C_rest_nullp(c,6);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,3,t0));
if(C_truep(C_rest_nullp(c,6))){
/* posixunix.scm:1311: %process */
f_8162(t1,lf[445],C_SCHEME_FALSE,t2,t4,t7,t10);}
else{
/* posixunix.scm:1311: %process */
f_8162(t1,lf[445],C_SCHEME_FALSE,t2,t4,t7,t10);}}

/* chicken.process#process* in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8305(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_8305,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?lf[251]:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=C_rest_nullp(c,6);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,3,t0));
if(C_truep(C_rest_nullp(c,6))){
/* posixunix.scm:1314: %process */
f_8162(t1,lf[446],C_SCHEME_TRUE,t2,t4,t7,t10);}
else{
/* posixunix.scm:1314: %process */
f_8162(t1,lf[446],C_SCHEME_TRUE,t2,t4,t7,t10);}}

/* k8386 in chicken.process-context.posix#set-root-directory! in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8388,c,av);}
if(C_truep(C_fixnum_lessp(stub2465(C_SCHEME_UNDEFINED,t1),C_fix(0)))){
/* posixunix.scm:1324: posix-error */
t2=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[197];
av2[3]=lf[447];
av2[4]=lf[448];
av2[5]=((C_word*)t0)[3];
f_3259(6,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.process-context.posix#set-root-directory! in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8393(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8393,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[447]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8388,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:1320: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[199]);
C_word *av2=av;
av2[0]=*((C_word*)lf[199]+1);
av2[1]=t4;
av2[2]=C_i_foreign_string_argumentp(t2);
tp(3,av2);}}

/* chicken.process#process-spawn in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8412,c,av);}
/* posixunix.scm:1328: chicken.base#error */
t2=*((C_word*)lf[100]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[110];
av2[3]=lf[449];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.errno#errno in k6230 in k6199 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8418,c,av);}
/* posix.scm:388: ##sys#errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[452]);
C_word *av2=av;
av2[0]=*((C_word*)lf[452]+1);
av2[1]=t1;
tp(2,av2);}}

/* a8466 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8467(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8467,c,av);}
a=C_alloc(8);
t3=C_i_check_fixnum_2(t2,lf[492]);
t4=C_getpgid(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8474,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8484,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:717: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2=av;
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t6;
tp(2,av2);}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k8472 in a8466 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8474,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8482 in a8466 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8484,c,av);}
/* posixunix.scm:717: ##sys#error/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[369]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[369]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[492];
av2[4]=lf[493];
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}

/* a8485 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8486(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8486,c,av);}
a=C_alloc(5);
t4=C_i_check_fixnum_2(t2,lf[494]);
t5=C_i_check_fixnum_2(t3,lf[494]);
if(C_truep(C_fixnum_lessp(C_setpgid(t2,t3),C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8506,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm:725: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2=av;
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t6;
tp(2,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k8504 in a8485 in k6050 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_8506,c,av);}
/* posixunix.scm:725: ##sys#error/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[369]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[369]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[494];
av2[4]=lf[495];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
tp(7,av2);}}

/* a8508 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8509,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1756(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8511 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8512(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8512,c,av);}
a=C_alloc(4);
t3=C_i_check_fixnum_2(t2,lf[498]);
if(C_truep(C_fixnum_lessp(C_setegid(t2),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8529,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:645: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2=av;
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k8527 in a8511 in k6046 in k6042 in k6038 in k5996 */
static void C_ccall f_8529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8529,c,av);}
/* posixunix.scm:645: ##sys#error/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[369]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[369]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[499];
av2[4]=lf[500];
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}

/* a8531 in k6042 in k6038 in k5996 */
static void C_ccall f_8532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8532,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1752(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8534 in k6042 in k6038 in k5996 */
static void C_ccall f_8535(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8535,c,av);}
a=C_alloc(4);
t3=C_i_check_fixnum_2(t2,lf[502]);
if(C_truep(C_fixnum_lessp(C_setgid(t2),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8552,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:635: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2=av;
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k8550 in a8534 in k6042 in k6038 in k5996 */
static void C_ccall f_8552(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8552,c,av);}
/* posixunix.scm:635: ##sys#error/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[369]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[369]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[503];
av2[4]=lf[504];
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}

/* a8554 in k6038 in k5996 */
static void C_ccall f_8555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8555,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1748(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8557 in k6038 in k5996 */
static void C_ccall f_8558(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8558,c,av);}
a=C_alloc(4);
t3=C_i_check_fixnum_2(t2,lf[506]);
if(C_truep(C_fixnum_lessp(C_seteuid(t2),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8575,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:624: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2=av;
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k8573 in a8557 in k6038 in k5996 */
static void C_ccall f_8575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8575,c,av);}
/* posixunix.scm:624: ##sys#error/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[369]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[369]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[507];
av2[4]=lf[508];
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}

/* a8577 in k5996 */
static void C_ccall f_8578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8578,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub1744(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8580 in k5996 */
static void C_ccall f_8581(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8581,c,av);}
a=C_alloc(4);
t3=C_i_check_fixnum_2(t2,lf[510]);
if(C_truep(C_fixnum_lessp(C_setuid(t2),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8598,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm:614: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2=av;
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k8596 in a8580 in k5996 */
static void C_ccall f_8598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8598,c,av);}
/* posixunix.scm:614: ##sys#error/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[369]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[369]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[511];
av2[4]=lf[512];
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}

/* a8600 */
static void C_ccall f_8601(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8601,c,av);}
a=C_alloc(6);
t2=C_sigprocmask_get(C_fix(0));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8607,a[2]=t4,a[3]=((C_word)li230),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_8607(t6,t1,*((C_word*)lf[176]+1),C_SCHEME_END_OF_LIST);}

/* loop in a8600 */
static void f_8607(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_8607,4,t0,t1,t2,t3);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
if(C_truep(C_sigismember(t4))){
t6=C_a_i_cons(&a,2,t4,t3);
/* posixunix.scm:578: loop */
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* posixunix.scm:578: loop */
t8=t1;
t9=t5;
t10=t3;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}

/* a8630 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8631,c,av);}
t3=C_i_check_fixnum_2(t2,lf[515]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(C_fast_retrieve(lf[279]),t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a8639 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8640(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8640,c,av);}
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=(C_truep(t3)?C_i_check_fixnum_2(t3,lf[517]):C_SCHEME_UNDEFINED);
if(C_truep(t3)){
t5=C_umask(t3);
if(C_truep(t3)){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_umask(t5);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t5=C_umask(C_fix(0));
if(C_truep(t3)){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_umask(t5);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* a8664 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8665,c,av);}
t3=C_i_check_fixnum_2(t2,lf[517]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_umask(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a8670 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8671,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8675,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8687,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:412: scheme#port? */
t5=C_fast_retrieve(lf[203]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8673 in a8670 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_8675,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8678,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t1,C_fix(0)))){
/* posix-common.scm:421: posix-error */
t3=lf[192];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[197];
av2[3]=lf[519];
av2[4]=lf[520];
av2[5]=((C_word*)t0)[3];
f_3259(6,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8676 in k8673 in a8670 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8678,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8685 in a8670 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_8687,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[239]);
if(C_truep(t3)){
t4=C_ftell(&a,1,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_8675(2,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_fix(-1);
f_8675(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
f_8675(2,av2);}}
else{
/* posix-common.scm:419: ##sys#signal-hook */
t2=*((C_word*)lf[200]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[201];
av2[3]=lf[519];
av2[4]=lf[521];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* a8707 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_8708,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8712,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:335: stat */
f_3277(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[209]);}

/* k8710 in a8707 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8712,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_perm);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8713 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_8714,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8718,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:328: stat */
f_3277(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[524]);}

/* k8716 in a8713 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8718,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a8719 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_8720,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8724,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:322: stat */
f_3277(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[526]);}

/* k8722 in a8719 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void C_ccall f_8724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8724,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_posix_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("posix"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_posix_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2849))){
C_save(t1);
C_rereclaim2(2849*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,528);
lf[0]=C_h_intern(&lf[0],5, C_text("posix"));
lf[1]=C_h_intern(&lf[1],19, C_text("chicken.file.posix#"));
lf[2]=C_h_intern(&lf[2],30, C_text("chicken.file.posix#create-fifo"));
lf[3]=C_h_intern(&lf[3],39, C_text("chicken.file.posix#create-symbolic-link"));
lf[4]=C_h_intern(&lf[4],37, C_text("chicken.file.posix#read-symbolic-link"));
lf[5]=C_h_intern(&lf[5],35, C_text("chicken.file.posix#duplicate-fileno"));
lf[6]=C_h_intern(&lf[6],30, C_text("chicken.file.posix#fcntl/dupfd"));
lf[7]=C_h_intern(&lf[7],30, C_text("chicken.file.posix#fcntl/getfd"));
lf[8]=C_h_intern(&lf[8],30, C_text("chicken.file.posix#fcntl/getfl"));
lf[9]=C_h_intern(&lf[9],30, C_text("chicken.file.posix#fcntl/setfd"));
lf[10]=C_h_intern(&lf[10],30, C_text("chicken.file.posix#fcntl/setfl"));
lf[11]=C_h_intern(&lf[11],29, C_text("chicken.file.posix#file-close"));
lf[12]=C_h_intern(&lf[12],31, C_text("chicken.file.posix#file-control"));
lf[13]=C_h_intern(&lf[13],37, C_text("chicken.file.posix#file-creation-mode"));
lf[14]=C_h_intern(&lf[14],29, C_text("chicken.file.posix#file-group"));
lf[15]=C_h_intern(&lf[15],28, C_text("chicken.file.posix#file-link"));
lf[16]=C_h_intern(&lf[16],28, C_text("chicken.file.posix#file-lock"));
lf[17]=C_h_intern(&lf[17],37, C_text("chicken.file.posix#file-lock/blocking"));
lf[18]=C_h_intern(&lf[18],31, C_text("chicken.file.posix#file-mkstemp"));
lf[19]=C_h_intern(&lf[19],28, C_text("chicken.file.posix#file-open"));
lf[20]=C_h_intern(&lf[20],29, C_text("chicken.file.posix#file-owner"));
lf[21]=C_h_intern(&lf[21],35, C_text("chicken.file.posix#file-permissions"));
lf[22]=C_h_intern(&lf[22],32, C_text("chicken.file.posix#file-position"));
lf[23]=C_h_intern(&lf[23],28, C_text("chicken.file.posix#file-read"));
lf[24]=C_h_intern(&lf[24],30, C_text("chicken.file.posix#file-select"));
lf[25]=C_h_intern(&lf[25],32, C_text("chicken.file.posix#file-truncate"));
lf[26]=C_h_intern(&lf[26],30, C_text("chicken.file.posix#file-unlock"));
lf[27]=C_h_intern(&lf[27],29, C_text("chicken.file.posix#file-write"));
lf[28]=C_h_intern(&lf[28],28, C_text("chicken.file.posix#file-type"));
lf[29]=C_h_intern(&lf[29],32, C_text("chicken.file.posix#block-device?"));
lf[30]=C_h_intern(&lf[30],36, C_text("chicken.file.posix#character-device?"));
lf[31]=C_h_intern(&lf[31],29, C_text("chicken.file.posix#directory?"));
lf[32]=C_h_intern(&lf[32],24, C_text("chicken.file.posix#fifo?"));
lf[33]=C_h_intern(&lf[33],32, C_text("chicken.file.posix#regular-file?"));
lf[34]=C_h_intern(&lf[34],26, C_text("chicken.file.posix#socket?"));
lf[35]=C_h_intern(&lf[35],33, C_text("chicken.file.posix#symbolic-link?"));
lf[36]=C_h_intern(&lf[36],32, C_text("chicken.file.posix#fileno/stderr"));
lf[37]=C_h_intern(&lf[37],31, C_text("chicken.file.posix#fileno/stdin"));
lf[38]=C_h_intern(&lf[38],32, C_text("chicken.file.posix#fileno/stdout"));
lf[39]=C_h_intern(&lf[39],35, C_text("chicken.file.posix#open-input-file*"));
lf[40]=C_h_intern(&lf[40],36, C_text("chicken.file.posix#open-output-file*"));
lf[41]=C_h_intern(&lf[41],30, C_text("chicken.file.posix#open/append"));
lf[42]=C_h_intern(&lf[42],30, C_text("chicken.file.posix#open/binary"));
lf[43]=C_h_intern(&lf[43],29, C_text("chicken.file.posix#open/creat"));
lf[44]=C_h_intern(&lf[44],28, C_text("chicken.file.posix#open/excl"));
lf[45]=C_h_intern(&lf[45],29, C_text("chicken.file.posix#open/fsync"));
lf[46]=C_h_intern(&lf[46],30, C_text("chicken.file.posix#open/noctty"));
lf[47]=C_h_intern(&lf[47],33, C_text("chicken.file.posix#open/noinherit"));
lf[48]=C_h_intern(&lf[48],32, C_text("chicken.file.posix#open/nonblock"));
lf[49]=C_h_intern(&lf[49],30, C_text("chicken.file.posix#open/rdonly"));
lf[50]=C_h_intern(&lf[50],28, C_text("chicken.file.posix#open/rdwr"));
lf[51]=C_h_intern(&lf[51],28, C_text("chicken.file.posix#open/read"));
lf[52]=C_h_intern(&lf[52],28, C_text("chicken.file.posix#open/sync"));
lf[53]=C_h_intern(&lf[53],28, C_text("chicken.file.posix#open/text"));
lf[54]=C_h_intern(&lf[54],29, C_text("chicken.file.posix#open/trunc"));
lf[55]=C_h_intern(&lf[55],29, C_text("chicken.file.posix#open/write"));
lf[56]=C_h_intern(&lf[56],30, C_text("chicken.file.posix#open/wronly"));
lf[57]=C_h_intern(&lf[57],29, C_text("chicken.file.posix#perm/irgrp"));
lf[58]=C_h_intern(&lf[58],29, C_text("chicken.file.posix#perm/iroth"));
lf[59]=C_h_intern(&lf[59],29, C_text("chicken.file.posix#perm/irusr"));
lf[60]=C_h_intern(&lf[60],29, C_text("chicken.file.posix#perm/irwxg"));
lf[61]=C_h_intern(&lf[61],29, C_text("chicken.file.posix#perm/irwxo"));
lf[62]=C_h_intern(&lf[62],29, C_text("chicken.file.posix#perm/irwxu"));
lf[63]=C_h_intern(&lf[63],29, C_text("chicken.file.posix#perm/isgid"));
lf[64]=C_h_intern(&lf[64],29, C_text("chicken.file.posix#perm/isuid"));
lf[65]=C_h_intern(&lf[65],29, C_text("chicken.file.posix#perm/isvtx"));
lf[66]=C_h_intern(&lf[66],29, C_text("chicken.file.posix#perm/iwgrp"));
lf[67]=C_h_intern(&lf[67],29, C_text("chicken.file.posix#perm/iwoth"));
lf[68]=C_h_intern(&lf[68],29, C_text("chicken.file.posix#perm/iwusr"));
lf[69]=C_h_intern(&lf[69],29, C_text("chicken.file.posix#perm/ixgrp"));
lf[70]=C_h_intern(&lf[70],29, C_text("chicken.file.posix#perm/ixoth"));
lf[71]=C_h_intern(&lf[71],29, C_text("chicken.file.posix#perm/ixusr"));
lf[72]=C_h_intern(&lf[72],31, C_text("chicken.file.posix#port->fileno"));
lf[73]=C_h_intern(&lf[73],27, C_text("chicken.file.posix#seek/cur"));
lf[74]=C_h_intern(&lf[74],27, C_text("chicken.file.posix#seek/end"));
lf[75]=C_h_intern(&lf[75],27, C_text("chicken.file.posix#seek/set"));
lf[76]=C_h_intern(&lf[76],37, C_text("chicken.file.posix#set-file-position!"));
lf[77]=C_h_intern(&lf[77],19, C_text("chicken.time.posix#"));
lf[78]=C_h_intern(&lf[78],36, C_text("chicken.time.posix#seconds->utc-time"));
lf[79]=C_h_intern(&lf[79],36, C_text("chicken.time.posix#utc-time->seconds"));
lf[80]=C_h_intern(&lf[80],38, C_text("chicken.time.posix#seconds->local-time"));
lf[81]=C_h_intern(&lf[81],34, C_text("chicken.time.posix#seconds->string"));
lf[82]=C_h_intern(&lf[82],38, C_text("chicken.time.posix#local-time->seconds"));
lf[83]=C_h_intern(&lf[83],31, C_text("chicken.time.posix#string->time"));
lf[84]=C_h_intern(&lf[84],31, C_text("chicken.time.posix#time->string"));
lf[85]=C_h_intern(&lf[85],46, C_text("chicken.time.posix#local-timezone-abbreviation"));
lf[86]=C_h_intern(&lf[86],16, C_text("chicken.process#"));
lf[87]=C_h_intern(&lf[87],22, C_text("chicken.process#system"));
lf[88]=C_h_intern(&lf[88],6, C_text("system"));
lf[89]=C_h_intern(&lf[89],23, C_text("##sys#signal-hook/errno"));
lf[90]=C_h_intern_kw(&lf[90],13, C_text("process-error"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\140\163\171\163\164\145\155\047\040\151\156\166\157\143\141\164\151\157\156\040\146\141\151\154\145\144\000"));
lf[92]=C_h_intern(&lf[92],18, C_text("##sys#update-errno"));
lf[93]=C_h_intern(&lf[93],23, C_text("chicken.process#system*"));
lf[94]=C_h_intern(&lf[94],11, C_text("##sys#error"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\064\163\150\145\154\154\040\151\156\166\157\143\141\164\151\157\156\040\146\141\151\154\145\144\040\167\151\164\150\040\156\157\156\055\172\145\162\157\040\162\145\164\165\162\156\040\163\164\141\164\165\163\000"));
lf[96]=C_h_intern(&lf[96],18, C_text("chicken.process#qs"));
lf[97]=C_h_intern(&lf[97],5, C_text("mingw"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\042\042\000"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\047\134\047\047\000"));
lf[100]=C_h_intern(&lf[100],18, C_text("chicken.base#error"));
lf[101]=C_h_intern(&lf[101],2, C_text("qs"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\065\116\125\114\040\143\150\141\162\141\143\164\145\162\040\143\141\156\040\156\157\164\040\142\145\040\162\145\160\162\145\163\145\156\164\145\144\040\151\156\040\163\150\145\154\154\040\163\164\162\151\156\147\000"));
lf[103]=C_h_intern(&lf[103],20, C_text("scheme#string-append"));
lf[104]=C_h_intern(&lf[104],18, C_text("##sys#string->list"));
lf[105]=C_h_intern(&lf[105],33, C_text("chicken.platform#software-version"));
lf[106]=C_h_intern(&lf[106],31, C_text("chicken.process#process-execute"));
lf[107]=C_h_intern(&lf[107],28, C_text("chicken.process#process-fork"));
lf[108]=C_h_intern(&lf[108],27, C_text("chicken.process#process-run"));
lf[109]=C_h_intern(&lf[109],30, C_text("chicken.process#process-signal"));
lf[110]=C_h_intern(&lf[110],29, C_text("chicken.process#process-spawn"));
lf[111]=C_h_intern(&lf[111],28, C_text("chicken.process#process-wait"));
lf[112]=C_h_intern(&lf[112],36, C_text("chicken.process#call-with-input-pipe"));
lf[113]=C_h_intern(&lf[113],37, C_text("chicken.process#call-with-output-pipe"));
lf[114]=C_h_intern(&lf[114],32, C_text("chicken.process#close-input-pipe"));
lf[115]=C_h_intern(&lf[115],33, C_text("chicken.process#close-output-pipe"));
lf[116]=C_h_intern(&lf[116],27, C_text("chicken.process#create-pipe"));
lf[117]=C_h_intern(&lf[117],31, C_text("chicken.process#open-input-pipe"));
lf[118]=C_h_intern(&lf[118],32, C_text("chicken.process#open-output-pipe"));
lf[119]=C_h_intern(&lf[119],36, C_text("chicken.process#with-input-from-pipe"));
lf[120]=C_h_intern(&lf[120],35, C_text("chicken.process#with-output-to-pipe"));
lf[121]=C_h_intern(&lf[121],23, C_text("chicken.process#process"));
lf[122]=C_h_intern(&lf[122],24, C_text("chicken.process#process*"));
lf[123]=C_h_intern(&lf[123],29, C_text("chicken.process#process-sleep"));
lf[124]=C_h_intern(&lf[124],24, C_text("chicken.process#process?"));
lf[125]=C_h_intern(&lf[125],35, C_text("chicken.process#process-exit-status"));
lf[126]=C_h_intern(&lf[126],42, C_text("chicken.process#process-returned-normally?"));
lf[127]=C_h_intern(&lf[127],34, C_text("chicken.process#process-input-port"));
lf[128]=C_h_intern(&lf[128],35, C_text("chicken.process#process-output-port"));
lf[129]=C_h_intern(&lf[129],34, C_text("chicken.process#process-error-port"));
lf[130]=C_h_intern(&lf[130],26, C_text("chicken.process#process-id"));
lf[131]=C_h_intern(&lf[131],24, C_text("chicken.process#pipe/buf"));
lf[132]=C_h_intern(&lf[132],29, C_text("chicken.process#spawn/overlay"));
lf[133]=C_h_intern(&lf[133],26, C_text("chicken.process#spawn/wait"));
lf[134]=C_h_intern(&lf[134],28, C_text("chicken.process#spawn/nowait"));
lf[135]=C_h_intern(&lf[135],29, C_text("chicken.process#spawn/nowaito"));
lf[136]=C_h_intern(&lf[136],28, C_text("chicken.process#spawn/detach"));
lf[137]=C_h_intern(&lf[137],23, C_text("chicken.process.signal#"));
lf[138]=C_h_intern(&lf[138],33, C_text("chicken.process.signal#set-alarm!"));
lf[139]=C_h_intern(&lf[139],42, C_text("chicken.process.signal#set-signal-handler!"));
lf[140]=C_h_intern(&lf[140],39, C_text("chicken.process.signal#set-signal-mask!"));
lf[141]=C_h_intern(&lf[141],37, C_text("chicken.process.signal#signal-handler"));
lf[142]=C_h_intern(&lf[142],42, C_text("chicken.process.signal#make-signal-handler"));
lf[143]=C_h_intern(&lf[143],36, C_text("chicken.process.signal#signal-ignore"));
lf[144]=C_h_intern(&lf[144],37, C_text("chicken.process.signal#signal-default"));
lf[145]=C_h_intern(&lf[145],34, C_text("chicken.process.signal#signal-mask"));
lf[146]=C_h_intern(&lf[146],35, C_text("chicken.process.signal#signal-mask!"));
lf[147]=C_h_intern(&lf[147],37, C_text("chicken.process.signal#signal-masked?"));
lf[148]=C_h_intern(&lf[148],37, C_text("chicken.process.signal#signal-unmask!"));
lf[149]=C_h_intern(&lf[149],34, C_text("chicken.process.signal#signal/abrt"));
lf[150]=C_h_intern(&lf[150],34, C_text("chicken.process.signal#signal/alrm"));
lf[151]=C_h_intern(&lf[151],35, C_text("chicken.process.signal#signal/break"));
lf[152]=C_h_intern(&lf[152],33, C_text("chicken.process.signal#signal/bus"));
lf[153]=C_h_intern(&lf[153],34, C_text("chicken.process.signal#signal/chld"));
lf[154]=C_h_intern(&lf[154],34, C_text("chicken.process.signal#signal/cont"));
lf[155]=C_h_intern(&lf[155],33, C_text("chicken.process.signal#signal/fpe"));
lf[156]=C_h_intern(&lf[156],33, C_text("chicken.process.signal#signal/hup"));
lf[157]=C_h_intern(&lf[157],33, C_text("chicken.process.signal#signal/ill"));
lf[158]=C_h_intern(&lf[158],33, C_text("chicken.process.signal#signal/int"));
lf[159]=C_h_intern(&lf[159],32, C_text("chicken.process.signal#signal/io"));
lf[160]=C_h_intern(&lf[160],34, C_text("chicken.process.signal#signal/kill"));
lf[161]=C_h_intern(&lf[161],34, C_text("chicken.process.signal#signal/pipe"));
lf[162]=C_h_intern(&lf[162],34, C_text("chicken.process.signal#signal/prof"));
lf[163]=C_h_intern(&lf[163],34, C_text("chicken.process.signal#signal/quit"));
lf[164]=C_h_intern(&lf[164],34, C_text("chicken.process.signal#signal/segv"));
lf[165]=C_h_intern(&lf[165],34, C_text("chicken.process.signal#signal/stop"));
lf[166]=C_h_intern(&lf[166],34, C_text("chicken.process.signal#signal/term"));
lf[167]=C_h_intern(&lf[167],34, C_text("chicken.process.signal#signal/trap"));
lf[168]=C_h_intern(&lf[168],34, C_text("chicken.process.signal#signal/tstp"));
lf[169]=C_h_intern(&lf[169],33, C_text("chicken.process.signal#signal/urg"));
lf[170]=C_h_intern(&lf[170],34, C_text("chicken.process.signal#signal/usr1"));
lf[171]=C_h_intern(&lf[171],34, C_text("chicken.process.signal#signal/usr2"));
lf[172]=C_h_intern(&lf[172],36, C_text("chicken.process.signal#signal/vtalrm"));
lf[173]=C_h_intern(&lf[173],35, C_text("chicken.process.signal#signal/winch"));
lf[174]=C_h_intern(&lf[174],34, C_text("chicken.process.signal#signal/xcpu"));
lf[175]=C_h_intern(&lf[175],34, C_text("chicken.process.signal#signal/xfsz"));
lf[176]=C_h_intern(&lf[176],35, C_text("chicken.process.signal#signals-list"));
lf[177]=C_h_intern(&lf[177],30, C_text("chicken.process-context.posix#"));
lf[178]=C_h_intern(&lf[178],47, C_text("chicken.process-context.posix#change-directory*"));
lf[179]=C_h_intern(&lf[179],49, C_text("chicken.process-context.posix#set-root-directory!"));
lf[180]=C_h_intern(&lf[180],56, C_text("chicken.process-context.posix#current-effective-group-id"));
lf[181]=C_h_intern(&lf[181],55, C_text("chicken.process-context.posix#current-effective-user-id"));
lf[182]=C_h_intern(&lf[182],46, C_text("chicken.process-context.posix#current-group-id"));
lf[183]=C_h_intern(&lf[183],45, C_text("chicken.process-context.posix#current-user-id"));
lf[184]=C_h_intern(&lf[184],48, C_text("chicken.process-context.posix#current-process-id"));
lf[185]=C_h_intern(&lf[185],47, C_text("chicken.process-context.posix#parent-process-id"));
lf[186]=C_h_intern(&lf[186],47, C_text("chicken.process-context.posix#current-user-name"));
lf[187]=C_h_intern(&lf[187],57, C_text("chicken.process-context.posix#current-effective-user-name"));
lf[188]=C_h_intern(&lf[188],44, C_text("chicken.process-context.posix#create-session"));
lf[189]=C_h_intern(&lf[189],46, C_text("chicken.process-context.posix#process-group-id"));
lf[190]=C_h_intern(&lf[190],46, C_text("chicken.process-context.posix#user-information"));
lf[191]=C_h_intern(&lf[191],14, C_text("chicken.posix#"));
lf[193]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\055\040\000"));
lf[194]=C_h_intern(&lf[194],19, C_text("##sys#peek-c-string"));
lf[195]=C_h_intern(&lf[195],17, C_text("##sys#posix-error"));
lf[197]=C_h_intern_kw(&lf[197],10, C_text("file-error"));
lf[198]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\143\141\156\156\157\164\040\141\143\143\145\163\163\040\146\151\154\145\000"));
lf[199]=C_h_intern(&lf[199],19, C_text("##sys#make-c-string"));
lf[200]=C_h_intern(&lf[200],17, C_text("##sys#signal-hook"));
lf[201]=C_h_intern_kw(&lf[201],10, C_text("type-error"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\146\151\170\156\165\155\054\040\160\157\162\164\040\157\162\040\163\164\162\151\156\147\000"));
lf[203]=C_h_intern(&lf[203],12, C_text("scheme#port?"));
lf[204]=C_h_intern(&lf[204],28, C_text("chicken.file.posix#file-stat"));
lf[205]=C_h_intern(&lf[205],9, C_text("file-stat"));
lf[206]=C_h_intern(&lf[206],40, C_text("chicken.file.posix#set-file-permissions!"));
lf[207]=C_h_intern(&lf[207],21, C_text("set-file-permissions!"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\143\141\156\156\157\164\040\143\150\141\156\147\145\040\146\151\154\145\040\160\145\162\155\151\163\163\151\157\156\163\000"));
lf[209]=C_h_intern(&lf[209],16, C_text("file-permissions"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\146\151\170\156\165\155\054\040\160\157\162\164\040\157\162\040\163\164\162\151\156\147\000"));
lf[211]=C_h_intern(&lf[211],41, C_text("chicken.file.posix#file-modification-time"));
lf[212]=C_h_intern(&lf[212],22, C_text("file-modification-time"));
lf[213]=C_h_intern(&lf[213],35, C_text("chicken.file.posix#file-access-time"));
lf[214]=C_h_intern(&lf[214],16, C_text("file-access-time"));
lf[215]=C_h_intern(&lf[215],35, C_text("chicken.file.posix#file-change-time"));
lf[216]=C_h_intern(&lf[216],16, C_text("file-change-time"));
lf[217]=C_h_intern(&lf[217],34, C_text("chicken.file.posix#set-file-times!"));
lf[218]=C_h_intern(&lf[218],15, C_text("set-file-times!"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\163\145\164\040\146\151\154\145\040\164\151\155\145\163\000"));
lf[220]=C_h_intern(&lf[220],25, C_text("##sys#check-exact-integer"));
lf[221]=C_h_intern(&lf[221],28, C_text("chicken.time#current-seconds"));
lf[222]=C_h_intern(&lf[222],28, C_text("chicken.file.posix#file-size"));
lf[223]=C_h_intern(&lf[223],9, C_text("file-size"));
lf[224]=C_h_intern(&lf[224],34, C_text("chicken.file.posix#set-file-owner!"));
lf[226]=C_h_intern(&lf[226],15, C_text("set-file-owner!"));
lf[227]=C_h_intern(&lf[227],34, C_text("chicken.file.posix#set-file-group!"));
lf[228]=C_h_intern(&lf[228],15, C_text("set-file-group!"));
lf[229]=C_h_intern(&lf[229],12, C_text("regular-file"));
lf[230]=C_h_intern(&lf[230],13, C_text("symbolic-link"));
lf[231]=C_h_intern(&lf[231],9, C_text("directory"));
lf[232]=C_h_intern(&lf[232],16, C_text("character-device"));
lf[233]=C_h_intern(&lf[233],12, C_text("block-device"));
lf[234]=C_h_intern(&lf[234],4, C_text("fifo"));
lf[235]=C_h_intern(&lf[235],6, C_text("socket"));
lf[236]=C_h_intern(&lf[236],9, C_text("file-type"));
lf[237]=C_h_intern(&lf[237],18, C_text("set-file-position!"));
lf[238]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\143\141\156\156\157\164\040\163\145\164\040\146\151\154\145\040\160\157\163\151\164\151\157\156\000"));
lf[239]=C_h_intern(&lf[239],6, C_text("stream"));
lf[240]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\151\156\166\141\154\151\144\040\146\151\154\145\000"));
lf[241]=C_h_intern_kw(&lf[241],6, C_text("append"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\141\000"));
lf[243]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\151\156\166\141\154\151\144\040\155\157\144\145\040\146\157\162\040\151\156\160\165\164\040\146\151\154\145\000"));
lf[244]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\151\156\166\141\154\151\144\040\155\157\144\145\040\141\162\147\165\155\145\156\164\000"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\162\000"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\167\000"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\143\141\156\156\157\164\040\157\160\145\156\040\146\151\154\145\000"));
lf[248]=C_h_intern(&lf[248],15, C_text("##sys#make-port"));
lf[249]=C_h_intern(&lf[249],23, C_text("##sys#stream-port-class"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\050\146\144\160\157\162\164\051\000"));
lf[251]=C_h_intern(&lf[251],5, C_text("utf-8"));
lf[252]=C_h_intern(&lf[252],16, C_text("open-input-file*"));
lf[253]=C_h_intern(&lf[253],17, C_text("open-output-file*"));
lf[254]=C_h_intern(&lf[254],12, C_text("port->fileno"));
lf[255]=C_h_intern(&lf[255],15, C_text("##sys#port-data"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\046\143\141\156\156\157\164\040\141\143\143\145\163\163\040\146\151\154\145\055\144\145\163\143\162\151\160\164\157\162\040\157\146\040\160\157\162\164\000"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\160\157\162\164\040\150\141\163\040\156\157\040\141\164\164\141\143\150\145\144\040\146\151\154\145\000"));
lf[258]=C_h_intern(&lf[258],27, C_text("##sys#peek-unsigned-integer"));
lf[259]=C_h_intern(&lf[259],16, C_text("duplicate-fileno"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\143\141\156\156\157\164\040\144\165\160\154\151\143\141\164\145\040\146\151\154\145\055\144\145\163\143\162\151\160\164\157\162\000"));
lf[261]=C_h_intern(&lf[261],17, C_text("change-directory*"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\143\141\156\156\157\164\040\143\150\141\156\147\145\040\143\165\162\162\145\156\164\040\144\151\162\145\143\164\157\162\171\000"));
lf[263]=C_h_intern(&lf[263],27, C_text("##sys#change-directory-hook"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\164\151\155\145\040\166\145\143\164\157\162\040\164\157\157\040\163\150\157\162\164\000"));
lf[267]=C_h_intern(&lf[267],19, C_text("seconds->local-time"));
lf[268]=C_h_intern(&lf[268],17, C_text("seconds->utc-time"));
lf[269]=C_h_intern(&lf[269],15, C_text("##sys#substring"));
lf[270]=C_h_intern(&lf[270],15, C_text("seconds->string"));
lf[271]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\143\141\156\156\157\164\040\143\157\156\166\145\162\164\040\163\145\143\157\156\144\163\040\164\157\040\163\164\162\151\156\147\000"));
lf[272]=C_h_intern(&lf[272],19, C_text("local-time->seconds"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\046\143\141\156\156\157\164\040\143\157\156\166\145\162\164\040\164\151\155\145\040\166\145\143\164\157\162\040\164\157\040\163\145\143\157\156\144\163\000"));
lf[274]=C_h_intern(&lf[274],21, C_text("##sys#make-bytevector"));
lf[275]=C_h_intern(&lf[275],12, C_text("time->string"));
lf[276]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\164\151\155\145\040\146\157\162\155\141\164\164\151\156\147\040\157\166\145\162\146\154\157\167\163\040\142\165\146\146\145\162\000"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\143\141\156\156\157\164\040\143\157\156\166\145\162\164\040\164\151\155\145\040\166\145\143\164\157\162\040\164\157\040\163\164\162\151\156\147\000"));
lf[278]=C_h_intern(&lf[278],19, C_text("set-signal-handler!"));
lf[279]=C_h_intern(&lf[279],19, C_text("##sys#signal-vector"));
lf[280]=C_h_intern(&lf[280],19, C_text("make-signal-handler"));
lf[281]=C_h_intern(&lf[281],25, C_text("##sys#add-event-to-queue!"));
lf[282]=C_h_intern(&lf[282],20, C_text("##sys#get-next-event"));
lf[283]=C_h_intern(&lf[283],25, C_text("##sys#wait-for-next-event"));
lf[284]=C_h_intern(&lf[284],22, C_text("##sys#make-event-queue"));
lf[285]=C_h_intern(&lf[285],13, C_text("signal-ignore"));
lf[286]=C_h_intern(&lf[286],14, C_text("signal-default"));
lf[289]=C_h_intern(&lf[289],21, C_text("chicken.posix#process"));
lf[296]=C_h_intern(&lf[296],13, C_text("process-sleep"));
lf[297]=C_h_intern(&lf[297],12, C_text("process-wait"));
lf[299]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\167\141\151\164\151\156\147\040\146\157\162\040\143\150\151\154\144\040\160\162\157\143\145\163\163\040\146\141\151\154\145\144\000"));
lf[300]=C_h_intern(&lf[300],16, C_text("##sys#block-set!"));
lf[302]=C_h_intern(&lf[302],24, C_text("chicken.condition#signal"));
lf[304]=C_h_intern(&lf[304],34, C_text("chicken.memory#pointer-vector-set!"));
lf[305]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\117\165\164\040\157\146\040\155\145\155\157\162\171\000"));
lf[306]=C_h_intern(&lf[306],40, C_text("chicken.condition#with-exception-handler"));
lf[307]=C_h_intern(&lf[307],37, C_text("scheme#call-with-current-continuation"));
lf[308]=C_h_intern(&lf[308],34, C_text("chicken.memory#make-pointer-vector"));
lf[309]=C_h_intern(&lf[309],19, C_text("chicken.memory#free"));
lf[310]=C_h_intern(&lf[310],33, C_text("chicken.memory#pointer-vector-ref"));
lf[311]=C_h_intern(&lf[311],36, C_text("chicken.memory#pointer-vector-length"));
lf[314]=C_h_intern(&lf[314],3, C_text("map"));
lf[315]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\075\000"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\143\141\156\156\157\164\040\157\160\145\156\040\160\151\160\145\000"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\050\160\151\160\145\051\000"));
lf[318]=C_h_intern(&lf[318],15, C_text("open-input-pipe"));
lf[319]=C_h_intern_kw(&lf[319],4, C_text("text"));
lf[320]=C_h_intern_kw(&lf[320],6, C_text("binary"));
lf[321]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\151\154\154\145\147\141\154\040\151\156\160\165\164\057\157\165\164\160\165\164\040\155\157\144\145\040\163\160\145\143\151\146\151\145\162\000"));
lf[322]=C_h_intern(&lf[322],16, C_text("open-output-pipe"));
lf[323]=C_h_intern(&lf[323],16, C_text("close-input-pipe"));
lf[324]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\145\162\162\157\162\040\167\150\151\154\145\040\143\154\157\163\151\156\147\040\160\151\160\145\000"));
lf[325]=C_h_intern(&lf[325],17, C_text("close-output-pipe"));
lf[326]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\145\162\162\157\162\040\167\150\151\154\145\040\143\154\157\163\151\156\147\040\160\151\160\145\000"));
lf[327]=C_h_intern(&lf[327],20, C_text("##sys#standard-input"));
lf[328]=C_h_intern(&lf[328],13, C_text("scheme#values"));
lf[329]=C_h_intern(&lf[329],18, C_text("##sys#dynamic-wind"));
lf[330]=C_h_intern(&lf[330],21, C_text("##sys#standard-output"));
lf[331]=C_h_intern(&lf[331],23, C_text("##sys#file-nonblocking!"));
lf[332]=C_h_intern(&lf[332],21, C_text("##sys#file-select-one"));
lf[333]=C_h_intern(&lf[333],12, C_text("file-control"));
lf[334]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\143\141\156\156\157\164\040\143\157\156\164\162\157\154\040\146\151\154\145\000"));
lf[335]=C_h_intern(&lf[335],9, C_text("file-open"));
lf[336]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\143\141\156\156\157\164\040\157\160\145\156\040\146\151\154\145\000"));
lf[337]=C_h_intern(&lf[337],10, C_text("file-close"));
lf[338]=C_h_intern(&lf[338],24, C_text("##sys#dispatch-interrupt"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\143\141\156\156\157\164\040\143\154\157\163\145\040\146\151\154\145\000"));
lf[340]=C_h_intern(&lf[340],9, C_text("file-read"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\162\145\141\144\040\146\162\157\155\040\146\151\154\145\000"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\142\171\164\145\166\145\143\164\157\162\000"));
lf[343]=C_h_intern(&lf[343],10, C_text("file-write"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\143\141\156\156\157\164\040\167\162\151\164\145\040\164\157\040\146\151\154\145\000"));
lf[345]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\142\171\164\145\166\145\143\164\157\162\000"));
lf[346]=C_h_intern(&lf[346],12, C_text("file-mkstemp"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\143\141\156\156\157\164\040\143\162\145\141\164\145\040\164\145\155\160\157\162\141\162\171\040\146\151\154\145\000"));
lf[348]=C_h_intern(&lf[348],11, C_text("file-select"));
lf[349]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\146\141\151\154\145\144\000"));
lf[350]=C_h_intern(&lf[350],18, C_text("##sys#fast-reverse"));
lf[351]=C_h_intern(&lf[351],21, C_text("scheme#inexact->exact"));
lf[352]=C_h_intern(&lf[352],15, C_text("scheme#truncate"));
lf[353]=C_h_intern(&lf[353],10, C_text("scheme#max"));
lf[354]=C_h_intern(&lf[354],11, C_text("create-pipe"));
lf[355]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\143\141\156\156\157\164\040\143\162\145\141\164\145\040\160\151\160\145\000"));
lf[356]=C_h_intern(&lf[356],16, C_text("set-signal-mask!"));
lf[357]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\143\141\156\156\157\164\040\163\145\164\040\163\151\147\156\141\154\040\155\141\163\153\000"));
lf[358]=C_h_intern(&lf[358],14, C_text("signal-masked?"));
lf[359]=C_h_intern(&lf[359],12, C_text("signal-mask!"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\143\141\156\156\157\164\040\142\154\157\143\153\040\163\151\147\156\141\154\000"));
lf[361]=C_h_intern(&lf[361],14, C_text("signal-unmask!"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\165\156\142\154\157\143\153\040\163\151\147\156\141\154\000"));
lf[363]=C_h_intern(&lf[363],13, C_text("scheme#vector"));
lf[364]=C_h_intern(&lf[364],11, C_text("scheme#list"));
lf[365]=C_h_intern(&lf[365],27, C_text("##sys#peek-nonnull-c-string"));
lf[366]=C_h_intern(&lf[366],16, C_text("user-information"));
lf[367]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\143\141\156\156\157\164\040\143\150\141\156\147\145\040\146\151\154\145\040\157\167\156\145\162\000"));
lf[368]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\146\151\170\156\165\155\054\040\160\157\162\164\040\157\162\040\163\164\162\151\156\147\000"));
lf[369]=C_h_intern(&lf[369],17, C_text("##sys#error/errno"));
lf[370]=C_h_intern(&lf[370],14, C_text("create-session"));
lf[371]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\143\162\145\141\164\145\040\163\145\163\163\151\157\156\000"));
lf[372]=C_h_intern(&lf[372],20, C_text("create-symbolic-link"));
lf[373]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\143\141\156\156\157\164\040\143\162\145\141\164\145\040\163\171\155\142\157\154\151\143\040\154\151\156\153\000"));
lf[374]=C_h_intern(&lf[374],24, C_text("##sys#read-symbolic-link"));
lf[375]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\143\141\156\156\157\164\040\162\145\141\144\040\163\171\155\142\157\154\151\143\040\154\151\156\153\000"));
lf[376]=C_h_intern(&lf[376],20, C_text("##sys#buffer->string"));
lf[377]=C_h_intern(&lf[377],18, C_text("read-symbolic-link"));
lf[378]=C_h_intern(&lf[378],36, C_text("chicken.pathname#decompose-directory"));
lf[379]=C_h_intern(&lf[379],30, C_text("chicken.pathname#make-pathname"));
lf[380]=C_h_intern(&lf[380],35, C_text("chicken.pathname#absolute-pathname?"));
lf[381]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\112\143\157\165\154\144\040\156\157\164\040\143\141\156\157\156\151\143\141\154\151\172\145\040\160\141\164\150\040\167\151\164\150\040\163\171\155\142\157\154\151\143\040\154\151\156\153\163\054\040\143\157\155\160\157\156\145\156\164\040\144\157\145\163\040\156\157\164\040\145\170\151\163\164\000"));
lf[382]=C_h_intern(&lf[382],18, C_text("##sys#file-exists?"));
lf[383]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[384]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[385]=C_h_intern(&lf[385],9, C_text("file-link"));
lf[386]=C_h_intern(&lf[386],9, C_text("hard-link"));
lf[387]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\143\157\165\154\144\040\156\157\164\040\143\162\145\141\164\145\040\150\141\162\144\040\154\151\156\153\000"));
lf[388]=C_h_intern(&lf[388],23, C_text("##sys#custom-input-port"));
lf[389]=C_h_intern(&lf[389],17, C_text("chicken.base#void"));
lf[390]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\143\141\156\156\157\164\040\163\145\154\145\143\164\000"));
lf[391]=C_h_intern(&lf[391],19, C_text("##sys#decode-buffer"));
lf[392]=C_h_intern(&lf[392],19, C_text("##sys#thread-yield!"));
lf[393]=C_h_intern(&lf[393],27, C_text("##sys#thread-block-for-i/o!"));
lf[394]=C_h_intern(&lf[394],20, C_text("##sys#current-thread"));
lf[395]=C_h_intern_kw(&lf[395],5, C_text("input"));
lf[396]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\143\141\156\156\157\164\040\162\145\141\144\000"));
lf[397]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\143\141\156\156\157\164\040\162\145\141\144\000"));
lf[398]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\143\141\156\156\157\164\040\143\154\157\163\145\000"));
lf[399]=C_h_intern(&lf[399],35, C_text("chicken.fixnum#most-positive-fixnum"));
lf[400]=C_h_intern(&lf[400],22, C_text("##sys#scan-buffer-line"));
lf[401]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[402]=C_h_intern(&lf[402],29, C_text("##sys#buffer->string/encoding"));
lf[403]=C_h_intern(&lf[403],28, C_text("chicken.port#make-input-port"));
lf[404]=C_h_intern_kw(&lf[404],9, C_text("peek-char"));
lf[405]=C_h_intern_kw(&lf[405],15, C_text("read-bytevector"));
lf[406]=C_h_intern_kw(&lf[406],9, C_text("read-line"));
lf[407]=C_h_intern_kw(&lf[407],13, C_text("read-buffered"));
lf[408]=C_h_intern(&lf[408],24, C_text("##sys#custom-output-port"));
lf[409]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\143\141\156\156\157\164\040\167\162\151\164\145\000"));
lf[410]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\143\141\156\156\157\164\040\143\154\157\163\145\000"));
lf[411]=C_h_intern(&lf[411],29, C_text("chicken.port#make-output-port"));
lf[412]=C_h_intern_kw(&lf[412],12, C_text("force-output"));
lf[413]=C_h_intern(&lf[413],13, C_text("file-truncate"));
lf[414]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\143\141\156\156\157\164\040\164\162\165\156\143\141\164\145\040\146\151\154\145\000"));
lf[415]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\151\156\166\141\154\151\144\040\146\151\154\145\000"));
lf[416]=C_h_intern(&lf[416],9, C_text("file-lock"));
lf[417]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\154\157\143\153\151\156\147\040\146\151\154\145\040\146\141\151\154\145\144\000"));
lf[418]=C_h_intern(&lf[418],18, C_text("file-lock/blocking"));
lf[419]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\154\157\143\153\151\156\147\040\146\151\154\145\040\146\141\151\154\145\144\000"));
lf[420]=C_h_intern(&lf[420],11, C_text("file-unlock"));
lf[421]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\165\156\154\157\143\153\151\156\147\040\146\151\154\145\040\146\141\151\154\145\144\000"));
lf[422]=C_h_intern(&lf[422],11, C_text("create-fifo"));
lf[423]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\143\141\156\156\157\164\040\143\162\145\141\164\145\040\106\111\106\117\000"));
lf[424]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\045\141\040\045\142\040\045\145\040\045\110\072\045\115\072\045\123\040\045\132\040\045\131\000"));
lf[425]=C_h_intern(&lf[425],12, C_text("string->time"));
lf[426]=C_h_intern(&lf[426],17, C_text("utc-time->seconds"));
lf[427]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\046\143\141\156\156\157\164\040\143\157\156\166\145\162\164\040\164\151\155\145\040\166\145\143\164\157\162\040\164\157\040\163\145\143\157\156\144\163\000"));
lf[428]=C_h_intern(&lf[428],12, C_text("process-fork"));
lf[429]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\143\141\156\156\157\164\040\143\162\145\141\164\145\040\143\150\151\154\144\040\160\162\157\143\145\163\163\000"));
lf[430]=C_h_intern(&lf[430],17, C_text("chicken.base#exit"));
lf[431]=C_h_intern(&lf[431],23, C_text("##sys#call-with-cthulhu"));
lf[432]=C_h_intern(&lf[432],24, C_text("##sys#kill-other-threads"));
lf[433]=C_h_intern(&lf[433],15, C_text("process-execute"));
lf[434]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\143\141\156\156\157\164\040\145\170\145\143\165\164\145\040\160\162\157\143\145\163\163\000"));
lf[435]=C_h_intern(&lf[435],14, C_text("process-signal"));
lf[436]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\143\157\165\154\144\040\156\157\164\040\163\145\156\144\040\163\151\147\156\141\154\040\164\157\040\160\162\157\143\145\163\163\000"));
lf[437]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\057\142\151\156\057\163\150\000"));
lf[438]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\143\000"));
lf[439]=C_h_intern(&lf[439],48, C_text("chicken.process-context#get-environment-variable"));
lf[440]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\123\110\105\114\114\000"));
lf[441]=C_h_intern(&lf[441],21, C_text("##sys#undefined-value"));
lf[442]=C_h_intern(&lf[442],37, C_text("chicken.condition#print-error-message"));
lf[443]=C_h_intern(&lf[443],20, C_text("##sys#standard-error"));
lf[445]=C_h_intern(&lf[445],7, C_text("process"));
lf[446]=C_h_intern(&lf[446],8, C_text("process*"));
lf[447]=C_h_intern(&lf[447],19, C_text("set-root-directory!"));
lf[448]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\165\156\141\142\154\145\040\164\157\040\143\150\141\156\147\145\040\162\157\157\164\040\144\151\162\145\143\164\157\162\171\000"));
lf[449]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\060\164\150\151\163\040\146\165\156\143\164\151\157\156\040\151\163\040\156\157\164\040\141\166\141\151\154\141\142\154\145\040\157\156\040\164\150\151\163\040\160\154\141\164\146\157\162\155\000"));
lf[450]=C_h_intern(&lf[450],14, C_text("chicken.errno#"));
lf[451]=C_h_intern(&lf[451],19, C_text("chicken.errno#errno"));
lf[452]=C_h_intern(&lf[452],11, C_text("##sys#errno"));
lf[453]=C_h_intern(&lf[453],24, C_text("chicken.errno#errno/2big"));
lf[454]=C_h_intern(&lf[454],25, C_text("chicken.errno#errno/acces"));
lf[455]=C_h_intern(&lf[455],25, C_text("chicken.errno#errno/again"));
lf[456]=C_h_intern(&lf[456],24, C_text("chicken.errno#errno/badf"));
lf[457]=C_h_intern(&lf[457],24, C_text("chicken.errno#errno/busy"));
lf[458]=C_h_intern(&lf[458],25, C_text("chicken.errno#errno/child"));
lf[459]=C_h_intern(&lf[459],26, C_text("chicken.errno#errno/deadlk"));
lf[460]=C_h_intern(&lf[460],23, C_text("chicken.errno#errno/dom"));
lf[461]=C_h_intern(&lf[461],25, C_text("chicken.errno#errno/exist"));
lf[462]=C_h_intern(&lf[462],25, C_text("chicken.errno#errno/fault"));
lf[463]=C_h_intern(&lf[463],24, C_text("chicken.errno#errno/fbig"));
lf[464]=C_h_intern(&lf[464],25, C_text("chicken.errno#errno/ilseq"));
lf[465]=C_h_intern(&lf[465],24, C_text("chicken.errno#errno/intr"));
lf[466]=C_h_intern(&lf[466],25, C_text("chicken.errno#errno/inval"));
lf[467]=C_h_intern(&lf[467],22, C_text("chicken.errno#errno/io"));
lf[468]=C_h_intern(&lf[468],25, C_text("chicken.errno#errno/isdir"));
lf[469]=C_h_intern(&lf[469],25, C_text("chicken.errno#errno/mfile"));
lf[470]=C_h_intern(&lf[470],25, C_text("chicken.errno#errno/mlink"));
lf[471]=C_h_intern(&lf[471],31, C_text("chicken.errno#errno/nametoolong"));
lf[472]=C_h_intern(&lf[472],25, C_text("chicken.errno#errno/nfile"));
lf[473]=C_h_intern(&lf[473],25, C_text("chicken.errno#errno/nodev"));
lf[474]=C_h_intern(&lf[474],25, C_text("chicken.errno#errno/noent"));
lf[475]=C_h_intern(&lf[475],26, C_text("chicken.errno#errno/noexec"));
lf[476]=C_h_intern(&lf[476],25, C_text("chicken.errno#errno/nolck"));
lf[477]=C_h_intern(&lf[477],25, C_text("chicken.errno#errno/nomem"));
lf[478]=C_h_intern(&lf[478],25, C_text("chicken.errno#errno/nospc"));
lf[479]=C_h_intern(&lf[479],25, C_text("chicken.errno#errno/nosys"));
lf[480]=C_h_intern(&lf[480],26, C_text("chicken.errno#errno/notdir"));
lf[481]=C_h_intern(&lf[481],28, C_text("chicken.errno#errno/notempty"));
lf[482]=C_h_intern(&lf[482],25, C_text("chicken.errno#errno/notty"));
lf[483]=C_h_intern(&lf[483],24, C_text("chicken.errno#errno/nxio"));
lf[484]=C_h_intern(&lf[484],24, C_text("chicken.errno#errno/perm"));
lf[485]=C_h_intern(&lf[485],24, C_text("chicken.errno#errno/pipe"));
lf[486]=C_h_intern(&lf[486],25, C_text("chicken.errno#errno/range"));
lf[487]=C_h_intern(&lf[487],24, C_text("chicken.errno#errno/rofs"));
lf[488]=C_h_intern(&lf[488],25, C_text("chicken.errno#errno/spipe"));
lf[489]=C_h_intern(&lf[489],24, C_text("chicken.errno#errno/srch"));
lf[490]=C_h_intern(&lf[490],30, C_text("chicken.errno#errno/wouldblock"));
lf[491]=C_h_intern(&lf[491],24, C_text("chicken.errno#errno/xdev"));
lf[492]=C_h_intern(&lf[492],16, C_text("process-group-id"));
lf[493]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\143\141\156\156\157\164\040\162\145\164\162\151\145\166\145\040\160\162\157\143\145\163\163\040\147\162\157\165\160\040\111\104\000"));
lf[494]=C_h_intern(&lf[494],13, C_text("process-group"));
lf[495]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\143\141\156\156\157\164\040\163\145\164\040\160\162\157\143\145\163\163\040\147\162\157\165\160\040\111\104\000"));
lf[496]=C_h_intern(&lf[496],31, C_text("chicken.base#getter-with-setter"));
lf[497]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\065\050\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\160\162\157\143\145\163\163\055\147\162\157\165\160\055\151\144\040\160\151\144\051\000"));
lf[498]=C_h_intern(&lf[498],26, C_text("current-effective-group-id"));
lf[499]=C_h_intern(&lf[499],26, C_text("effective-group-id!-setter"));
lf[500]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\143\141\156\156\157\164\040\163\145\164\040\145\146\146\145\143\164\151\166\145\040\147\162\157\165\160\040\111\104\000"));
lf[501]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\073\050\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\165\162\162\145\156\164\055\145\146\146\145\143\164\151\166\145\055\147\162\157\165\160\055\151\144\051\000"));
lf[502]=C_h_intern(&lf[502],16, C_text("current-group-id"));
lf[503]=C_h_intern(&lf[503],24, C_text("current-group-id!-setter"));
lf[504]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\143\141\156\156\157\164\040\163\145\164\040\147\162\157\165\160\040\111\104\000"));
lf[505]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\050\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\165\162\162\145\156\164\055\147\162\157\165\160\055\151\144\051\000"));
lf[506]=C_h_intern(&lf[506],25, C_text("current-effective-user-id"));
lf[507]=C_h_intern(&lf[507],25, C_text("effective-user-id!-setter"));
lf[508]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\143\141\156\156\157\164\040\163\145\164\040\145\146\146\145\143\164\151\166\145\040\165\163\145\162\040\111\104\000"));
lf[509]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\072\050\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\165\162\162\145\156\164\055\145\146\146\145\143\164\151\166\145\055\165\163\145\162\055\151\144\051\000"));
lf[510]=C_h_intern(&lf[510],15, C_text("current-user-id"));
lf[511]=C_h_intern(&lf[511],23, C_text("current-user-id!-setter"));
lf[512]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\143\141\156\156\157\164\040\163\145\164\040\165\163\145\162\040\111\104\000"));
lf[513]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\060\050\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\165\162\162\145\156\164\055\165\163\145\162\055\151\144\051\000"));
lf[514]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\050\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\055\155\141\163\153\051\000"));
lf[515]=C_h_intern(&lf[515],14, C_text("signal-handler"));
lf[516]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\050\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\055\150\141\156\144\154\145\162\040\163\151\147\051\000"));
lf[517]=C_h_intern(&lf[517],18, C_text("file-creation-mode"));
lf[518]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\055\050\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\143\162\145\141\164\151\157\156\055\155\157\144\145\040\155\157\144\145\051\000"));
lf[519]=C_h_intern(&lf[519],13, C_text("file-position"));
lf[520]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\046\143\141\156\156\157\164\040\162\145\164\162\151\145\166\145\040\146\151\154\145\040\160\157\163\151\164\151\157\156\040\157\146\040\160\157\162\164\000"));
lf[521]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\151\156\166\141\154\151\144\040\146\151\154\145\000"));
lf[522]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\050\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\160\157\163\151\164\151\157\156\040\160\157\162\164\051\000"));
lf[523]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\050\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\160\145\162\155\151\163\163\151\157\156\163\040\146\051\000"));
lf[524]=C_h_intern(&lf[524],10, C_text("file-group"));
lf[525]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\050\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\147\162\157\165\160\040\146\051\000"));
lf[526]=C_h_intern(&lf[526],10, C_text("file-owner"));
lf[527]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\050\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\157\167\156\145\162\040\146\051\000"));
C_register_lf2(lf,528,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2927,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_scheduler_toplevel(2,av2);}}

/* va9689 in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void va9689(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(114,0,4)))){
C_save_and_reclaim_args((void *)trva9689,2,t0,t1);}
a=C_alloc(114);
t2=C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IWOTH));
t3=C_mutate((C_word*)lf[19]+1 /* (set! chicken.file.posix#file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5348,a[2]=t2,a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[11]+1 /* (set! chicken.file.posix#file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5380,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[23]+1 /* (set! chicken.file.posix#file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5411,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[27]+1 /* (set! chicken.file.posix#file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5448,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[18]+1 /* (set! chicken.file.posix#file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5482,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[24]+1 /* (set! chicken.file.posix#file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5514,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[116]+1 /* (set! chicken.process#create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5893,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t10=C_set_block_item(lf[166] /* chicken.process.signal#signal/term */,0,C_fix((C_word)SIGTERM));
t11=C_set_block_item(lf[160] /* chicken.process.signal#signal/kill */,0,C_fix((C_word)SIGKILL));
t12=C_set_block_item(lf[158] /* chicken.process.signal#signal/int */,0,C_fix((C_word)SIGINT));
t13=C_set_block_item(lf[156] /* chicken.process.signal#signal/hup */,0,C_fix((C_word)SIGHUP));
t14=C_set_block_item(lf[155] /* chicken.process.signal#signal/fpe */,0,C_fix((C_word)SIGFPE));
t15=C_set_block_item(lf[157] /* chicken.process.signal#signal/ill */,0,C_fix((C_word)SIGILL));
t16=C_set_block_item(lf[164] /* chicken.process.signal#signal/segv */,0,C_fix((C_word)SIGSEGV));
t17=C_set_block_item(lf[149] /* chicken.process.signal#signal/abrt */,0,C_fix((C_word)SIGABRT));
t18=C_set_block_item(lf[167] /* chicken.process.signal#signal/trap */,0,C_fix((C_word)SIGTRAP));
t19=C_set_block_item(lf[163] /* chicken.process.signal#signal/quit */,0,C_fix((C_word)SIGQUIT));
t20=C_set_block_item(lf[150] /* chicken.process.signal#signal/alrm */,0,C_fix((C_word)SIGALRM));
t21=C_set_block_item(lf[172] /* chicken.process.signal#signal/vtalrm */,0,C_fix((C_word)SIGVTALRM));
t22=C_set_block_item(lf[162] /* chicken.process.signal#signal/prof */,0,C_fix((C_word)SIGPROF));
t23=C_set_block_item(lf[159] /* chicken.process.signal#signal/io */,0,C_fix((C_word)SIGIO));
t24=C_set_block_item(lf[169] /* chicken.process.signal#signal/urg */,0,C_fix((C_word)SIGURG));
t25=C_set_block_item(lf[153] /* chicken.process.signal#signal/chld */,0,C_fix((C_word)SIGCHLD));
t26=C_set_block_item(lf[154] /* chicken.process.signal#signal/cont */,0,C_fix((C_word)SIGCONT));
t27=C_set_block_item(lf[165] /* chicken.process.signal#signal/stop */,0,C_fix((C_word)SIGSTOP));
t28=C_set_block_item(lf[168] /* chicken.process.signal#signal/tstp */,0,C_fix((C_word)SIGTSTP));
t29=C_set_block_item(lf[161] /* chicken.process.signal#signal/pipe */,0,C_fix((C_word)SIGPIPE));
t30=C_set_block_item(lf[174] /* chicken.process.signal#signal/xcpu */,0,C_fix((C_word)SIGXCPU));
t31=C_set_block_item(lf[175] /* chicken.process.signal#signal/xfsz */,0,C_fix((C_word)SIGXFSZ));
t32=C_set_block_item(lf[170] /* chicken.process.signal#signal/usr1 */,0,C_fix((C_word)SIGUSR1));
t33=C_set_block_item(lf[171] /* chicken.process.signal#signal/usr2 */,0,C_fix((C_word)SIGUSR2));
t34=C_set_block_item(lf[173] /* chicken.process.signal#signal/winch */,0,C_fix((C_word)SIGWINCH));
t35=C_set_block_item(lf[152] /* chicken.process.signal#signal/bus */,0,C_fix((C_word)SIGBUS));
t36=C_set_block_item(lf[151] /* chicken.process.signal#signal/break */,0,C_fix(0));
t37=C_a_i_list(&a,26,*((C_word*)lf[166]+1),*((C_word*)lf[160]+1),*((C_word*)lf[158]+1),*((C_word*)lf[156]+1),*((C_word*)lf[155]+1),*((C_word*)lf[157]+1),*((C_word*)lf[164]+1),*((C_word*)lf[149]+1),*((C_word*)lf[167]+1),*((C_word*)lf[163]+1),*((C_word*)lf[150]+1),*((C_word*)lf[172]+1),*((C_word*)lf[162]+1),*((C_word*)lf[159]+1),*((C_word*)lf[169]+1),*((C_word*)lf[153]+1),*((C_word*)lf[154]+1),*((C_word*)lf[165]+1),*((C_word*)lf[168]+1),*((C_word*)lf[161]+1),*((C_word*)lf[174]+1),*((C_word*)lf[175]+1),*((C_word*)lf[170]+1),*((C_word*)lf[171]+1),*((C_word*)lf[173]+1),*((C_word*)lf[152]+1));
t38=C_mutate((C_word*)lf[176]+1 /* (set! chicken.process.signal#signals-list ...) */,t37);
t39=C_mutate((C_word*)lf[140]+1 /* (set! chicken.process.signal#set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5949,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp));
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5998,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8601,a[2]=((C_word)li231),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm:571: chicken.base#getter-with-setter */
t42=*((C_word*)lf[496]+1);{
C_word av2[5];
av2[0]=t42;
av2[1]=t40;
av2[2]=t41;
av2[3]=*((C_word*)lf[140]+1);
av2[4]=lf[514];
((C_proc)(void*)(*((C_word*)t42+1)))(5,av2);}}

/* va9691 in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void va9691(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva9691,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va9689(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IROTH)));}

/* va9693 in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void va9693(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva9693,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va9691(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IWGRP)));}

/* va9695 in k4237 in k4002 in k3714 in k3497 in k3493 in k3489 in k2940 in k2937 in k2934 in k2931 in k2928 in k2925 */
static void va9695(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva9695,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va9693(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IRGRP)));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[510] = {
{C_text("f9700:posix_2escm"),(void*)f9700},
{C_text("f9704:posix_2escm"),(void*)f9704},
{C_text("f9752:posix_2escm"),(void*)f9752},
{C_text("f9758:posix_2escm"),(void*)f9758},
{C_text("f_2927:posix_2escm"),(void*)f_2927},
{C_text("f_2930:posix_2escm"),(void*)f_2930},
{C_text("f_2933:posix_2escm"),(void*)f_2933},
{C_text("f_2936:posix_2escm"),(void*)f_2936},
{C_text("f_2939:posix_2escm"),(void*)f_2939},
{C_text("f_2942:posix_2escm"),(void*)f_2942},
{C_text("f_3027:posix_2escm"),(void*)f_3027},
{C_text("f_3044:posix_2escm"),(void*)f_3044},
{C_text("f_3046:posix_2escm"),(void*)f_3046},
{C_text("f_3050:posix_2escm"),(void*)f_3050},
{C_text("f_3062:posix_2escm"),(void*)f_3062},
{C_text("f_3066:posix_2escm"),(void*)f_3066},
{C_text("f_3076:posix_2escm"),(void*)f_3076},
{C_text("f_3097:posix_2escm"),(void*)f_3097},
{C_text("f_3100:posix_2escm"),(void*)f_3100},
{C_text("f_3111:posix_2escm"),(void*)f_3111},
{C_text("f_3117:posix_2escm"),(void*)f_3117},
{C_text("f_3142:posix_2escm"),(void*)f_3142},
{C_text("f_3259:posix_2escm"),(void*)f_3259},
{C_text("f_3263:posix_2escm"),(void*)f_3263},
{C_text("f_3270:posix_2escm"),(void*)f_3270},
{C_text("f_3274:posix_2escm"),(void*)f_3274},
{C_text("f_3277:posix_2escm"),(void*)f_3277},
{C_text("f_3281:posix_2escm"),(void*)f_3281},
{C_text("f_3302:posix_2escm"),(void*)f_3302},
{C_text("f_3306:posix_2escm"),(void*)f_3306},
{C_text("f_3315:posix_2escm"),(void*)f_3315},
{C_text("f_3323:posix_2escm"),(void*)f_3323},
{C_text("f_3330:posix_2escm"),(void*)f_3330},
{C_text("f_3341:posix_2escm"),(void*)f_3341},
{C_text("f_3348:posix_2escm"),(void*)f_3348},
{C_text("f_3366:posix_2escm"),(void*)f_3366},
{C_text("f_3370:posix_2escm"),(void*)f_3370},
{C_text("f_3380:posix_2escm"),(void*)f_3380},
{C_text("f_3385:posix_2escm"),(void*)f_3385},
{C_text("f_3389:posix_2escm"),(void*)f_3389},
{C_text("f_3391:posix_2escm"),(void*)f_3391},
{C_text("f_3395:posix_2escm"),(void*)f_3395},
{C_text("f_3397:posix_2escm"),(void*)f_3397},
{C_text("f_3401:posix_2escm"),(void*)f_3401},
{C_text("f_3403:posix_2escm"),(void*)f_3403},
{C_text("f_3407:posix_2escm"),(void*)f_3407},
{C_text("f_3419:posix_2escm"),(void*)f_3419},
{C_text("f_3422:posix_2escm"),(void*)f_3422},
{C_text("f_3471:posix_2escm"),(void*)f_3471},
{C_text("f_3475:posix_2escm"),(void*)f_3475},
{C_text("f_3477:posix_2escm"),(void*)f_3477},
{C_text("f_3483:posix_2escm"),(void*)f_3483},
{C_text("f_3491:posix_2escm"),(void*)f_3491},
{C_text("f_3495:posix_2escm"),(void*)f_3495},
{C_text("f_3499:posix_2escm"),(void*)f_3499},
{C_text("f_3501:posix_2escm"),(void*)f_3501},
{C_text("f_3520:posix_2escm"),(void*)f_3520},
{C_text("f_3588:posix_2escm"),(void*)f_3588},
{C_text("f_3596:posix_2escm"),(void*)f_3596},
{C_text("f_3598:posix_2escm"),(void*)f_3598},
{C_text("f_3606:posix_2escm"),(void*)f_3606},
{C_text("f_3608:posix_2escm"),(void*)f_3608},
{C_text("f_3616:posix_2escm"),(void*)f_3616},
{C_text("f_3618:posix_2escm"),(void*)f_3618},
{C_text("f_3626:posix_2escm"),(void*)f_3626},
{C_text("f_3628:posix_2escm"),(void*)f_3628},
{C_text("f_3636:posix_2escm"),(void*)f_3636},
{C_text("f_3638:posix_2escm"),(void*)f_3638},
{C_text("f_3646:posix_2escm"),(void*)f_3646},
{C_text("f_3648:posix_2escm"),(void*)f_3648},
{C_text("f_3656:posix_2escm"),(void*)f_3656},
{C_text("f_3661:posix_2escm"),(void*)f_3661},
{C_text("f_3677:posix_2escm"),(void*)f_3677},
{C_text("f_3683:posix_2escm"),(void*)f_3683},
{C_text("f_3716:posix_2escm"),(void*)f_3716},
{C_text("f_3744:posix_2escm"),(void*)f_3744},
{C_text("f_3752:posix_2escm"),(void*)f_3752},
{C_text("f_3777:posix_2escm"),(void*)f_3777},
{C_text("f_3790:posix_2escm"),(void*)f_3790},
{C_text("f_3799:posix_2escm"),(void*)f_3799},
{C_text("f_3823:posix_2escm"),(void*)f_3823},
{C_text("f_3849:posix_2escm"),(void*)f_3849},
{C_text("f_3873:posix_2escm"),(void*)f_3873},
{C_text("f_3899:posix_2escm"),(void*)f_3899},
{C_text("f_3915:posix_2escm"),(void*)f_3915},
{C_text("f_3924:posix_2escm"),(void*)f_3924},
{C_text("f_3938:posix_2escm"),(void*)f_3938},
{C_text("f_3944:posix_2escm"),(void*)f_3944},
{C_text("f_3951:posix_2escm"),(void*)f_3951},
{C_text("f_3954:posix_2escm"),(void*)f_3954},
{C_text("f_3971:posix_2escm"),(void*)f_3971},
{C_text("f_3974:posix_2escm"),(void*)f_3974},
{C_text("f_3981:posix_2escm"),(void*)f_3981},
{C_text("f_3990:posix_2escm"),(void*)f_3990},
{C_text("f_4004:posix_2escm"),(void*)f_4004},
{C_text("f_4007:posix_2escm"),(void*)f_4007},
{C_text("f_4026:posix_2escm"),(void*)f_4026},
{C_text("f_4030:posix_2escm"),(void*)f_4030},
{C_text("f_4033:posix_2escm"),(void*)f_4033},
{C_text("f_4047:posix_2escm"),(void*)f_4047},
{C_text("f_4051:posix_2escm"),(void*)f_4051},
{C_text("f_4054:posix_2escm"),(void*)f_4054},
{C_text("f_4079:posix_2escm"),(void*)f_4079},
{C_text("f_4083:posix_2escm"),(void*)f_4083},
{C_text("f_4086:posix_2escm"),(void*)f_4086},
{C_text("f_4089:posix_2escm"),(void*)f_4089},
{C_text("f_4117:posix_2escm"),(void*)f_4117},
{C_text("f_4121:posix_2escm"),(void*)f_4121},
{C_text("f_4125:posix_2escm"),(void*)f_4125},
{C_text("f_4162:posix_2escm"),(void*)f_4162},
{C_text("f_4169:posix_2escm"),(void*)f_4169},
{C_text("f_4178:posix_2escm"),(void*)f_4178},
{C_text("f_4188:posix_2escm"),(void*)f_4188},
{C_text("f_4192:posix_2escm"),(void*)f_4192},
{C_text("f_4195:posix_2escm"),(void*)f_4195},
{C_text("f_4216:posix_2escm"),(void*)f_4216},
{C_text("f_4224:posix_2escm"),(void*)f_4224},
{C_text("f_4239:posix_2escm"),(void*)f_4239},
{C_text("f_4241:posix_2escm"),(void*)f_4241},
{C_text("f_4245:posix_2escm"),(void*)f_4245},
{C_text("f_4246:posix_2escm"),(void*)f_4246},
{C_text("f_4255:posix_2escm"),(void*)f_4255},
{C_text("f_4262:posix_2escm"),(void*)f_4262},
{C_text("f_4263:posix_2escm"),(void*)f_4263},
{C_text("f_4284:posix_2escm"),(void*)f_4284},
{C_text("f_4294:posix_2escm"),(void*)f_4294},
{C_text("f_4307:posix_2escm"),(void*)f_4307},
{C_text("f_4316:posix_2escm"),(void*)f_4316},
{C_text("f_4333:posix_2escm"),(void*)f_4333},
{C_text("f_4348:posix_2escm"),(void*)f_4348},
{C_text("f_4366:posix_2escm"),(void*)f_4366},
{C_text("f_4384:posix_2escm"),(void*)f_4384},
{C_text("f_4402:posix_2escm"),(void*)f_4402},
{C_text("f_4420:posix_2escm"),(void*)f_4420},
{C_text("f_4438:posix_2escm"),(void*)f_4438},
{C_text("f_4495:posix_2escm"),(void*)f_4495},
{C_text("f_4527:posix_2escm"),(void*)f_4527},
{C_text("f_4533:posix_2escm"),(void*)f_4533},
{C_text("f_4552:posix_2escm"),(void*)f_4552},
{C_text("f_4570:posix_2escm"),(void*)f_4570},
{C_text("f_4578:posix_2escm"),(void*)f_4578},
{C_text("f_4584:posix_2escm"),(void*)f_4584},
{C_text("f_4606:posix_2escm"),(void*)f_4606},
{C_text("f_4612:posix_2escm"),(void*)f_4612},
{C_text("f_4621:posix_2escm"),(void*)f_4621},
{C_text("f_4669:posix_2escm"),(void*)f_4669},
{C_text("f_4677:posix_2escm"),(void*)f_4677},
{C_text("f_4680:posix_2escm"),(void*)f_4680},
{C_text("f_4685:posix_2escm"),(void*)f_4685},
{C_text("f_4691:posix_2escm"),(void*)f_4691},
{C_text("f_4697:posix_2escm"),(void*)f_4697},
{C_text("f_4701:posix_2escm"),(void*)f_4701},
{C_text("f_4706:posix_2escm"),(void*)f_4706},
{C_text("f_4708:posix_2escm"),(void*)f_4708},
{C_text("f_4712:posix_2escm"),(void*)f_4712},
{C_text("f_4714:posix_2escm"),(void*)f_4714},
{C_text("f_4730:posix_2escm"),(void*)f_4730},
{C_text("f_4736:posix_2escm"),(void*)f_4736},
{C_text("f_4739:posix_2escm"),(void*)f_4739},
{C_text("f_4755:posix_2escm"),(void*)f_4755},
{C_text("f_4765:posix_2escm"),(void*)f_4765},
{C_text("f_4771:posix_2escm"),(void*)f_4771},
{C_text("f_4782:posix_2escm"),(void*)f_4782},
{C_text("f_4786:posix_2escm"),(void*)f_4786},
{C_text("f_4790:posix_2escm"),(void*)f_4790},
{C_text("f_4795:posix_2escm"),(void*)f_4795},
{C_text("f_4805:posix_2escm"),(void*)f_4805},
{C_text("f_4808:posix_2escm"),(void*)f_4808},
{C_text("f_4820:posix_2escm"),(void*)f_4820},
{C_text("f_4825:posix_2escm"),(void*)f_4825},
{C_text("f_4844:posix_2escm"),(void*)f_4844},
{C_text("f_4867:posix_2escm"),(void*)f_4867},
{C_text("f_4869:posix_2escm"),(void*)f_4869},
{C_text("f_4876:posix_2escm"),(void*)f_4876},
{C_text("f_4879:posix_2escm"),(void*)f_4879},
{C_text("f_4884:posix_2escm"),(void*)f_4884},
{C_text("f_4890:posix_2escm"),(void*)f_4890},
{C_text("f_4896:posix_2escm"),(void*)f_4896},
{C_text("f_4900:posix_2escm"),(void*)f_4900},
{C_text("f_4903:posix_2escm"),(void*)f_4903},
{C_text("f_4911:posix_2escm"),(void*)f_4911},
{C_text("f_4917:posix_2escm"),(void*)f_4917},
{C_text("f_4921:posix_2escm"),(void*)f_4921},
{C_text("f_4928:posix_2escm"),(void*)f_4928},
{C_text("f_4931:posix_2escm"),(void*)f_4931},
{C_text("f_4935:posix_2escm"),(void*)f_4935},
{C_text("f_4956:posix_2escm"),(void*)f_4956},
{C_text("f_4958:posix_2escm"),(void*)f_4958},
{C_text("f_4983:posix_2escm"),(void*)f_4983},
{C_text("f_4992:posix_2escm"),(void*)f_4992},
{C_text("f_4998:posix_2escm"),(void*)f_4998},
{C_text("f_5023:posix_2escm"),(void*)f_5023},
{C_text("f_5036:posix_2escm"),(void*)f_5036},
{C_text("f_5042:posix_2escm"),(void*)f_5042},
{C_text("f_5056:posix_2escm"),(void*)f_5056},
{C_text("f_5063:posix_2escm"),(void*)f_5063},
{C_text("f_5073:posix_2escm"),(void*)f_5073},
{C_text("f_5082:posix_2escm"),(void*)f_5082},
{C_text("f_5096:posix_2escm"),(void*)f_5096},
{C_text("f_5103:posix_2escm"),(void*)f_5103},
{C_text("f_5113:posix_2escm"),(void*)f_5113},
{C_text("f_5122:posix_2escm"),(void*)f_5122},
{C_text("f_5129:posix_2escm"),(void*)f_5129},
{C_text("f_5137:posix_2escm"),(void*)f_5137},
{C_text("f_5144:posix_2escm"),(void*)f_5144},
{C_text("f_5152:posix_2escm"),(void*)f_5152},
{C_text("f_5156:posix_2escm"),(void*)f_5156},
{C_text("f_5161:posix_2escm"),(void*)f_5161},
{C_text("f_5166:posix_2escm"),(void*)f_5166},
{C_text("f_5172:posix_2escm"),(void*)f_5172},
{C_text("f_5176:posix_2escm"),(void*)f_5176},
{C_text("f_5181:posix_2escm"),(void*)f_5181},
{C_text("f_5186:posix_2escm"),(void*)f_5186},
{C_text("f_5190:posix_2escm"),(void*)f_5190},
{C_text("f_5195:posix_2escm"),(void*)f_5195},
{C_text("f_5201:posix_2escm"),(void*)f_5201},
{C_text("f_5205:posix_2escm"),(void*)f_5205},
{C_text("f_5210:posix_2escm"),(void*)f_5210},
{C_text("f_5214:posix_2escm"),(void*)f_5214},
{C_text("f_5219:posix_2escm"),(void*)f_5219},
{C_text("f_5225:posix_2escm"),(void*)f_5225},
{C_text("f_5229:posix_2escm"),(void*)f_5229},
{C_text("f_5234:posix_2escm"),(void*)f_5234},
{C_text("f_5238:posix_2escm"),(void*)f_5238},
{C_text("f_5243:posix_2escm"),(void*)f_5243},
{C_text("f_5248:posix_2escm"),(void*)f_5248},
{C_text("f_5254:posix_2escm"),(void*)f_5254},
{C_text("f_5258:posix_2escm"),(void*)f_5258},
{C_text("f_5263:posix_2escm"),(void*)f_5263},
{C_text("f_5268:posix_2escm"),(void*)f_5268},
{C_text("f_5275:posix_2escm"),(void*)f_5275},
{C_text("f_5315:posix_2escm"),(void*)f_5315},
{C_text("f_5348:posix_2escm"),(void*)f_5348},
{C_text("f_5365:posix_2escm"),(void*)f_5365},
{C_text("f_5368:posix_2escm"),(void*)f_5368},
{C_text("f_5380:posix_2escm"),(void*)f_5380},
{C_text("f_5389:posix_2escm"),(void*)f_5389},
{C_text("f_5411:posix_2escm"),(void*)f_5411},
{C_text("f_5421:posix_2escm"),(void*)f_5421},
{C_text("f_5424:posix_2escm"),(void*)f_5424},
{C_text("f_5427:posix_2escm"),(void*)f_5427},
{C_text("f_5448:posix_2escm"),(void*)f_5448},
{C_text("f_5455:posix_2escm"),(void*)f_5455},
{C_text("f_5464:posix_2escm"),(void*)f_5464},
{C_text("f_5482:posix_2escm"),(void*)f_5482},
{C_text("f_5489:posix_2escm"),(void*)f_5489},
{C_text("f_5495:posix_2escm"),(void*)f_5495},
{C_text("f_5502:posix_2escm"),(void*)f_5502},
{C_text("f_5514:posix_2escm"),(void*)f_5514},
{C_text("f_5521:posix_2escm"),(void*)f_5521},
{C_text("f_5524:posix_2escm"),(void*)f_5524},
{C_text("f_5532:posix_2escm"),(void*)f_5532},
{C_text("f_5593:posix_2escm"),(void*)f_5593},
{C_text("f_5596:posix_2escm"),(void*)f_5596},
{C_text("f_5603:posix_2escm"),(void*)f_5603},
{C_text("f_5633:posix_2escm"),(void*)f_5633},
{C_text("f_5692:posix_2escm"),(void*)f_5692},
{C_text("f_5753:posix_2escm"),(void*)f_5753},
{C_text("f_5760:posix_2escm"),(void*)f_5760},
{C_text("f_5768:posix_2escm"),(void*)f_5768},
{C_text("f_5770:posix_2escm"),(void*)f_5770},
{C_text("f_5812:posix_2escm"),(void*)f_5812},
{C_text("f_5893:posix_2escm"),(void*)f_5893},
{C_text("f_5900:posix_2escm"),(void*)f_5900},
{C_text("f_5949:posix_2escm"),(void*)f_5949},
{C_text("f_5973:posix_2escm"),(void*)f_5973},
{C_text("f_5998:posix_2escm"),(void*)f_5998},
{C_text("f_6000:posix_2escm"),(void*)f_6000},
{C_text("f_6006:posix_2escm"),(void*)f_6006},
{C_text("f_6022:posix_2escm"),(void*)f_6022},
{C_text("f_6040:posix_2escm"),(void*)f_6040},
{C_text("f_6044:posix_2escm"),(void*)f_6044},
{C_text("f_6048:posix_2escm"),(void*)f_6048},
{C_text("f_6052:posix_2escm"),(void*)f_6052},
{C_text("f_6054:posix_2escm"),(void*)f_6054},
{C_text("f_6061:posix_2escm"),(void*)f_6061},
{C_text("f_6074:posix_2escm"),(void*)f_6074},
{C_text("f_6078:posix_2escm"),(void*)f_6078},
{C_text("f_6082:posix_2escm"),(void*)f_6082},
{C_text("f_6086:posix_2escm"),(void*)f_6086},
{C_text("f_6090:posix_2escm"),(void*)f_6090},
{C_text("f_6100:posix_2escm"),(void*)f_6100},
{C_text("f_6108:posix_2escm"),(void*)f_6108},
{C_text("f_6116:posix_2escm"),(void*)f_6116},
{C_text("f_6120:posix_2escm"),(void*)f_6120},
{C_text("f_6122:posix_2escm"),(void*)f_6122},
{C_text("f_6130:posix_2escm"),(void*)f_6130},
{C_text("f_6134:posix_2escm"),(void*)f_6134},
{C_text("f_6136:posix_2escm"),(void*)f_6136},
{C_text("f_6146:posix_2escm"),(void*)f_6146},
{C_text("f_6158:posix_2escm"),(void*)f_6158},
{C_text("f_6162:posix_2escm"),(void*)f_6162},
{C_text("f_6178:posix_2escm"),(void*)f_6178},
{C_text("f_6183:posix_2escm"),(void*)f_6183},
{C_text("f_6187:posix_2escm"),(void*)f_6187},
{C_text("f_6197:posix_2escm"),(void*)f_6197},
{C_text("f_6201:posix_2escm"),(void*)f_6201},
{C_text("f_6203:posix_2escm"),(void*)f_6203},
{C_text("f_6224:posix_2escm"),(void*)f_6224},
{C_text("f_6228:posix_2escm"),(void*)f_6228},
{C_text("f_6232:posix_2escm"),(void*)f_6232},
{C_text("f_6233:posix_2escm"),(void*)f_6233},
{C_text("f_6238:posix_2escm"),(void*)f_6238},
{C_text("f_6252:posix_2escm"),(void*)f_6252},
{C_text("f_6267:posix_2escm"),(void*)f_6267},
{C_text("f_6273:posix_2escm"),(void*)f_6273},
{C_text("f_6281:posix_2escm"),(void*)f_6281},
{C_text("f_6283:posix_2escm"),(void*)f_6283},
{C_text("f_6293:posix_2escm"),(void*)f_6293},
{C_text("f_6299:posix_2escm"),(void*)f_6299},
{C_text("f_6308:posix_2escm"),(void*)f_6308},
{C_text("f_6311:posix_2escm"),(void*)f_6311},
{C_text("f_6314:posix_2escm"),(void*)f_6314},
{C_text("f_6320:posix_2escm"),(void*)f_6320},
{C_text("f_6354:posix_2escm"),(void*)f_6354},
{C_text("f_6358:posix_2escm"),(void*)f_6358},
{C_text("f_6367:posix_2escm"),(void*)f_6367},
{C_text("f_6389:posix_2escm"),(void*)f_6389},
{C_text("f_6423:posix_2escm"),(void*)f_6423},
{C_text("f_6429:posix_2escm"),(void*)f_6429},
{C_text("f_6430:posix_2escm"),(void*)f_6430},
{C_text("f_6434:posix_2escm"),(void*)f_6434},
{C_text("f_6464:posix_2escm"),(void*)f_6464},
{C_text("f_6480:posix_2escm"),(void*)f_6480},
{C_text("f_6482:posix_2escm"),(void*)f_6482},
{C_text("f_6488:posix_2escm"),(void*)f_6488},
{C_text("f_6515:posix_2escm"),(void*)f_6515},
{C_text("f_6518:posix_2escm"),(void*)f_6518},
{C_text("f_6545:posix_2escm"),(void*)f_6545},
{C_text("f_6551:posix_2escm"),(void*)f_6551},
{C_text("f_6585:posix_2escm"),(void*)f_6585},
{C_text("f_6594:posix_2escm"),(void*)f_6594},
{C_text("f_6598:posix_2escm"),(void*)f_6598},
{C_text("f_6613:posix_2escm"),(void*)f_6613},
{C_text("f_6626:posix_2escm"),(void*)f_6626},
{C_text("f_6638:posix_2escm"),(void*)f_6638},
{C_text("f_6642:posix_2escm"),(void*)f_6642},
{C_text("f_6654:posix_2escm"),(void*)f_6654},
{C_text("f_6658:posix_2escm"),(void*)f_6658},
{C_text("f_6669:posix_2escm"),(void*)f_6669},
{C_text("f_6679:posix_2escm"),(void*)f_6679},
{C_text("f_6723:posix_2escm"),(void*)f_6723},
{C_text("f_6741:posix_2escm"),(void*)f_6741},
{C_text("f_6745:posix_2escm"),(void*)f_6745},
{C_text("f_6759:posix_2escm"),(void*)f_6759},
{C_text("f_6769:posix_2escm"),(void*)f_6769},
{C_text("f_6789:posix_2escm"),(void*)f_6789},
{C_text("f_6819:posix_2escm"),(void*)f_6819},
{C_text("f_6864:posix_2escm"),(void*)f_6864},
{C_text("f_6877:posix_2escm"),(void*)f_6877},
{C_text("f_6959:posix_2escm"),(void*)f_6959},
{C_text("f_6987:posix_2escm"),(void*)f_6987},
{C_text("f_6988:posix_2escm"),(void*)f_6988},
{C_text("f_6994:posix_2escm"),(void*)f_6994},
{C_text("f_7021:posix_2escm"),(void*)f_7021},
{C_text("f_7059:posix_2escm"),(void*)f_7059},
{C_text("f_7065:posix_2escm"),(void*)f_7065},
{C_text("f_7074:posix_2escm"),(void*)f_7074},
{C_text("f_7080:posix_2escm"),(void*)f_7080},
{C_text("f_7084:posix_2escm"),(void*)f_7084},
{C_text("f_7096:posix_2escm"),(void*)f_7096},
{C_text("f_7104:posix_2escm"),(void*)f_7104},
{C_text("f_7125:posix_2escm"),(void*)f_7125},
{C_text("f_7126:posix_2escm"),(void*)f_7126},
{C_text("f_7136:posix_2escm"),(void*)f_7136},
{C_text("f_7155:posix_2escm"),(void*)f_7155},
{C_text("f_7165:posix_2escm"),(void*)f_7165},
{C_text("f_7255:posix_2escm"),(void*)f_7255},
{C_text("f_7259:posix_2escm"),(void*)f_7259},
{C_text("f_7265:posix_2escm"),(void*)f_7265},
{C_text("f_7272:posix_2escm"),(void*)f_7272},
{C_text("f_7279:posix_2escm"),(void*)f_7279},
{C_text("f_7285:posix_2escm"),(void*)f_7285},
{C_text("f_7289:posix_2escm"),(void*)f_7289},
{C_text("f_7306:posix_2escm"),(void*)f_7306},
{C_text("f_7313:posix_2escm"),(void*)f_7313},
{C_text("f_7319:posix_2escm"),(void*)f_7319},
{C_text("f_7321:posix_2escm"),(void*)f_7321},
{C_text("f_7330:posix_2escm"),(void*)f_7330},
{C_text("f_7335:posix_2escm"),(void*)f_7335},
{C_text("f_7383:posix_2escm"),(void*)f_7383},
{C_text("f_7392:posix_2escm"),(void*)f_7392},
{C_text("f_7397:posix_2escm"),(void*)f_7397},
{C_text("f_7427:posix_2escm"),(void*)f_7427},
{C_text("f_7433:posix_2escm"),(void*)f_7433},
{C_text("f_7438:posix_2escm"),(void*)f_7438},
{C_text("f_7458:posix_2escm"),(void*)f_7458},
{C_text("f_7482:posix_2escm"),(void*)f_7482},
{C_text("f_7504:posix_2escm"),(void*)f_7504},
{C_text("f_7521:posix_2escm"),(void*)f_7521},
{C_text("f_7525:posix_2escm"),(void*)f_7525},
{C_text("f_7533:posix_2escm"),(void*)f_7533},
{C_text("f_7541:posix_2escm"),(void*)f_7541},
{C_text("f_7545:posix_2escm"),(void*)f_7545},
{C_text("f_7549:posix_2escm"),(void*)f_7549},
{C_text("f_7560:posix_2escm"),(void*)f_7560},
{C_text("f_7567:posix_2escm"),(void*)f_7567},
{C_text("f_7579:posix_2escm"),(void*)f_7579},
{C_text("f_7626:posix_2escm"),(void*)f_7626},
{C_text("f_7634:posix_2escm"),(void*)f_7634},
{C_text("f_7638:posix_2escm"),(void*)f_7638},
{C_text("f_7646:posix_2escm"),(void*)f_7646},
{C_text("f_7652:posix_2escm"),(void*)f_7652},
{C_text("f_7685:posix_2escm"),(void*)f_7685},
{C_text("f_7709:posix_2escm"),(void*)f_7709},
{C_text("f_7712:posix_2escm"),(void*)f_7712},
{C_text("f_7763:posix_2escm"),(void*)f_7763},
{C_text("f_7779:posix_2escm"),(void*)f_7779},
{C_text("f_7801:posix_2escm"),(void*)f_7801},
{C_text("f_7804:posix_2escm"),(void*)f_7804},
{C_text("f_7811:posix_2escm"),(void*)f_7811},
{C_text("f_7853:posix_2escm"),(void*)f_7853},
{C_text("f_7860:posix_2escm"),(void*)f_7860},
{C_text("f_7896:posix_2escm"),(void*)f_7896},
{C_text("f_7900:posix_2escm"),(void*)f_7900},
{C_text("f_7902:posix_2escm"),(void*)f_7902},
{C_text("f_7909:posix_2escm"),(void*)f_7909},
{C_text("f_7925:posix_2escm"),(void*)f_7925},
{C_text("f_7934:posix_2escm"),(void*)f_7934},
{C_text("f_7940:posix_2escm"),(void*)f_7940},
{C_text("f_7945:posix_2escm"),(void*)f_7945},
{C_text("f_7956:posix_2escm"),(void*)f_7956},
{C_text("f_7957:posix_2escm"),(void*)f_7957},
{C_text("f_7968:posix_2escm"),(void*)f_7968},
{C_text("f_7986:posix_2escm"),(void*)f_7986},
{C_text("f_7990:posix_2escm"),(void*)f_7990},
{C_text("f_7993:posix_2escm"),(void*)f_7993},
{C_text("f_7996:posix_2escm"),(void*)f_7996},
{C_text("f_8003:posix_2escm"),(void*)f_8003},
{C_text("f_8007:posix_2escm"),(void*)f_8007},
{C_text("f_8009:posix_2escm"),(void*)f_8009},
{C_text("f_8013:posix_2escm"),(void*)f_8013},
{C_text("f_8016:posix_2escm"),(void*)f_8016},
{C_text("f_8019:posix_2escm"),(void*)f_8019},
{C_text("f_8022:posix_2escm"),(void*)f_8022},
{C_text("f_8027:posix_2escm"),(void*)f_8027},
{C_text("f_8033:posix_2escm"),(void*)f_8033},
{C_text("f_8039:posix_2escm"),(void*)f_8039},
{C_text("f_8043:posix_2escm"),(void*)f_8043},
{C_text("f_8045:posix_2escm"),(void*)f_8045},
{C_text("f_8047:posix_2escm"),(void*)f_8047},
{C_text("f_8052:posix_2escm"),(void*)f_8052},
{C_text("f_8058:posix_2escm"),(void*)f_8058},
{C_text("f_8069:posix_2escm"),(void*)f_8069},
{C_text("f_8078:posix_2escm"),(void*)f_8078},
{C_text("f_8082:posix_2escm"),(void*)f_8082},
{C_text("f_8089:posix_2escm"),(void*)f_8089},
{C_text("f_8093:posix_2escm"),(void*)f_8093},
{C_text("f_8100:posix_2escm"),(void*)f_8100},
{C_text("f_8106:posix_2escm"),(void*)f_8106},
{C_text("f_8112:posix_2escm"),(void*)f_8112},
{C_text("f_8119:posix_2escm"),(void*)f_8119},
{C_text("f_8122:posix_2escm"),(void*)f_8122},
{C_text("f_8125:posix_2escm"),(void*)f_8125},
{C_text("f_8129:posix_2escm"),(void*)f_8129},
{C_text("f_8133:posix_2escm"),(void*)f_8133},
{C_text("f_8137:posix_2escm"),(void*)f_8137},
{C_text("f_8141:posix_2escm"),(void*)f_8141},
{C_text("f_8145:posix_2escm"),(void*)f_8145},
{C_text("f_8149:posix_2escm"),(void*)f_8149},
{C_text("f_8162:posix_2escm"),(void*)f_8162},
{C_text("f_8164:posix_2escm"),(void*)f_8164},
{C_text("f_8169:posix_2escm"),(void*)f_8169},
{C_text("f_8178:posix_2escm"),(void*)f_8178},
{C_text("f_8205:posix_2escm"),(void*)f_8205},
{C_text("f_8208:posix_2escm"),(void*)f_8208},
{C_text("f_8227:posix_2escm"),(void*)f_8227},
{C_text("f_8305:posix_2escm"),(void*)f_8305},
{C_text("f_8388:posix_2escm"),(void*)f_8388},
{C_text("f_8393:posix_2escm"),(void*)f_8393},
{C_text("f_8412:posix_2escm"),(void*)f_8412},
{C_text("f_8418:posix_2escm"),(void*)f_8418},
{C_text("f_8467:posix_2escm"),(void*)f_8467},
{C_text("f_8474:posix_2escm"),(void*)f_8474},
{C_text("f_8484:posix_2escm"),(void*)f_8484},
{C_text("f_8486:posix_2escm"),(void*)f_8486},
{C_text("f_8506:posix_2escm"),(void*)f_8506},
{C_text("f_8509:posix_2escm"),(void*)f_8509},
{C_text("f_8512:posix_2escm"),(void*)f_8512},
{C_text("f_8529:posix_2escm"),(void*)f_8529},
{C_text("f_8532:posix_2escm"),(void*)f_8532},
{C_text("f_8535:posix_2escm"),(void*)f_8535},
{C_text("f_8552:posix_2escm"),(void*)f_8552},
{C_text("f_8555:posix_2escm"),(void*)f_8555},
{C_text("f_8558:posix_2escm"),(void*)f_8558},
{C_text("f_8575:posix_2escm"),(void*)f_8575},
{C_text("f_8578:posix_2escm"),(void*)f_8578},
{C_text("f_8581:posix_2escm"),(void*)f_8581},
{C_text("f_8598:posix_2escm"),(void*)f_8598},
{C_text("f_8601:posix_2escm"),(void*)f_8601},
{C_text("f_8607:posix_2escm"),(void*)f_8607},
{C_text("f_8631:posix_2escm"),(void*)f_8631},
{C_text("f_8640:posix_2escm"),(void*)f_8640},
{C_text("f_8665:posix_2escm"),(void*)f_8665},
{C_text("f_8671:posix_2escm"),(void*)f_8671},
{C_text("f_8675:posix_2escm"),(void*)f_8675},
{C_text("f_8678:posix_2escm"),(void*)f_8678},
{C_text("f_8687:posix_2escm"),(void*)f_8687},
{C_text("f_8708:posix_2escm"),(void*)f_8708},
{C_text("f_8712:posix_2escm"),(void*)f_8712},
{C_text("f_8714:posix_2escm"),(void*)f_8714},
{C_text("f_8718:posix_2escm"),(void*)f_8718},
{C_text("f_8720:posix_2escm"),(void*)f_8720},
{C_text("f_8724:posix_2escm"),(void*)f_8724},
{C_text("toplevel:posix_2escm"),(void*)C_posix_toplevel},
{C_text("va9689:posix_2escm"),(void*)va9689},
{C_text("va9691:posix_2escm"),(void*)va9691},
{C_text("va9693:posix_2escm"),(void*)va9693},
{C_text("va9695:posix_2escm"),(void*)va9695},
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
o|hiding unexported module binding: chicken.posix#d 
o|hiding unexported module binding: chicken.posix#define-alias 
o|hiding unexported module binding: chicken.posix#define-unimplemented 
o|hiding unexported module binding: chicken.posix#set!-unimplemented 
o|hiding unexported module binding: chicken.posix#posix-error 
o|hiding unexported module binding: chicken.posix#stat-mode 
o|hiding unexported module binding: chicken.posix#stat 
o|hiding unexported module binding: chicken.posix#decode-seconds 
o|hiding unexported module binding: chicken.posix#check-time-vector 
o|hiding unexported module binding: chicken.posix#children 
o|hiding unexported module binding: chicken.posix#process 
o|hiding unexported module binding: chicken.posix#make-process 
o|hiding unexported module binding: chicken.posix#process? 
o|hiding unexported module binding: chicken.posix#process-id-set! 
o|hiding unexported module binding: chicken.posix#process-id 
o|hiding unexported module binding: chicken.posix#process-returned-normally?-set! 
o|hiding unexported module binding: chicken.posix#process-returned-normally? 
o|hiding unexported module binding: chicken.posix#process-input-port-set! 
o|hiding unexported module binding: chicken.posix#process-input-port 
o|hiding unexported module binding: chicken.posix#process-output-port-set! 
o|hiding unexported module binding: chicken.posix#process-output-port 
o|hiding unexported module binding: chicken.posix#process-error-port-set! 
o|hiding unexported module binding: chicken.posix#process-error-port 
o|hiding unexported module binding: chicken.posix#process-exit-status-set! 
o|hiding unexported module binding: chicken.posix#process-exit-status 
o|hiding unexported module binding: chicken.posix#get-pid 
o|hiding unexported module binding: chicken.posix#register-pid 
o|hiding unexported module binding: chicken.posix#drop-child 
o|hiding unexported module binding: chicken.posix#list->c-string-buffer 
o|hiding unexported module binding: chicken.posix#free-c-string-buffer 
o|hiding unexported module binding: chicken.posix#check-environment-list 
o|hiding unexported module binding: chicken.posix#call-with-exec-args 
o|hiding unexported module binding: chicken.posix#chown 
o|hiding unexported module binding: chicken.posix#c-string->allocated-pointer 
o|hiding unexported module binding: chicken.posix#process-wait-impl 
o|hiding unexported module binding: chicken.posix#shell-command 
o|hiding unexported module binding: chicken.posix#shell-command-arguments 
o|hiding unexported module binding: chicken.posix#process-impl 
S|applied compiler syntax:
S|  scheme#for-each		4
S|  scheme#map		2
o|eliminated procedure checks: 105 
o|specializations:
o|  1 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  2 (##sys#call-with-values (procedure () *) *)
o|  1 (chicken.base#add1 fixnum)
o|  3 (##sys#length list)
o|  13 (scheme#cdr pair)
o|  1 (scheme#zero? *)
o|  1 (##sys#check-open-port * *)
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  11 (scheme#car pair)
o|  5 (##sys#check-list (or pair list) *)
o|  1 (scheme#char=? char char)
o|  1 (scheme#zero? integer)
(o e)|safe calls: 859 
(o e)|assignments to immediate values: 124 
o|dropping redundant toplevel assignment: chicken.file.posix#file-stat 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-permissions! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-modification-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-access-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-change-time 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-times! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-size 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-owner! 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-group! 
o|safe globals: (chicken.file.posix#set-file-group! chicken.file.posix#set-file-owner! chicken.file.posix#file-size chicken.file.posix#set-file-times! chicken.file.posix#file-change-time chicken.file.posix#file-access-time chicken.file.posix#file-modification-time chicken.file.posix#set-file-permissions! chicken.file.posix#file-stat chicken.posix#stat ##sys#posix-error chicken.posix#posix-error chicken.process-context.posix#user-information chicken.process-context.posix#process-group-id chicken.process-context.posix#create-session chicken.process-context.posix#current-effective-user-name chicken.process-context.posix#current-user-name chicken.process-context.posix#parent-process-id chicken.process-context.posix#current-process-id chicken.process-context.posix#current-user-id chicken.process-context.posix#current-group-id chicken.process-context.posix#current-effective-user-id chicken.process-context.posix#current-effective-group-id chicken.process-context.posix#set-root-directory! chicken.process-context.posix#change-directory* chicken.process.signal#signals-list chicken.process.signal#signal/xfsz chicken.process.signal#signal/xcpu chicken.process.signal#signal/winch chicken.process.signal#signal/vtalrm chicken.process.signal#signal/usr2 chicken.process.signal#signal/usr1 chicken.process.signal#signal/urg chicken.process.signal#signal/tstp chicken.process.signal#signal/trap chicken.process.signal#signal/term chicken.process.signal#signal/stop chicken.process.signal#signal/segv chicken.process.signal#signal/quit chicken.process.signal#signal/prof chicken.process.signal#signal/pipe chicken.process.signal#signal/kill chicken.process.signal#signal/io chicken.process.signal#signal/int chicken.process.signal#signal/ill chicken.process.signal#signal/hup chicken.process.signal#signal/fpe chicken.process.signal#signal/cont chicken.process.signal#signal/chld chicken.process.signal#signal/bus chicken.process.signal#signal/break chicken.process.signal#signal/alrm chicken.process.signal#signal/abrt chicken.process.signal#signal-unmask! chicken.process.signal#signal-masked? chicken.process.signal#signal-mask! chicken.process.signal#signal-mask chicken.process.signal#signal-default chicken.process.signal#signal-ignore chicken.process.signal#make-signal-handler chicken.process.signal#signal-handler chicken.process.signal#set-signal-mask! chicken.process.signal#set-signal-handler! chicken.process.signal#set-alarm! chicken.process#spawn/detach chicken.process#spawn/nowaito chicken.process#spawn/nowait chicken.process#spawn/wait chicken.process#spawn/overlay chicken.process#pipe/buf chicken.process#process-id chicken.process#process-error-port chicken.process#process-output-port chicken.process#process-input-port chicken.process#process-returned-normally? chicken.process#process-exit-status chicken.process#process? chicken.process#process-sleep chicken.process#process* chicken.process#process chicken.process#with-output-to-pipe chicken.process#with-input-from-pipe chicken.process#open-output-pipe chicken.process#open-input-pipe chicken.process#create-pipe chicken.process#close-output-pipe chicken.process#close-input-pipe chicken.process#call-with-output-pipe chicken.process#call-with-input-pipe chicken.process#process-wait chicken.process#process-spawn chicken.process#process-signal chicken.process#process-run chicken.process#process-fork chicken.process#process-execute chicken.process#qs chicken.process#system* chicken.process#system chicken.time.posix#local-timezone-abbreviation chicken.time.posix#time->string chicken.time.posix#string->time chicken.time.posix#local-time->seconds chicken.time.posix#seconds->string chicken.time.posix#seconds->local-time chicken.time.posix#utc-time->seconds chicken.time.posix#seconds->utc-time chicken.file.posix#set-file-position! chicken.file.posix#seek/set chicken.file.posix#seek/end chicken.file.posix#seek/cur chicken.file.posix#port->fileno chicken.file.posix#perm/ixusr chicken.file.posix#perm/ixoth chicken.file.posix#perm/ixgrp chicken.file.posix#perm/iwusr chicken.file.posix#perm/iwoth chicken.file.posix#perm/iwgrp chicken.file.posix#perm/isvtx chicken.file.posix#perm/isuid chicken.file.posix#perm/isgid chicken.file.posix#perm/irwxu chicken.file.posix#perm/irwxo chicken.file.posix#perm/irwxg chicken.file.posix#perm/irusr chicken.file.posix#perm/iroth chicken.file.posix#perm/irgrp chicken.file.posix#open/wronly chicken.file.posix#open/write chicken.file.posix#open/trunc chicken.file.posix#open/text chicken.file.posix#open/sync chicken.file.posix#open/read chicken.file.posix#open/rdwr chicken.file.posix#open/rdonly chicken.file.posix#open/nonblock chicken.file.posix#open/noinherit chicken.file.posix#open/noctty chicken.file.posix#open/fsync chicken.file.posix#open/excl chicken.file.posix#open/creat chicken.file.posix#open/binary chicken.file.posix#open/append chicken.file.posix#open-output-file* chicken.file.posix#open-input-file* chicken.file.posix#fileno/stdout chicken.file.posix#fileno/stdin chicken.file.posix#fileno/stderr chicken.file.posix#symbolic-link? chicken.file.posix#socket? chicken.file.posix#regular-file? chicken.file.posix#fifo? chicken.file.posix#directory? chicken.file.posix#character-device? chicken.file.posix#block-device? chicken.file.posix#file-type chicken.file.posix#file-write chicken.file.posix#file-unlock chicken.file.posix#file-truncate chicken.file.posix#file-select chicken.file.posix#file-read chicken.file.posix#file-position chicken.file.posix#file-permissions chicken.file.posix#file-owner chicken.file.posix#file-open chicken.file.posix#file-mkstemp chicken.file.posix#file-lock/blocking chicken.file.posix#file-lock chicken.file.posix#file-link chicken.file.posix#file-group chicken.file.posix#file-creation-mode chicken.file.posix#file-control chicken.file.posix#file-close chicken.file.posix#fcntl/setfl chicken.file.posix#fcntl/setfd chicken.file.posix#fcntl/getfl chicken.file.posix#fcntl/getfd chicken.file.posix#fcntl/dupfd chicken.file.posix#duplicate-fileno chicken.file.posix#read-symbolic-link chicken.file.posix#create-symbolic-link chicken.file.posix#create-fifo c2476) 
o|inlining procedure: k3032 
o|inlining procedure: k3032 
o|inlining procedure: k3051 
o|inlining procedure: k3051 
o|inlining procedure: k3078 
o|inlining procedure: k3078 
o|substituted constant variable: a3088 
o|inlining procedure: k3119 
o|inlining procedure: k3119 
o|contracted procedure: "(posix-common.scm:201) strerror681" 
o|inlining procedure: k3282 
o|inlining procedure: k3282 
o|inlining procedure: k3297 
o|inlining procedure: k3297 
o|inlining procedure: k3316 
o|inlining procedure: k3316 
o|inlining procedure: k3349 
o|inlining procedure: k3349 
o|inlining procedure: k3361 
o|inlining procedure: k3361 
o|inlining procedure: k3428 
o|inlining procedure: k3428 
o|contracted procedure: "(posix-common.scm:301) g753754" 
o|inlining procedure: k3515 
o|inlining procedure: k3527 
o|inlining procedure: k3527 
o|inlining procedure: k3539 
o|inlining procedure: k3539 
o|inlining procedure: k3551 
o|inlining procedure: k3551 
o|inlining procedure: k3515 
o|inlining procedure: k3672 
o|inlining procedure: k3672 
o|inlining procedure: k3687 
o|inlining procedure: k3687 
o|inlining procedure: k3700 
o|inlining procedure: k3700 
o|inlining procedure: k3750 
o|inlining procedure: k3759 
o|inlining procedure: k3759 
o|substituted constant variable: a3772 
o|inlining procedure: k3750 
o|inlining procedure: k3779 
o|inlining procedure: k3779 
o|inlining procedure: k3795 
o|inlining procedure: k3795 
o|substituted constant variable: a3902 
o|inlining procedure: k3903 
o|inlining procedure: k3903 
o|inlining procedure: k3922 
o|inlining procedure: k3922 
o|inlining procedure: k3952 
o|inlining procedure: k3952 
o|inlining procedure: k3979 
o|inlining procedure: k3979 
o|inlining procedure: k3992 
o|propagated global variable: r39938785 chicken.process-context.posix#change-directory* 
o|inlining procedure: k3992 
o|inlining procedure: k4012 
o|inlining procedure: k4012 
o|inlining procedure: k4090 
o|inlining procedure: k4090 
o|contracted procedure: "(posix-common.scm:603) ctime957" 
o|inlining procedure: k4126 
o|inlining procedure: k4126 
o|inlining procedure: k4170 
o|contracted procedure: "(posix-common.scm:626) strftime982" 
o|inlining procedure: k4156 
o|inlining procedure: k4156 
o|inlining procedure: k4170 
o|contracted procedure: "(posix-common.scm:628) asctime981" 
o|inlining procedure: k4143 
o|inlining procedure: k4143 
o|inlining procedure: k4268 
o|inlining procedure: k4268 
o|inlining procedure: k4286 
o|inlining procedure: k4286 
o|removed side-effect free assignment to unused variable: chicken.posix#process 
o|removed side-effect free assignment to unused variable: chicken.posix#process-id-set! 
o|inlining procedure: k4547 
o|inlining procedure: k4547 
o|inlining procedure: k4586 
o|inlining procedure: k4586 
o|contracted procedure: "(posix-common.scm:739) chicken.posix#process-exit-status-set!" 
o|contracted procedure: "(posix-common.scm:738) chicken.posix#process-returned-normally?-set!" 
o|inlining procedure: "(posix-common.scm:737) chicken.posix#process?" 
o|contracted procedure: "(posix-common.scm:736) chicken.posix#drop-child" 
o|inlining procedure: k4497 
o|inlining procedure: k4497 
o|inlining procedure: k4631 
o|inlining procedure: k4631 
o|inlining procedure: "(posix-common.scm:732) chicken.posix#process?" 
o|contracted procedure: "(posix-common.scm:722) chicken.posix#get-pid" 
o|inlining procedure: k4452 
o|inlining procedure: k4452 
o|inlining procedure: "(posix-common.scm:687) chicken.posix#process?" 
o|inlining procedure: "(posix-common.scm:718) chicken.posix#process?" 
o|inlining procedure: k4716 
o|inlining procedure: k4716 
o|contracted procedure: "(posix-common.scm:763) chicken.posix#c-string->allocated-pointer" 
o|merged explicitly consed rest parameter: args12011222 
o|consed rest parameter at call site: tmp22827 1 
o|inlining procedure: k4797 
o|inlining procedure: k4797 
o|inlining procedure: k4846 
o|inlining procedure: k4846 
o|inlining procedure: k4901 
o|inlining procedure: k4901 
o|inlining procedure: k4960 
o|contracted procedure: "(posix-common.scm:804) g12871296" 
o|inlining procedure: k4960 
o|inlining procedure: k5007 
o|inlining procedure: k5007 
o|inlining procedure: k5025 
o|inlining procedure: k5025 
o|inlining procedure: k5038 
o|inlining procedure: k5038 
o|inlining procedure: k5054 
o|inlining procedure: k5054 
o|inlining procedure: "(posix-common.scm:833) badmode1310" 
o|substituted constant variable: a5078 
o|substituted constant variable: a5080 
o|inlining procedure: k5094 
o|inlining procedure: k5094 
o|inlining procedure: "(posix-common.scm:844) badmode1310" 
o|substituted constant variable: a5118 
o|substituted constant variable: a5120 
o|substituted constant variable: a5125 
o|substituted constant variable: a5126 
o|inlining procedure: k5127 
o|inlining procedure: k5127 
o|substituted constant variable: a5140 
o|substituted constant variable: a5141 
o|inlining procedure: k5142 
o|inlining procedure: k5142 
o|inlining procedure: k5329 
o|inlining procedure: k5329 
o|contracted procedure: "(posixunix.scm:340) fcntl1505" 
o|inlining procedure: k5366 
o|inlining procedure: k5366 
o|inlining procedure: k5391 
o|inlining procedure: k5391 
o|inlining procedure: k5425 
o|inlining procedure: k5425 
o|inlining procedure: k5462 
o|inlining procedure: k5462 
o|inlining procedure: k5559 
o|inlining procedure: k5559 
o|inlining procedure: k5582 
o|inlining procedure: k5582 
o|inlining procedure: k5605 
o|inlining procedure: k5614 
o|inlining procedure: k5614 
o|inlining procedure: k5605 
o|inlining procedure: k5620 
o|inlining procedure: k5620 
o|inlining procedure: k5635 
o|inlining procedure: k5635 
o|contracted procedure: "(posixunix.scm:447) g16751676" 
o|inlining procedure: k5654 
o|inlining procedure: k5654 
o|inlining procedure: k5694 
o|inlining procedure: k5694 
o|contracted procedure: "(posixunix.scm:439) g16561657" 
o|inlining procedure: k5713 
o|inlining procedure: k5713 
o|contracted procedure: "(posixunix.scm:432) g16301631" 
o|inlining procedure: k5772 
o|inlining procedure: k5772 
o|contracted procedure: "(posixunix.scm:426) g16151616" 
o|inlining procedure: k5789 
o|inlining procedure: k5789 
o|inlining procedure: k5814 
o|inlining procedure: k5814 
o|contracted procedure: "(posixunix.scm:420) g15981599" 
o|inlining procedure: k5831 
o|inlining procedure: k5831 
o|inlining procedure: k5861 
o|inlining procedure: k5861 
o|inlining procedure: k5876 
o|inlining procedure: k5876 
o|inlining procedure: k5898 
o|inlining procedure: k5898 
o|inlining procedure: k5962 
o|inlining procedure: k5962 
o|inlining procedure: k5975 
o|contracted procedure: "(posixunix.scm:562) g17071714" 
o|inlining procedure: k5975 
o|inlining procedure: k6011 
o|inlining procedure: k6011 
o|inlining procedure: k6027 
o|inlining procedure: k6027 
o|inlining procedure: k6062 
o|inlining procedure: k6062 
o|inlining procedure: k6147 
o|inlining procedure: k6147 
o|inlining procedure: k6163 
o|inlining procedure: k6163 
o|inlining procedure: k6185 
o|inlining procedure: k6185 
o|inlining procedure: k6211 
o|inlining procedure: k6211 
o|inlining procedure: k6239 
o|inlining procedure: k6239 
o|inlining procedure: k6260 
o|inlining procedure: k6285 
o|inlining procedure: k6285 
o|inlining procedure: k6306 
o|inlining procedure: k6306 
o|inlining procedure: k6336 
o|inlining procedure: k6336 
o|inlining procedure: k6260 
o|inlining procedure: k6375 
o|inlining procedure: k6375 
o|contracted procedure: "(posixunix.scm:782) link1834" 
o|inlining procedure: k6435 
o|contracted procedure: "(posixunix.scm:801) g18791880" 
o|inlining procedure: k6449 
o|inlining procedure: k6449 
o|inlining procedure: k6435 
o|inlining procedure: k6466 
o|inlining procedure: k6466 
o|inlining procedure: k6490 
o|inlining procedure: k6522 
o|inlining procedure: k6522 
o|contracted procedure: "(posixunix.scm:818) g18981899" 
o|inlining procedure: k6504 
o|inlining procedure: k6504 
o|inlining procedure: k6490 
o|inlining procedure: k6540 
o|inlining procedure: k6540 
o|inlining procedure: k6557 
o|inlining procedure: k6557 
o|contracted procedure: "(posixunix.scm:834) g19091910" 
o|inlining procedure: k6565 
o|inlining procedure: k6565 
o|inlining procedure: k6599 
o|inlining procedure: k6599 
o|inlining procedure: k6631 
o|inlining procedure: k6631 
o|inlining procedure: k6640 
o|inlining procedure: k6640 
o|inlining procedure: k6656 
o|inlining procedure: k6656 
o|inlining procedure: k6681 
o|inlining procedure: k6681 
o|inlining procedure: k6724 
o|inlining procedure: k6724 
o|inlining procedure: k6746 
o|inlining procedure: k6746 
o|inlining procedure: k6774 
o|inlining procedure: k6774 
o|inlining procedure: k6821 
o|inlining procedure: k6821 
o|inlining procedure: k6866 
o|inlining procedure: k6866 
o|inlining procedure: k6996 
o|inlining procedure: k7025 
o|inlining procedure: k7025 
o|contracted procedure: "(posixunix.scm:941) g20252026" 
o|inlining procedure: k7010 
o|inlining procedure: k7010 
o|inlining procedure: k6996 
o|substituted constant variable: this-port20032009 
o|inlining procedure: k7082 
o|inlining procedure: k7082 
o|inlining procedure: k7106 
o|inlining procedure: k7106 
o|inlining procedure: k7128 
o|inlining procedure: k7157 
o|inlining procedure: k7157 
o|inlining procedure: k7128 
o|inlining procedure: k7260 
o|inlining procedure: k7260 
o|inlining procedure: k7270 
o|inlining procedure: k7270 
o|inlining procedure: k7290 
o|inlining procedure: k7290 
o|inlining procedure: k7308 
o|inlining procedure: k7308 
o|inlining procedure: k7341 
o|inlining procedure: k7341 
o|inlining procedure: k7356 
o|inlining procedure: k7356 
o|inlining procedure: "(posixunix.scm:1030) err2071" 
o|contracted procedure: "(posixunix.scm:1029) g20962097" 
o|inlining procedure: k7364 
o|inlining procedure: k7364 
o|inlining procedure: k7402 
o|inlining procedure: k7402 
o|inlining procedure: "(posixunix.scm:1038) err2071" 
o|inlining procedure: k7442 
o|inlining procedure: k7442 
o|inlining procedure: "(posixunix.scm:1045) err2071" 
o|inlining procedure: k7469 
o|inlining procedure: k7469 
o|contracted procedure: "(posixunix.scm:1067) strptime2141" 
o|inlining procedure: k7498 
o|inlining procedure: k7498 
o|inlining procedure: k7550 
o|inlining procedure: k7550 
o|inlining procedure: k7608 
o|inlining procedure: k7608 
o|inlining procedure: k7627 
o|inlining procedure: k7627 
o|contracted procedure: "(posixunix.scm:1129) chicken.posix#register-pid" 
o|contracted procedure: "(posix-common.scm:691) chicken.posix#make-process" 
o|contracted procedure: "(posixunix.scm:1111) fork2187" 
o|contracted procedure: "(posixunix.scm:1108) g22052206" 
o|inlining procedure: k7596 
o|inlining procedure: k7596 
o|inlining procedure: k7717 
o|inlining procedure: k7717 
o|inlining procedure: k7769 
o|inlining procedure: k7769 
o|inlining procedure: k7788 
o|inlining procedure: k7788 
o|inlining procedure: k7818 
o|inlining procedure: k7818 
o|inlining procedure: "(posixunix.scm:1164) chicken.posix#process?" 
o|removed unused formal parameters: (loc2266) 
o|inlining procedure: k7843 
o|inlining procedure: k7843 
o|inlining procedure: k7861 
o|inlining procedure: k7861 
o|inlining procedure: "(posixunix.scm:1187) chicken.posix#shell-command-arguments" 
o|removed unused parameter to known procedure: loc2266 "(posixunix.scm:1186) chicken.posix#shell-command" 
o|removed unused formal parameters: (loc2292) 
o|inlining procedure: k7907 
o|inlining procedure: k7907 
o|removed unused formal parameters: (loc2301) 
o|inlining procedure: k7927 
o|inlining procedure: k7927 
o|removed unused formal parameters: (loc2306 fd2309) 
o|inlining procedure: k7947 
o|inlining procedure: k7947 
o|inlining procedure: k7959 
o|contracted procedure: "(posixunix.scm:1237) replace-fd2283" 
o|inlining procedure: k7888 
o|inlining procedure: k7888 
o|inlining procedure: k7959 
o|inlining procedure: k7974 
o|inlining procedure: k7974 
o|merged explicitly consed rest parameter: args23382345 
o|consed rest parameter at call site: tmp22904 1 
o|removed unused parameter to known procedure: loc2301 "(posixunix.scm:1247) needed-pipe2289" 
o|removed unused parameter to known procedure: loc2301 "(posixunix.scm:1246) needed-pipe2289" 
o|removed unused parameter to known procedure: loc2301 "(posixunix.scm:1245) needed-pipe2289" 
o|inlining procedure: k8083 
o|inlining procedure: k8083 
o|removed unused parameter to known procedure: loc2306 "(posixunix.scm:1262) connect-parent2290" 
o|removed unused parameter to known procedure: fd2309 "(posixunix.scm:1262) connect-parent2290" 
o|inlining procedure: k8094 
o|inlining procedure: k8094 
o|removed unused parameter to known procedure: loc2306 "(posixunix.scm:1266) connect-parent2290" 
o|removed unused parameter to known procedure: fd2309 "(posixunix.scm:1266) connect-parent2290" 
o|contracted procedure: "(posixunix.scm:1285) chicken.posix#process-error-port-set!" 
o|removed unused parameter to known procedure: loc2292 "(posixunix.scm:1288) make-on-close2288" 
o|contracted procedure: "(posixunix.scm:1280) chicken.posix#process-input-port-set!" 
o|removed unused parameter to known procedure: loc2292 "(posixunix.scm:1283) make-on-close2288" 
o|contracted procedure: "(posixunix.scm:1275) chicken.posix#process-output-port-set!" 
o|removed unused parameter to known procedure: loc2292 "(posixunix.scm:1278) make-on-close2288" 
o|inlining procedure: k8180 
o|inlining procedure: k8180 
o|removed unused parameter to known procedure: loc2266 "(posixunix.scm:1306) chicken.posix#shell-command" 
o|inlining procedure: "(posixunix.scm:1305) chicken.posix#shell-command-arguments" 
o|inlining procedure: k8398 
o|inlining procedure: k8398 
o|contracted procedure: "(posixunix.scm:1323) chroot2463" 
o|substituted constant variable: c2476 
o|inlining procedure: k8472 
o|inlining procedure: k8472 
o|inlining procedure: k8494 
o|inlining procedure: k8494 
o|inlining procedure: k8517 
o|inlining procedure: k8517 
o|inlining procedure: k8540 
o|inlining procedure: k8540 
o|inlining procedure: k8563 
o|inlining procedure: k8563 
o|inlining procedure: k8586 
o|inlining procedure: k8586 
o|inlining procedure: k8609 
o|inlining procedure: k8609 
o|inlining procedure: k8624 
o|inlining procedure: k8624 
o|inlining procedure: k8652 
o|inlining procedure: k8652 
o|inlining procedure: k8676 
o|inlining procedure: k8676 
o|inlining procedure: k8688 
o|inlining procedure: k8688 
o|inlining procedure: k8698 
o|inlining procedure: k8698 
o|replaced variables: 1324 
o|removed binding forms: 753 
o|removed side-effect free assignment to unused variable: c2476 
o|substituted constant variable: r32838734 
o|substituted constant variable: r35288746 
o|substituted constant variable: r35408748 
o|substituted constant variable: r35528750 
o|substituted constant variable: r35168752 
o|substituted constant variable: r36888756 
o|inlining procedure: k3750 
o|substituted constant variable: r37608761 
o|inlining procedure: k3750 
o|inlining procedure: k3750 
o|substituted constant variable: r37968767 
o|substituted constant variable: r37968767 
o|substituted constant variable: r37968769 
o|substituted constant variable: r37968769 
o|propagated global variable: g9109118786 chicken.process-context.posix#change-directory* 
o|substituted constant variable: r41578805 
o|substituted constant variable: r41578805 
o|substituted constant variable: r41448812 
o|substituted constant variable: r41448812 
o|substituted constant variable: r44988828 
o|substituted constant variable: r50088869 
o|removed side-effect free assignment to unused variable: badmode1310 
o|substituted constant variable: r50398872 
o|substituted constant variable: r50398872 
o|substituted constant variable: r50398874 
o|substituted constant variable: r50398874 
o|inlining procedure: k5054 
o|inlining procedure: k5094 
o|substituted constant variable: r55838926 
o|substituted constant variable: r55838926 
o|substituted constant variable: r55838928 
o|substituted constant variable: r55838928 
o|inlining procedure: k5605 
o|inlining procedure: k5605 
o|substituted constant variable: r56158933 
o|inlining procedure: k5605 
o|substituted constant variable: r56068934 
o|substituted constant variable: r56068934 
o|substituted constant variable: r56558942 
o|substituted constant variable: r56558942 
o|substituted constant variable: r57148948 
o|substituted constant variable: r57148948 
o|substituted constant variable: r57908954 
o|substituted constant variable: r57908954 
o|substituted constant variable: r58328960 
o|substituted constant variable: r58328960 
o|substituted constant variable: r60638985 
o|inlining procedure: k6306 
o|substituted constant variable: r63379007 
o|substituted constant variable: r63379007 
o|substituted constant variable: r64679016 
o|inlining procedure: k6549 
o|inlining procedure: k6549 
o|substituted constant variable: r66009030 
o|substituted constant variable: r67479058 
o|substituted constant variable: r68679070 
o|inlining procedure: k7270 
o|inlining procedure: k7270 
o|removed side-effect free assignment to unused variable: err2071 
o|substituted constant variable: r73429104 
o|substituted constant variable: r73579106 
o|substituted constant variable: loc20759111 
o|substituted constant variable: msg20739109 
o|substituted constant variable: r74039117 
o|substituted constant variable: loc20759122 
o|substituted constant variable: msg20739120 
o|substituted constant variable: loc20759131 
o|substituted constant variable: msg20739129 
o|substituted constant variable: r74999139 
o|substituted constant variable: r74999139 
o|substituted constant variable: r76289146 
o|substituted constant variable: returned-normally?1074 
o|substituted constant variable: input-port1075 
o|substituted constant variable: output-port1076 
o|substituted constant variable: error-port1077 
o|substituted constant variable: exit-status1078 
o|substituted constant variable: c-pointer22072211 
o|substituted constant variable: c-pointer22072211 
o|substituted constant variable: r75979149 
o|substituted constant variable: r75979149 
o|inlining procedure: k7788 
o|substituted constant variable: r78449167 
o|removed side-effect free assignment to unused variable: chicken.posix#shell-command-arguments 
o|substituted constant variable: r79289186 
o|substituted constant variable: r79489188 
o|substituted constant variable: r79759194 
o|removed unused formal parameters: (stdfd2353) 
o|substituted constant variable: r80849196 
o|removed unused formal parameters: (stdfd2362) 
o|substituted constant variable: r80959198 
o|removed unused parameter to known procedure: stdfd2353 "(posixunix.scm:1286) input-port2322" 
o|removed unused parameter to known procedure: stdfd2362 "(posixunix.scm:1281) output-port2323" 
o|removed unused parameter to known procedure: stdfd2353 "(posixunix.scm:1276) input-port2322" 
o|substituted constant variable: r86899237 
o|replaced variables: 206 
o|removed binding forms: 1090 
o|removed conditional forms: 1 
o|inlining procedure: k4230 
o|inlining procedure: k4230 
o|inlining procedure: k4265 
o|inlining procedure: "(posix-common.scm:721) chicken.posix#process-exit-status" 
o|inlining procedure: "(posix-common.scm:720) chicken.posix#process-returned-normally?" 
o|inlining procedure: "(posix-common.scm:719) chicken.posix#process-id" 
o|inlining procedure: k4610 
o|inlining procedure: "(posix-common.scm:687) chicken.posix#process-id" 
o|inlining procedure: "(posix-common.scm:718) chicken.posix#process-exit-status" 
o|inlining procedure: k4806 
o|substituted constant variable: r56069278 
o|inlining procedure: k5981 
o|inlining procedure: k6385 
o|contracted procedure: k7788 
o|inlining procedure: "(posixunix.scm:1164) chicken.posix#process-id" 
o|removed unused formal parameters: (loc2314) 
o|removed unused parameter to known procedure: loc2314 "(posixunix.scm:1254) connect-child2291" 
o|removed unused parameter to known procedure: loc2314 "(posixunix.scm:1253) connect-child2291" 
o|removed unused parameter to known procedure: loc2314 "(posixunix.scm:1252) connect-child2291" 
o|inlining procedure: k8250 
o|inlining procedure: k8328 
o|inlining procedure: k8408 
o|converted assignments to bindings: (fileno2072) 
o|simplifications: ((let . 1)) 
o|replaced variables: 6 
o|removed binding forms: 278 
o|contracted procedure: k3425 
o|substituted constant variable: r37519242 
o|substituted constant variable: r37519244 
o|substituted constant variable: r37519246 
o|substituted constant variable: r42319358 
o|substituted constant variable: r42669360 
o|contracted procedure: k4607 
o|contracted procedure: k4731 
o|contracted procedure: k5326 
o|contracted procedure: k5556 
o|inlining procedure: k7370 
o|contracted procedure: k7602 
o|contracted procedure: k7605 
o|inlining procedure: k7913 
o|removed unused formal parameters: (loc2327) 
o|removed unused parameter to known procedure: loc2327 "(posixunix.scm:1270) spawn2321" 
o|inlining procedure: k8649 
o|inlining procedure: k8649 
o|replaced variables: 11 
o|removed binding forms: 22 
o|removed conditional forms: 1 
o|substituted constant variable: r79149492 
o|substituted constant variable: r86509500 
o|replaced variables: 2 
o|removed binding forms: 16 
o|removed conditional forms: 1 
o|removed binding forms: 4 
o|simplifications: ((let . 47) (if . 105) (##core#call . 672)) 
o|  call simplifications:
o|    scheme#<
o|    chicken.bitwise#bitwise-ior
o|    scheme#vector-ref	2
o|    chicken.base#void	3
o|    ##sys#make-structure
o|    scheme#make-vector
o|    chicken.fixnum#fxior	2
o|    chicken.fixnum#fxmin	2
o|    chicken.fixnum#fx>=	8
o|    ##sys#foreign-string-argument	3
o|    chicken.fixnum#fx*
o|    scheme#*
o|    scheme#memq	2
o|    scheme#list	7
o|    scheme#call-with-values	4
o|    ##sys#check-pair
o|    ##sys#check-list	7
o|    ##sys#apply	3
o|    chicken.fixnum#fx+	21
o|    ##sys#call-with-values	6
o|    scheme#assq
o|    scheme#caar
o|    scheme#values	20
o|    ##sys#check-structure	17
o|    ##sys#block-ref	12
o|    ##sys#structure?	6
o|    scheme#vector-set!	6
o|    ##sys#foreign-block-argument	8
o|    scheme#=	2
o|    ##sys#foreign-ranged-integer-argument	2
o|    scheme#string-length	4
o|    chicken.fixnum#fx-	15
o|    ##sys#check-vector
o|    ##sys#size	7
o|    ##sys#null-pointer?	2
o|    scheme#not	7
o|    ##sys#setislot	4
o|    chicken.fixnum#fx=	45
o|    scheme#cdr	36
o|    ##sys#check-fixnum	42
o|    scheme#vector	2
o|    chicken.base#fixnum?	17
o|    scheme#string?	4
o|    ##sys#foreign-fixnum-argument	14
o|    scheme#null?	89
o|    scheme#car	61
o|    scheme#string->list
o|    scheme#pair?	17
o|    scheme#cons	12
o|    ##sys#setslot	7
o|    ##sys#slot	28
o|    scheme#apply	11
o|    scheme#char=?
o|    scheme#string	3
o|    scheme#eq?	30
o|    ##sys#check-string	21
o|    chicken.fixnum#fx<	39
o|contracted procedure: k3029 
o|contracted procedure: k3035 
o|contracted procedure: k3054 
o|contracted procedure: k3153 
o|contracted procedure: k3067 
o|contracted procedure: k3150 
o|contracted procedure: k3070 
o|contracted procedure: k3073 
o|contracted procedure: k3081 
o|contracted procedure: k3105 
o|contracted procedure: k3113 
o|contracted procedure: k3122 
o|contracted procedure: k3125 
o|contracted procedure: k3128 
o|contracted procedure: k3136 
o|contracted procedure: k3144 
o|contracted procedure: k3156 
o|contracted procedure: k3256 
o|contracted procedure: k3285 
o|contracted procedure: k3294 
o|contracted procedure: k3310 
o|contracted procedure: k3334 
o|contracted procedure: k3325 
o|contracted procedure: k3343 
o|contracted procedure: k3352 
o|contracted procedure: k3358 
o|contracted procedure: k3374 
o|contracted procedure: k3455 
o|contracted procedure: k3408 
o|contracted procedure: k3449 
o|contracted procedure: k3411 
o|contracted procedure: k3443 
o|contracted procedure: k3414 
o|contracted procedure: k3431 
o|contracted procedure: k3461 
o|contracted procedure: k3581 
o|contracted procedure: k3503 
o|contracted procedure: k3575 
o|contracted procedure: k3506 
o|contracted procedure: k3569 
o|contracted procedure: k3509 
o|contracted procedure: k3563 
o|contracted procedure: k3512 
o|contracted procedure: k3524 
o|contracted procedure: k3530 
o|contracted procedure: k3536 
o|contracted procedure: k3542 
o|contracted procedure: k3548 
o|contracted procedure: k3554 
o|contracted procedure: k3560 
o|contracted procedure: k3709 
o|contracted procedure: k3663 
o|contracted procedure: k3666 
o|contracted procedure: k3669 
o|contracted procedure: k3697 
o|contracted procedure: k3684 
o|contracted procedure: k3693 
o|contracted procedure: k3703 
o|contracted procedure: k3756 
o|contracted procedure: k3762 
o|contracted procedure: k3782 
o|contracted procedure: k3791 
o|contracted procedure: k3842 
o|contracted procedure: k3801 
o|contracted procedure: k3836 
o|contracted procedure: k3804 
o|contracted procedure: k3830 
o|contracted procedure: k3807 
o|contracted procedure: k3824 
o|contracted procedure: k3810 
o|contracted procedure: k3813 
o|contracted procedure: k3892 
o|contracted procedure: k3851 
o|contracted procedure: k3886 
o|contracted procedure: k3854 
o|contracted procedure: k3880 
o|contracted procedure: k3857 
o|contracted procedure: k3874 
o|contracted procedure: k3860 
o|contracted procedure: k3863 
o|contracted procedure: k3940 
o|contracted procedure: k3906 
o|contracted procedure: k3919 
o|contracted procedure: k3925 
o|contracted procedure: k3946 
o|contracted procedure: k3955 
o|contracted procedure: k3961 
o|contracted procedure: k3964 
o|contracted procedure: k3967 
o|contracted procedure: k3976 
o|contracted procedure: k3982 
o|contracted procedure: k3998 
o|contracted procedure: k4009 
o|contracted procedure: k4022 
o|contracted procedure: k4015 
o|contracted procedure: k4037 
o|inlining procedure: k4028 
o|contracted procedure: k4058 
o|inlining procedure: k4049 
o|contracted procedure: k4101 
o|contracted procedure: k4097 
o|contracted procedure: k4075 
o|contracted procedure: k4107 
o|contracted procedure: k4129 
o|contracted procedure: k4217 
o|contracted procedure: k4164 
o|contracted procedure: k4173 
o|contracted procedure: k4156 
o|contracted procedure: k4207 
o|contracted procedure: k4203 
o|contracted procedure: k4143 
o|contracted procedure: k4226 
o|contracted procedure: k4248 
o|contracted procedure: k4277 
o|contracted procedure: k4265 
o|contracted procedure: k4289 
o|contracted procedure: k4299 
o|contracted procedure: k4303 
o|contracted procedure: k4309 
o|contracted procedure: k4318 
o|contracted procedure: k4350 
o|contracted procedure: k4368 
o|contracted procedure: k4386 
o|contracted procedure: k4404 
o|contracted procedure: k4422 
o|contracted procedure: k4440 
o|contracted procedure: k4529 
o|contracted procedure: k4662 
o|contracted procedure: k4535 
o|contracted procedure: k4656 
o|contracted procedure: k4538 
o|contracted procedure: k4650 
o|contracted procedure: k4541 
o|contracted procedure: k4644 
o|contracted procedure: k4544 
o|contracted procedure: k43509377 
o|contracted procedure: k4557 
o|contracted procedure: k43689372 
o|contracted procedure: k4561 
o|contracted procedure: k44409367 
o|contracted procedure: k4565 
o|contracted procedure: k4571 
o|contracted procedure: k4589 
o|contracted procedure: k4598 
o|contracted procedure: k4616 
o|contracted procedure: k4431 
o|contracted procedure: k4359 
o|contracted procedure: k4500 
o|contracted procedure: k4516 
o|contracted procedure: k4506 
o|contracted procedure: k4625 
o|contracted procedure: k4628 
o|contracted procedure: k4635 
o|contracted procedure: k4467 
o|contracted procedure: k4449 
o|contracted procedure: k4455 
o|contracted procedure: k4461 
o|contracted procedure: k43509385 
o|contracted procedure: k4638 
o|contracted procedure: k44409390 
o|contracted procedure: k4671 
o|contracted procedure: k4719 
o|contracted procedure: k4722 
o|contracted procedure: k4759 
o|contracted procedure: k4725 
o|contracted procedure: k4746 
o|contracted procedure: k4800 
o|contracted procedure: k4813 
o|contracted procedure: k48139396 
o|contracted procedure: k4822 
o|contracted procedure: k4827 
o|contracted procedure: k4830 
o|contracted procedure: k4849 
o|contracted procedure: k4859 
o|contracted procedure: k4863 
o|contracted procedure: k4871 
o|contracted procedure: k4937 
o|contracted procedure: k4951 
o|contracted procedure: k4963 
o|contracted procedure: k4966 
o|contracted procedure: k4969 
o|contracted procedure: k4977 
o|contracted procedure: k4985 
o|contracted procedure: k4946 
o|contracted procedure: k5010 
o|contracted procedure: k5028 
o|contracted procedure: k5044 
o|contracted procedure: k5057 
o|contracted procedure: k5067 
o|contracted procedure: k5084 
o|contracted procedure: k5097 
o|contracted procedure: k5107 
o|contracted procedure: k5130 
o|contracted procedure: k5145 
o|contracted procedure: k5271 
o|contracted procedure: k5278 
o|contracted procedure: k5338 
o|contracted procedure: k5317 
o|contracted procedure: k5320 
o|contracted procedure: k5323 
o|contracted procedure: k5303 
o|contracted procedure: k5307 
o|contracted procedure: k5311 
o|contracted procedure: k5332 
o|contracted procedure: k5375 
o|contracted procedure: k5350 
o|contracted procedure: k5353 
o|contracted procedure: k5356 
o|contracted procedure: k5359 
o|contracted procedure: k5369 
o|contracted procedure: k5382 
o|contracted procedure: k5394 
o|contracted procedure: k5400 
o|contracted procedure: k5413 
o|contracted procedure: k5416 
o|contracted procedure: k5431 
o|contracted procedure: k5440 
o|contracted procedure: k5450 
o|contracted procedure: k5471 
o|contracted procedure: k5456 
o|contracted procedure: k5459 
o|contracted procedure: k5465 
o|contracted procedure: k5484 
o|contracted procedure: k5490 
o|contracted procedure: k5504 
o|contracted procedure: k5507 
o|contracted procedure: k5888 
o|contracted procedure: k5516 
o|contracted procedure: k5527 
o|contracted procedure: k5542 
o|contracted procedure: k5546 
o|contracted procedure: k5550 
o|contracted procedure: k5562 
o|contracted procedure: k5571 
o|contracted procedure: k5588 
o|contracted procedure: k5578 
o|contracted procedure: k5585 
o|contracted procedure: k5611 
o|contracted procedure: k5617 
o|contracted procedure: k5623 
o|contracted procedure: k5629 
o|contracted procedure: k5638 
o|contracted procedure: k5667 
o|contracted procedure: k5677 
o|contracted procedure: k5671 
o|contracted procedure: k5684 
o|contracted procedure: k5688 
o|contracted procedure: k5650 
o|contracted procedure: k5654 
o|contracted procedure: k5697 
o|contracted procedure: k5726 
o|contracted procedure: k5736 
o|contracted procedure: k5730 
o|contracted procedure: k5743 
o|contracted procedure: k5747 
o|contracted procedure: k5709 
o|contracted procedure: k5713 
o|contracted procedure: k5762 
o|contracted procedure: k5775 
o|contracted procedure: k5802 
o|contracted procedure: k5808 
o|contracted procedure: k5781 
o|contracted procedure: k5785 
o|contracted procedure: k5789 
o|contracted procedure: k5817 
o|contracted procedure: k5844 
o|contracted procedure: k5850 
o|contracted procedure: k5823 
o|contracted procedure: k5827 
o|contracted procedure: k5831 
o|contracted procedure: k5854 
o|contracted procedure: k5858 
o|contracted procedure: k5864 
o|contracted procedure: k5870 
o|contracted procedure: k5873 
o|contracted procedure: k5879 
o|contracted procedure: k5885 
o|contracted procedure: k5911 
o|contracted procedure: k5895 
o|contracted procedure: k5904 
o|contracted procedure: k5945 
o|contracted procedure: k5951 
o|contracted procedure: k5965 
o|contracted procedure: k5978 
o|contracted procedure: k5992 
o|contracted procedure: k5956 
o|contracted procedure: k59889416 
o|contracted procedure: k6002 
o|contracted procedure: k6008 
o|contracted procedure: k6014 
o|contracted procedure: k6024 
o|contracted procedure: k6030 
o|contracted procedure: k6101 
o|contracted procedure: k6056 
o|contracted procedure: k6065 
o|contracted procedure: k6091 
o|contracted procedure: k6094 
o|contracted procedure: k6138 
o|contracted procedure: k6141 
o|contracted procedure: k6150 
o|contracted procedure: k6166 
o|contracted procedure: k6172 
o|contracted procedure: k6188 
o|contracted procedure: k6205 
o|contracted procedure: k6208 
o|contracted procedure: k6214 
o|contracted procedure: k6242 
o|contracted procedure: k6342 
o|contracted procedure: k6254 
o|contracted procedure: k6257 
o|contracted procedure: k6288 
o|contracted procedure: k6328 
o|contracted procedure: k6332 
o|contracted procedure: k6369 
o|contracted procedure: k6372 
o|contracted procedure: k6378 
o|contracted procedure: k6360 
o|contracted procedure: k6364 
o|contracted procedure: k6952 
o|contracted procedure: k6391 
o|contracted procedure: k6946 
o|contracted procedure: k6394 
o|contracted procedure: k6940 
o|contracted procedure: k6397 
o|contracted procedure: k6934 
o|contracted procedure: k6400 
o|contracted procedure: k6928 
o|contracted procedure: k6403 
o|contracted procedure: k6922 
o|contracted procedure: k6406 
o|contracted procedure: k6916 
o|contracted procedure: k6409 
o|contracted procedure: k6910 
o|contracted procedure: k6412 
o|contracted procedure: k6904 
o|contracted procedure: k6415 
o|contracted procedure: k6898 
o|contracted procedure: k6418 
o|contracted procedure: k6889 
o|contracted procedure: k6424 
o|contracted procedure: k6438 
o|contracted procedure: k6446 
o|contracted procedure: k6455 
o|contracted procedure: k6469 
o|contracted procedure: k6476 
o|contracted procedure: k6493 
o|contracted procedure: k6501 
o|contracted procedure: k6510 
o|contracted procedure: k6525 
o|contracted procedure: k6537 
o|contracted procedure: k6554 
o|contracted procedure: k6562 
o|contracted procedure: k6571 
o|contracted procedure: k6587 
o|contracted procedure: k6590 
o|contracted procedure: k6602 
o|contracted procedure: k6609 
o|contracted procedure: k6616 
o|contracted procedure: k6619 
o|contracted procedure: k6628 
o|contracted procedure: k6646 
o|contracted procedure: k6662 
o|contracted procedure: k6684 
o|contracted procedure: k6690 
o|contracted procedure: k6693 
o|contracted procedure: k6718 
o|contracted procedure: k6696 
o|contracted procedure: k6700 
o|contracted procedure: k6707 
o|contracted procedure: k6711 
o|contracted procedure: k6715 
o|contracted procedure: k6727 
o|contracted procedure: k6737 
o|contracted procedure: k6749 
o|contracted procedure: k6752 
o|contracted procedure: k6815 
o|contracted procedure: k6765 
o|contracted procedure: k6771 
o|contracted procedure: k6777 
o|contracted procedure: k6784 
o|contracted procedure: k6793 
o|contracted procedure: k6804 
o|contracted procedure: k6800 
o|contracted procedure: k6811 
o|contracted procedure: k6836 
o|contracted procedure: k6832 
o|contracted procedure: k6825 
o|inlining procedure: k6821 
o|contracted procedure: k6847 
o|contracted procedure: k6851 
o|contracted procedure: k6843 
o|inlining procedure: k6821 
o|contracted procedure: k6857 
o|contracted procedure: k6869 
o|contracted procedure: k6872 
o|contracted procedure: k6880 
o|contracted procedure: k6883 
o|contracted procedure: k7248 
o|contracted procedure: k6961 
o|contracted procedure: k7242 
o|contracted procedure: k6964 
o|contracted procedure: k7236 
o|contracted procedure: k6967 
o|contracted procedure: k7230 
o|contracted procedure: k6970 
o|contracted procedure: k7224 
o|contracted procedure: k6973 
o|contracted procedure: k7218 
o|contracted procedure: k6976 
o|contracted procedure: k7212 
o|contracted procedure: k6979 
o|contracted procedure: k7206 
o|contracted procedure: k6982 
o|contracted procedure: k6999 
o|contracted procedure: k7007 
o|contracted procedure: k7016 
o|contracted procedure: k7028 
o|contracted procedure: k7040 
o|contracted procedure: k7047 
o|contracted procedure: k7051 
o|contracted procedure: k7197 
o|contracted procedure: k7054 
o|contracted procedure: k7067 
o|contracted procedure: k7070 
o|contracted procedure: k7088 
o|contracted procedure: k7101 
o|contracted procedure: k7109 
o|contracted procedure: k7120 
o|contracted procedure: k7116 
o|contracted procedure: k7131 
o|contracted procedure: k7140 
o|contracted procedure: k7147 
o|contracted procedure: k7188 
o|contracted procedure: k7151 
o|contracted procedure: k7160 
o|contracted procedure: k7173 
o|contracted procedure: k7180 
o|contracted procedure: k7184 
o|contracted procedure: k7191 
o|contracted procedure: k7273 
o|contracted procedure: k7293 
o|contracted procedure: k7376 
o|contracted procedure: k7323 
o|contracted procedure: k7338 
o|contracted procedure: k7344 
o|contracted procedure: k7350 
o|contracted procedure: k7361 
o|contracted procedure: k7370 
o|contracted procedure: k7420 
o|contracted procedure: k7385 
o|contracted procedure: k7399 
o|contracted procedure: k7405 
o|contracted procedure: k7411 
o|contracted procedure: k7439 
o|contracted procedure: k7448 
o|contracted procedure: k7460 
o|contracted procedure: k7466 
o|contracted procedure: k7472 
o|contracted procedure: k7483 
o|contracted procedure: k7491 
o|contracted procedure: k7534 
o|contracted procedure: k7506 
o|contracted procedure: k7509 
o|contracted procedure: k7512 
o|contracted procedure: k7527 
o|substituted constant variable: g9683 
o|substituted constant variable: g9683 
o|substituted constant variable: g9683 
o|substituted constant variable: g9683 
o|substituted constant variable: g9683 
o|substituted constant variable: g9683 
o|substituted constant variable: g9683 
o|substituted constant variable: g9683 
o|substituted constant variable: g9683 
o|substituted constant variable: g9683 
o|contracted procedure: k7498 
o|contracted procedure: k7553 
o|contracted procedure: k7570 
o|contracted procedure: k7678 
o|contracted procedure: k7581 
o|contracted procedure: k7672 
o|contracted procedure: k7584 
o|contracted procedure: k7666 
o|contracted procedure: k7587 
o|contracted procedure: k7660 
o|contracted procedure: k7590 
o|contracted procedure: k7611 
o|contracted procedure: k7620 
o|contracted procedure: k4476 
o|contracted procedure: k4484 
o|contracted procedure: k4480 
o|contracted procedure: k7756 
o|contracted procedure: k7687 
o|contracted procedure: k7750 
o|contracted procedure: k7690 
o|contracted procedure: k7744 
o|contracted procedure: k7693 
o|contracted procedure: k7738 
o|contracted procedure: k7696 
o|contracted procedure: k7732 
o|contracted procedure: k7699 
o|contracted procedure: k7726 
o|contracted procedure: k7702 
o|contracted procedure: k7714 
o|contracted procedure: k7720 
o|contracted procedure: k7766 
o|contracted procedure: k7794 
o|contracted procedure: k7772 
o|contracted procedure: k7833 
o|contracted procedure: k7806 
o|contracted procedure: k7812 
o|contracted procedure: k7815 
o|contracted procedure: k7821 
o|contracted procedure: k7827 
o|contracted procedure: k43509440 
o|contracted procedure: k7881 
o|contracted procedure: k7855 
o|contracted procedure: k7878 
o|inlining procedure: "(posixunix.scm:1186) chicken.posix#shell-command" 
o|contracted procedure: k7904 
o|contracted procedure: k7919 
o|contracted procedure: k7913 
o|contracted procedure: k7950 
o|contracted procedure: k7962 
o|contracted procedure: k7891 
o|contracted procedure: k7981 
o|contracted procedure: k8151 
o|contracted procedure: k8155 
o|contracted procedure: k8159 
o|contracted procedure: k8114 
o|contracted procedure: k4413 
o|contracted procedure: k4377 
o|contracted procedure: k4395 
o|contracted procedure: k8166 
o|contracted procedure: k8183 
o|contracted procedure: k8193 
o|contracted procedure: k8197 
o|contracted procedure: k8200 
o|contracted procedure: k8219 
o|inlining procedure: "(posixunix.scm:1306) chicken.posix#shell-command" 
o|contracted procedure: k8298 
o|contracted procedure: k8229 
o|contracted procedure: k8292 
o|contracted procedure: k8232 
o|contracted procedure: k8286 
o|contracted procedure: k8235 
o|contracted procedure: k8280 
o|contracted procedure: k8238 
o|contracted procedure: k8274 
o|contracted procedure: k8241 
o|contracted procedure: k8268 
o|contracted procedure: k8244 
o|contracted procedure: k8262 
o|contracted procedure: k8247 
o|contracted procedure: k8256 
o|contracted procedure: k8250 
o|contracted procedure: k8376 
o|contracted procedure: k8307 
o|contracted procedure: k8370 
o|contracted procedure: k8310 
o|contracted procedure: k8364 
o|contracted procedure: k8313 
o|contracted procedure: k8358 
o|contracted procedure: k8316 
o|contracted procedure: k8352 
o|contracted procedure: k8319 
o|contracted procedure: k8346 
o|contracted procedure: k8322 
o|contracted procedure: k8340 
o|contracted procedure: k8325 
o|contracted procedure: k8334 
o|contracted procedure: k8328 
o|contracted procedure: k8395 
o|contracted procedure: k8401 
o|contracted procedure: k8390 
o|contracted procedure: k8463 
o|contracted procedure: k8469 
o|contracted procedure: k8475 
o|contracted procedure: k8488 
o|contracted procedure: k8491 
o|contracted procedure: k8497 
o|contracted procedure: k8514 
o|contracted procedure: k8520 
o|contracted procedure: k8537 
o|contracted procedure: k8543 
o|contracted procedure: k8560 
o|contracted procedure: k8566 
o|contracted procedure: k8583 
o|contracted procedure: k8589 
o|contracted procedure: k8612 
o|contracted procedure: k8615 
o|contracted procedure: k8624 
o|contracted procedure: k8633 
o|contracted procedure: k8658 
o|contracted procedure: k8642 
o|contracted procedure: k8645 
o|contracted procedure: k8667 
o|contracted procedure: k8679 
o|contracted procedure: k8695 
o|contracted procedure: k8691 
o|contracted procedure: k8701 
o|simplifications: ((##core#call . 5) (if . 7) (let . 155)) 
o|  call simplifications:
o|    chicken.bitwise#bitwise-ior	5
o|removed binding forms: 585 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest239241 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest239241 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest717719 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest717719 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest781783 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest781783 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest781783 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest781783 0 
(o x)|known list op on rest arg sublist: ##core#rest-car whence810 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest854856 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest854856 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest854856 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest854856 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest871873 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest871873 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest871873 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest871873 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? new897 0 
(o x)|known list op on rest arg sublist: ##core#rest-car new897 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest938939 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest938939 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest949950 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest949950 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest967968 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest967968 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest10081010 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest10081010 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest10551056 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest10551056 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? args1168 0 
(o x)|known list op on rest arg sublist: ##core#rest-car args1168 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? args1168 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr args1168 0 
o|inlining procedure: "(posix-common.scm:826) mode1309" 
o|inlining procedure: "(posix-common.scm:837) mode1309" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest15181521 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest15181521 0 
o|contracted procedure: k5345 
(o x)|known list op on rest arg sublist: ##core#rest-car mode1533 0 
(o x)|known list op on rest arg sublist: ##core#rest-car buffer1550 0 
(o x)|known list op on rest arg sublist: ##core#rest-car timeout1574 0 
o|contracted procedure: k5660 
o|contracted procedure: k5719 
o|contracted procedure: k5795 
o|contracted procedure: k5837 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16951696 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest16951696 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest17631765 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest17631765 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest18101812 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest18101812 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest18491853 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest18491853 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest18491853 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest18491853 0 
o|contracted procedure: k6675 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest19841988 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest19841988 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest19841988 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest19841988 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest20822084 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest20822084 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest21062108 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest21062108 0 
o|contracted procedure: k7463 
(o x)|known list op on rest arg sublist: ##core#rest-car mode2137 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest21592161 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest21592161 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest21932194 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest21932194 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest21932194 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest21932194 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest22262228 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest22262228 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest22262228 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest22262228 0 
(o x)|known list op on rest arg sublist: ##core#rest-car sig2259 0 
o|removed side-effect free assignment to unused variable: chicken.posix#shell-command 
(o x)|known list op on rest arg sublist: ##core#rest-car args2273 0 
o|inlining procedure: "(posixunix.scm:1254) swapped-ends2324" 
o|inlining procedure: "(posixunix.scm:1253) swapped-ends2324" 
o|inlining procedure: "(posixunix.scm:1249) swapped-ends2324" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest24252427 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest24252427 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest24252427 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest24252427 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest24452447 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest24452447 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest24452447 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest24452447 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest915916 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest915916 0 
o|replaced variables: 2 
o|removed binding forms: 9 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3507 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3507 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3507 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3507 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3805 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3805 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3805 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3805 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3855 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3855 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3855 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3855 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4539 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r4539 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4539 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r4539 1 
o|removed side-effect free assignment to unused variable: mode1309 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6395 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r6395 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6395 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6395 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6965 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r6965 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6965 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6965 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7585 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r7585 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7585 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r7585 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7691 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r7691 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7691 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r7691 1 
o|inlining procedure: k7874 
o|inlining procedure: k8223 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8233 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r8233 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8233 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r8233 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8311 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r8311 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8311 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r8311 1 
o|replaced variables: 21 
o|removed binding forms: 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6401 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r6401 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6401 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6401 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6971 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r6971 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6971 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6971 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7697 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r7697 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7697 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r7697 2 
o|inlining procedure: k8071 
o|inlining procedure: k8071 
o|inlining procedure: k8075 
o|inlining procedure: k8075 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8239 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r8239 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8239 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r8239 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8317 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r8317 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8317 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r8317 2 
o|converted assignments to bindings: (check1311) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 29 
o|contracted procedure: k5047 
o|contracted procedure: k5087 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6407 3 
(o x)|known list op on rest arg sublist: ##core#rest-car r6407 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6407 3 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6407 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6977 3 
(o x)|known list op on rest arg sublist: ##core#rest-car r6977 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6977 3 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6977 3 
o|substituted constant variable: r80729919 
o|substituted constant variable: r80769921 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8245 3 
(o x)|known list op on rest arg sublist: ##core#rest-car r8245 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8245 3 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r8245 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8323 3 
(o x)|known list op on rest arg sublist: ##core#rest-car r8323 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r8323 3 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r8323 3 
o|removed binding forms: 10 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6413 4 
(o x)|known list op on rest arg sublist: ##core#rest-car r6413 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6413 4 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6413 4 
o|removed binding forms: 9 
o|removed binding forms: 2 
o|direct leaf routine/allocation: rec1159 0 
o|direct leaf routine/allocation: g12401247 0 
o|direct leaf routine/allocation: doloop15941612 0 
o|direct leaf routine/allocation: doloop15931595 0 
o|direct leaf routine/allocation: for-each-loop17061718 0 
o|direct leaf routine/allocation: g23952402 0 
o|contracted procedure: k4491 
o|converted assignments to bindings: (rec1159) 
o|contracted procedure: "(posix-common.scm:779) k4852" 
o|contracted procedure: k5533 
o|contracted procedure: k5536 
o|converted assignments to bindings: (doloop15941612) 
o|converted assignments to bindings: (doloop15931595) 
o|contracted procedure: k5959 
o|converted assignments to bindings: (for-each-loop17061718) 
o|contracted procedure: "(posixunix.scm:1300) k8186" 
o|simplifications: ((let . 4)) 
o|removed binding forms: 6 
o|direct leaf routine/allocation: for-each-loop12391252 0 
o|direct leaf routine/allocation: for-each-loop23942412 0 
o|converted assignments to bindings: (for-each-loop12391252) 
o|converted assignments to bindings: (for-each-loop23942412) 
o|simplifications: ((let . 2)) 
x|eliminated type checks:
x|  C_i_check_structure:	2
o|customizable procedures: (va9695 va9693 va9691 va9689 loop1727 %process2383 chkstrlst2390 chicken.posix#process-impl output-port2323 make-on-close2288 input-port2322 spawn2321 connect-parent2290 needed-pipe2289 k8001 connect-child2291 tmp12903 tmp22904 k7809 chicken.posix#call-with-exec-args loop2122 loop2114 fileno2072 loop2090 k7263 loop2040 k7057 loop1934 peek1876 ready?1875 fetch1877 loop1821 k6059 k5519 k5522 lp1648 lp1667 k5601 check1311 chicken.posix#check-environment-list map-loop12811299 chicken.posix#list->c-string-buffer k4919 doloop12271228 tmp12826 tmp22827 doloop12081209 chicken.posix#free-c-string-buffer k4550 k4568 k4604 chicken.posix#process-wait-impl g10341041 for-each-loop10331047 chicken.posix#check-time-vector k3949 mode829 check830 chicken.posix#chown chicken.posix#stat g258267 map-loop252274) 
o|shared closure containers: 21 
o|shared closure users: 28 
o|calls to known targets: 232 
o|unused rest argument: rest239241 f_3062 
o|unused rest argument: rest717719 f_3323 
o|unused rest argument: rest781783 f_3501 
o|unused rest argument: rest854856 f_3799 
o|unused rest argument: rest871873 f_3849 
o|unused rest argument: new897 f_3944 
o|unused rest argument: rest938939 f_4026 
o|unused rest argument: rest949950 f_4047 
o|unused rest argument: rest967968 f_4079 
o|unused rest argument: rest10081010 f_4162 
o|unused rest argument: rest10551056 f_4263 
o|identified direct recursive calls: f_4495 1 
o|unused rest argument: args1168 f_4533 
o|identified direct recursive calls: f_4844 1 
o|unused rest argument: rest15181521 f_5315 
o|identified direct recursive calls: f_5812 1 
o|identified direct recursive calls: f_5770 1 
o|identified direct recursive calls: f_5633 2 
o|identified direct recursive calls: f_5692 2 
o|unused rest argument: rest16951696 f_5893 
o|identified direct recursive calls: f_5973 1 
o|unused rest argument: rest17631765 f_6054 
o|unused rest argument: rest18101812 f_6252 
o|identified direct recursive calls: f_6679 1 
o|unused rest argument: rest18491853 f_6389 
o|identified direct recursive calls: f_7155 1 
o|unused rest argument: rest19841988 f_6959 
o|unused rest argument: rest20822084 f_7321 
o|unused rest argument: rest21062108 f_7383 
o|unused rest argument: rest21592161 f_7504 
o|unused rest argument: rest21932194 f_7579 
o|unused rest argument: rest22262228 f_7685 
o|identified direct recursive calls: f_8178 1 
o|unused rest argument: rest24252427 f_8227 
o|unused rest argument: rest24452447 f_8305 
o|unused rest argument: _24722475 f_8412 
o|identified direct recursive calls: f_8607 2 
o|unused rest argument: rest915916 f_8640 
o|fast box initializations: 20 
o|fast global references: 85 
o|fast global assignments: 22 
o|dropping unused closure argument: f_3277 
o|dropping unused closure argument: f_3744 
o|dropping unused closure argument: f_3777 
o|dropping unused closure argument: f_4007 
o|dropping unused closure argument: f_4669 
o|dropping unused closure argument: f_4786 
o|dropping unused closure argument: f_4820 
o|dropping unused closure argument: f_5023 
o|dropping unused closure argument: f_5973 
o|dropping unused closure argument: f_6136 
o|dropping unused closure argument: f_7306 
o|dropping unused closure argument: f_7763 
o|dropping unused closure argument: f_7900 
o|dropping unused closure argument: f_7925 
o|dropping unused closure argument: f_7945 
o|dropping unused closure argument: f_7957 
o|dropping unused closure argument: f_8162 
*/
/* end of file */
