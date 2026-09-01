/* Generated from posix.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: posix.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file posixwin.c -feature platform-windows -emit-import-library chicken.errno -emit-import-library chicken.file.posix -emit-import-library chicken.time.posix -emit-import-library chicken.process -emit-import-library chicken.process.signal -emit-import-library chicken.process-context.posix -no-module-registration
   unit: posix
   uses: extras scheduler data-structures port pathname lolevel library
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



#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif

#include <direct.h>
#include <errno.h>
#include <fcntl.h>
#include <io.h>
#include <process.h>
#include <signal.h>
#include <stdio.h>
#include <utime.h>
#include <windows.h>
#include <winsock2.h>

#define PIPE_BUF	512

#ifndef EWOULDBLOCK
# define EWOULDBLOCK 0
#endif

static int C_pipefds[ 2 ];
static time_t C_secs;

/* pipe handles */
static HANDLE C_rd0, C_wr0, C_wr0_, C_rd1, C_wr1, C_rd1_;
static HANDLE C_save0, C_save1; /* saved I/O handles */
static char C_rdbuf; /* one-char buffer for read */
static int C_exstatus;
static HANDLE C_pid;

/* platform information; initialized for cached testing */
static char C_shlcmd[255 + 1] = "";

/* Current user name */
static C_char C_username[255 + 1] = "";

#define open_binary_input_pipe(a, n, name) C_mpointer(a, _wpopen(C_OS_FILENAME(name, 0), L"r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, _wpopen(C_OS_FILENAME(name, 0), L"w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)                        C_fix(_pclose(C_port_file(p)))

#define C_chmod(fn, m)      C_fix(_wchmod(C_OS_FILENAME(fn, 0), C_unfix(m)))
#define C_pipe(d, m)        C_fix(_pipe(C_pipefds, PIPE_BUF, C_unfix(m)))
#define C_close(fd)         C_fix(close(C_unfix(fd)))

#define C_u_i_lstat(fn)     C_u_i_stat(fn)

#define C_open(fn, fl, m)   C_fix(_wopen(C_OS_FILENAME(fn, 0), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))

#define C_flushall()        C_fix(_flushall())

#define C_umask(m)          C_fix(_umask(C_unfix(m)))

#define C_ctime(n)          (C_secs = (n), ctime(&C_secs))

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

/*
  mapping from Win32 error codes to errno
*/

typedef struct
{
    DWORD   win32;
    int	    libc;
} errmap_t;

static errmap_t errmap[] =
{
    {ERROR_INVALID_FUNCTION,	  EINVAL},
    {ERROR_FILE_NOT_FOUND,	  ENOENT},
    {ERROR_PATH_NOT_FOUND,	  ENOENT},
    {ERROR_TOO_MANY_OPEN_FILES,	  EMFILE},
    {ERROR_ACCESS_DENIED,	  EACCES},
    {ERROR_INVALID_HANDLE,	  EBADF},
    {ERROR_ARENA_TRASHED,	  ENOMEM},
    {ERROR_NOT_ENOUGH_MEMORY,	  ENOMEM},
    {ERROR_INVALID_BLOCK,	  ENOMEM},
    {ERROR_BAD_ENVIRONMENT,	  E2BIG},
    {ERROR_BAD_FORMAT,		  ENOEXEC},
    {ERROR_INVALID_ACCESS,	  EINVAL},
    {ERROR_INVALID_DATA,	  EINVAL},
    {ERROR_INVALID_DRIVE,	  ENOENT},
    {ERROR_CURRENT_DIRECTORY,	  EACCES},
    {ERROR_NOT_SAME_DEVICE,	  EXDEV},
    {ERROR_NO_MORE_FILES,	  ENOENT},
    {ERROR_LOCK_VIOLATION,	  EACCES},
    {ERROR_BAD_NETPATH,		  ENOENT},
    {ERROR_NETWORK_ACCESS_DENIED, EACCES},
    {ERROR_BAD_NET_NAME,	  ENOENT},
    {ERROR_FILE_EXISTS,		  EEXIST},
    {ERROR_CANNOT_MAKE,		  EACCES},
    {ERROR_FAIL_I24,		  EACCES},
    {ERROR_INVALID_PARAMETER,	  EINVAL},
    {ERROR_NO_PROC_SLOTS,	  EAGAIN},
    {ERROR_DRIVE_LOCKED,	  EACCES},
    {ERROR_BROKEN_PIPE,		  EPIPE},
    {ERROR_DISK_FULL,		  ENOSPC},
    {ERROR_INVALID_TARGET_HANDLE, EBADF},
    {ERROR_INVALID_HANDLE,	  EINVAL},
    {ERROR_WAIT_NO_CHILDREN,	  ECHILD},
    {ERROR_CHILD_NOT_COMPLETE,	  ECHILD},
    {ERROR_DIRECT_ACCESS_HANDLE,  EBADF},
    {ERROR_NEGATIVE_SEEK,	  EINVAL},
    {ERROR_SEEK_ON_DEVICE,	  EACCES},
    {ERROR_DIR_NOT_EMPTY,	  ENOTEMPTY},
    {ERROR_NOT_LOCKED,		  EACCES},
    {ERROR_BAD_PATHNAME,	  ENOENT},
    {ERROR_MAX_THRDS_REACHED,	  EAGAIN},
    {ERROR_LOCK_FAILED,		  EACCES},
    {ERROR_ALREADY_EXISTS,	  EEXIST},
    {ERROR_FILENAME_EXCED_RANGE,  ENOENT},
    {ERROR_NESTING_NOT_ALLOWED,	  EAGAIN},
    {ERROR_NOT_ENOUGH_QUOTA,	  ENOMEM},
    {0, 0}
};

static void
set_errno(DWORD w32err)
{
    errmap_t *map;
    for (map = errmap; map->win32; ++map)
    {
	if (map->win32 == w32err)
	{
	    errno = map->libc;
	    return;
	}
    }
    errno = ENOSYS; /* For lack of anything better */
}

static int
set_last_errno()
{
    set_errno(GetLastError());
    return 0;
}

static int fd_to_path(C_word fd, C_WCHAR path[])
{
  DWORD result;
  HANDLE fh = (HANDLE)_get_osfhandle(C_unfix(fd));

  if (fh == INVALID_HANDLE_VALUE) {
    set_last_errno();
    return -1;
  }

	/* XXX wchar_t */
  result = GetFinalPathNameByHandleW(fh, path, MAX_PATH, VOLUME_NAME_DOS);
  if (result == 0) {
    set_last_errno();
    return -1;
  } else if (result >= MAX_PATH) { /* Shouldn't happen */
    errno = ENOMEM; /* For lack of anything better */
    return -1;
  } else {
    return 0;
  }
}

static C_word C_fchmod(C_word fd, C_word m)
{
  C_WCHAR path[MAX_PATH];
  if (fd_to_path(fd, path) == -1) return C_fix(-1);
  else return C_fix(_wchmod(path, C_unfix(m)));
}

static C_word C_fchdir(C_word fd)
{
  C_WCHAR path[MAX_PATH];
  if (fd_to_path(fd, path) == -1) return C_fix(-1);
  else return C_fix(_wchdir(path));
}

static int
process_wait(C_word h, C_word t)
{
    DWORD wait_result = WaitForSingleObject((HANDLE)h, (t ? 0 : INFINITE));
    DWORD ret;
    switch (wait_result)
    {
        case WAIT_OBJECT_0:
            if (GetExitCodeProcess((HANDLE)h, &ret))
            {
                CloseHandle((HANDLE)h);
                C_exstatus = ret;
                C_pid = (HANDLE)h;
                return 1;
            }
            break;
        case WAIT_TIMEOUT:
            C_pid = 0;
            return 1;
    }
    return set_last_errno();
}

#define C_process_wait(p, t) (process_wait(C_unfix(p), C_truep(t)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)


static int C_isNT = 0;


static int
C_windows_nt()
{
  static int has_info = 0;

  if(!has_info) {
    OSVERSIONINFO ovf;
    ZeroMemory(&ovf, sizeof(ovf));
    ovf.dwOSVersionInfoSize = sizeof(ovf);
    has_info = 1;

    if(GetVersionEx(&ovf)) {
      SYSTEM_INFO si;

      switch (ovf.dwPlatformId) {
      case VER_PLATFORM_WIN32_NT:
        return C_isNT = 1;
      }
    }
  }

  return C_isNT;
}


static int
get_shlcmd()
{
    static wchar_t buf[ 255 ];
    /* Do we need to build the shell command pathname? */
    if (!strlen(C_shlcmd))
    {
      char *cmdnam = C_windows_nt() ? "\\cmd.exe" : "\\command.com";
      UINT len = GetSystemDirectoryW(buf, sizeof(buf));
      if (len)
        C_strlcpy(C_shlcmd + len, C_utf8(buf), sizeof(C_shlcmd));
      else
        return set_last_errno();
    }

    return 1;
}

#define C_sysinfo() (sysinfo() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_get_shlcmd() (get_shlcmd() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/* GetUserName */

static int
get_user_name()
{
    static wchar_t buf[ 255 ];
    if (!C_strlen(C_username))
    {
        DWORD bufCharCount = sizeof(buf) / sizeof(buf[0]);
        if (!GetUserNameW(buf, &bufCharCount))
            return set_last_errno();
        C_strlcpy(C_username, C_utf8(buf), sizeof(C_username));
    }
    return 1;
}

#define C_get_user_name() (get_user_name() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/*
    Spawn a process directly.
    Params:
    app         Command to execute.
    cmdlin      Command line (arguments).
    env         Environment for the new process (may be NULL).
    handle, stdin, stdout, stderr
                Spawned process info are returned in integers.
                When spawned process shares standard io stream with the parent
                process the respective value in handle, stdin, stdout, stderr
                is -1.
    params      A bitmask controling operation.
                Bit 1: Child & parent share standard input if this bit is set.
                Bit 2: Share standard output if bit is set.
                Bit 3: Share standard error if bit is set.

    Returns: pid, zero return value indicates failure.
*/
static DWORD
C_process(const char *app, C_word cmdlin, const char **env,
          int *phandle, int *pstdin_fd, int *pstdout_fd, int *pstderr_fd,
          int params)
{
    int i;
    int success = TRUE;
    DWORD pid;
    const int f_share_io[3] = { params & 1, params & 2, params & 4};
    int io_fds[3] = { -1, -1, -1 };
    HANDLE
        child_io_handles[3] = { NULL, NULL, NULL },
        standard_io_handles[3] = {
            GetStdHandle(STD_INPUT_HANDLE),
            GetStdHandle(STD_OUTPUT_HANDLE),
            GetStdHandle(STD_ERROR_HANDLE)};
    const char modes[3] = "rww";
    HANDLE cur_process = GetCurrentProcess(), child_process = NULL;
    void* envblk = NULL;

    /****** create io handles & fds ***/

    for (i=0; i<3 && success; ++i)
    {
	if (f_share_io[i])
	{
	    success = DuplicateHandle(
		cur_process, standard_io_handles[i],
		cur_process, &child_io_handles[i],
		0, FALSE, DUPLICATE_SAME_ACCESS);
	}
	else
	{
	    HANDLE a, b;
	    success = CreatePipe(&a,&b,NULL,0);
	    if(success)
	    {
		HANDLE parent_end;
		if (modes[i]=='r') { child_io_handles[i]=a; parent_end=b; }
		else		   { parent_end=a; child_io_handles[i]=b; }
		success = (io_fds[i] = _open_osfhandle((C_word)parent_end,0)) >= 0;
                /* Make new handle inheritable */
		if (success)
		  success = SetHandleInformation(child_io_handles[i], HANDLE_FLAG_INHERIT, -1);
	    }
	}
    }

#if 0 /* Requires a sorted list by key! */
    /****** create environment block if necessary ****/

    if (env && success)
    {
        char** p;
        int len = 0;

        for (p = env; *p; ++p) len += strlen(*p) + 1;

        if (envblk = C_malloc((len + 1) * sizeof(wchar_t));
        {
            wchar_t* pb = (wchar_t*)envblk;
            for (p = env; *p; ++p)
            {
            	wchar_t *u = C_utf16(*p, 0);  /* BOGUS! */
            	int n = wcslen(*u);
                C_memcpy(pb, *u, n + 1);
                pb += n + 1;
            }
            *pb = '\0';
            /* This _should_ already have been checked for embedded NUL bytes */
        }
        else
            success = FALSE;
    }
#endif

    /****** finally spawn process ****/

    if (success)
    {
        PROCESS_INFORMATION pi;
        STARTUPINFOW si;

        ZeroMemory(&pi,sizeof pi);
        ZeroMemory(&si,sizeof si);
        si.cb = sizeof si;
        si.dwFlags = STARTF_USESTDHANDLES;
        si.hStdInput = child_io_handles[0];
        si.hStdOutput = child_io_handles[1];
        si.hStdError = child_io_handles[2];

        /* FIXME passing 'app' param causes failure & possible stack corruption */
        success = CreateProcessW(
            NULL, C_utf16(cmdlin, 0), NULL, NULL, TRUE, 0, envblk, NULL, &si, &pi);

        if (success)
        {
            child_process=pi.hProcess;
            CloseHandle(pi.hThread);
            pid = pi.dwProcessId;
        }
        else
            set_last_errno();
    }
    else
        set_last_errno();

    /****** cleanup & return *********/

    /* parent must close child end */
    for (i=0; i<3; ++i) {
	if (child_io_handles[i] != NULL)
	    CloseHandle(child_io_handles[i]);
    }

    if (success)
    {
	*phandle = (C_word)child_process;
	*pstdin_fd = io_fds[0];
	*pstdout_fd = io_fds[1];
	*pstderr_fd = io_fds[2];
    }
    else
    {
	for (i=0; i<3; ++i) {
	    if (io_fds[i] != -1)
		_close(io_fds[i]);
	}
    }

    return success;
}

static int set_file_mtime(C_word filename, C_word atime, C_word mtime)
{
  struct _stat64i32 sb;
  struct _utimbuf tb;
  C_word bv = C_block_item(filename, 0);
  C_WCHAR *fn = C_OS_FILENAME(bv, 0);

  /* Only stat if needed */
  if (atime == C_SCHEME_FALSE || mtime == C_SCHEME_FALSE) {
    if (C_stat(fn, &sb) == -1) return -1;
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
  return _wutime(fn, &tb);
}

#define C_u_i_execvp(f, a) C_fix(_wexecvp(C_utf16(f, 0), (void *)C_c_pointer_vector_or_null(a)))
#define C_u_i_execve(f,a,e) C_fix(_wexecve(C_utf16(f, 0), (void *)C_c_pointer_vector_or_null(a), (void *)C_c_pointer_vector_or_null(e)))

/* MS replacement for the fork-exec pair */
#define C_u_i_spawnvp(m,f,a)    C_fix(_wspawnvp(C_unfix(m), C_utf16(f, 0), (void *)C_c_pointer_vector_or_null(a)))
#define C_u_i_spawnvpe(m,f,a,e) C_fix(_wspawnvpe(C_unfix(m), C_utf16(f, 0), (void *)C_c_pointer_vector_or_null(a), (void *)C_c_pointer_vector_or_null(e)))



static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_extern void C_ccall C_scheduler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_extern void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_extern void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_extern void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[435];
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
static C_char li42[] C_aligned={C_lihdr(0,0,11),40,97,51,56,51,51,32,115,105,103,41,0,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,11),40,103,49,48,51,52,32,115,105,103,41,0,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,15),40,102,95,51,56,52,50,32,46,32,114,101,115,116,41,0};
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
static C_char li57[] C_aligned={C_lihdr(0,0,7),40,97,52,49,53,54,41,0};
static C_char li58[] C_aligned={C_lihdr(0,0,5),40,114,101,99,41,0,0,0};
static C_char li59[] C_aligned={C_lihdr(0,0,24),40,97,52,49,54,50,32,101,112,105,100,32,101,110,111,114,109,32,101,99,111,100,101,41};
static C_char li60[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,41,0,0,0};
static C_char li61[] C_aligned={C_lihdr(0,0,7),40,97,52,50,55,53,41,0};
static C_char li62[] C_aligned={C_lihdr(0,0,11),40,97,52,50,54,57,32,101,120,110,41,0,0,0,0,0};
static C_char li63[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,49,50,48,56,32,115,108,32,105,41,0,0,0,0,0,0,0};
static C_char li64[] C_aligned={C_lihdr(0,0,10),40,116,109,112,49,50,52,52,52,41,0,0,0,0,0,0};
static C_char li65[] C_aligned={C_lihdr(0,0,7),40,97,52,51,52,57,41,0};
static C_char li66[] C_aligned={C_lihdr(0,0,15),40,116,109,112,50,50,52,52,53,32,97,114,103,115,41,0};
static C_char li67[] C_aligned={C_lihdr(0,0,7),40,97,52,50,56,52,41,0};
static C_char li68[] C_aligned={C_lihdr(0,0,9),40,97,52,50,54,51,32,107,41,0,0,0,0,0,0,0};
static C_char li69[] C_aligned={C_lihdr(0,0,61),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,108,105,115,116,45,62,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,115,116,114,105,110,103,45,108,105,115,116,32,99,111,110,118,101,114,116,32,108,111,99,41,0,0,0};
static C_char li70[] C_aligned={C_lihdr(0,0,14),40,100,111,108,111,111,112,49,50,50,55,32,105,41,0,0};
static C_char li71[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,102,114,101,101,45,99,45,115,116,114,105,110,103,45,98,117,102,102,101,114,32,98,117,102,102,101,114,45,97,114,114,97,121,41,0,0,0,0,0,0,0};
static C_char li72[] C_aligned={C_lihdr(0,0,7),40,103,49,50,52,48,41,0};
static C_char li73[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,50,51,57,41,0,0,0,0,0};
static C_char li74[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,104,101,99,107,45,101,110,118,105,114,111,110,109,101,110,116,45,108,105,115,116,32,108,115,116,32,108,111,99,41,0,0};
static C_char li75[] C_aligned={C_lihdr(0,0,7),40,110,111,112,32,120,41,0};
static C_char li76[] C_aligned={C_lihdr(0,0,7),40,97,52,52,55,52,41,0};
static C_char li77[] C_aligned={C_lihdr(0,0,11),40,97,52,52,54,56,32,101,120,110,41,0,0,0,0,0};
static C_char li78[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,56,49,32,103,49,50,57,51,41,0,0,0,0};
static C_char li79[] C_aligned={C_lihdr(0,0,7),40,97,52,52,57,53,41,0};
static C_char li80[] C_aligned={C_lihdr(0,0,7),40,97,52,53,55,54,41,0};
static C_char li81[] C_aligned={C_lihdr(0,0,14),40,97,52,53,55,48,32,46,32,97,114,103,115,41,0,0};
static C_char li82[] C_aligned={C_lihdr(0,0,7),40,97,52,52,56,57,41,0};
static C_char li83[] C_aligned={C_lihdr(0,0,9),40,97,52,52,54,50,32,107,41,0,0,0,0,0,0,0};
static C_char li84[] C_aligned={C_lihdr(0,0,77),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,99,97,108,108,45,119,105,116,104,45,101,120,101,99,45,97,114,103,115,32,108,111,99,32,102,105,108,101,110,97,109,101,32,97,114,103,99,111,110,118,32,97,114,103,108,105,115,116,32,101,110,118,108,105,115,116,32,112,114,111,99,41,0,0,0};
static C_char li85[] C_aligned={C_lihdr(0,0,21),40,99,104,101,99,107,32,108,111,99,32,99,109,100,32,105,110,112,32,114,41,0,0,0};
static C_char li86[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0,0};
static C_char li87[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,46,32,109,41,0,0,0,0,0,0};
static C_char li88[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,41,0};
static C_char li89[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,108,111,115,101,45,111,117,116,112,117,116,45,112,105,112,101,32,112,111,114,116,41};
static C_char li90[] C_aligned={C_lihdr(0,0,7),40,97,52,55,51,57,41,0};
static C_char li91[] C_aligned={C_lihdr(0,0,17),40,97,52,55,53,48,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char li92[] C_aligned={C_lihdr(0,0,7),40,97,52,55,52,52,41,0};
static C_char li93[] C_aligned={C_lihdr(0,0,7),40,97,52,55,53,57,41,0};
static C_char li94[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0};
static C_char li95[] C_aligned={C_lihdr(0,0,7),40,97,52,55,55,51,41,0};
static C_char li96[] C_aligned={C_lihdr(0,0,17),40,97,52,55,55,57,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char li97[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0};
static C_char li98[] C_aligned={C_lihdr(0,0,7),40,97,52,55,57,55,41,0};
static C_char li99[] C_aligned={C_lihdr(0,0,17),40,97,52,56,48,51,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char li100[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,32,112,114,111,99,32,46,32,109,111,100,101,41,0,0};
static C_char li101[] C_aligned={C_lihdr(0,0,7),40,97,52,56,50,49,41,0};
static C_char li102[] C_aligned={C_lihdr(0,0,17),40,97,52,56,51,50,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char li103[] C_aligned={C_lihdr(0,0,7),40,97,52,56,50,54,41,0};
static C_char li104[] C_aligned={C_lihdr(0,0,7),40,97,52,56,52,49,41,0};
static C_char li105[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,32,116,104,117,110,107,32,46,32,109,111,100,101,41,0,0};
static C_char li106[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,32,102,108,97,103,115,32,46,32,109,111,100,101,41,0,0,0,0};
static C_char li107[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li108[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,108,111,115,101,32,102,100,41,0,0,0,0,0,0};
static C_char li109[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,114,101,97,100,32,102,100,32,115,105,122,101,32,46,32,98,117,102,102,101,114,41,0};
static C_char li110[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,119,114,105,116,101,32,102,100,32,98,117,102,102,101,114,32,46,32,114,101,115,116,41};
static C_char li111[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li112[] C_aligned={C_lihdr(0,0,13),40,115,117,102,102,105,120,45,108,111,111,112,41,0,0,0};
static C_char li113[] C_aligned={C_lihdr(0,0,8),40,118,97,54,57,49,51,41};
static C_char li114[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,99,111,117,110,116,41,0,0,0,0};
static C_char li115[] C_aligned={C_lihdr(0,0,8),40,118,97,54,57,50,49,41};
static C_char li116[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,41,0,0,0,0,0,0};
static C_char li117[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,99,114,101,97,116,101,45,112,105,112,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li118[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,32,46,32,110,101,119,41,0,0,0,0,0,0};
static C_char li119[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41};
static C_char li120[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li121[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,113,117,111,116,101,45,97,114,103,45,115,116,114,105,110,103,32,115,116,114,41,0,0,0,0};
static C_char li122[] C_aligned={C_lihdr(0,0,10),40,102,95,53,51,55,57,32,120,41,0,0,0,0,0,0};
static C_char li123[] C_aligned={C_lihdr(0,0,25),40,97,53,51,54,52,32,112,114,103,32,97,114,103,98,117,102,32,101,110,118,98,117,102,41,0,0,0,0,0,0,0};
static C_char li124[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li125[] C_aligned={C_lihdr(0,0,10),40,102,95,53,52,54,53,32,120,41,0,0,0,0,0,0};
static C_char li126[] C_aligned={C_lihdr(0,0,25),40,97,53,52,52,55,32,112,114,103,32,97,114,103,98,117,102,32,101,110,118,98,117,102,41,0,0,0,0,0,0,0};
static C_char li127[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,112,97,119,110,32,109,111,100,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li128[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,111,115,105,120,35,115,104,101,108,108,45,99,111,109,109,97,110,100,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char li129[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,114,117,110,32,102,32,46,32,97,114,103,115,41,0,0};
static C_char li130[] C_aligned={C_lihdr(0,0,7),40,103,49,56,49,55,41,0};
static C_char li131[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,49,54,41,0,0,0,0,0};
static C_char li132[] C_aligned={C_lihdr(0,0,15),40,99,104,107,115,116,114,108,115,116,32,108,115,116,41,0};
static C_char li133[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,52,48,32,103,49,55,53,50,41,0,0,0,0};
static C_char li134[] C_aligned={C_lihdr(0,0,39),40,37,112,114,111,99,101,115,115,32,108,111,99,32,101,114,114,63,32,99,109,100,32,97,114,103,115,32,101,110,118,32,101,120,97,99,116,102,41,0};
static C_char li135[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li136[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,42,32,99,109,100,32,46,32,114,101,115,116,41,0,0,0};
static C_char li137[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char li138[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,102,105,102,111,32,46,32,95,41,0,0,0,0};
static C_char li139[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,101,115,115,105,111,110,32,46,32,95,41,0,0,0,0,0,0};
static C_char li140[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,41,0,0,0};
static C_char li141[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,103,114,111,117,112,45,105,100,32,46,32,95,41,0,0};
static C_char li142[] C_aligned={C_lihdr(0,0,61),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,105,100,32,46,32,95,41,0,0,0};
static C_char li143[] C_aligned={C_lihdr(0,0,63),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,32,46,32,95,41,0};
static C_char li144[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,103,114,111,117,112,45,105,100,32,46,32,95,41,0,0,0,0};
static C_char li145[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,99,117,114,114,101,110,116,45,117,115,101,114,45,105,100,32,46,32,95,41,0,0,0,0,0};
static C_char li146[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,99,111,110,116,114,111,108,32,46,32,95,41,0,0,0};
static C_char li147[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,105,110,107,32,46,32,95,41,0,0,0,0,0,0};
static C_char li148[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,32,46,32,95,41,0,0,0,0,0,0};
static C_char li149[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,46,32,95,41,0,0,0,0,0};
static C_char li150[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,115,101,108,101,99,116,32,46,32,95,41,0,0,0,0};
static C_char li151[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,46,32,95,41,0};
static C_char li152[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,116,114,117,110,99,97,116,101,32,46,32,95,41,0,0};
static C_char li153[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,102,105,108,101,45,117,110,108,111,99,107,32,46,32,95,41,0,0,0,0};
static C_char li154[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,32,46,32,95,41,0,0,0};
static C_char li155[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,95,41,0,0,0,0,0,0};
static C_char li156[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,32,46,32,95,41,0,0,0,0};
static C_char li157[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,35,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,46,32,95,41,0,0,0,0};
static C_char li158[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,46,112,111,115,105,120,35,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,41,0,0,0,0,0};
static C_char li159[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,97,108,97,114,109,33,32,46,32,95,41,0};
static C_char li160[] C_aligned={C_lihdr(0,0,55),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,46,32,95,41,0};
static C_char li161[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,41,0,0,0};
static C_char li162[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,32,46,32,95,41};
static C_char li163[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,41,0,0,0,0,0,0,0};
static C_char li164[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,46,32,95,41,0,0,0,0,0};
static C_char li165[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,46,115,105,103,110,97,108,35,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,46,32,95,41,0,0,0,0,0};
static C_char li166[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,114,111,99,101,115,115,45,99,111,110,116,101,120,116,46,112,111,115,105,120,35,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,41,0,0,0,0};
static C_char li167[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,46,32,95,41,0,0,0,0,0,0};
static C_char li168[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,116,105,109,101,46,112,111,115,105,120,35,115,116,114,105,110,103,45,62,116,105,109,101,32,46,32,95,41,0,0,0};
static C_char li169[] C_aligned={C_lihdr(0,0,21),40,99,104,105,99,107,101,110,46,101,114,114,110,111,35,101,114,114,110,111,41,0,0,0};
static C_char li170[] C_aligned={C_lihdr(0,0,8),40,118,97,54,57,50,57,41};
static C_char li171[] C_aligned={C_lihdr(0,0,8),40,118,97,54,57,51,49,41};
static C_char li172[] C_aligned={C_lihdr(0,0,8),40,118,97,54,57,51,51,41};
static C_char li173[] C_aligned={C_lihdr(0,0,8),40,118,97,54,57,51,53,41};
static C_char li174[] C_aligned={C_lihdr(0,0,11),40,97,54,50,51,56,32,115,105,103,41,0,0,0,0,0};
static C_char li175[] C_aligned={C_lihdr(0,0,14),40,97,54,50,52,55,32,46,32,114,101,115,116,41,0,0};
static C_char li176[] C_aligned={C_lihdr(0,0,10),40,97,54,50,55,50,32,117,109,41,0,0,0,0,0,0};
static C_char li177[] C_aligned={C_lihdr(0,0,12),40,97,54,50,55,56,32,112,111,114,116,41,0,0,0,0};
static C_char li178[] C_aligned={C_lihdr(0,0,9),40,97,54,51,49,53,32,102,41,0,0,0,0,0,0,0};
static C_char li179[] C_aligned={C_lihdr(0,0,9),40,97,54,51,50,49,32,102,41,0,0,0,0,0,0,0};
static C_char li180[] C_aligned={C_lihdr(0,0,9),40,97,54,51,50,55,32,102,41,0,0,0,0,0,0,0};
static C_char li181[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k5586 */
C_regparm static C_word stub1705(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
int *t3=(int *)C_c_pointer_or_null(C_a3);
int *t4=(int *)C_c_pointer_or_null(C_a4);
int *t5=(int *)C_c_pointer_or_null(C_a5);
int *t6=(int *)C_c_pointer_or_null(C_a6);
int t7=(int )C_unfix(C_a7);
C_r=C_mk_bool(C_process(t0,t1,t2,t3,t4,t5,t6,t7));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub1629(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word o=(C_word )(C_a0);
int len = C_header_size(o) * sizeof(C_WCHAR); 

char *ptr = C_malloc(len); 

if (ptr != NULL) {

  C_WCHAR *u = C_utf16(o, 0); 

  C_memcpy(ptr, u, len); 

}

C_return(ptr);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub1606(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char *z = (_daylight ? _tzname[1] : _tzname[0]);

C_return(z);
C_ret:
#undef return

return C_r;}

/* from k3735 */
C_regparm static C_word stub996(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
void * t2=(void * )C_data_pointer_or_null(C_a2);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1,t2));
return C_r;}

/* from k3722 */
C_regparm static C_word stub986(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0,t1));
return C_r;}

/* from k3654 */
C_regparm static C_word stub959(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from chicken.process-context.posix#current-process-id in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
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

/* from k2835 */
C_regparm static C_word stub684(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f6940)
static void C_ccall f6940(C_word c,C_word *av) C_noret;
C_noret_decl(f6944)
static void C_ccall f6944(C_word c,C_word *av) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word *av) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word *av) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word *av) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word *av) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word *av) C_noret;
C_noret_decl(f_2518)
static void C_ccall f_2518(C_word c,C_word *av) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word *av) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word *av) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623(C_word c,C_word *av) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word *av) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word *av) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word *av) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word *av) C_noret;
C_noret_decl(f_2655)
static void f_2655(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word *av) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word *av) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word *av) C_noret;
C_noret_decl(f_2696)
static void f_2696(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word *av) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word *av) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word *av) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word *av) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void f_2856(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word *av) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word *av) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word *av) C_noret;
C_noret_decl(f_2894)
static void C_ccall f_2894(C_word c,C_word *av) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word *av) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word *av) C_noret;
C_noret_decl(f_2920)
static void C_ccall f_2920(C_word c,C_word *av) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word *av) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word *av) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word *av) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word *av) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word *av) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word *av) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word *av) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word *av) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word *av) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word *av) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word *av) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word *av) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word *av) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word *av) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word *av) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word *av) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word *av) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word *av) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word *av) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word *av) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(f_3167)
static void C_ccall f_3167(C_word c,C_word *av) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word *av) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word *av) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word *av) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word *av) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word *av) C_noret;
C_noret_decl(f_3197)
static void C_ccall f_3197(C_word c,C_word *av) C_noret;
C_noret_decl(f_3205)
static void C_ccall f_3205(C_word c,C_word *av) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word *av) C_noret;
C_noret_decl(f_3215)
static void C_ccall f_3215(C_word c,C_word *av) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word *av) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word *av) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word *av) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word *av) C_noret;
C_noret_decl(f_3240)
static void C_ccall f_3240(C_word c,C_word *av) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word *av) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word *av) C_noret;
C_noret_decl(f_3295)
static void C_ccall f_3295(C_word c,C_word *av) C_noret;
C_noret_decl(f_3323)
static void f_3323(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3331)
static void C_ccall f_3331(C_word c,C_word *av) C_noret;
C_noret_decl(f_3356)
static void f_3356(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3369)
static void C_ccall f_3369(C_word c,C_word *av) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word *av) C_noret;
C_noret_decl(f_3402)
static void C_ccall f_3402(C_word c,C_word *av) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word *av) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word *av) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word *av) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word *av) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word *av) C_noret;
C_noret_decl(f_3517)
static void C_ccall f_3517(C_word c,C_word *av) C_noret;
C_noret_decl(f_3523)
static void C_ccall f_3523(C_word c,C_word *av) C_noret;
C_noret_decl(f_3530)
static void f_3530(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3533)
static void C_ccall f_3533(C_word c,C_word *av) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word *av) C_noret;
C_noret_decl(f_3553)
static void C_ccall f_3553(C_word c,C_word *av) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word *av) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word *av) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word *av) C_noret;
C_noret_decl(f_3586)
static void f_3586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word *av) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word *av) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word *av) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word *av) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word *av) C_noret;
C_noret_decl(f_3633)
static void C_ccall f_3633(C_word c,C_word *av) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word *av) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word *av) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word *av) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word *av) C_noret;
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word *av) C_noret;
C_noret_decl(f_3700)
static void C_ccall f_3700(C_word c,C_word *av) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word *av) C_noret;
C_noret_decl(f_3741)
static void C_ccall f_3741(C_word c,C_word *av) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word *av) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word *av) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word *av) C_noret;
C_noret_decl(f_3774)
static void C_ccall f_3774(C_word c,C_word *av) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word *av) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word *av) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word *av) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word *av) C_noret;
C_noret_decl(f_3824)
static void C_ccall f_3824(C_word c,C_word *av) C_noret;
C_noret_decl(f_3825)
static void f_3825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word *av) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word *av) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word *av) C_noret;
C_noret_decl(f_3863)
static void f_3863(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3873)
static void C_ccall f_3873(C_word c,C_word *av) C_noret;
C_noret_decl(f_3886)
static void C_ccall f_3886(C_word c,C_word *av) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word *av) C_noret;
C_noret_decl(f_3912)
static void C_ccall f_3912(C_word c,C_word *av) C_noret;
C_noret_decl(f_3927)
static void C_ccall f_3927(C_word c,C_word *av) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word *av) C_noret;
C_noret_decl(f_3963)
static void C_ccall f_3963(C_word c,C_word *av) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word *av) C_noret;
C_noret_decl(f_3999)
static void C_ccall f_3999(C_word c,C_word *av) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word *av) C_noret;
C_noret_decl(f_4074)
static C_word f_4074(C_word t0,C_word t1);
C_noret_decl(f_4106)
static void C_ccall f_4106(C_word c,C_word *av) C_noret;
C_noret_decl(f_4112)
static void C_ccall f_4112(C_word c,C_word *av) C_noret;
C_noret_decl(f_4131)
static void f_4131(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4149)
static void f_4149(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4157)
static void C_ccall f_4157(C_word c,C_word *av) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word *av) C_noret;
C_noret_decl(f_4185)
static void f_4185(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word *av) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word *av) C_noret;
C_noret_decl(f_4248)
static void f_4248(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4256)
static void C_ccall f_4256(C_word c,C_word *av) C_noret;
C_noret_decl(f_4259)
static void C_ccall f_4259(C_word c,C_word *av) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word *av) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word *av) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word *av) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word *av) C_noret;
C_noret_decl(f_4285)
static void C_ccall f_4285(C_word c,C_word *av) C_noret;
C_noret_decl(f_4287)
static void f_4287(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word *av) C_noret;
C_noret_decl(f_4293)
static void f_4293(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word *av) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word *av) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word *av) C_noret;
C_noret_decl(f_4334)
static void C_ccall f_4334(C_word c,C_word *av) C_noret;
C_noret_decl(f_4344)
static void f_4344(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word *av) C_noret;
C_noret_decl(f_4361)
static void C_ccall f_4361(C_word c,C_word *av) C_noret;
C_noret_decl(f_4365)
static void f_4365(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word *av) C_noret;
C_noret_decl(f_4374)
static void f_4374(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word *av) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word *av) C_noret;
C_noret_decl(f_4399)
static void f_4399(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4404)
static C_word f_4404(C_word t0,C_word t1);
C_noret_decl(f_4423)
static C_word f_4423(C_word t0,C_word t1);
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word *av) C_noret;
C_noret_decl(f_4448)
static void f_4448(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word *av) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word *av) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word *av) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word *av) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word *av) C_noret;
C_noret_decl(f_4479)
static void C_ccall f_4479(C_word c,C_word *av) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word *av) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word *av) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word *av) C_noret;
C_noret_decl(f_4500)
static void f_4500(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word *av) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word *av) C_noret;
C_noret_decl(f_4514)
static void C_ccall f_4514(C_word c,C_word *av) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word *av) C_noret;
C_noret_decl(f_4537)
static void f_4537(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word *av) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571(C_word c,C_word *av) C_noret;
C_noret_decl(f_4577)
static void C_ccall f_4577(C_word c,C_word *av) C_noret;
C_noret_decl(f_4602)
static void f_4602(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4615)
static void C_ccall f_4615(C_word c,C_word *av) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word *av) C_noret;
C_noret_decl(f_4635)
static void C_ccall f_4635(C_word c,C_word *av) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word *av) C_noret;
C_noret_decl(f_4652)
static void C_ccall f_4652(C_word c,C_word *av) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word *av) C_noret;
C_noret_decl(f_4675)
static void C_ccall f_4675(C_word c,C_word *av) C_noret;
C_noret_decl(f_4682)
static void C_ccall f_4682(C_word c,C_word *av) C_noret;
C_noret_decl(f_4692)
static void C_ccall f_4692(C_word c,C_word *av) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word *av) C_noret;
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word *av) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word *av) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word *av) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word *av) C_noret;
C_noret_decl(f_4735)
static void C_ccall f_4735(C_word c,C_word *av) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word *av) C_noret;
C_noret_decl(f_4745)
static void C_ccall f_4745(C_word c,C_word *av) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word *av) C_noret;
C_noret_decl(f_4755)
static void C_ccall f_4755(C_word c,C_word *av) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word *av) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word *av) C_noret;
C_noret_decl(f_4769)
static void C_ccall f_4769(C_word c,C_word *av) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word *av) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word *av) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word *av) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word *av) C_noret;
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word *av) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word *av) C_noret;
C_noret_decl(f_4804)
static void C_ccall f_4804(C_word c,C_word *av) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word *av) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813(C_word c,C_word *av) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word *av) C_noret;
C_noret_decl(f_4822)
static void C_ccall f_4822(C_word c,C_word *av) C_noret;
C_noret_decl(f_4827)
static void C_ccall f_4827(C_word c,C_word *av) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word *av) C_noret;
C_noret_decl(f_4837)
static void C_ccall f_4837(C_word c,C_word *av) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word *av) C_noret;
C_noret_decl(f_4851)
static void C_ccall f_4851(C_word c,C_word *av) C_noret;
C_noret_decl(f_4868)
static void C_ccall f_4868(C_word c,C_word *av) C_noret;
C_noret_decl(f_4871)
static void C_ccall f_4871(C_word c,C_word *av) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word *av) C_noret;
C_noret_decl(f_4887)
static void C_ccall f_4887(C_word c,C_word *av) C_noret;
C_noret_decl(f_4896)
static void C_ccall f_4896(C_word c,C_word *av) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word *av) C_noret;
C_noret_decl(f_4928)
static void C_ccall f_4928(C_word c,C_word *av) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word *av) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word *av) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word *av) C_noret;
C_noret_decl(f_4959)
static void C_ccall f_4959(C_word c,C_word *av) C_noret;
C_noret_decl(f_4969)
static void f_4969(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word *av) C_noret;
C_noret_decl(f_4981)
static void C_ccall f_4981(C_word c,C_word *av) C_noret;
C_noret_decl(f_4991)
static void C_ccall f_4991(C_word c,C_word *av) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word *av) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034(C_word c,C_word *av) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word *av) C_noret;
C_noret_decl(f_5046)
static void f_5046(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5054)
static void C_ccall f_5054(C_word c,C_word *av) C_noret;
C_noret_decl(f_5093)
static C_word f_5093(C_word t0,C_word t1);
C_noret_decl(f_5134)
static void C_ccall f_5134(C_word c,C_word *av) C_noret;
C_noret_decl(f_5138)
static void C_ccall f_5138(C_word c,C_word *av) C_noret;
C_noret_decl(f_5147)
static C_word f_5147(C_word t0,C_word t1);
C_noret_decl(f_5176)
static void C_ccall f_5176(C_word c,C_word *av) C_noret;
C_noret_decl(f_5183)
static void C_ccall f_5183(C_word c,C_word *av) C_noret;
C_noret_decl(f_5196)
static void C_ccall f_5196(C_word c,C_word *av) C_noret;
C_noret_decl(f_5239)
static void C_ccall f_5239(C_word c,C_word *av) C_noret;
C_noret_decl(f_5246)
static void f_5246(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5249)
static void C_ccall f_5249(C_word c,C_word *av) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word *av) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word *av) C_noret;
C_noret_decl(f_5291)
static C_word f_5291(C_word t0,C_word t1);
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word *av) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word *av) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365(C_word c,C_word *av) C_noret;
C_noret_decl(f_5379)
static void C_ccall f_5379(C_word c,C_word *av) C_noret;
C_noret_decl(f_5418)
static void C_ccall f_5418(C_word c,C_word *av) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word *av) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word *av) C_noret;
C_noret_decl(f_5504)
static void f_5504(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5508)
static void C_ccall f_5508(C_word c,C_word *av) C_noret;
C_noret_decl(f_5524)
static void C_ccall f_5524(C_word c,C_word *av) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word *av) C_noret;
C_noret_decl(f_5549)
static void C_ccall f_5549(C_word c,C_word *av) C_noret;
C_noret_decl(f_5564)
static void C_ccall f_5564(C_word c,C_word *av) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word *av) C_noret;
C_noret_decl(f_5635)
static void C_ccall f_5635(C_word c,C_word *av) C_noret;
C_noret_decl(f_5639)
static void C_ccall f_5639(C_word c,C_word *av) C_noret;
C_noret_decl(f_5643)
static void C_ccall f_5643(C_word c,C_word *av) C_noret;
C_noret_decl(f_5659)
static void C_ccall f_5659(C_word c,C_word *av) C_noret;
C_noret_decl(f_5667)
static void C_ccall f_5667(C_word c,C_word *av) C_noret;
C_noret_decl(f_5671)
static void C_ccall f_5671(C_word c,C_word *av) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word *av) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679(C_word c,C_word *av) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word *av) C_noret;
C_noret_decl(f_5707)
static void f_5707(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5732)
static void C_ccall f_5732(C_word c,C_word *av) C_noret;
C_noret_decl(f_5740)
static void f_5740(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5742)
static void f_5742(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5747)
static C_word f_5747(C_word t0,C_word t1);
C_noret_decl(f_5756)
static C_word f_5756(C_word t0,C_word t1);
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word *av) C_noret;
C_noret_decl(f_5786)
static void C_ccall f_5786(C_word c,C_word *av) C_noret;
C_noret_decl(f_5804)
static void C_ccall f_5804(C_word c,C_word *av) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word *av) C_noret;
C_noret_decl(f_5884)
static void C_ccall f_5884(C_word c,C_word *av) C_noret;
C_noret_decl(f_5974)
static void C_ccall f_5974(C_word c,C_word *av) C_noret;
C_noret_decl(f_5988)
static void C_ccall f_5988(C_word c,C_word *av) C_noret;
C_noret_decl(f_5996)
static void C_ccall f_5996(C_word c,C_word *av) C_noret;
C_noret_decl(f_6002)
static void C_ccall f_6002(C_word c,C_word *av) C_noret;
C_noret_decl(f_6008)
static void C_ccall f_6008(C_word c,C_word *av) C_noret;
C_noret_decl(f_6014)
static void C_ccall f_6014(C_word c,C_word *av) C_noret;
C_noret_decl(f_6020)
static void C_ccall f_6020(C_word c,C_word *av) C_noret;
C_noret_decl(f_6026)
static void C_ccall f_6026(C_word c,C_word *av) C_noret;
C_noret_decl(f_6032)
static void C_ccall f_6032(C_word c,C_word *av) C_noret;
C_noret_decl(f_6038)
static void C_ccall f_6038(C_word c,C_word *av) C_noret;
C_noret_decl(f_6044)
static void C_ccall f_6044(C_word c,C_word *av) C_noret;
C_noret_decl(f_6050)
static void C_ccall f_6050(C_word c,C_word *av) C_noret;
C_noret_decl(f_6056)
static void C_ccall f_6056(C_word c,C_word *av) C_noret;
C_noret_decl(f_6062)
static void C_ccall f_6062(C_word c,C_word *av) C_noret;
C_noret_decl(f_6068)
static void C_ccall f_6068(C_word c,C_word *av) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word *av) C_noret;
C_noret_decl(f_6080)
static void C_ccall f_6080(C_word c,C_word *av) C_noret;
C_noret_decl(f_6086)
static void C_ccall f_6086(C_word c,C_word *av) C_noret;
C_noret_decl(f_6092)
static void C_ccall f_6092(C_word c,C_word *av) C_noret;
C_noret_decl(f_6098)
static void C_ccall f_6098(C_word c,C_word *av) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word *av) C_noret;
C_noret_decl(f_6110)
static void C_ccall f_6110(C_word c,C_word *av) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word *av) C_noret;
C_noret_decl(f_6122)
static void C_ccall f_6122(C_word c,C_word *av) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word *av) C_noret;
C_noret_decl(f_6134)
static void C_ccall f_6134(C_word c,C_word *av) C_noret;
C_noret_decl(f_6140)
static void C_ccall f_6140(C_word c,C_word *av) C_noret;
C_noret_decl(f_6146)
static void C_ccall f_6146(C_word c,C_word *av) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word *av) C_noret;
C_noret_decl(f_6158)
static void C_ccall f_6158(C_word c,C_word *av) C_noret;
C_noret_decl(f_6164)
static void C_ccall f_6164(C_word c,C_word *av) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word *av) C_noret;
C_noret_decl(f_6176)
static void C_ccall f_6176(C_word c,C_word *av) C_noret;
C_noret_decl(f_6194)
static void C_ccall f_6194(C_word c,C_word *av) C_noret;
C_noret_decl(f_6239)
static void C_ccall f_6239(C_word c,C_word *av) C_noret;
C_noret_decl(f_6248)
static void C_ccall f_6248(C_word c,C_word *av) C_noret;
C_noret_decl(f_6273)
static void C_ccall f_6273(C_word c,C_word *av) C_noret;
C_noret_decl(f_6279)
static void C_ccall f_6279(C_word c,C_word *av) C_noret;
C_noret_decl(f_6283)
static void C_ccall f_6283(C_word c,C_word *av) C_noret;
C_noret_decl(f_6286)
static void C_ccall f_6286(C_word c,C_word *av) C_noret;
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word *av) C_noret;
C_noret_decl(f_6316)
static void C_ccall f_6316(C_word c,C_word *av) C_noret;
C_noret_decl(f_6320)
static void C_ccall f_6320(C_word c,C_word *av) C_noret;
C_noret_decl(f_6322)
static void C_ccall f_6322(C_word c,C_word *av) C_noret;
C_noret_decl(f_6326)
static void C_ccall f_6326(C_word c,C_word *av) C_noret;
C_noret_decl(f_6328)
static void C_ccall f_6328(C_word c,C_word *av) C_noret;
C_noret_decl(f_6332)
static void C_ccall f_6332(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_extern void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va6913)
static void va6913(C_word t0,C_word t1) C_noret;
C_noret_decl(va6921)
static void va6921(C_word t0,C_word t1) C_noret;
C_noret_decl(va6929)
static void va6929(C_word t0,C_word t1) C_noret;
C_noret_decl(va6931)
static void va6931(C_word t0,C_word t1) C_noret;
C_noret_decl(va6933)
static void va6933(C_word t0,C_word t1) C_noret;
C_noret_decl(va6935)
static void va6935(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2655)
static void C_ccall trf_2655(C_word c,C_word *av) C_noret;
static void C_ccall trf_2655(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2655(t0,t1,t2);}

C_noret_decl(trf_2696)
static void C_ccall trf_2696(C_word c,C_word *av) C_noret;
static void C_ccall trf_2696(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2696(t0,t1,t2);}

C_noret_decl(trf_2856)
static void C_ccall trf_2856(C_word c,C_word *av) C_noret;
static void C_ccall trf_2856(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2856(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3323)
static void C_ccall trf_3323(C_word c,C_word *av) C_noret;
static void C_ccall trf_3323(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3323(t0,t1,t2,t3);}

C_noret_decl(trf_3356)
static void C_ccall trf_3356(C_word c,C_word *av) C_noret;
static void C_ccall trf_3356(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_3356(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3530)
static void C_ccall trf_3530(C_word c,C_word *av) C_noret;
static void C_ccall trf_3530(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3530(t0,t1);}

C_noret_decl(trf_3586)
static void C_ccall trf_3586(C_word c,C_word *av) C_noret;
static void C_ccall trf_3586(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3586(t0,t1,t2);}

C_noret_decl(trf_3825)
static void C_ccall trf_3825(C_word c,C_word *av) C_noret;
static void C_ccall trf_3825(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3825(t0,t1,t2);}

C_noret_decl(trf_3863)
static void C_ccall trf_3863(C_word c,C_word *av) C_noret;
static void C_ccall trf_3863(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3863(t0,t1,t2);}

C_noret_decl(trf_4131)
static void C_ccall trf_4131(C_word c,C_word *av) C_noret;
static void C_ccall trf_4131(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4131(t0,t1);}

C_noret_decl(trf_4149)
static void C_ccall trf_4149(C_word c,C_word *av) C_noret;
static void C_ccall trf_4149(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4149(t0,t1);}

C_noret_decl(trf_4185)
static void C_ccall trf_4185(C_word c,C_word *av) C_noret;
static void C_ccall trf_4185(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4185(t0,t1);}

C_noret_decl(trf_4248)
static void C_ccall trf_4248(C_word c,C_word *av) C_noret;
static void C_ccall trf_4248(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4248(t0,t1,t2,t3);}

C_noret_decl(trf_4287)
static void C_ccall trf_4287(C_word c,C_word *av) C_noret;
static void C_ccall trf_4287(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4287(t0,t1);}

C_noret_decl(trf_4293)
static void C_ccall trf_4293(C_word c,C_word *av) C_noret;
static void C_ccall trf_4293(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4293(t0,t1,t2,t3);}

C_noret_decl(trf_4344)
static void C_ccall trf_4344(C_word c,C_word *av) C_noret;
static void C_ccall trf_4344(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4344(t0,t1,t2);}

C_noret_decl(trf_4365)
static void C_ccall trf_4365(C_word c,C_word *av) C_noret;
static void C_ccall trf_4365(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4365(t0,t1);}

C_noret_decl(trf_4374)
static void C_ccall trf_4374(C_word c,C_word *av) C_noret;
static void C_ccall trf_4374(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4374(t0,t1,t2);}

C_noret_decl(trf_4399)
static void C_ccall trf_4399(C_word c,C_word *av) C_noret;
static void C_ccall trf_4399(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4399(t0,t1,t2);}

C_noret_decl(trf_4448)
static void C_ccall trf_4448(C_word c,C_word *av) C_noret;
static void C_ccall trf_4448(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_4448(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_4500)
static void C_ccall trf_4500(C_word c,C_word *av) C_noret;
static void C_ccall trf_4500(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4500(t0,t1);}

C_noret_decl(trf_4537)
static void C_ccall trf_4537(C_word c,C_word *av) C_noret;
static void C_ccall trf_4537(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4537(t0,t1,t2);}

C_noret_decl(trf_4602)
static void C_ccall trf_4602(C_word c,C_word *av) C_noret;
static void C_ccall trf_4602(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4602(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4969)
static void C_ccall trf_4969(C_word c,C_word *av) C_noret;
static void C_ccall trf_4969(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4969(t0,t1);}

C_noret_decl(trf_5046)
static void C_ccall trf_5046(C_word c,C_word *av) C_noret;
static void C_ccall trf_5046(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5046(t0,t1,t2);}

C_noret_decl(trf_5246)
static void C_ccall trf_5246(C_word c,C_word *av) C_noret;
static void C_ccall trf_5246(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5246(t0,t1);}

C_noret_decl(trf_5504)
static void C_ccall trf_5504(C_word c,C_word *av) C_noret;
static void C_ccall trf_5504(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5504(t0,t1);}

C_noret_decl(trf_5707)
static void C_ccall trf_5707(C_word c,C_word *av) C_noret;
static void C_ccall trf_5707(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5707(t0,t1,t2);}

C_noret_decl(trf_5740)
static void C_ccall trf_5740(C_word c,C_word *av) C_noret;
static void C_ccall trf_5740(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_5740(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5742)
static void C_ccall trf_5742(C_word c,C_word *av) C_noret;
static void C_ccall trf_5742(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5742(t0,t1,t2);}

C_noret_decl(trva6913)
static void C_ccall trva6913(C_word c,C_word *av) C_noret;
static void C_ccall trva6913(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6913(t0,t1);}

C_noret_decl(trva6921)
static void C_ccall trva6921(C_word c,C_word *av) C_noret;
static void C_ccall trva6921(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6921(t0,t1);}

C_noret_decl(trva6929)
static void C_ccall trva6929(C_word c,C_word *av) C_noret;
static void C_ccall trva6929(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6929(t0,t1);}

C_noret_decl(trva6931)
static void C_ccall trva6931(C_word c,C_word *av) C_noret;
static void C_ccall trva6931(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6931(t0,t1);}

C_noret_decl(trva6933)
static void C_ccall trva6933(C_word c,C_word *av) C_noret;
static void C_ccall trva6933(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6933(t0,t1);}

C_noret_decl(trva6935)
static void C_ccall trva6935(C_word c,C_word *av) C_noret;
static void C_ccall trva6935(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va6935(t0,t1);}

/* f6940 in chicken.time.posix#seconds->local-time in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f6940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f6940,c,av);}
/* posix-common.scm:592: decode-seconds */
{C_proc tp=(C_proc)C_retrieve2_symbol_proc(lf[266],C_text("chicken.posix#decode-seconds"));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[266];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* f6944 in chicken.time.posix#seconds->utc-time in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f6944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f6944,c,av);}
/* posix-common.scm:597: decode-seconds */
{C_proc tp=(C_proc)C_retrieve2_symbol_proc(lf[266],C_text("chicken.posix#decode-seconds"));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[266];
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* k2501 */
static void C_ccall f_2503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2503,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k2504 in k2501 */
static void C_ccall f_2506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2506,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k2507 in k2504 in k2501 */
static void C_ccall f_2509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2509,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2512,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_lolevel_toplevel(2,av2);}}

/* k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2515,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_2518,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[2]);
t3=C_a_i_provide(&a,1,lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2521(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2521,c,av);}
a=C_alloc(88);
t2=C_set_block_item(lf[4] /* chicken.file.posix#create-fifo */,0,C_SCHEME_UNDEFINED);
t3=C_set_block_item(lf[5] /* chicken.file.posix#create-symbolic-link */,0,C_SCHEME_UNDEFINED);
t4=C_set_block_item(lf[6] /* chicken.file.posix#read-symbolic-link */,0,C_SCHEME_UNDEFINED);
t5=C_set_block_item(lf[7] /* chicken.file.posix#duplicate-fileno */,0,C_SCHEME_UNDEFINED);
t6=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/dupfd */,0,C_SCHEME_UNDEFINED);
t7=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/getfd */,0,C_SCHEME_UNDEFINED);
t8=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/getfl */,0,C_SCHEME_UNDEFINED);
t9=C_set_block_item(lf[11] /* chicken.file.posix#fcntl/setfd */,0,C_SCHEME_UNDEFINED);
t10=C_set_block_item(lf[12] /* chicken.file.posix#fcntl/setfl */,0,C_SCHEME_UNDEFINED);
t11=C_set_block_item(lf[13] /* chicken.file.posix#file-close */,0,C_SCHEME_UNDEFINED);
t12=C_set_block_item(lf[14] /* chicken.file.posix#file-control */,0,C_SCHEME_UNDEFINED);
t13=C_set_block_item(lf[15] /* chicken.file.posix#file-creation-mode */,0,C_SCHEME_UNDEFINED);
t14=C_set_block_item(lf[16] /* chicken.file.posix#file-group */,0,C_SCHEME_UNDEFINED);
t15=C_set_block_item(lf[17] /* chicken.file.posix#file-link */,0,C_SCHEME_UNDEFINED);
t16=C_set_block_item(lf[18] /* chicken.file.posix#file-lock */,0,C_SCHEME_UNDEFINED);
t17=C_set_block_item(lf[19] /* chicken.file.posix#file-lock/blocking */,0,C_SCHEME_UNDEFINED);
t18=C_set_block_item(lf[20] /* chicken.file.posix#file-mkstemp */,0,C_SCHEME_UNDEFINED);
t19=C_set_block_item(lf[21] /* chicken.file.posix#file-open */,0,C_SCHEME_UNDEFINED);
t20=C_set_block_item(lf[22] /* chicken.file.posix#file-owner */,0,C_SCHEME_UNDEFINED);
t21=C_set_block_item(lf[23] /* chicken.file.posix#file-permissions */,0,C_SCHEME_UNDEFINED);
t22=C_set_block_item(lf[24] /* chicken.file.posix#file-position */,0,C_SCHEME_UNDEFINED);
t23=C_set_block_item(lf[25] /* chicken.file.posix#file-read */,0,C_SCHEME_UNDEFINED);
t24=C_set_block_item(lf[26] /* chicken.file.posix#file-select */,0,C_SCHEME_UNDEFINED);
t25=C_set_block_item(lf[27] /* chicken.file.posix#file-truncate */,0,C_SCHEME_UNDEFINED);
t26=C_set_block_item(lf[28] /* chicken.file.posix#file-unlock */,0,C_SCHEME_UNDEFINED);
t27=C_set_block_item(lf[29] /* chicken.file.posix#file-write */,0,C_SCHEME_UNDEFINED);
t28=C_set_block_item(lf[30] /* chicken.file.posix#file-type */,0,C_SCHEME_UNDEFINED);
t29=C_set_block_item(lf[31] /* chicken.file.posix#block-device? */,0,C_SCHEME_UNDEFINED);
t30=C_set_block_item(lf[32] /* chicken.file.posix#character-device? */,0,C_SCHEME_UNDEFINED);
t31=C_set_block_item(lf[33] /* chicken.file.posix#directory? */,0,C_SCHEME_UNDEFINED);
t32=C_set_block_item(lf[34] /* chicken.file.posix#fifo? */,0,C_SCHEME_UNDEFINED);
t33=C_set_block_item(lf[35] /* chicken.file.posix#regular-file? */,0,C_SCHEME_UNDEFINED);
t34=C_set_block_item(lf[36] /* chicken.file.posix#socket? */,0,C_SCHEME_UNDEFINED);
t35=C_set_block_item(lf[37] /* chicken.file.posix#symbolic-link? */,0,C_SCHEME_UNDEFINED);
t36=C_set_block_item(lf[38] /* chicken.file.posix#fileno/stderr */,0,C_SCHEME_UNDEFINED);
t37=C_set_block_item(lf[39] /* chicken.file.posix#fileno/stdin */,0,C_SCHEME_UNDEFINED);
t38=C_set_block_item(lf[40] /* chicken.file.posix#fileno/stdout */,0,C_SCHEME_UNDEFINED);
t39=C_set_block_item(lf[41] /* chicken.file.posix#open-input-file* */,0,C_SCHEME_UNDEFINED);
t40=C_set_block_item(lf[42] /* chicken.file.posix#open-output-file* */,0,C_SCHEME_UNDEFINED);
t41=C_set_block_item(lf[43] /* chicken.file.posix#open/append */,0,C_SCHEME_UNDEFINED);
t42=C_set_block_item(lf[44] /* chicken.file.posix#open/binary */,0,C_SCHEME_UNDEFINED);
t43=C_set_block_item(lf[45] /* chicken.file.posix#open/creat */,0,C_SCHEME_UNDEFINED);
t44=C_set_block_item(lf[46] /* chicken.file.posix#open/excl */,0,C_SCHEME_UNDEFINED);
t45=C_set_block_item(lf[47] /* chicken.file.posix#open/fsync */,0,C_SCHEME_UNDEFINED);
t46=C_set_block_item(lf[48] /* chicken.file.posix#open/noctty */,0,C_SCHEME_UNDEFINED);
t47=C_set_block_item(lf[49] /* chicken.file.posix#open/noinherit */,0,C_SCHEME_UNDEFINED);
t48=C_set_block_item(lf[50] /* chicken.file.posix#open/nonblock */,0,C_SCHEME_UNDEFINED);
t49=C_set_block_item(lf[51] /* chicken.file.posix#open/rdonly */,0,C_SCHEME_UNDEFINED);
t50=C_set_block_item(lf[52] /* chicken.file.posix#open/rdwr */,0,C_SCHEME_UNDEFINED);
t51=C_set_block_item(lf[53] /* chicken.file.posix#open/read */,0,C_SCHEME_UNDEFINED);
t52=C_set_block_item(lf[54] /* chicken.file.posix#open/sync */,0,C_SCHEME_UNDEFINED);
t53=C_set_block_item(lf[55] /* chicken.file.posix#open/text */,0,C_SCHEME_UNDEFINED);
t54=C_set_block_item(lf[56] /* chicken.file.posix#open/trunc */,0,C_SCHEME_UNDEFINED);
t55=C_set_block_item(lf[57] /* chicken.file.posix#open/write */,0,C_SCHEME_UNDEFINED);
t56=C_set_block_item(lf[58] /* chicken.file.posix#open/wronly */,0,C_SCHEME_UNDEFINED);
t57=C_set_block_item(lf[59] /* chicken.file.posix#perm/irgrp */,0,C_SCHEME_UNDEFINED);
t58=C_set_block_item(lf[60] /* chicken.file.posix#perm/iroth */,0,C_SCHEME_UNDEFINED);
t59=C_set_block_item(lf[61] /* chicken.file.posix#perm/irusr */,0,C_SCHEME_UNDEFINED);
t60=C_set_block_item(lf[62] /* chicken.file.posix#perm/irwxg */,0,C_SCHEME_UNDEFINED);
t61=C_set_block_item(lf[63] /* chicken.file.posix#perm/irwxo */,0,C_SCHEME_UNDEFINED);
t62=C_set_block_item(lf[64] /* chicken.file.posix#perm/irwxu */,0,C_SCHEME_UNDEFINED);
t63=C_set_block_item(lf[65] /* chicken.file.posix#perm/isgid */,0,C_SCHEME_UNDEFINED);
t64=C_set_block_item(lf[66] /* chicken.file.posix#perm/isuid */,0,C_SCHEME_UNDEFINED);
t65=C_set_block_item(lf[67] /* chicken.file.posix#perm/isvtx */,0,C_SCHEME_UNDEFINED);
t66=C_set_block_item(lf[68] /* chicken.file.posix#perm/iwgrp */,0,C_SCHEME_UNDEFINED);
t67=C_set_block_item(lf[69] /* chicken.file.posix#perm/iwoth */,0,C_SCHEME_UNDEFINED);
t68=C_set_block_item(lf[70] /* chicken.file.posix#perm/iwusr */,0,C_SCHEME_UNDEFINED);
t69=C_set_block_item(lf[71] /* chicken.file.posix#perm/ixgrp */,0,C_SCHEME_UNDEFINED);
t70=C_set_block_item(lf[72] /* chicken.file.posix#perm/ixoth */,0,C_SCHEME_UNDEFINED);
t71=C_set_block_item(lf[73] /* chicken.file.posix#perm/ixusr */,0,C_SCHEME_UNDEFINED);
t72=C_set_block_item(lf[74] /* chicken.file.posix#port->fileno */,0,C_SCHEME_UNDEFINED);
t73=C_set_block_item(lf[75] /* chicken.file.posix#seek/cur */,0,C_SCHEME_UNDEFINED);
t74=C_set_block_item(lf[76] /* chicken.file.posix#seek/end */,0,C_SCHEME_UNDEFINED);
t75=C_set_block_item(lf[77] /* chicken.file.posix#seek/set */,0,C_SCHEME_UNDEFINED);
t76=C_set_block_item(lf[78] /* chicken.file.posix#set-file-position! */,0,C_SCHEME_UNDEFINED);
t77=C_a_i_provide(&a,1,lf[79]);
t78=C_set_block_item(lf[80] /* chicken.time.posix#seconds->utc-time */,0,C_SCHEME_UNDEFINED);
t79=C_set_block_item(lf[81] /* chicken.time.posix#utc-time->seconds */,0,C_SCHEME_UNDEFINED);
t80=C_set_block_item(lf[82] /* chicken.time.posix#seconds->local-time */,0,C_SCHEME_UNDEFINED);
t81=C_set_block_item(lf[83] /* chicken.time.posix#seconds->string */,0,C_SCHEME_UNDEFINED);
t82=C_set_block_item(lf[84] /* chicken.time.posix#local-time->seconds */,0,C_SCHEME_UNDEFINED);
t83=C_set_block_item(lf[85] /* chicken.time.posix#string->time */,0,C_SCHEME_UNDEFINED);
t84=C_set_block_item(lf[86] /* chicken.time.posix#time->string */,0,C_SCHEME_UNDEFINED);
t85=C_set_block_item(lf[87] /* chicken.time.posix#local-timezone-abbreviation */,0,C_SCHEME_UNDEFINED);
t86=C_a_i_provide(&a,1,lf[88]);
t87=C_mutate((C_word*)lf[89]+1 /* (set! chicken.process#system ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2606,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t88=C_mutate((C_word*)lf[95]+1 /* (set! chicken.process#system* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2625,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[98]+1 /* (set! chicken.process#qs ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2641,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t90=C_set_block_item(lf[108] /* chicken.process#process-execute */,0,C_SCHEME_UNDEFINED);
t91=C_set_block_item(lf[109] /* chicken.process#process-fork */,0,C_SCHEME_UNDEFINED);
t92=C_set_block_item(lf[110] /* chicken.process#process-run */,0,C_SCHEME_UNDEFINED);
t93=C_set_block_item(lf[111] /* chicken.process#process-signal */,0,C_SCHEME_UNDEFINED);
t94=C_set_block_item(lf[112] /* chicken.process#process-spawn */,0,C_SCHEME_UNDEFINED);
t95=C_set_block_item(lf[113] /* chicken.process#process-wait */,0,C_SCHEME_UNDEFINED);
t96=C_set_block_item(lf[114] /* chicken.process#call-with-input-pipe */,0,C_SCHEME_UNDEFINED);
t97=C_set_block_item(lf[115] /* chicken.process#call-with-output-pipe */,0,C_SCHEME_UNDEFINED);
t98=C_set_block_item(lf[116] /* chicken.process#close-input-pipe */,0,C_SCHEME_UNDEFINED);
t99=C_set_block_item(lf[117] /* chicken.process#close-output-pipe */,0,C_SCHEME_UNDEFINED);
t100=C_set_block_item(lf[118] /* chicken.process#create-pipe */,0,C_SCHEME_UNDEFINED);
t101=C_set_block_item(lf[119] /* chicken.process#open-input-pipe */,0,C_SCHEME_UNDEFINED);
t102=C_set_block_item(lf[120] /* chicken.process#open-output-pipe */,0,C_SCHEME_UNDEFINED);
t103=C_set_block_item(lf[121] /* chicken.process#with-input-from-pipe */,0,C_SCHEME_UNDEFINED);
t104=C_set_block_item(lf[122] /* chicken.process#with-output-to-pipe */,0,C_SCHEME_UNDEFINED);
t105=C_set_block_item(lf[123] /* chicken.process#process */,0,C_SCHEME_UNDEFINED);
t106=C_set_block_item(lf[124] /* chicken.process#process* */,0,C_SCHEME_UNDEFINED);
t107=C_set_block_item(lf[125] /* chicken.process#process-sleep */,0,C_SCHEME_UNDEFINED);
t108=C_set_block_item(lf[126] /* chicken.process#process? */,0,C_SCHEME_UNDEFINED);
t109=C_set_block_item(lf[127] /* chicken.process#process-exit-status */,0,C_SCHEME_UNDEFINED);
t110=C_set_block_item(lf[128] /* chicken.process#process-returned-normally? */,0,C_SCHEME_UNDEFINED);
t111=C_set_block_item(lf[129] /* chicken.process#process-input-port */,0,C_SCHEME_UNDEFINED);
t112=C_set_block_item(lf[130] /* chicken.process#process-output-port */,0,C_SCHEME_UNDEFINED);
t113=C_set_block_item(lf[131] /* chicken.process#process-error-port */,0,C_SCHEME_UNDEFINED);
t114=C_set_block_item(lf[132] /* chicken.process#process-id */,0,C_SCHEME_UNDEFINED);
t115=C_set_block_item(lf[133] /* chicken.process#pipe/buf */,0,C_SCHEME_UNDEFINED);
t116=C_set_block_item(lf[134] /* chicken.process#spawn/overlay */,0,C_SCHEME_UNDEFINED);
t117=C_set_block_item(lf[135] /* chicken.process#spawn/wait */,0,C_SCHEME_UNDEFINED);
t118=C_set_block_item(lf[136] /* chicken.process#spawn/nowait */,0,C_SCHEME_UNDEFINED);
t119=C_set_block_item(lf[137] /* chicken.process#spawn/nowaito */,0,C_SCHEME_UNDEFINED);
t120=C_set_block_item(lf[138] /* chicken.process#spawn/detach */,0,C_SCHEME_UNDEFINED);
t121=C_a_i_provide(&a,1,lf[139]);
t122=C_set_block_item(lf[140] /* chicken.process.signal#set-alarm! */,0,C_SCHEME_UNDEFINED);
t123=C_set_block_item(lf[141] /* chicken.process.signal#set-signal-handler! */,0,C_SCHEME_UNDEFINED);
t124=C_set_block_item(lf[142] /* chicken.process.signal#set-signal-mask! */,0,C_SCHEME_UNDEFINED);
t125=C_set_block_item(lf[143] /* chicken.process.signal#signal-handler */,0,C_SCHEME_UNDEFINED);
t126=C_set_block_item(lf[144] /* chicken.process.signal#make-signal-handler */,0,C_SCHEME_UNDEFINED);
t127=C_set_block_item(lf[145] /* chicken.process.signal#signal-ignore */,0,C_SCHEME_UNDEFINED);
t128=C_set_block_item(lf[146] /* chicken.process.signal#signal-default */,0,C_SCHEME_UNDEFINED);
t129=C_set_block_item(lf[147] /* chicken.process.signal#signal-mask */,0,C_SCHEME_UNDEFINED);
t130=C_set_block_item(lf[148] /* chicken.process.signal#signal-mask! */,0,C_SCHEME_UNDEFINED);
t131=C_set_block_item(lf[149] /* chicken.process.signal#signal-masked? */,0,C_SCHEME_UNDEFINED);
t132=C_set_block_item(lf[150] /* chicken.process.signal#signal-unmask! */,0,C_SCHEME_UNDEFINED);
t133=C_set_block_item(lf[151] /* chicken.process.signal#signal/abrt */,0,C_SCHEME_UNDEFINED);
t134=C_set_block_item(lf[152] /* chicken.process.signal#signal/alrm */,0,C_SCHEME_UNDEFINED);
t135=C_set_block_item(lf[153] /* chicken.process.signal#signal/break */,0,C_SCHEME_UNDEFINED);
t136=C_set_block_item(lf[154] /* chicken.process.signal#signal/bus */,0,C_SCHEME_UNDEFINED);
t137=C_set_block_item(lf[155] /* chicken.process.signal#signal/chld */,0,C_SCHEME_UNDEFINED);
t138=C_set_block_item(lf[156] /* chicken.process.signal#signal/cont */,0,C_SCHEME_UNDEFINED);
t139=C_set_block_item(lf[157] /* chicken.process.signal#signal/fpe */,0,C_SCHEME_UNDEFINED);
t140=C_set_block_item(lf[158] /* chicken.process.signal#signal/hup */,0,C_SCHEME_UNDEFINED);
t141=C_set_block_item(lf[159] /* chicken.process.signal#signal/ill */,0,C_SCHEME_UNDEFINED);
t142=C_set_block_item(lf[160] /* chicken.process.signal#signal/int */,0,C_SCHEME_UNDEFINED);
t143=C_set_block_item(lf[161] /* chicken.process.signal#signal/io */,0,C_SCHEME_UNDEFINED);
t144=C_set_block_item(lf[162] /* chicken.process.signal#signal/kill */,0,C_SCHEME_UNDEFINED);
t145=C_set_block_item(lf[163] /* chicken.process.signal#signal/pipe */,0,C_SCHEME_UNDEFINED);
t146=C_set_block_item(lf[164] /* chicken.process.signal#signal/prof */,0,C_SCHEME_UNDEFINED);
t147=C_set_block_item(lf[165] /* chicken.process.signal#signal/quit */,0,C_SCHEME_UNDEFINED);
t148=C_set_block_item(lf[166] /* chicken.process.signal#signal/segv */,0,C_SCHEME_UNDEFINED);
t149=C_set_block_item(lf[167] /* chicken.process.signal#signal/stop */,0,C_SCHEME_UNDEFINED);
t150=C_set_block_item(lf[168] /* chicken.process.signal#signal/term */,0,C_SCHEME_UNDEFINED);
t151=C_set_block_item(lf[169] /* chicken.process.signal#signal/trap */,0,C_SCHEME_UNDEFINED);
t152=C_set_block_item(lf[170] /* chicken.process.signal#signal/tstp */,0,C_SCHEME_UNDEFINED);
t153=C_set_block_item(lf[171] /* chicken.process.signal#signal/urg */,0,C_SCHEME_UNDEFINED);
t154=C_set_block_item(lf[172] /* chicken.process.signal#signal/usr1 */,0,C_SCHEME_UNDEFINED);
t155=C_set_block_item(lf[173] /* chicken.process.signal#signal/usr2 */,0,C_SCHEME_UNDEFINED);
t156=C_set_block_item(lf[174] /* chicken.process.signal#signal/vtalrm */,0,C_SCHEME_UNDEFINED);
t157=C_set_block_item(lf[175] /* chicken.process.signal#signal/winch */,0,C_SCHEME_UNDEFINED);
t158=C_set_block_item(lf[176] /* chicken.process.signal#signal/xcpu */,0,C_SCHEME_UNDEFINED);
t159=C_set_block_item(lf[177] /* chicken.process.signal#signal/xfsz */,0,C_SCHEME_UNDEFINED);
t160=C_set_block_item(lf[178] /* chicken.process.signal#signals-list */,0,C_SCHEME_UNDEFINED);
t161=C_a_i_provide(&a,1,lf[179]);
t162=C_set_block_item(lf[180] /* chicken.process-context.posix#change-directory* */,0,C_SCHEME_UNDEFINED);
t163=C_set_block_item(lf[181] /* chicken.process-context.posix#set-root-directory! */,0,C_SCHEME_UNDEFINED);
t164=C_set_block_item(lf[182] /* chicken.process-context.posix#current-effective-group-id */,0,C_SCHEME_UNDEFINED);
t165=C_set_block_item(lf[183] /* chicken.process-context.posix#current-effective-user-id */,0,C_SCHEME_UNDEFINED);
t166=C_set_block_item(lf[184] /* chicken.process-context.posix#current-group-id */,0,C_SCHEME_UNDEFINED);
t167=C_set_block_item(lf[185] /* chicken.process-context.posix#current-user-id */,0,C_SCHEME_UNDEFINED);
t168=C_set_block_item(lf[186] /* chicken.process-context.posix#current-process-id */,0,C_SCHEME_UNDEFINED);
t169=C_set_block_item(lf[187] /* chicken.process-context.posix#parent-process-id */,0,C_SCHEME_UNDEFINED);
t170=C_set_block_item(lf[188] /* chicken.process-context.posix#current-user-name */,0,C_SCHEME_UNDEFINED);
t171=C_set_block_item(lf[189] /* chicken.process-context.posix#current-effective-user-name */,0,C_SCHEME_UNDEFINED);
t172=C_set_block_item(lf[190] /* chicken.process-context.posix#create-session */,0,C_SCHEME_UNDEFINED);
t173=C_set_block_item(lf[191] /* chicken.process-context.posix#process-group-id */,0,C_SCHEME_UNDEFINED);
t174=C_set_block_item(lf[192] /* chicken.process-context.posix#user-information */,0,C_SCHEME_UNDEFINED);
t175=C_a_i_provide(&a,1,lf[193]);
t176=C_mutate(&lf[194] /* (set! chicken.posix#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2838,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t177=C_mutate((C_word*)lf[197]+1 /* (set! ##sys#posix-error ...) */,lf[194]);
t178=C_mutate(&lf[198] /* (set! chicken.posix#stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t179=C_mutate((C_word*)lf[206]+1 /* (set! chicken.file.posix#file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2902,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t180=C_mutate((C_word*)lf[208]+1 /* (set! chicken.file.posix#set-file-permissions! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2920,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t181=C_mutate((C_word*)lf[213]+1 /* (set! chicken.file.posix#file-modification-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2964,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t182=C_mutate((C_word*)lf[215]+1 /* (set! chicken.file.posix#file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2970,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t183=C_mutate((C_word*)lf[217]+1 /* (set! chicken.file.posix#file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2976,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t184=C_mutate((C_word*)lf[219]+1 /* (set! chicken.file.posix#set-file-times! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2982,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t185=C_mutate((C_word*)lf[224]+1 /* (set! chicken.file.posix#file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3050,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t186=C_mutate((C_word*)lf[226]+1 /* (set! chicken.file.posix#set-file-owner! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3056,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t187=C_mutate((C_word*)lf[229]+1 /* (set! chicken.file.posix#set-file-group! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3062,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t188=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t189=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6328,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:321: chicken.base#getter-with-setter */
t190=*((C_word*)lf[422]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t190;
av2[1]=t188;
av2[2]=t189;
av2[3]=*((C_word*)lf[226]+1);
av2[4]=lf[434];
((C_proc)(void*)(*((C_word*)t190+1)))(5,av2);}}

/* chicken.process#system in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2606(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2606,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[90]);
t4=C_execute_shell_command(t2);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2623,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:204: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2=av;
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k2621 in chicken.process#system in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2623,c,av);}
/* posix.scm:203: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[92];
av2[3]=t1;
av2[4]=lf[90];
av2[5]=lf[93];
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}

/* chicken.process#system* in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2625,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2629,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix.scm:210: system */
t4=*((C_word*)lf[89]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2627 in chicken.process#system* in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2629,c,av);}
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
t3=*((C_word*)lf[96]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[97];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* chicken.process#qs in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2641,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2645,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,3))){
/* posix.scm:217: chicken.platform#software-version */
t4=C_fast_retrieve(lf[107]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_get_rest_arg(c,3,av,3,t0);
f_2645(2,av2);}}}

/* k2643 in chicken.process#qs in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2645(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2645,c,av);}
a=C_alloc(18);
t2=C_eqp(t1,lf[99]);
t3=(C_truep(t2)?C_make_character(34):C_make_character(39));
t4=C_eqp(t1,lf[99]);
t5=(C_truep(t4)?lf[100]:lf[101]);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2655,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2676,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=t10,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
/* ##sys#string->list */
t12=C_fast_retrieve(lf[106]);{
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

/* g258 in k2643 in chicken.process#qs in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_2655(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_2655,3,t0,t1,t2);}
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
t3=*((C_word*)lf[102]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[103];
av2[3]=lf[104];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k2674 in k2643 in chicken.process#qs in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2676(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2676,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2696,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li3),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2696(t6,t2,t1);}

/* k2677 in k2674 in k2643 in chicken.process#qs in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_2679,c,av);}
a=C_alloc(11);
t2=C_a_i_string(&a,1,((C_word*)t0)[2]);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2690,a[2]=t0,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t4;
av2[2]=*((C_word*)lf[105]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* k2688 in k2677 in k2674 in k2643 in chicken.process#qs in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2690,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_a_i_string(&a,1,((C_word*)t2)[2]);
/* posix.scm:228: scheme#string-append */
t4=*((C_word*)lf[105]+1);{
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

/* map-loop252 in k2674 in k2643 in chicken.process#qs in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_2696(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2696,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posix.scm:221: g258 */
t4=((C_word*)t0)[4];
f_2655(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2719 in map-loop252 in k2674 in k2643 in chicken.process#qs in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2721,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_2696(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* chicken.posix#posix-error in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2838(C_word c,C_word *av){
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
C_save_and_reclaim((void*)f_2838,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+7);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2842,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:199: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2=av;
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t6;
tp(2,av2);}}

/* k2840 in chicken.posix#posix-error in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2842(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2842,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2849,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2853,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
/* posix-common.scm:196: ##sys#peek-c-string */
t6=*((C_word*)lf[196]+1);{
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

/* k2847 in k2840 in chicken.posix#posix-error in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_2849,c,av);}{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[91]);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=t1;
av2[7]=((C_word*)t0)[6];
C_apply(8,av2);}}

/* k2851 in k2840 in chicken.posix#posix-error in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2853,c,av);}
/* posix-common.scm:201: string-append */
t2=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[195];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.posix#stat in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_2856(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_2856,5,t1,t2,t3,t4,t5);}
a=C_alloc(12);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2860,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_u_i_fstat(t2);
f_2860(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2881,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:244: scheme#port? */
t8=C_fast_retrieve(lf[205]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}

/* k2858 in chicken.posix#stat in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2860,c,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
if(C_truep(((C_word*)t0)[2])){
/* posix-common.scm:255: posix-error */
t2=lf[194];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[199];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[200];
av2[5]=((C_word*)t0)[5];
f_2838(6,av2);}}
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

/* k2879 in chicken.posix#stat in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2881,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2885,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:244: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[74]+1);{
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:246: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}
else{
/* posix-common.scm:251: ##sys#signal-hook */
t2=*((C_word*)lf[202]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[203];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[204];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k2883 in k2879 in chicken.posix#stat in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2885,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_fstat(t1);
f_2860(2,av2);}}

/* k2892 in k2879 in chicken.posix#stat in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2894,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(((C_word*)t0)[3])?C_u_i_lstat(t1):C_u_i_stat(t1));
f_2860(2,av2);}}

/* chicken.file.posix#file-stat in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2902(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2902,c,av);}
a=C_alloc(3);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2909,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:261: stat */
f_2856(t5,t2,t4,C_SCHEME_TRUE,lf[207]);}

/* k2907 in chicken.file.posix#file-stat in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(42,c,1)))){
C_save_and_reclaim((void *)f_2909,c,av);}
a=C_alloc(42);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_int64_to_num(&a,C_statbuf.st_size),C_int64_to_num(&a,C_statbuf.st_atime),C_int64_to_num(&a,C_statbuf.st_ctime),C_int64_to_num(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),((C_word)C_SCHEME_UNDEFINED),((C_word)C_SCHEME_UNDEFINED));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-permissions! in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2920(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2920,c,av);}
a=C_alloc(10);
t4=C_i_check_fixnum_2(t3,lf[209]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2927,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(t2))){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_fchmod(t2,t3);
f_2927(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2945,a[2]=t5,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:272: scheme#port? */
t7=C_fast_retrieve(lf[205]);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k2925 in chicken.file.posix#set-file-permissions! in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_2927,c,av);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:281: posix-error */
t2=lf[194];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[199];
av2[3]=lf[209];
av2[4]=lf[210];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2838(7,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2943 in chicken.file.posix#set-file-permissions! in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2945,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2949,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:272: chicken.file.posix#port->fileno */
t3=*((C_word*)lf[74]+1);{
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
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:275: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[209];
tp(4,av2);}}
else{
/* posix-common.scm:277: ##sys#signal-hook */
t2=*((C_word*)lf[202]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[203];
av2[3]=lf[211];
av2[4]=lf[212];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k2947 in k2943 in chicken.file.posix#set-file-permissions! in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2949,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fchmod(t1,((C_word*)t0)[3]);
f_2927(2,av2);}}

/* k2957 in k2943 in chicken.file.posix#set-file-permissions! in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2959,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_chmod(t1,((C_word*)t0)[3]);
f_2927(2,av2);}}

/* chicken.file.posix#file-modification-time in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2964,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2968,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:285: stat */
f_2856(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[214]);}

/* k2966 in chicken.file.posix#file-modification-time in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2968,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_mtime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-access-time in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2970,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2974,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:289: stat */
f_2856(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[216]);}

/* k2972 in chicken.file.posix#file-access-time in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2974,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_atime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#file-change-time in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2976,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2980,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:293: stat */
f_2856(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[218]);}

/* k2978 in chicken.file.posix#file-change-time in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2980,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_ctime);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-times! in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_2982,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+7);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2986,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_nullp(t3))){
/* posix-common.scm:298: chicken.time#current-seconds */
t5=C_fast_retrieve(lf[223]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_2986(2,av2);}}}

/* k2984 in chicken.file.posix#set-file-times! in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2986(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2986,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=C_i_nullp(((C_word*)t0)[6]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[6]));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?((C_word*)t0)[3]:C_i_car(t4));
t7=C_mutate(((C_word *)t0)+4,t6);
t8=C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2998,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posix-common.scm:299: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[222]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[222]+1);
av2[1]=t10;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[220];
tp(4,av2);}}
else{
t11=t10;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
f_2998(2,av2);}}}

/* k2996 in k2984 in chicken.file.posix#set-file-times! in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_2998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2998,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3001,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t2)[4])){
/* posix-common.scm:300: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[222]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[222]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
av2[3]=lf[220];
tp(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3001(2,av2);}}}

/* k2999 in k2996 in k2984 in chicken.file.posix#set-file-times! in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_3001,c,av);}
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
av2[2]=lf[194];
av2[3]=lf[199];
av2[4]=lf[220];
av2[5]=lf[221];
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

/* chicken.file.posix#file-size in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3050,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3054,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:310: stat */
f_2856(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[225]);}

/* k3052 in chicken.file.posix#file-size in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_3054,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_int64_to_num(&a,C_statbuf.st_size);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-owner! in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3056,c,av);}
a=C_alloc(12);
t4=C_a_i_list(&a,4,lf[227],t2,t3,C_fix(-1));
/* posixwin.scm:906: chicken.base#error */
t5=*((C_word*)lf[102]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[228];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.file.posix#set-file-group! in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3062,c,av);}
a=C_alloc(12);
t4=C_a_i_list(&a,4,lf[230],t2,C_fix(-1),t3);
/* posixwin.scm:906: chicken.base#error */
t5=*((C_word*)lf[102]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[228];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3070,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[22]+1 /* (set! chicken.file.posix#file-owner ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3074,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6322,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:327: chicken.base#getter-with-setter */
t5=*((C_word*)lf[422]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[229]+1);
av2[4]=lf[432];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3074,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[16]+1 /* (set! chicken.file.posix#file-group ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3078,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6316,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:333: chicken.base#getter-with-setter */
t5=*((C_word*)lf[422]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[208]+1);
av2[4]=lf[430];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3078(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3078,c,av);}
a=C_alloc(33);
t2=C_mutate((C_word*)lf[23]+1 /* (set! chicken.file.posix#file-permissions ...) */,t1);
t3=C_mutate((C_word*)lf[30]+1 /* (set! chicken.file.posix#file-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3080,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[35]+1 /* (set! chicken.file.posix#regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3167,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[37]+1 /* (set! chicken.file.posix#symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3177,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[31]+1 /* (set! chicken.file.posix#block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3187,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[32]+1 /* (set! chicken.file.posix#character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3197,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[34]+1 /* (set! chicken.file.posix#fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3207,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[36]+1 /* (set! chicken.file.posix#socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3217,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[33]+1 /* (set! chicken.file.posix#directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(lf[77] /* chicken.file.posix#seek/set */,0,C_fix((C_word)SEEK_SET));
t12=C_set_block_item(lf[76] /* chicken.file.posix#seek/end */,0,C_fix((C_word)SEEK_END));
t13=C_set_block_item(lf[75] /* chicken.file.posix#seek/cur */,0,C_fix((C_word)SEEK_CUR));
t14=C_mutate((C_word*)lf[78]+1 /* (set! chicken.file.posix#set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3240,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3295,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6279,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:410: chicken.base#getter-with-setter */
t17=*((C_word*)lf[422]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=t16;
av2[3]=*((C_word*)lf[78]+1);
av2[4]=lf[429];
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}

/* chicken.file.posix#file-type in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3080(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3080,c,av);}
a=C_alloc(3);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_TRUE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3099,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:342: stat */
f_2856(t9,t2,t4,t7,lf[238]);}

/* k3097 in chicken.file.posix#file-type in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3099(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3099,c,av);}
if(C_truep(t1)){
t2=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_type);
t3=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFREG));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=lf[231];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFLNK));
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[232];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFDIR));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[233];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFCHR));
if(C_truep(t6)){
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[234];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFBLK));
if(C_truep(t7)){
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=lf[235];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFIFO));
if(C_truep(t8)){
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=lf[236];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)S_IFSOCK));
t10=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t10;
av2[1]=(C_truep(t9)?lf[237]:lf[231]);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}}}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file.posix#regular-file? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3167,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3175,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:356: chicken.file.posix#file-type */
t4=*((C_word*)lf[30]+1);{
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

/* k3173 in chicken.file.posix#regular-file? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3175(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3175,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[231],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#symbolic-link? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3177,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3185,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:360: chicken.file.posix#file-type */
t4=*((C_word*)lf[30]+1);{
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

/* k3183 in chicken.file.posix#symbolic-link? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3185,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[232],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#block-device? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3187,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3195,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:364: chicken.file.posix#file-type */
t4=*((C_word*)lf[30]+1);{
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

/* k3193 in chicken.file.posix#block-device? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3195,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[235],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#character-device? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3197,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3205,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:368: chicken.file.posix#file-type */
t4=*((C_word*)lf[30]+1);{
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

/* k3203 in chicken.file.posix#character-device? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3205,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[234],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#fifo? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3207,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3215,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:372: chicken.file.posix#file-type */
t4=*((C_word*)lf[30]+1);{
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

/* k3213 in chicken.file.posix#fifo? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3215,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[236],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#socket? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3217,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3225,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:376: chicken.file.posix#file-type */
t4=*((C_word*)lf[30]+1);{
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

/* k3223 in chicken.file.posix#socket? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3225,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[237],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#directory? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3227,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3235,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:380: chicken.file.posix#file-type */
t4=*((C_word*)lf[30]+1);{
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

/* k3233 in chicken.file.posix#directory? in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3235,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(lf[233],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file.posix#set-file-position! in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +11,c,2)))){
C_save_and_reclaim((void*)f_3240,c,av);}
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
t7=C_i_check_fixnum_2(t3,lf[239]);
t8=C_i_check_fixnum_2(t6,lf[239]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3256,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3262,a[2]=t2,a[3]=t3,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:398: scheme#port? */
t11=C_fast_retrieve(lf[205]);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}

/* k3254 in chicken.file.posix#set-file-position! in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_3256,c,av);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* posix-common.scm:407: posix-error */
t2=lf[194];{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[199];
av2[3]=lf[239];
av2[4]=lf[240];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
f_2838(7,av2);}}}

/* k3260 in chicken.file.posix#set-file-position! in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3262(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3262,c,av);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[241]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
if(C_truep(t4)){
t5=C_i_set_i_slot(((C_word*)t0)[2],C_fix(6),C_SCHEME_FALSE);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
f_3256(2,av2);}}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_3256(2,av2);}}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3256(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_lseek(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
f_3256(2,av2);}}
else{
/* posix-common.scm:406: ##sys#signal-hook */
t2=*((C_word*)lf[202]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[203];
av2[3]=lf[239];
av2[4]=lf[242];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3295(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3295,c,av);}
a=C_alloc(45);
t2=C_mutate((C_word*)lf[24]+1 /* (set! chicken.file.posix#file-position ...) */,t1);
t3=C_set_block_item(lf[39] /* chicken.file.posix#fileno/stdin */,0,C_fix((C_word)STDIN_FILENO));
t4=C_set_block_item(lf[40] /* chicken.file.posix#fileno/stdout */,0,C_fix((C_word)STDOUT_FILENO));
t5=C_set_block_item(lf[38] /* chicken.file.posix#fileno/stderr */,0,C_fix((C_word)STDERR_FILENO));
t6=C_set_block_item(lf[51] /* chicken.file.posix#open/rdonly */,0,C_fix((C_word)O_RDONLY));
t7=C_set_block_item(lf[58] /* chicken.file.posix#open/wronly */,0,C_fix((C_word)O_WRONLY));
t8=C_set_block_item(lf[52] /* chicken.file.posix#open/rdwr */,0,C_fix((C_word)O_RDWR));
t9=C_set_block_item(lf[53] /* chicken.file.posix#open/read */,0,C_fix((C_word)O_RDONLY));
t10=C_set_block_item(lf[57] /* chicken.file.posix#open/write */,0,C_fix((C_word)O_WRONLY));
t11=C_set_block_item(lf[45] /* chicken.file.posix#open/creat */,0,C_fix((C_word)O_CREAT));
t12=C_set_block_item(lf[43] /* chicken.file.posix#open/append */,0,C_fix((C_word)O_APPEND));
t13=C_set_block_item(lf[46] /* chicken.file.posix#open/excl */,0,C_fix((C_word)O_EXCL));
t14=C_set_block_item(lf[56] /* chicken.file.posix#open/trunc */,0,C_fix((C_word)O_TRUNC));
t15=C_set_block_item(lf[44] /* chicken.file.posix#open/binary */,0,C_fix((C_word)O_BINARY));
t16=C_set_block_item(lf[55] /* chicken.file.posix#open/text */,0,C_fix((C_word)O_TEXT));
t17=C_set_block_item(lf[61] /* chicken.file.posix#perm/irusr */,0,C_fix((C_word)S_IRUSR));
t18=C_set_block_item(lf[70] /* chicken.file.posix#perm/iwusr */,0,C_fix((C_word)S_IWUSR));
t19=C_set_block_item(lf[73] /* chicken.file.posix#perm/ixusr */,0,C_fix((C_word)S_IXUSR));
t20=C_set_block_item(lf[59] /* chicken.file.posix#perm/irgrp */,0,C_fix((C_word)S_IRGRP));
t21=C_set_block_item(lf[68] /* chicken.file.posix#perm/iwgrp */,0,C_fix((C_word)S_IWGRP));
t22=C_set_block_item(lf[71] /* chicken.file.posix#perm/ixgrp */,0,C_fix((C_word)S_IXGRP));
t23=C_set_block_item(lf[60] /* chicken.file.posix#perm/iroth */,0,C_fix((C_word)S_IROTH));
t24=C_set_block_item(lf[69] /* chicken.file.posix#perm/iwoth */,0,C_fix((C_word)S_IWOTH));
t25=C_set_block_item(lf[72] /* chicken.file.posix#perm/ixoth */,0,C_fix((C_word)S_IXOTH));
t26=C_set_block_item(lf[64] /* chicken.file.posix#perm/irwxu */,0,C_fix((C_word)S_IRUSR | S_IWUSR | S_IXUSR));
t27=C_set_block_item(lf[62] /* chicken.file.posix#perm/irwxg */,0,C_fix((C_word)S_IRGRP | S_IWGRP | S_IXGRP));
t28=C_set_block_item(lf[63] /* chicken.file.posix#perm/irwxo */,0,C_fix((C_word)S_IROTH | S_IWOTH | S_IXOTH));
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3323,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3356,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[41]+1 /* (set! chicken.file.posix#open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3378,a[2]=t32,a[3]=t30,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t36=C_mutate((C_word*)lf[42]+1 /* (set! chicken.file.posix#open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3428,a[2]=t32,a[3]=t30,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t37=C_mutate((C_word*)lf[74]+1 /* (set! chicken.file.posix#port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3478,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[7]+1 /* (set! chicken.file.posix#duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3523,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[186]+1 /* (set! chicken.process-context.posix#current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3550,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[180]+1 /* (set! chicken.process-context.posix#change-directory* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3553,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t41=C_fast_retrieve(lf[265]);
t42=C_mutate((C_word*)lf[265]+1 /* (set! ##sys#change-directory-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3569,a[2]=t41,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3583,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6248,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp);
t45=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6273,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:568: chicken.base#getter-with-setter */
t46=*((C_word*)lf[422]+1);{
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
av2[4]=lf[425];
((C_proc)(void*)(*((C_word*)t46+1)))(5,av2);}}

/* mode in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_3323(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3323,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3331,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t6=C_eqp(t3,lf[243]);
if(C_truep(t6)){
if(C_truep(C_i_not(t2))){
/* posix-common.scm:491: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t1;
av2[2]=lf[244];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:493: ##sys#error */
t7=*((C_word*)lf[96]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[245];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
/* posix-common.scm:494: ##sys#error */
t7=*((C_word*)lf[96]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[246];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}
else{
if(C_truep(t2)){
/* posix-common.scm:491: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t1;
av2[2]=lf[247];
av2[3]=t4;
tp(4,av2);}}
else{
/* posix-common.scm:491: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t1;
av2[2]=lf[248];
av2[3]=t4;
tp(4,av2);}}}}

/* k3329 in mode in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3331,c,av);}
/* posix-common.scm:491: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* check in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_3356(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,5)))){
C_save_and_reclaim_args((void *)trf_3356,6,t1,t2,t3,t4,t5,t6);}
a=C_alloc(5);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:500: posix-error */
t7=lf[194];{
C_word av2[6];
av2[0]=t7;
av2[1]=t1;
av2[2]=lf[199];
av2[3]=t2;
av2[4]=lf[249];
av2[5]=t3;
f_2838(6,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3369,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
/* posix-common.scm:501: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[250]);
C_word av2[6];
av2[0]=*((C_word*)lf[250]+1);
av2[1]=t7;
av2[2]=C_fix(1);
av2[3]=C_fast_retrieve(lf[251]);
av2[4]=lf[252];
av2[5]=lf[241];
tp(6,av2);}}
else{
/* posix-common.scm:501: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[250]);
C_word av2[6];
av2[0]=*((C_word*)lf[250]+1);
av2[1]=t7;
av2[2]=C_fix(2);
av2[3]=C_fast_retrieve(lf[251]);
av2[4]=lf[252];
av2[5]=lf[241];
tp(6,av2);}}}}

/* k3367 in check in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3369,c,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=C_i_setslot(t1,C_fix(15),((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.file.posix#open-input-file* in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3378(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3378,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?lf[253]:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_i_check_fixnum_2(t2,lf[254]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3402,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:508: mode */
f_3323(t10,C_SCHEME_TRUE,t4,lf[254]);}

/* k3400 in chicken.file.posix#open-input-file* in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,6)))){
C_save_and_reclaim((void *)f_3402,c,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:508: check */
f_3356(((C_word*)t0)[4],lf[254],((C_word*)t0)[2],C_SCHEME_TRUE,t2,((C_word*)t0)[5]);}

/* chicken.file.posix#open-output-file* in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3428(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3428,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?lf[253]:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_i_check_fixnum_2(t2,lf[255]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3452,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:512: mode */
f_3323(t10,C_SCHEME_FALSE,t4,lf[255]);}

/* k3450 in chicken.file.posix#open-output-file* in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3452(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,6)))){
C_save_and_reclaim((void *)f_3452,c,av);}
a=C_alloc(2);
t2=C_fdopen(&a,2,((C_word*)t0)[2],t1);
/* posix-common.scm:512: check */
f_3356(((C_word*)t0)[4],lf[255],((C_word*)t0)[2],C_SCHEME_FALSE,t2,((C_word*)t0)[5]);}

/* chicken.file.posix#port->fileno in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3478(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3478,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(0),C_SCHEME_TRUE,lf[256]);
t4=C_slot(t2,C_fix(7));
t5=C_eqp(lf[237],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3494,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:522: ##sys#port-data */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[257]);
C_word *av2=av;
av2[0]=*((C_word*)lf[257]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3517,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:523: ##sys#peek-unsigned-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[260]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[260]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=C_fix(0);
tp(4,av2);}}}

/* k3492 in chicken.file.posix#port->fileno in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3494,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(t1,C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3501 in k3515 in chicken.file.posix#port->fileno in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3503,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3515 in chicken.file.posix#port->fileno in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3517,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(C_i_zerop(t1)))){
t2=C_port_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3503,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posix-common.scm:526: posix-error */
t4=lf[194];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[199];
av2[3]=lf[256];
av2[4]=lf[258];
av2[5]=((C_word*)t0)[2];
f_2838(6,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
/* posix-common.scm:528: posix-error */
t2=lf[194];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[203];
av2[3]=lf[256];
av2[4]=lf[259];
av2[5]=((C_word*)t0)[2];
f_2838(6,av2);}}}

/* chicken.file.posix#duplicate-fileno in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3523(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3523,c,av);}
a=C_alloc(4);
t3=C_i_check_fixnum_2(t2,lf[261]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3530,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,3))){
t5=t4;
f_3530(t5,C_dup(t2));}
else{
t5=C_get_rest_arg(c,3,av,3,t0);
t6=C_i_check_fixnum_2(t5,lf[261]);
t7=t4;
f_3530(t7,C_dup2(t2,t5));}}

/* k3528 in chicken.file.posix#duplicate-fileno in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_3530(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_3530,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3533,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posix-common.scm:539: posix-error */
t3=lf[194];{
C_word av2[6];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[199];
av2[3]=lf[261];
av2[4]=lf[262];
av2[5]=((C_word*)t0)[3];
f_2838(6,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3531 in k3528 in chicken.file.posix#duplicate-fileno in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3533,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process-context.posix#current-process-id in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3550,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub903(C_SCHEME_UNDEFINED);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process-context.posix#change-directory* in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3553(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3553,c,av);}
a=C_alloc(4);
t3=C_i_check_fixnum_2(t2,lf[263]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3560,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(C_fix(0),C_fchdir(t2));
if(C_truep(t5)){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* posix-common.scm:555: posix-error */
t6=lf[194];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=lf[199];
av2[3]=lf[263];
av2[4]=lf[264];
av2[5]=t2;
f_2838(6,av2);}}}

/* k3558 in chicken.process-context.posix#change-directory* in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3560,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#change-directory-hook in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3569(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3569,c,av);}
if(C_truep(C_fixnump(t2))){
t3=*((C_word*)lf[180]+1);
t4=*((C_word*)lf[180]+1);
/* posix-common.scm:560: g910 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[180]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[180]+1);
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

/* k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3583(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3583,c,av);}
a=C_alloc(32);
t2=C_mutate((C_word*)lf[15]+1 /* (set! chicken.file.posix#file-creation-mode ...) */,t1);
t3=C_mutate(&lf[266] /* (set! chicken.posix#decode-seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_decode_seconds,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[267] /* (set! chicken.posix#check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3586,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[82]+1 /* (set! chicken.time.posix#seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3605,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[80]+1 /* (set! chicken.time.posix#seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3626,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[83]+1 /* (set! chicken.time.posix#seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3658,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t8=C_fix((C_word)sizeof(struct tm));
t9=C_mutate((C_word*)lf[84]+1 /* (set! chicken.time.posix#local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3696,a[2]=t8,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t10=C_fix((C_word)sizeof(struct tm));
t11=C_mutate((C_word*)lf[86]+1 /* (set! chicken.time.posix#time->string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3741,a[2]=t10,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[141]+1 /* (set! chicken.process.signal#set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3803,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3818,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6239,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:643: chicken.base#getter-with-setter */
t15=*((C_word*)lf[422]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=t13;
av2[2]=t14;
av2[3]=*((C_word*)lf[141]+1);
av2[4]=lf[423];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* chicken.posix#check-time-vector in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_3586(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3586,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posix-common.scm:587: ##sys#error */
t6=*((C_word*)lf[96]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[268];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* chicken.time.posix#seconds->local-time in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3605,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3609,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:590: chicken.time#current-seconds */
t3=C_fast_retrieve(lf[223]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_get_rest_arg(c,2,av,2,t0);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6940,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:591: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[222]);
C_word av2[4];
av2[0]=*((C_word*)lf[222]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[269];
tp(4,av2);}}}

/* k3607 in chicken.time.posix#seconds->local-time in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3609,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3612,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:591: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[222]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[222]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[269];
tp(4,av2);}}

/* k3610 in k3607 in chicken.time.posix#seconds->local-time in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3612,c,av);}
t2=((C_word*)t0)[2];
/* posix-common.scm:592: decode-seconds */
{C_proc tp=(C_proc)C_retrieve2_symbol_proc(lf[266],C_text("chicken.posix#decode-seconds"));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[266];
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}

/* chicken.time.posix#seconds->utc-time in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3626,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3630,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:595: chicken.time#current-seconds */
t3=C_fast_retrieve(lf[223]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_get_rest_arg(c,2,av,2,t0);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f6944,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:596: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[222]);
C_word av2[4];
av2[0]=*((C_word*)lf[222]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=lf[270];
tp(4,av2);}}}

/* k3628 in chicken.time.posix#seconds->utc-time in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3630,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3633,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:596: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[222]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[222]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[270];
tp(4,av2);}}

/* k3631 in k3628 in chicken.time.posix#seconds->utc-time in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3633,c,av);}
t2=((C_word*)t0)[2];
/* posix-common.scm:597: decode-seconds */
{C_proc tp=(C_proc)C_retrieve2_symbol_proc(lf[266],C_text("chicken.posix#decode-seconds"));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=lf[266];
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* chicken.time.posix#seconds->string in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3658,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3662,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:601: chicken.time#current-seconds */
t3=C_fast_retrieve(lf[223]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_get_rest_arg(c,2,av,2,t0);
f_3662(2,av2);}}}

/* k3660 in chicken.time.posix#seconds->string in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3662,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3665,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:602: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[222]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[222]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[272];
tp(4,av2);}}

/* k3663 in k3660 in chicken.time.posix#seconds->string in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3665(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3665,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3668,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_fix((C_word)sizeof(int) * CHAR_BIT);
t6=C_i_foreign_ranged_integer_argumentp(((C_word*)t2)[3],t5);
/* posix-common.scm:600: ##sys#peek-c-string */
t7=*((C_word*)lf[196]+1);{
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

/* k3666 in k3663 in k3660 in chicken.time.posix#seconds->string in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3668,c,av);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_string_length(t1);
/* posix-common.scm:605: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[271]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[271]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(t3,C_fix(1));
tp(5,av2);}}
else{
/* posix-common.scm:606: ##sys#error */
t3=*((C_word*)lf[96]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[272];
av2[3]=lf[273];
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* chicken.time.posix#local-time->seconds in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3696,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3700,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:611: check-time-vector */
f_3586(t3,lf[274],t2);}

/* k3698 in chicken.time.posix#local-time->seconds in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3700,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:612: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[276]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[276]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
tp(4,av2);}}

/* k3702 in k3698 in chicken.time.posix#local-time->seconds in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3704,c,av);}
a=C_alloc(7);
t2=C_a_mktime(&a,2,((C_word*)t0)[2],t1);
if(C_truep(C_i_nequalp(C_fix(-1),t2))){
/* posix-common.scm:614: ##sys#error */
t3=*((C_word*)lf[96]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[274];
av2[3]=lf[275];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.time.posix#time->string in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3741(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3741,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3748,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:622: check-time-vector */
f_3586(t5,lf[277],t2);}

/* k3746 in chicken.time.posix#time->string in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3748,c,av);}
a=C_alloc(9);
if(C_truep(((C_word*)t0)[2])){
t2=C_i_check_string_2(((C_word*)t0)[2],lf[277]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3767,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:626: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[277];
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3774,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3795,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:628: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[276]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[276]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
tp(4,av2);}}}

/* k3755 in k3746 in chicken.time.posix#time->string in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3757,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* posix-common.scm:627: ##sys#error */
t2=*((C_word*)lf[96]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[277];
av2[3]=lf[278];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3765 in k3746 in chicken.time.posix#time->string in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3767,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:626: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[276]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[276]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
tp(4,av2);}}

/* k3769 in k3765 in k3746 in chicken.time.posix#time->string in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3771,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t3=C_i_foreign_block_argumentp(t1);
/* posix-common.scm:619: ##sys#peek-c-string */
t4=*((C_word*)lf[196]+1);{
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
t3=*((C_word*)lf[196]+1);{
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

/* k3772 in k3746 in chicken.time.posix#time->string in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3774,c,av);}
if(C_truep(t1)){
t2=C_i_string_length(t1);
/* posix-common.scm:630: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[271]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[271]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(0);
av2[4]=C_fixnum_difference(t2,C_fix(1));
tp(5,av2);}}
else{
/* posix-common.scm:631: ##sys#error */
t2=*((C_word*)lf[96]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[277];
av2[3]=lf[279];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* k3793 in k3746 in chicken.time.posix#time->string in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3795,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
if(C_truep(t1)){
t3=C_i_foreign_block_argumentp(t1);
/* posix-common.scm:618: ##sys#peek-c-string */
t4=*((C_word*)lf[196]+1);{
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
t3=*((C_word*)lf[196]+1);{
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

/* chicken.process.signal#set-signal-handler! in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3803(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3803,c,av);}
t4=C_i_check_fixnum_2(t2,lf[280]);
if(C_truep(t3)){
t5=C_establish_signal_handler(t2,t2);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_vector_set(C_fast_retrieve(lf[281]),t2,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_vector_set(C_fast_retrieve(lf[281]),t2,t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3818(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(102,c,8)))){
C_save_and_reclaim((void *)f_3818,c,av);}
a=C_alloc(102);
t2=C_mutate((C_word*)lf[143]+1 /* (set! chicken.process.signal#signal-handler ...) */,t1);
t3=C_mutate((C_word*)lf[144]+1 /* (set! chicken.process.signal#make-signal-handler ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3820,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[145]+1 /* (set! chicken.process.signal#signal-ignore ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3886,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[146]+1 /* (set! chicken.process.signal#signal-default ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3895,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t6=lf[289] /* chicken.posix#children */ =C_SCHEME_END_OF_LIST;;
t7=C_mutate(&lf[290] /* (set! chicken.posix#process? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3912,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[292] /* (set! chicken.posix#process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3927,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[293] /* (set! chicken.posix#process-returned-normally? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3945,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[294] /* (set! chicken.posix#process-input-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3963,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[295] /* (set! chicken.posix#process-output-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3981,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[296] /* (set! chicken.posix#process-error-port ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3999,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate(&lf[297] /* (set! chicken.posix#process-exit-status ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4017,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[126]+1 /* (set! chicken.process#process? ...) */,C_retrieve2(lf[290],C_text("chicken.posix#process?")));
t15=C_mutate((C_word*)lf[132]+1 /* (set! chicken.process#process-id ...) */,C_retrieve2(lf[292],C_text("chicken.posix#process-id")));
t16=C_mutate((C_word*)lf[127]+1 /* (set! chicken.process#process-exit-status ...) */,C_retrieve2(lf[297],C_text("chicken.posix#process-exit-status")));
t17=C_mutate((C_word*)lf[128]+1 /* (set! chicken.process#process-returned-normally? ...) */,C_retrieve2(lf[293],C_text("chicken.posix#process-returned-normally?")));
t18=C_mutate((C_word*)lf[129]+1 /* (set! chicken.process#process-input-port ...) */,C_retrieve2(lf[294],C_text("chicken.posix#process-input-port")));
t19=C_mutate((C_word*)lf[130]+1 /* (set! chicken.process#process-output-port ...) */,C_retrieve2(lf[295],C_text("chicken.posix#process-output-port")));
t20=C_mutate((C_word*)lf[131]+1 /* (set! chicken.process#process-error-port ...) */,C_retrieve2(lf[296],C_text("chicken.posix#process-error-port")));
t21=C_mutate((C_word*)lf[125]+1 /* (set! chicken.process#process-sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4106,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[113]+1 /* (set! chicken.process#process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4112,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate(&lf[302] /* (set! chicken.posix#list->c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4248,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate(&lf[304] /* (set! chicken.posix#free-c-string-buffer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4365,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate(&lf[313] /* (set! chicken.posix#check-environment-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4399,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4446,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
t27=C_mutate(&lf[314] /* (set! chicken.posix#call-with-exec-args ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4448,a[2]=t26,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(lf[133] /* chicken.process#pipe/buf */,0,C_fix((C_word)PIPE_BUF));
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4602,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
t30=C_mutate((C_word*)lf[119]+1 /* (set! chicken.process#open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4621,a[2]=t29,a[3]=((C_word)li86),tmp=(C_word)a,a+=4,tmp));
t31=C_mutate((C_word*)lf[120]+1 /* (set! chicken.process#open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4661,a[2]=t29,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp));
t32=C_mutate((C_word*)lf[116]+1 /* (set! chicken.process#close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4701,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[117]+1 /* (set! chicken.process#close-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4716,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[121]+1 /* (set! chicken.process#with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4731,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[115]+1 /* (set! chicken.process#call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4765,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[114]+1 /* (set! chicken.process#call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4789,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[122]+1 /* (set! chicken.process#with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4813,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t38=C_set_block_item(lf[49] /* chicken.file.posix#open/noinherit */,0,C_fix((C_word)O_NOINHERIT));
t39=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va6929,a[2]=((C_word*)t0)[2],a[3]=((C_word)li170),tmp=(C_word)a,a+=4,tmp);
t40=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va6931,a[2]=t39,a[3]=((C_word)li171),tmp=(C_word)a,a+=4,tmp);
t41=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va6933,a[2]=t40,a[3]=((C_word)li172),tmp=(C_word)a,a+=4,tmp);
t42=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va6935,a[2]=t41,a[3]=((C_word)li173),tmp=(C_word)a,a+=4,tmp);
t43=t42;
va6935(t43,C_s_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRUSR),C_fix((C_word)S_IWUSR)));}

/* chicken.process.signal#make-signal-handler in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_3820,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3824,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:652: ##sys#make-event-queue */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[286]);
C_word *av2=av;
av2[0]=*((C_word*)lf[286]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3822 in chicken.process.signal#make-signal-handler in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3824(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3824,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3825,a[2]=t1,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3841,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3863,a[2]=t5,a[3]=t2,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3863(t7,t3,((C_word*)t0)[3]);}

/* g1034 in k3822 in chicken.process.signal#make-signal-handler in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_3825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3825,3,t0,t1,t2);}
a=C_alloc(4);
t3=C_i_check_fixnum_2(t2,lf[282]);
t4=C_establish_signal_handler(t2,t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3834,a[2]=((C_word*)t0)[2],a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_i_vector_set(C_fast_retrieve(lf[281]),t2,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a3833 in g1034 in k3822 in chicken.process.signal#make-signal-handler in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3834,c,av);}
/* posix-common.scm:658: ##sys#add-event-to-queue! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[283]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[283]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
tp(4,av2);}}

/* k3839 in k3822 in chicken.process.signal#make-signal-handler in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3841,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3842,a[2]=((C_word*)t0)[3],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_3842 in k3839 in k3822 in chicken.process.signal#make-signal-handler in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3842,c,av);}
if(C_truep(C_rest_nullp(c,2))){
/* posix-common.scm:663: ##sys#get-next-event */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[284]);
C_word av2[3];
av2[0]=*((C_word*)lf[284]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_get_rest_arg(c,2,av,2,t0))){
/* posix-common.scm:662: ##sys#wait-for-next-event */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[285]);
C_word av2[3];
av2[0]=*((C_word*)lf[285]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
/* posix-common.scm:663: ##sys#get-next-event */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[284]);
C_word av2[3];
av2[0]=*((C_word*)lf[284]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* for-each-loop1033 in k3822 in chicken.process.signal#make-signal-handler in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_3863(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3863,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3873,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:653: g1034 */
t4=((C_word*)t0)[3];
f_3825(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3871 in for-each-loop1033 in k3822 in chicken.process.signal#make-signal-handler in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3873,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3863(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.process.signal#signal-ignore in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3886(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3886,c,av);}
t3=C_i_check_fixnum_2(t2,lf[287]);
t4=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_vector_set(C_fast_retrieve(lf[281]),t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.process.signal#signal-default in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3895(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3895,c,av);}
t3=C_i_check_fixnum_2(t2,lf[288]);
t4=C_establish_signal_handler(t2,C_SCHEME_TRUE);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_vector_set(C_fast_retrieve(lf[281]),t2,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.posix#process? in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3912,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[291]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.posix#process-id in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3927,c,av);}
t3=C_i_check_structure(t2,lf[291]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.posix#process-returned-normally? in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3945,c,av);}
t3=C_i_check_structure(t2,lf[291]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(2));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.posix#process-input-port in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3963,c,av);}
t3=C_i_check_structure(t2,lf[291]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.posix#process-output-port in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3981,c,av);}
t3=C_i_check_structure(t2,lf[291]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(4));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.posix#process-error-port in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_3999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3999,c,av);}
t3=C_i_check_structure(t2,lf[291]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(5));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.posix#process-exit-status in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4017,c,av);}
t3=C_i_check_structure(t2,lf[291]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(6));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* rec in k4183 in a4162 in k4147 in k4129 in chicken.process#process-wait in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static C_word f_4074(C_word t0,C_word t1){
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

/* chicken.process#process-sleep in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4106,c,av);}
t3=C_i_check_fixnum_2(t2,lf[298]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_process_sleep(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.process#process-wait in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4112(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4112,c,av);}
a=C_alloc(7);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_rest_nullp(c,2);
t7=C_rest_nullp(c,3);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,2,t0));
t9=C_rest_nullp(c,3);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4131,a[2]=t8,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=((C_word*)t5)[1];
if(C_truep(C_i_structurep(t11,lf[291]))){
t12=((C_word*)t5)[1];
t13=C_i_check_structure(t12,lf[291]);
t14=t10;
f_4131(t14,C_i_block_ref(t12,C_fix(6)));}
else{
t12=t10;
f_4131(t12,C_SCHEME_FALSE);}}

/* k4129 in chicken.process#process-wait in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4131(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_4131,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[3])[1];
t3=C_i_check_structure(t2,lf[291]);
t4=C_i_block_ref(t2,C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
t6=C_i_check_structure(t5,lf[291]);
t7=C_i_block_ref(t5,C_fix(2));
t8=((C_word*)((C_word*)t0)[3])[1];
t9=C_i_check_structure(t8,lf[291]);
/* posix-common.scm:719: scheme#values */{
C_word av2[5];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t4;
av2[3]=t7;
av2[4]=C_i_block_ref(t8,C_fix(6));
C_values(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4149,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=C_a_i_list(&a,1,C_fix(-1));
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
if(C_truep(C_fixnump(t3))){
t7=t2;
f_4149(t7,t3);}
else{
if(C_truep(C_i_structurep(t3,lf[291]))){
t7=C_SCHEME_UNDEFINED;
t8=t2;
f_4149(t8,C_i_block_ref(t3,C_fix(1)));}
else{
t7=t2;
f_4149(t7,t6);}}}}

/* k4147 in k4129 in chicken.process#process-wait in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4149(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_4149,2,t0,t1);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_i_check_fixnum_2(t1,lf[299]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4157,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4163,a[2]=t1,a[3]=((C_word*)t2)[3],a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:724: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t2)[4];
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a4156 in k4147 in k4129 in chicken.process#process-wait in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4157,c,av);}
if(C_truep(C_process_wait(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* posixwin.scm:888: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix((C_word)C_pid);
av2[3]=C_SCHEME_TRUE;
av2[4]=C_fix((C_word)C_exstatus);
C_values(5,av2);}}
else{
/* posixwin.scm:889: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix(-1);
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}}

/* a4162 in k4147 in k4129 in chicken.process#process-wait in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4163(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4163,c,av);}
a=C_alloc(7);
switch(t2){
case C_fix(-1):
/* posix-common.scm:727: posix-error */
t5=lf[194];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[92];
av2[3]=lf[299];
av2[4]=lf[300];
av2[5]=((C_word*)t0)[2];
f_2838(6,av2);}
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
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4185,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t6=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(C_i_structurep(t6,lf[291]))){
t7=t5;
f_4185(t7,C_SCHEME_UNDEFINED);}
else{
t7=C_i_assq(t2,C_retrieve2(lf[289],C_text("chicken.posix#children")));
if(C_truep(t7)){
t8=C_i_cdr(t7);
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t8);
t10=t5;
f_4185(t10,t9);}
else{
t8=C_SCHEME_UNDEFINED;
t9=t5;
f_4185(t9,t8);}}}}

/* k4183 in a4162 in k4147 in k4129 in chicken.process#process-wait in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4185(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_4185,2,t0,t1);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4074,a[2]=((C_word*)t0)[2],a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp);
t3=(
  f_4074(t2,C_retrieve2(lf[289],C_text("chicken.posix#children")))
);
t4=C_mutate(&lf[289] /* (set! chicken.posix#children ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4191,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t6=((C_word*)((C_word*)t0)[6])[1];
if(C_truep(C_i_structurep(t6,lf[291]))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4200,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=((C_word*)((C_word*)t0)[6])[1];
t9=C_i_check_structure(t8,lf[291]);
/* posix-common.scm:682: ##sys#block-set! */
t10=*((C_word*)lf[301]+1);{
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

/* k4189 in k4183 in a4162 in k4147 in k4129 in chicken.process#process-wait in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4191,c,av);}
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

/* k4198 in k4183 in a4162 in k4147 in k4129 in chicken.process#process-wait in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4200,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_structure(t2,lf[291]);
/* posix-common.scm:682: ##sys#block-set! */
t4=*((C_word*)lf[301]+1);{
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

/* chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4248(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_4248,4,t1,t2,t3,t4);}
a=C_alloc(12);
t5=C_i_check_list_2(t2,t4);
t6=C_u_i_length(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4256,a[2]=t1,a[3]=t6,a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t8=C_a_i_fixnum_plus(&a,2,t6,C_fix(1));
/* posix-common.scm:749: chicken.memory#make-pointer-vector */
t9=C_fast_retrieve(lf[309]);{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=t8;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_4256,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4259,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4264,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li68),tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:751: scheme#call-with-current-continuation */
t4=*((C_word*)lf[308]+1);{
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

/* k4257 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4259,c,av);}
/* posix-common.scm:747: g1203 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4264(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4264,c,av);}
a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4270,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word)li67),tmp=(C_word)a,a+=9,tmp);
/* posix-common.scm:751: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[307]);{
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

/* a4269 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4270,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4276,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:751: k1200 */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4275 in a4269 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4276,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4280,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:753: free-c-string-buffer */
f_4365(t2,((C_word*)t0)[3]);}

/* k4278 in a4275 in a4269 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4280,c,av);}
/* posix-common.scm:753: chicken.condition#signal */
t2=C_fast_retrieve(lf[303]);{
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

/* a4284 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4285(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4285,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li64),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4344,a[2]=((C_word*)t0)[7],a[3]=((C_word)li66),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4361,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp12444 */
t5=t2;
f_4287(t5,t4);}

/* tmp12444 in a4284 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4287(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_4287,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4291,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4293,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word)li63),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4293(t6,t2,((C_word*)t0)[6],C_fix(0));}

/* k4289 in tmp12444 in a4284 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4291,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop1208 in tmp12444 in a4284 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4293(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4293,4,t0,t1,t2,t3);}
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
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4309,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4334,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:762: convert */
t10=((C_word*)t0)[6];{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=C_u_i_car(t2);
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}}

/* k4307 in doloop1208 in tmp12444 in a4284 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4309,c,av);}
a=C_alloc(13);
t2=C_a_i_bytevector(&a,1,C_fix(3));
t3=stub1629(t2,t1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_4315(2,av2);}}
else{
/* posix-common.scm:764: chicken.base#error */
t5=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[306];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4313 in k4307 in doloop1208 in tmp12444 in a4284 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4315,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:765: chicken.memory#pointer-vector-set! */
t3=C_fast_retrieve(lf[305]);{
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

/* k4316 in k4313 in k4307 in doloop1208 in tmp12444 in a4284 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 in ... */
static void C_ccall f_4318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4318,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4293(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k4332 in doloop1208 in tmp12444 in a4284 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4334,c,av);}
/* posix-common.scm:762: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* tmp22445 in a4284 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4344(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4344,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4350,a[2]=t2,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:751: k1200 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4349 in tmp22445 in a4284 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4350,c,av);}{
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

/* k4359 in a4284 in a4263 in k4254 in chicken.posix#list->c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4361,c,av);}
a=C_alloc(3);
/* tmp22445 */
t2=((C_word*)t0)[2];
f_4344(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* chicken.posix#free-c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4365(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4365,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4369,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:770: chicken.memory#pointer-vector-length */
t4=C_fast_retrieve(lf[312]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4367 in chicken.posix#free-c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4369,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4374,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4374(t5,((C_word*)t0)[3],C_fix(0));}

/* doloop1227 in k4367 in chicken.posix#free-c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4374(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4374,3,t0,t1,t2);}
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4384,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:773: chicken.memory#pointer-vector-ref */
t5=C_fast_retrieve(lf[311]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k4382 in doloop1227 in k4367 in chicken.posix#free-c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4384,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4387,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* posix-common.scm:774: chicken.memory#free */
t3=C_fast_retrieve(lf[310]);{
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
f_4374(t3,((C_word*)t0)[3],C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}}

/* k4385 in k4382 in doloop1227 in k4367 in chicken.posix#free-c-string-buffer in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4387,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t2)[2])[1];
f_4374(t3,((C_word*)t2)[3],C_fixnum_plus(((C_word*)t2)[4],C_fix(1)));}

/* chicken.posix#check-environment-list in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4399(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4399,3,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_check_list_2(t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4404,a[2]=t3,a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4423,a[2]=t5,a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
  f_4423(t6,t2)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* g1240 in chicken.posix#check-environment-list in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static C_word f_4404(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_check_pair_2(t1,((C_word*)t0)[2]);
t3=C_i_check_string_2(C_u_i_car(t1),((C_word*)t0)[2]);
return(C_i_check_string_2(C_u_i_cdr(t1),((C_word*)t0)[2]));}

/* for-each-loop1239 in chicken.posix#check-environment-list in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static C_word f_4423(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* posix-common.scm:779: g1240 */
  f_4404(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* nop in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4446(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4446,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4448(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_4448,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(11);
t8=C_a_i_cons(&a,2,t3,t5);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4455,a[2]=t1,a[3]=t7,a[4]=t3,a[5]=t2,a[6]=t6,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* posix-common.scm:790: list->c-string-buffer */
f_4248(t9,t8,t4,t2);}

/* k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4455,c,av);}
a=C_alloc(15);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4458,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4463,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word)li83),tmp=(C_word)a,a+=10,tmp);
/* posix-common.scm:793: scheme#call-with-current-continuation */
t6=*((C_word*)lf[308]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k4456 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4458(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4458,c,av);}
/* posix-common.scm:789: g1273 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4463(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4463,c,av);}
a=C_alloc(17);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word)li82),tmp=(C_word)a,a+=11,tmp);
/* posix-common.scm:793: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[307]);{
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

/* a4468 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4469,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4475,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li76),tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:793: k1270 */
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a4474 in a4468 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4475,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4479,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:795: free-c-string-buffer */
f_4365(t2,((C_word*)t0)[4]);}

/* k4477 in a4474 in a4468 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4479,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* posix-common.scm:796: free-c-string-buffer */
f_4365(t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* posix-common.scm:797: chicken.condition#signal */
t3=C_fast_retrieve(lf[303]);{
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

/* k4480 in k4477 in a4474 in a4468 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4482,c,av);}
/* posix-common.scm:797: chicken.condition#signal */
t2=C_fast_retrieve(lf[303]);{
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

/* a4489 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_4490,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li79),tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4571,a[2]=((C_word*)t0)[9],a[3]=((C_word)li81),tmp=(C_word)a,a+=4,tmp);
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

/* a4495 in a4489 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_4496,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4500,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4510,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posix-common.scm:801: check-environment-list */
f_4399(t3,((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t3=t2;
f_4500(t3,C_SCHEME_UNDEFINED);}}

/* k4498 in a4495 in a4489 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4500(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4500,2,t0,t1);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posix-common.scm:807: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}

/* k4505 in k4498 in a4495 in a4489 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4507,c,av);}
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

/* k4508 in a4495 in a4489 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4510(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4510,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[315]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4535,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4537,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4537(t12,t8,((C_word*)t0)[4]);}

/* k4512 in k4508 in a4495 in a4489 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4514,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_4500(t3,t2);}

/* k4533 in k4508 in a4495 in a4489 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4535,c,av);}
/* posix-common.scm:803: list->c-string-buffer */
f_4248(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* map-loop1281 in k4508 in a4495 in a4489 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4537(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4537,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
/* posix-common.scm:804: scheme#string-append */
t5=*((C_word*)lf[105]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t3;
av2[2]=C_i_car(t4);
av2[3]=lf[316];
av2[4]=C_u_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4560 in map-loop1281 in k4508 in a4495 in a4489 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4562,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4537(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a4570 in a4489 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4571,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4577,a[2]=t2,a[3]=((C_word)li80),tmp=(C_word)a,a+=4,tmp);
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

/* a4576 in a4570 in a4489 in a4462 in k4453 in chicken.posix#call-with-exec-args in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4577,c,av);}{
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

/* check in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void f_4602(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_4602,5,t1,t2,t3,t4,t5);}
a=C_alloc(4);
if(C_truep(C_null_pointerp(t5))){
/* posix-common.scm:819: posix-error */
t6=lf[194];{
C_word av2[6];
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[199];
av2[3]=t2;
av2[4]=lf[317];
av2[5]=t3;
f_2838(6,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4615,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* posix-common.scm:820: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[250]);
C_word av2[6];
av2[0]=*((C_word*)lf[250]+1);
av2[1]=t6;
av2[2]=C_fix(1);
av2[3]=C_fast_retrieve(lf[251]);
av2[4]=lf[318];
av2[5]=lf[241];
tp(6,av2);}}
else{
/* posix-common.scm:820: ##sys#make-port */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[250]);
C_word av2[6];
av2[0]=*((C_word*)lf[250]+1);
av2[1]=t6;
av2[2]=C_fix(2);
av2[3]=C_fast_retrieve(lf[251]);
av2[4]=lf[318];
av2[5]=lf[241];
tp(6,av2);}}}}

/* k4613 in check in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4615,c,av);}
t2=C_set_file_ptr(t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.process#open-input-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_4621,c,av);}
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
t4=C_i_check_string_2(t2,lf[319]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[320]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4635,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[320]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4642,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:831: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[319];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[321]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4652,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:832: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[319];
tp(4,av2);}}
else{
/* posix-common.scm:816: ##sys#error */
t10=*((C_word*)lf[96]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[322];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k4633 in chicken.process#open-input-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4635,c,av);}
/* posix-common.scm:827: check */
f_4602(((C_word*)t0)[3],lf[319],((C_word*)t0)[4],C_SCHEME_TRUE,t1);}

/* k4640 in chicken.process#open-input-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4642,c,av);}
a=C_alloc(2);
t2=open_text_input_pipe(&a,1,t1);
/* posix-common.scm:827: check */
f_4602(((C_word*)t0)[3],lf[319],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* k4650 in chicken.process#open-input-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4652,c,av);}
a=C_alloc(2);
t2=open_binary_input_pipe(&a,1,t1);
/* posix-common.scm:827: check */
f_4602(((C_word*)t0)[3],lf[319],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* chicken.process#open-output-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_4661,c,av);}
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
t4=C_i_check_string_2(t2,lf[323]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[320]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4675,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[320]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4682,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:842: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[323];
tp(4,av2);}}
else{
t9=C_eqp(t6,lf[321]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4692,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:843: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[323];
tp(4,av2);}}
else{
/* posix-common.scm:816: ##sys#error */
t10=*((C_word*)lf[96]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t7;
av2[2]=lf[322];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}}

/* k4673 in chicken.process#open-output-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4675,c,av);}
/* posix-common.scm:838: check */
f_4602(((C_word*)t0)[3],lf[323],((C_word*)t0)[4],C_SCHEME_FALSE,t1);}

/* k4680 in chicken.process#open-output-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4682,c,av);}
a=C_alloc(2);
t2=open_text_output_pipe(&a,1,t1);
/* posix-common.scm:838: check */
f_4602(((C_word*)t0)[3],lf[323],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* k4690 in chicken.process#open-output-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,5)))){
C_save_and_reclaim((void *)f_4692,c,av);}
a=C_alloc(2);
t2=open_binary_output_pipe(&a,1,t1);
/* posix-common.scm:838: check */
f_4602(((C_word*)t0)[3],lf[323],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* chicken.process#close-input-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4701(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4701,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(1),C_SCHEME_TRUE,lf[324]);
t4=close_pipe(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4708,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
/* posix-common.scm:850: posix-error */
t7=lf[194];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[199];
av2[3]=lf[324];
av2[4]=lf[325];
av2[5]=t2;
f_2838(6,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4706 in chicken.process#close-input-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4708,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#close-output-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4716(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4716,c,av);}
a=C_alloc(4);
t3=C_i_check_port_2(t2,C_fix(2),C_SCHEME_TRUE,lf[326]);
t4=close_pipe(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4723,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
/* posix-common.scm:857: posix-error */
t7=lf[194];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[199];
av2[3]=lf[326];
av2[4]=lf[327];
av2[5]=t2;
f_2838(6,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4721 in chicken.process#close-output-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4723,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.process#with-input-from-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4731,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4735,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[119]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4733 in chicken.process#with-input-from-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4735(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4735,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4740,a[2]=t5,a[3]=t3,a[4]=((C_word)li90),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4745,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li92),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4760,a[2]=t3,a[3]=t5,a[4]=((C_word)li93),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:863: ##sys#dynamic-wind */
t9=*((C_word*)lf[330]+1);{
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

/* a4739 in k4733 in chicken.process#with-input-from-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4740,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[328]+1));
t3=C_mutate((C_word*)lf[328]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4744 in k4733 in chicken.process#with-input-from-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4745,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4751,a[2]=((C_word*)t0)[2],a[3]=((C_word)li91),tmp=(C_word)a,a+=4,tmp);
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

/* a4750 in a4744 in k4733 in chicken.process#with-input-from-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4751,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4755,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:866: chicken.process#close-input-pipe */
t4=*((C_word*)lf[116]+1);{
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

/* k4753 in a4750 in a4744 in k4733 in chicken.process#with-input-from-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4755,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[329]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a4759 in k4733 in chicken.process#with-input-from-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4760,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[328]+1));
t3=C_mutate((C_word*)lf[328]+1 /* (set! ##sys#standard-input ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.process#call-with-output-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4765,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4769,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[120]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4767 in chicken.process#call-with-output-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4769,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4774,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4780,a[2]=t1,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp);
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

/* a4773 in k4767 in chicken.process#call-with-output-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4774,c,av);}
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

/* a4779 in k4767 in chicken.process#call-with-output-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4780,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4784,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:875: chicken.process#close-output-pipe */
t4=*((C_word*)lf[117]+1);{
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

/* k4782 in a4779 in k4767 in chicken.process#call-with-output-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4784,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[329]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#call-with-input-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4789,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4793,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[119]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4791 in chicken.process#call-with-input-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4793,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4798,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li98),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4804,a[2]=t1,a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp);
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

/* a4797 in k4791 in chicken.process#call-with-input-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4798,c,av);}
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

/* a4803 in k4791 in chicken.process#call-with-input-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4804,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4808,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:884: chicken.process#close-input-pipe */
t4=*((C_word*)lf[116]+1);{
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

/* k4806 in a4803 in k4791 in chicken.process#call-with-input-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4808,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[329]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* chicken.process#with-output-to-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_4813,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+4);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4817,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[120]+1);
av2[3]=t2;
av2[4]=t4;
C_apply(5,av2);}}

/* k4815 in chicken.process#with-output-to-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4817(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4817,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4822,a[2]=t5,a[3]=t3,a[4]=((C_word)li101),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4827,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4842,a[2]=t3,a[3]=t5,a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
/* posix-common.scm:890: ##sys#dynamic-wind */
t9=*((C_word*)lf[330]+1);{
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

/* a4821 in k4815 in chicken.process#with-output-to-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4822,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[331]+1));
t3=C_mutate((C_word*)lf[331]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4826 in k4815 in chicken.process#with-output-to-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4827,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4833,a[2]=((C_word*)t0)[2],a[3]=((C_word)li102),tmp=(C_word)a,a+=4,tmp);
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

/* a4832 in a4826 in k4815 in chicken.process#with-output-to-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_4833,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4837,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:893: chicken.process#close-output-pipe */
t4=*((C_word*)lf[117]+1);{
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

/* k4835 in a4832 in a4826 in k4815 in chicken.process#with-output-to-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4837,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[329]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}

/* a4841 in k4815 in chicken.process#with-output-to-pipe in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_4842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4842,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[331]+1));
t3=C_mutate((C_word*)lf[331]+1 /* (set! ##sys#standard-output ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.file.posix#file-open */
static void C_ccall f_4851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_4851,c,av);}
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
t7=C_i_check_string_2(t2,lf[332]);
t8=C_i_check_fixnum_2(t3,lf[332]);
t9=C_i_check_fixnum_2(t6,lf[332]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4868,a[2]=t3,a[3]=t6,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:544: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2=av;
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t10;
av2[2]=t2;
av2[3]=lf[332];
tp(4,av2);}}

/* k4866 in chicken.file.posix#file-open */
static void C_ccall f_4868(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4868,c,av);}
a=C_alloc(10);
t2=C_open(t1,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4871,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4881,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:547: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2=av;
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k4869 in k4866 in chicken.file.posix#file-open */
static void C_ccall f_4871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4871,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4879 in k4866 in chicken.file.posix#file-open */
static void C_ccall f_4881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_4881,c,av);}
/* posixwin.scm:546: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[199];
av2[3]=t1;
av2[4]=lf[332];
av2[5]=lf[333];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[4];
av2[8]=((C_word*)t0)[5];
tp(9,av2);}}

/* chicken.file.posix#file-close */
static void C_ccall f_4887(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4887,c,av);}
a=C_alloc(7);
t3=C_i_check_fixnum_2(t2,lf[334]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4896,a[2]=t2,a[3]=t5,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
f_4896(2,av2);}}

/* loop in chicken.file.posix#file-close */
static void C_ccall f_4896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4896,c,av);}
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[2]),C_fix(0)))){
t2=C_eqp(C_fix((C_word)errno),C_fix((C_word)EINTR));
if(C_truep(t2)){
/* posixwin.scm:556: ##sys#dispatch-interrupt */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[335]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[335]+1);
av2[1]=t1;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
tp(3,av2);}}
else{
/* posixwin.scm:558: posix-error */
t3=lf[194];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[199];
av2[3]=lf[334];
av2[4]=lf[336];
av2[5]=((C_word*)t0)[2];
f_2838(6,av2);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.file.posix#file-read */
static void C_ccall f_4918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_4918,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+6);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t5=C_i_check_fixnum_2(t2,lf[337]);
t6=C_i_check_fixnum_2(t3,lf[337]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4928,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_get_rest_arg(c,4,av,4,t0);
f_4928(2,av2);}}
else{
/* posixwin.scm:564: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[276]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[276]+1);
av2[1]=t7;
av2[2]=t3;
tp(3,av2);}}}

/* k4926 in chicken.file.posix#file-read */
static void C_ccall f_4928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4928,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4931,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[3]))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4931(2,av2);}}
else{
/* posixwin.scm:566: ##sys#signal-hook */
t4=*((C_word*)lf[202]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[203];
av2[3]=lf[337];
av2[4]=lf[339];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}

/* k4929 in k4926 in chicken.file.posix#file-read */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4931,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=C_read(((C_word*)t2)[2],((C_word*)t2)[3],((C_word*)t2)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4934,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(C_fix(-1),t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4947,a[2]=t4,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:570: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2=av;
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t6;
tp(2,av2);}}
else{
t6=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list2(&a,2,((C_word*)t2)[3],t3);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k4932 in k4929 in k4926 in chicken.file.posix#file-read */
static void C_ccall f_4934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4934,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4945 in k4929 in k4926 in chicken.file.posix#file-read */
static void C_ccall f_4947(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4947,c,av);}
/* posixwin.scm:569: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[199];
av2[3]=t1;
av2[4]=lf[337];
av2[5]=lf[338];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[4];
tp(8,av2);}}

/* chicken.file.posix#file-write */
static void C_ccall f_4959(C_word c,C_word *av){
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
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4959,c,av);}
a=C_alloc(10);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_rest_nullp(c,4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_i_check_fixnum_2(t2,lf[340]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4969,a[2]=t8,a[3]=t4,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_stringp(((C_word*)t4)[1]))){
t11=C_slot(((C_word*)t4)[1],C_fix(0));
t12=C_set_block_item(t4,0,t11);
if(C_truep(((C_word*)t8)[1])){
t13=C_SCHEME_UNDEFINED;
t14=t10;
f_4969(t14,t13);}
else{
t13=C_block_size(((C_word*)t4)[1]);
t14=C_fixnum_difference(t13,C_fix(1));
t15=C_set_block_item(t8,0,t14);
t16=t10;
f_4969(t16,t15);}}
else{
t11=t10;
f_4969(t11,C_SCHEME_UNDEFINED);}}

/* k4967 in chicken.file.posix#file-write */
static void f_4969(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_4969,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4972,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)((C_word*)t0)[3])[1]))){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4972(2,av2);}}
else{
/* posixwin.scm:580: ##sys#signal-hook */
t3=*((C_word*)lf[202]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[203];
av2[3]=lf[340];
av2[4]=lf[342];
av2[5]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k4970 in k4967 in chicken.file.posix#file-write */
static void C_ccall f_4972(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4972,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t2)[2])[1];
t4=(C_truep(t3)?t3:C_block_size(((C_word*)((C_word*)t2)[3])[1]));
t5=C_i_check_fixnum_2(t4,lf[340]);
t6=C_write(((C_word*)t2)[4],((C_word*)((C_word*)t2)[3])[1],t4);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4981,a[2]=((C_word*)t2)[5],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4991,a[2]=t7,a[3]=((C_word*)t2)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:586: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2=av;
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t9;
tp(2,av2);}}
else{
t9=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k4979 in k4970 in k4967 in chicken.file.posix#file-write */
static void C_ccall f_4981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4981,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4989 in k4970 in k4967 in chicken.file.posix#file-write */
static void C_ccall f_4991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4991,c,av);}
/* posixwin.scm:585: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[199];
av2[3]=t1;
av2[4]=lf[340];
av2[5]=lf[341];
av2[6]=((C_word*)t0)[3];
av2[7]=((C_word*)t0)[4];
tp(8,av2);}}

/* chicken.file.posix#file-mkstemp */
static void C_ccall f_5023(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,2)))){
C_save_and_reclaim((void *)f_5023,c,av);}
a=C_alloc(41);
t3=C_i_check_string_2(t2,lf[343]);
t4=lf[344];
t5=C_u_i_string_length(t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)va6921,a[2]=t4,a[3]=t5,a[4]=C_SCHEME_UNDEFINED,a[5]=t2,a[6]=t1,a[7]=((C_word)li115),tmp=(C_word)a,a+=8,tmp);
t7=t6;
va6921(t7,C_s_a_i_times(&a,2,t5,t5));}

/* k5032 */
static void C_ccall f_5034(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_5034,c,av);}
a=C_alloc(23);
t2=((C_word*)t0)[2];
t3=C_u_i_string_length(t1);
t4=C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5147,a[2]=t1,a[3]=((C_word)li111),tmp=(C_word)a,a+=4,tmp);
t6=(
  f_5147(t5,t4)
);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5041,a[2]=t3,a[3]=t6,a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[3],a[6]=t1,a[7]=((C_word*)t2)[4],a[8]=((C_word*)t2)[5],a[9]=((C_word*)t2)[6],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5134,a[2]=t7,a[3]=((C_word*)t2)[5],a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5138,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:602: chicken.pathname#pathname-directory */
t10=C_fast_retrieve(lf[350]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* k5039 in k5032 */
static void C_ccall f_5041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_5041,c,av);}
a=C_alloc(13);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=((C_word)li114),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_5046(t5,((C_word*)t0)[9],C_fix(1));}

/* loop in k5039 in k5032 */
static void f_5046(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_5046,3,t0,t1,t2);}
a=C_alloc(16);
t3=C_fixnum_difference(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5093,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li112),tmp=(C_word)a,a+=7,tmp);
t5=(
  f_5093(t4,t3)
);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5054,a[2]=C_SCHEME_UNDEFINED,a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm:616: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word av2[4];
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[332];
tp(4,av2);}}

/* k5052 in loop in k5039 in k5032 */
static void C_ccall f_5054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5054,c,av);}
a=C_alloc(9);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va6913,a[2]=t0,a[3]=((C_word)li113),tmp=(C_word)a,a+=4,tmp);
t4=t3;
va6913(t4,C_s_a_i_bitwise_ior(&a,2,*((C_word*)lf[52]+1),*((C_word*)lf[45]+1)));}

/* suffix-loop in loop in k5039 in k5032 */
static C_word f_5093(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_i_string_ref(((C_word*)t0)[3],C_rand(((C_word*)t0)[4]));
t3=C_i_string_set(((C_word*)t0)[5],t1,t2);
t5=C_fixnum_difference(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k5132 in k5032 */
static void C_ccall f_5134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5134,c,av);}
if(C_truep(C_i_not(t1))){
/* posixwin.scm:606: ##sys#signal-hook */
t2=*((C_word*)lf[202]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[199];
av2[3]=lf[343];
av2[4]=lf[346];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t2)){
/* posixwin.scm:608: ##sys#signal-hook */
t3=*((C_word*)lf[202]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[199];
av2[3]=lf[343];
av2[4]=lf[347];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_5041(2,av2);}}}}

/* k5136 in k5032 */
static void C_ccall f_5138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5138,c,av);}
if(C_truep(t1)){
/* posixwin.scm:602: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[348]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[348]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[343];
tp(6,av2);}}
else{
/* posixwin.scm:602: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[348]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[348]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[349];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[343];
tp(6,av2);}}}

/* loop in k5032 */
static C_word f_5147(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
t2=C_fixnum_greater_or_equal_p(t1,C_fix(0));
t3=(C_truep(t2)?C_eqp(C_i_string_ref(((C_word*)t0)[2],t1),C_make_character(88)):C_SCHEME_FALSE);
if(C_truep(t3)){
t5=C_fixnum_difference(t1,C_fix(1));
t1=t5;
goto loop;}
else{
return(C_fixnum_plus(t1,C_fix(1)));}}

/* chicken.process#create-pipe */
static void C_ccall f_5176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5176,c,av);}
a=C_alloc(6);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_fixnum_or(*((C_word*)lf[44]+1),*((C_word*)lf[49]+1)):C_get_rest_arg(c,2,av,2,t0));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5183,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_pipe(C_SCHEME_FALSE,t3),C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5196,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:637: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2=av;
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t5;
tp(2,av2);}}
else{
/* posixwin.scm:638: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=C_fix((C_word)C_pipefds[ 0 ]);
av2[3]=C_fix((C_word)C_pipefds[ 1 ]);
C_values(4,av2);}}}

/* k5181 in chicken.process#create-pipe */
static void C_ccall f_5183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5183,c,av);}
/* posixwin.scm:638: scheme#values */{
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

/* k5194 in chicken.process#create-pipe */
static void C_ccall f_5196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5196,c,av);}
/* posixwin.scm:636: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[199];
av2[3]=t1;
av2[4]=lf[352];
av2[5]=lf[353];
tp(6,av2);}}

/* chicken.posix#duplicate-fileno */
static void C_ccall f_5239(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5239,c,av);}
a=C_alloc(4);
t3=C_i_check_fixnum_2(t2,C_retrieve2(lf[354],C_text("chicken.posix#duplicate-fileno")));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5246,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_rest_nullp(c,3))){
t5=t4;
f_5246(t5,C_dup(t2));}
else{
t5=C_get_rest_arg(c,3,av,3,t0);
t6=C_i_check_fixnum_2(t5,lf[261]);
t7=t4;
f_5246(t7,C_dup2(t2,t5));}}

/* k5244 in chicken.posix#duplicate-fileno */
static void f_5246(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5246,2,t0,t1);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5249,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5259,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:701: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word av2[2];
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5247 in k5244 in chicken.posix#duplicate-fileno */
static void C_ccall f_5249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5249,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5257 in k5244 in chicken.posix#duplicate-fileno */
static void C_ccall f_5259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5259,c,av);}
/* posixwin.scm:700: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[199];
av2[3]=t1;
av2[4]=lf[261];
av2[5]=lf[355];
av2[6]=((C_word*)t0)[3];
tp(7,av2);}}

/* chicken.time.posix#local-timezone-abbreviation */
static void C_ccall f_5270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5270,c,av);}
a=C_alloc(5);
t2=C_a_i_bytevector(&a,1,C_fix(3));
/* posixwin.scm:708: ##sys#peek-c-string */
t3=*((C_word*)lf[196]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=stub1606(t2);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* loop in chicken.posix#quote-arg-string */
static C_word f_5291(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
loop:{}
t2=C_eqp(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return(C_SCHEME_FALSE);}
else{
t3=C_i_string_ref(((C_word*)t0)[3],t1);
t4=C_u_i_char_whitespacep(t3);
if(C_truep(t4)){
return(t4);}
else{
t5=C_i_string_ref(((C_word*)t0)[3],t1);
t6=C_u_i_char_equalp(C_make_character(39),t5);
if(C_truep(t6)){
return(t6);}
else{
t8=C_fixnum_plus(t1,C_fix(1));
t1=t8;
goto loop;}}}}

/* chicken.posix#quote-arg-string */
static void C_ccall f_5323(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5323,c,av);}
a=C_alloc(5);
t3=C_i_string_length(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5291,a[2]=t3,a[3]=t2,a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp);
t5=(
  f_5291(t4,C_fix(0))
);
if(C_truep(t5)){
/* posixwin.scm:743: scheme#string-append */
t6=*((C_word*)lf[105]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=lf[357];
av2[3]=t2;
av2[4]=lf[358];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* chicken.process#process-execute */
static void C_ccall f_5338(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5338,c,av);}
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
t12=(C_truep(t10)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5379,a[2]=((C_word)li122),tmp=(C_word)a,a+=3,tmp):C_retrieve2(lf[356],C_text("chicken.posix#quote-arg-string")));
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5365,a[2]=t2,a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:759: call-with-exec-args */
t14=C_retrieve2(lf[314],C_text("chicken.posix#call-with-exec-args"));
f_4448(t14,t1,lf[359],t2,t12,t4,t7,t13);}

/* a5364 in chicken.process#process-execute */
static void C_ccall f_5365(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_5365,c,av);}
t5=C_flushall();
t6=(C_truep(t4)?C_u_i_execve(t2,t3,t4):C_u_i_execvp(t2,t3));
t7=C_eqp(t6,C_fix(-1));
if(C_truep(t7)){
/* posixwin.scm:767: posix-error */
t8=lf[194];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[92];
av2[3]=lf[359];
av2[4]=lf[360];
av2[5]=((C_word*)t0)[2];
f_2838(6,av2);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* f_5379 in chicken.process#process-execute */
static void C_ccall f_5379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5379,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.process#process-spawn */
static void C_ccall f_5418(C_word c,C_word *av){
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
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,7)))){
C_save_and_reclaim((void *)f_5418,c,av);}
a=C_alloc(8);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_rest_nullp(c,6);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,4,t0));
t12=C_rest_nullp(c,6);
t13=(C_truep(t11)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5465,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp):C_retrieve2(lf[356],C_text("chicken.posix#quote-arg-string")));
t14=C_i_check_fixnum_2(t2,lf[361]);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5448,a[2]=t2,a[3]=t3,a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:773: call-with-exec-args */
t16=C_retrieve2(lf[314],C_text("chicken.posix#call-with-exec-args"));
f_4448(t16,t1,lf[361],t3,t13,t5,t8,t15);}

/* a5447 in chicken.process#process-spawn */
static void C_ccall f_5448(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_5448,c,av);}
a=C_alloc(14);
t5=C_flushall();
t6=(C_truep(t4)?C_u_i_spawnvpe(((C_word*)t0)[2],t2,t3,t4):C_u_i_spawnvp(((C_word*)t0)[2],t2,t3));
t7=C_eqp(t6,C_fix(-1));
if(C_truep(t7)){
/* posixwin.scm:781: posix-error */
t8=lf[194];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=lf[92];
av2[3]=lf[361];
av2[4]=lf[362];
av2[5]=((C_word*)t0)[3];
f_2838(6,av2);}}
else{
t8=C_a_i_record7(&a,7,lf[291],t6,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t9=C_a_i_cons(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,t9,C_retrieve2(lf[289],C_text("chicken.posix#children")));
t11=C_mutate(&lf[289] /* (set! chicken.posix#children ...) */,t10);
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}

/* f_5465 in chicken.process#process-spawn */
static void C_ccall f_5465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5465,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.posix#shell-command */
static void f_5504(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_5504,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5508,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:788: chicken.process-context#get-environment-variable */
t4=C_fast_retrieve(lf[366]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[367];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5506 in chicken.posix#shell-command */
static void C_ccall f_5508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5508,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_get_shlcmd())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[196]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_mpointer(&a,(void*)C_shlcmd);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5524,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:792: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2=av;
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t2;
tp(2,av2);}}}}

/* k5522 in k5506 in chicken.posix#shell-command */
static void C_ccall f_5524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5524,c,av);}
t2=((C_word*)t0)[2];
/* posixwin.scm:791: ##sys#error/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[364]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[364]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=t1;
av2[3]=((C_word*)t2)[3];
av2[4]=lf[365];
tp(5,av2);}}

/* chicken.process#process-run */
static void C_ccall f_5532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,4)))){
C_save_and_reclaim((void*)f_5532,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_get_rest_arg(c,3,av,3,t0):C_SCHEME_FALSE);
if(C_truep(t5)){
/* posixwin.scm:801: chicken.process#process-spawn */
t6=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t1;
av2[2]=*((C_word*)lf[136]+1);
av2[3]=t2;
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5549,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:805: shell-command */
f_5504(t6,lf[369]);}}

/* k5547 in chicken.process#process-run */
static void C_ccall f_5549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5549,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,lf[368],((C_word*)t0)[2]);
/* posixwin.scm:803: chicken.process#process-spawn */
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[136]+1);
av2[3]=t1;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k5562 in k5677 in k5673 in k5669 in k5665 in k5616 in k5784 in k5781 in %process */
static void C_ccall f_5564(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5564,c,av);}
a=C_alloc(7);
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_pointer_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_pointer_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=(C_truep(((C_word*)t0)[4])?C_i_foreign_pointer_argumentp(((C_word*)t0)[4]):C_SCHEME_FALSE);
t5=(C_truep(((C_word*)t0)[5])?C_i_foreign_pointer_argumentp(((C_word*)t0)[5]):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]);
if(C_truep(stub1705(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[7],C_SCHEME_FALSE,t2,t3,t4,t5,t6))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5635,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:850: chicken.file.posix#open-output-file* */
t8=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[13])));
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5659,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[15],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm:858: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2=av;
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t7;
tp(2,av2);}}}

/* k5616 in k5784 in k5781 in %process */
static void C_ccall f_5618(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_5618,c,av);}
a=C_alloc(15);
t2=C_mutate(((C_word *)t0)+13,t1);
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=C_mutate(((C_word *)t0)+7,t3);
t5=((*(int *)C_data_pointer(((C_word*)t0)[7]))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t6=C_a_i_bytevector(&a,1,C_fix(1));
t7=C_mutate(((C_word *)t0)+11,t6);
t8=((*(int *)C_data_pointer(((C_word*)t0)[11]))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t9=C_a_i_bytevector(&a,1,C_fix(1));
t10=C_mutate(((C_word *)t0)+10,t9);
t11=((*(int *)C_data_pointer(((C_word*)t0)[10]))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t12=C_a_i_bytevector(&a,1,C_fix(1));
t13=C_mutate(((C_word *)t0)+9,t12);
t14=((*(int *)C_data_pointer(((C_word*)t0)[9]))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t15=C_slot(((C_word*)t0)[13],C_fix(0));
t16=C_mutate(((C_word *)t0)+6,t15);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5667,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:844: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[371]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[371]+1);
av2[1]=t17;
av2[2]=((C_word*)t0)[7];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[372];
tp(6,av2);}}

/* k5633 in k5562 in k5677 in k5673 in k5669 in k5665 in k5616 in k5784 in k5781 in %process */
static void C_ccall f_5635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5635,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm:852: chicken.file.posix#open-input-file* */
t3=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6])));
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5637 in k5633 in k5562 in k5677 in k5673 in k5669 in k5665 in k5616 in k5784 in k5781 in %process */
static void C_ccall f_5639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5639,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm:854: chicken.file.posix#open-input-file* */
t3=*((C_word*)lf[41]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[6])));
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2])));
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record7(&a,7,lf[291],t3,C_SCHEME_FALSE,((C_word*)t0)[4],t1,C_SCHEME_FALSE,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5641 in k5637 in k5633 in k5562 in k5677 in k5673 in k5669 in k5665 in k5616 in k5784 in k5781 in %process */
static void C_ccall f_5643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_5643,c,av);}
a=C_alloc(8);
t2=C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2])));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record7(&a,7,lf[291],t2,C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[5],t1,C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5657 in k5562 in k5677 in k5673 in k5669 in k5665 in k5616 in k5784 in k5781 in %process */
static void C_ccall f_5659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5659,c,av);}
/* posixwin.scm:857: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[92];
av2[3]=t1;
av2[4]=((C_word*)t0)[3];
av2[5]=lf[370];
av2[6]=((C_word*)t0)[4];
tp(7,av2);}}

/* k5665 in k5616 in k5784 in k5781 in %process */
static void C_ccall f_5667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5667,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5671,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:845: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[371]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[371]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[11];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[372];
tp(6,av2);}}

/* k5669 in k5665 in k5616 in k5784 in k5781 in %process */
static void C_ccall f_5671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5671,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5675,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:845: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[371]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[371]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[10];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[372];
tp(6,av2);}}

/* k5673 in k5669 in k5665 in k5616 in k5784 in k5781 in %process */
static void C_ccall f_5675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5675,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5679,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:845: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[371]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[371]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[9];
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[372];
tp(6,av2);}}

/* k5677 in k5673 in k5669 in k5665 in k5616 in k5784 in k5781 in %process */
static void C_ccall f_5679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_5679,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=(C_truep(((C_word*)t2)[2])?C_fix(0):C_fix(4));
t4=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5564,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=t1,a[6]=t3,a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],a[10]=((C_word*)t2)[2],a[11]=((C_word*)t2)[9],a[12]=((C_word*)t2)[10],a[13]=((C_word*)t2)[11],a[14]=((C_word*)t2)[12],a[15]=((C_word*)t2)[13],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t2)[14])){
/* posixwin.scm:829: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t4;
av2[2]=C_i_foreign_string_argumentp(((C_word*)t2)[14]);
tp(3,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_5564(2,av2);}}}

/* k5697 in k5784 in k5781 in %process */
static void C_ccall f_5699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5699,c,av);}
/* posixwin.scm:836: chicken.string#string-intersperse */
t2=C_fast_retrieve(lf[373]);{
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

/* map-loop1740 in k5784 in k5781 in %process */
static void f_5707(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5707,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm:839: g1746 */
t4=C_retrieve2(lf[356],C_text("chicken.posix#quote-arg-string"));{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_5323(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5730 in map-loop1740 in k5784 in k5781 in %process */
static void C_ccall f_5732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5732,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5707(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* %process */
static void f_5740(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
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
C_word t18;
C_word t19;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_5740,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(29);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5742,a[2]=t2,a[3]=((C_word)li132),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_string_2(((C_word*)t8)[1],t2);
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5783,a[2]=t8,a[3]=t9,a[4]=t10,a[5]=t3,a[6]=t1,a[7]=t2,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixwin.scm:869: chkstrlst */
t14=t11;
f_5742(t14,t13,((C_word*)t9)[1]);}
else{
t14=C_set_block_item(t10,0,C_SCHEME_TRUE);
t15=((C_word*)t8)[1];
t16=C_a_i_list2(&a,2,lf[368],t15);
t17=C_set_block_item(t9,0,t16);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5804,a[2]=t8,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm:873: shell-command */
f_5504(t18,t2);}}

/* chkstrlst in %process */
static void f_5742(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5742,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5747,a[2]=((C_word*)t0)[2],a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5756,a[2]=t4,a[3]=((C_word)li131),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  f_5756(t5,t2)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* g1817 in chkstrlst in %process */
static C_word f_5747(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_check_string_2(t1,((C_word*)t0)[2]));}

/* for-each-loop1816 in chkstrlst in %process */
static C_word f_5756(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* posixwin.scm:866: g1817 */
  f_5747(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k5781 in %process */
static void C_ccall f_5783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5783,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[8])){
/* posixwin.scm:874: check-environment-list */
f_4399(t2,((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_5786(2,av2);}}}

/* k5784 in k5781 in %process */
static void C_ccall f_5786(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_5786,c,av);}
a=C_alloc(34);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)((C_word*)t0)[3])[1];
t4=((C_word*)((C_word*)t0)[4])[1];
t5=C_a_i_cons(&a,2,t2,t3);
t6=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5618,a[2]=((C_word*)t0)[5],a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=C_SCHEME_UNDEFINED,a[8]=((C_word*)t0)[6],a[9]=C_SCHEME_UNDEFINED,a[10]=C_SCHEME_UNDEFINED,a[11]=C_SCHEME_UNDEFINED,a[12]=((C_word*)t0)[7],a[13]=C_SCHEME_UNDEFINED,a[14]=t2,tmp=(C_word)a,a+=15,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5699,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
/* posixwin.scm:836: chicken.string#string-intersperse */
t8=C_fast_retrieve(lf[373]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_retrieve2(lf[356],C_text("chicken.posix#quote-arg-string"));
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5707,a[2]=t10,a[3]=t14,a[4]=t11,a[5]=((C_word)li133),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_5707(t16,t7,t5);}}

/* k5802 in %process */
static void C_ccall f_5804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5804,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_5783(2,av2);}}

/* chicken.process#process */
static void C_ccall f_5806(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5806,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?lf[253]:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=C_rest_nullp(c,6);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,3,t0));
if(C_truep(C_rest_nullp(c,6))){
/* posixwin.scm:878: %process */
f_5740(t1,lf[374],C_SCHEME_FALSE,t2,t4,t7,t13);}
else{
/* posixwin.scm:878: %process */
f_5740(t1,lf[374],C_SCHEME_FALSE,t2,t4,t7,t13);}}

/* chicken.process#process* */
static void C_ccall f_5884(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5884,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?lf[253]:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=C_rest_nullp(c,6);
t13=(C_truep(t12)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,3,t0));
if(C_truep(C_rest_nullp(c,6))){
/* posixwin.scm:881: %process */
f_5740(t1,lf[375],C_SCHEME_TRUE,t2,t4,t7,t13);}
else{
/* posixwin.scm:881: %process */
f_5740(t1,lf[375],C_SCHEME_TRUE,t2,t4,t7,t13);}}

/* chicken.process-context.posix#current-user-name */
static void C_ccall f_5974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5974,c,av);}
a=C_alloc(3);
if(C_truep(C_get_user_name())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[196]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=C_mpointer(&a,(void*)C_username);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5988,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:901: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2=av;
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t2;
tp(2,av2);}}}

/* k5986 in chicken.process-context.posix#current-user-name */
static void C_ccall f_5988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5988,c,av);}
/* posixwin.scm:900: ##sys#error/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[364]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[364]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[376];
av2[4]=lf[377];
tp(5,av2);}}

/* chicken.file.posix#create-fifo */
static void C_ccall f_5996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5996,c,av);}
/* posixwin.scm:907: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[4];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#create-session */
static void C_ccall f_6002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6002,c,av);}
/* posixwin.scm:908: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[190];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#create-symbolic-link */
static void C_ccall f_6008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6008,c,av);}
/* posixwin.scm:909: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[5];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-effective-group-id */
static void C_ccall f_6014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6014,c,av);}
/* posixwin.scm:910: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[182];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-effective-user-id */
static void C_ccall f_6020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6020,c,av);}
/* posixwin.scm:911: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[183];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-effective-user-name */
static void C_ccall f_6026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6026,c,av);}
/* posixwin.scm:912: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[189];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-group-id */
static void C_ccall f_6032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6032,c,av);}
/* posixwin.scm:913: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[184];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#current-user-id */
static void C_ccall f_6038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6038,c,av);}
/* posixwin.scm:914: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[185];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-control */
static void C_ccall f_6044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6044,c,av);}
/* posixwin.scm:916: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[14];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-link */
static void C_ccall f_6050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6050,c,av);}
/* posixwin.scm:917: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[17];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-lock */
static void C_ccall f_6056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6056,c,av);}
/* posixwin.scm:918: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[18];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-lock/blocking */
static void C_ccall f_6062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6062,c,av);}
/* posixwin.scm:919: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[19];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-select */
static void C_ccall f_6068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6068,c,av);}
/* posixwin.scm:920: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[26];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-test-lock */
static void C_ccall f_6074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6074,c,av);}
/* posixwin.scm:921: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[378];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-truncate */
static void C_ccall f_6080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6080,c,av);}
/* posixwin.scm:922: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[27];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#file-unlock */
static void C_ccall f_6086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6086,c,av);}
/* posixwin.scm:923: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[28];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#parent-process-id */
static void C_ccall f_6092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6092,c,av);}
/* posixwin.scm:924: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[187];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process#process-fork */
static void C_ccall f_6098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6098,c,av);}
/* posixwin.scm:925: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[109];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#process-group-id */
static void C_ccall f_6104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6104,c,av);}
/* posixwin.scm:926: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[191];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process#process-signal */
static void C_ccall f_6110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6110,c,av);}
/* posixwin.scm:927: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[111];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.file.posix#read-symbolic-link */
static void C_ccall f_6116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6116,c,av);}
/* posixwin.scm:928: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#set-alarm! */
static void C_ccall f_6122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6122,c,av);}
/* posixwin.scm:929: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[140];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#set-root-directory! */
static void C_ccall f_6128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6128,c,av);}
/* posixwin.scm:930: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[181];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#set-signal-mask! */
static void C_ccall f_6134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6134,c,av);}
/* posixwin.scm:931: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[142];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-mask */
static void C_ccall f_6140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6140,c,av);}
/* posixwin.scm:932: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[147];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-mask! */
static void C_ccall f_6146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6146,c,av);}
/* posixwin.scm:933: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[148];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-masked? */
static void C_ccall f_6152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6152,c,av);}
/* posixwin.scm:934: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[149];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process.signal#signal-unmask! */
static void C_ccall f_6158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6158,c,av);}
/* posixwin.scm:935: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[150];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.process-context.posix#user-information */
static void C_ccall f_6164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6164,c,av);}
/* posixwin.scm:936: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[192];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.time.posix#utc-time->seconds */
static void C_ccall f_6170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6170,c,av);}
/* posixwin.scm:937: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[81];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.time.posix#string->time */
static void C_ccall f_6176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6176,c,av);}
/* posixwin.scm:938: chicken.base#error */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[85];
av2[3]=lf[0];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* chicken.errno#errno */
static void C_ccall f_6194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6194,c,av);}
/* posix.scm:388: ##sys#errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[381]);
C_word *av2=av;
av2[0]=*((C_word*)lf[381]+1);
av2[1]=t1;
tp(2,av2);}}

/* a6238 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6239,c,av);}
t3=C_i_check_fixnum_2(t2,lf[421]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(C_fast_retrieve(lf[281]),t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a6247 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6248(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6248,c,av);}
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=(C_truep(t3)?C_i_check_fixnum_2(t3,lf[424]):C_SCHEME_UNDEFINED);
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

/* a6272 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6273,c,av);}
t3=C_i_check_fixnum_2(t2,lf[424]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_umask(t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a6278 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6279(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6279,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6283,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6295,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posix-common.scm:412: scheme#port? */
t5=C_fast_retrieve(lf[205]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k6281 in a6278 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_6283,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6286,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t1,C_fix(0)))){
/* posix-common.scm:421: posix-error */
t3=lf[194];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[199];
av2[3]=lf[426];
av2[4]=lf[427];
av2[5]=((C_word*)t0)[3];
f_2838(6,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6284 in k6281 in a6278 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6286,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6293 in a6278 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_6295,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(7));
t3=C_eqp(t2,lf[241]);
if(C_truep(t3)){
t4=C_ftell(&a,1,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_6283(2,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_fix(-1);
f_6283(2,av2);}}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_lseek(((C_word*)t0)[2],C_fix(0),C_fix((C_word)SEEK_CUR));
f_6283(2,av2);}}
else{
/* posix-common.scm:419: ##sys#signal-hook */
t2=*((C_word*)lf[202]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[203];
av2[3]=lf[426];
av2[4]=lf[428];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* a6315 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6316,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6320,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:335: stat */
f_2856(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[211]);}

/* k6318 in a6315 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6320,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_stat_perm);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6321 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6322,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6326,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:328: stat */
f_2856(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[431]);}

/* k6324 in a6321 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6326,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6327 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6328,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6332,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posix-common.scm:322: stat */
f_2856(t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE,lf[433]);}

/* k6330 in a6327 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void C_ccall f_6332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6332,c,av);}
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
C_word t4;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("posix"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_posix_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2429))){
C_save(t1);
C_rereclaim2(2429*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,435);
lf[1]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\060\164\150\151\163\040\146\165\156\143\164\151\157\156\040\151\163\040\156\157\164\040\141\166\141\151\154\141\142\154\145\040\157\156\040\164\150\151\163\040\160\154\141\164\146\157\162\155\000"));
lf[2]=C_h_intern(&lf[2],5, C_text("posix"));
lf[3]=C_h_intern(&lf[3],19, C_text("chicken.file.posix#"));
lf[4]=C_h_intern(&lf[4],30, C_text("chicken.file.posix#create-fifo"));
lf[5]=C_h_intern(&lf[5],39, C_text("chicken.file.posix#create-symbolic-link"));
lf[6]=C_h_intern(&lf[6],37, C_text("chicken.file.posix#read-symbolic-link"));
lf[7]=C_h_intern(&lf[7],35, C_text("chicken.file.posix#duplicate-fileno"));
lf[8]=C_h_intern(&lf[8],30, C_text("chicken.file.posix#fcntl/dupfd"));
lf[9]=C_h_intern(&lf[9],30, C_text("chicken.file.posix#fcntl/getfd"));
lf[10]=C_h_intern(&lf[10],30, C_text("chicken.file.posix#fcntl/getfl"));
lf[11]=C_h_intern(&lf[11],30, C_text("chicken.file.posix#fcntl/setfd"));
lf[12]=C_h_intern(&lf[12],30, C_text("chicken.file.posix#fcntl/setfl"));
lf[13]=C_h_intern(&lf[13],29, C_text("chicken.file.posix#file-close"));
lf[14]=C_h_intern(&lf[14],31, C_text("chicken.file.posix#file-control"));
lf[15]=C_h_intern(&lf[15],37, C_text("chicken.file.posix#file-creation-mode"));
lf[16]=C_h_intern(&lf[16],29, C_text("chicken.file.posix#file-group"));
lf[17]=C_h_intern(&lf[17],28, C_text("chicken.file.posix#file-link"));
lf[18]=C_h_intern(&lf[18],28, C_text("chicken.file.posix#file-lock"));
lf[19]=C_h_intern(&lf[19],37, C_text("chicken.file.posix#file-lock/blocking"));
lf[20]=C_h_intern(&lf[20],31, C_text("chicken.file.posix#file-mkstemp"));
lf[21]=C_h_intern(&lf[21],28, C_text("chicken.file.posix#file-open"));
lf[22]=C_h_intern(&lf[22],29, C_text("chicken.file.posix#file-owner"));
lf[23]=C_h_intern(&lf[23],35, C_text("chicken.file.posix#file-permissions"));
lf[24]=C_h_intern(&lf[24],32, C_text("chicken.file.posix#file-position"));
lf[25]=C_h_intern(&lf[25],28, C_text("chicken.file.posix#file-read"));
lf[26]=C_h_intern(&lf[26],30, C_text("chicken.file.posix#file-select"));
lf[27]=C_h_intern(&lf[27],32, C_text("chicken.file.posix#file-truncate"));
lf[28]=C_h_intern(&lf[28],30, C_text("chicken.file.posix#file-unlock"));
lf[29]=C_h_intern(&lf[29],29, C_text("chicken.file.posix#file-write"));
lf[30]=C_h_intern(&lf[30],28, C_text("chicken.file.posix#file-type"));
lf[31]=C_h_intern(&lf[31],32, C_text("chicken.file.posix#block-device?"));
lf[32]=C_h_intern(&lf[32],36, C_text("chicken.file.posix#character-device?"));
lf[33]=C_h_intern(&lf[33],29, C_text("chicken.file.posix#directory?"));
lf[34]=C_h_intern(&lf[34],24, C_text("chicken.file.posix#fifo?"));
lf[35]=C_h_intern(&lf[35],32, C_text("chicken.file.posix#regular-file?"));
lf[36]=C_h_intern(&lf[36],26, C_text("chicken.file.posix#socket?"));
lf[37]=C_h_intern(&lf[37],33, C_text("chicken.file.posix#symbolic-link?"));
lf[38]=C_h_intern(&lf[38],32, C_text("chicken.file.posix#fileno/stderr"));
lf[39]=C_h_intern(&lf[39],31, C_text("chicken.file.posix#fileno/stdin"));
lf[40]=C_h_intern(&lf[40],32, C_text("chicken.file.posix#fileno/stdout"));
lf[41]=C_h_intern(&lf[41],35, C_text("chicken.file.posix#open-input-file*"));
lf[42]=C_h_intern(&lf[42],36, C_text("chicken.file.posix#open-output-file*"));
lf[43]=C_h_intern(&lf[43],30, C_text("chicken.file.posix#open/append"));
lf[44]=C_h_intern(&lf[44],30, C_text("chicken.file.posix#open/binary"));
lf[45]=C_h_intern(&lf[45],29, C_text("chicken.file.posix#open/creat"));
lf[46]=C_h_intern(&lf[46],28, C_text("chicken.file.posix#open/excl"));
lf[47]=C_h_intern(&lf[47],29, C_text("chicken.file.posix#open/fsync"));
lf[48]=C_h_intern(&lf[48],30, C_text("chicken.file.posix#open/noctty"));
lf[49]=C_h_intern(&lf[49],33, C_text("chicken.file.posix#open/noinherit"));
lf[50]=C_h_intern(&lf[50],32, C_text("chicken.file.posix#open/nonblock"));
lf[51]=C_h_intern(&lf[51],30, C_text("chicken.file.posix#open/rdonly"));
lf[52]=C_h_intern(&lf[52],28, C_text("chicken.file.posix#open/rdwr"));
lf[53]=C_h_intern(&lf[53],28, C_text("chicken.file.posix#open/read"));
lf[54]=C_h_intern(&lf[54],28, C_text("chicken.file.posix#open/sync"));
lf[55]=C_h_intern(&lf[55],28, C_text("chicken.file.posix#open/text"));
lf[56]=C_h_intern(&lf[56],29, C_text("chicken.file.posix#open/trunc"));
lf[57]=C_h_intern(&lf[57],29, C_text("chicken.file.posix#open/write"));
lf[58]=C_h_intern(&lf[58],30, C_text("chicken.file.posix#open/wronly"));
lf[59]=C_h_intern(&lf[59],29, C_text("chicken.file.posix#perm/irgrp"));
lf[60]=C_h_intern(&lf[60],29, C_text("chicken.file.posix#perm/iroth"));
lf[61]=C_h_intern(&lf[61],29, C_text("chicken.file.posix#perm/irusr"));
lf[62]=C_h_intern(&lf[62],29, C_text("chicken.file.posix#perm/irwxg"));
lf[63]=C_h_intern(&lf[63],29, C_text("chicken.file.posix#perm/irwxo"));
lf[64]=C_h_intern(&lf[64],29, C_text("chicken.file.posix#perm/irwxu"));
lf[65]=C_h_intern(&lf[65],29, C_text("chicken.file.posix#perm/isgid"));
lf[66]=C_h_intern(&lf[66],29, C_text("chicken.file.posix#perm/isuid"));
lf[67]=C_h_intern(&lf[67],29, C_text("chicken.file.posix#perm/isvtx"));
lf[68]=C_h_intern(&lf[68],29, C_text("chicken.file.posix#perm/iwgrp"));
lf[69]=C_h_intern(&lf[69],29, C_text("chicken.file.posix#perm/iwoth"));
lf[70]=C_h_intern(&lf[70],29, C_text("chicken.file.posix#perm/iwusr"));
lf[71]=C_h_intern(&lf[71],29, C_text("chicken.file.posix#perm/ixgrp"));
lf[72]=C_h_intern(&lf[72],29, C_text("chicken.file.posix#perm/ixoth"));
lf[73]=C_h_intern(&lf[73],29, C_text("chicken.file.posix#perm/ixusr"));
lf[74]=C_h_intern(&lf[74],31, C_text("chicken.file.posix#port->fileno"));
lf[75]=C_h_intern(&lf[75],27, C_text("chicken.file.posix#seek/cur"));
lf[76]=C_h_intern(&lf[76],27, C_text("chicken.file.posix#seek/end"));
lf[77]=C_h_intern(&lf[77],27, C_text("chicken.file.posix#seek/set"));
lf[78]=C_h_intern(&lf[78],37, C_text("chicken.file.posix#set-file-position!"));
lf[79]=C_h_intern(&lf[79],19, C_text("chicken.time.posix#"));
lf[80]=C_h_intern(&lf[80],36, C_text("chicken.time.posix#seconds->utc-time"));
lf[81]=C_h_intern(&lf[81],36, C_text("chicken.time.posix#utc-time->seconds"));
lf[82]=C_h_intern(&lf[82],38, C_text("chicken.time.posix#seconds->local-time"));
lf[83]=C_h_intern(&lf[83],34, C_text("chicken.time.posix#seconds->string"));
lf[84]=C_h_intern(&lf[84],38, C_text("chicken.time.posix#local-time->seconds"));
lf[85]=C_h_intern(&lf[85],31, C_text("chicken.time.posix#string->time"));
lf[86]=C_h_intern(&lf[86],31, C_text("chicken.time.posix#time->string"));
lf[87]=C_h_intern(&lf[87],46, C_text("chicken.time.posix#local-timezone-abbreviation"));
lf[88]=C_h_intern(&lf[88],16, C_text("chicken.process#"));
lf[89]=C_h_intern(&lf[89],22, C_text("chicken.process#system"));
lf[90]=C_h_intern(&lf[90],6, C_text("system"));
lf[91]=C_h_intern(&lf[91],23, C_text("##sys#signal-hook/errno"));
lf[92]=C_h_intern_kw(&lf[92],13, C_text("process-error"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\140\163\171\163\164\145\155\047\040\151\156\166\157\143\141\164\151\157\156\040\146\141\151\154\145\144\000"));
lf[94]=C_h_intern(&lf[94],18, C_text("##sys#update-errno"));
lf[95]=C_h_intern(&lf[95],23, C_text("chicken.process#system*"));
lf[96]=C_h_intern(&lf[96],11, C_text("##sys#error"));
lf[97]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\064\163\150\145\154\154\040\151\156\166\157\143\141\164\151\157\156\040\146\141\151\154\145\144\040\167\151\164\150\040\156\157\156\055\172\145\162\157\040\162\145\164\165\162\156\040\163\164\141\164\165\163\000"));
lf[98]=C_h_intern(&lf[98],18, C_text("chicken.process#qs"));
lf[99]=C_h_intern(&lf[99],5, C_text("mingw"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\042\042\000"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\047\134\047\047\000"));
lf[102]=C_h_intern(&lf[102],18, C_text("chicken.base#error"));
lf[103]=C_h_intern(&lf[103],2, C_text("qs"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\065\116\125\114\040\143\150\141\162\141\143\164\145\162\040\143\141\156\040\156\157\164\040\142\145\040\162\145\160\162\145\163\145\156\164\145\144\040\151\156\040\163\150\145\154\154\040\163\164\162\151\156\147\000"));
lf[105]=C_h_intern(&lf[105],20, C_text("scheme#string-append"));
lf[106]=C_h_intern(&lf[106],18, C_text("##sys#string->list"));
lf[107]=C_h_intern(&lf[107],33, C_text("chicken.platform#software-version"));
lf[108]=C_h_intern(&lf[108],31, C_text("chicken.process#process-execute"));
lf[109]=C_h_intern(&lf[109],28, C_text("chicken.process#process-fork"));
lf[110]=C_h_intern(&lf[110],27, C_text("chicken.process#process-run"));
lf[111]=C_h_intern(&lf[111],30, C_text("chicken.process#process-signal"));
lf[112]=C_h_intern(&lf[112],29, C_text("chicken.process#process-spawn"));
lf[113]=C_h_intern(&lf[113],28, C_text("chicken.process#process-wait"));
lf[114]=C_h_intern(&lf[114],36, C_text("chicken.process#call-with-input-pipe"));
lf[115]=C_h_intern(&lf[115],37, C_text("chicken.process#call-with-output-pipe"));
lf[116]=C_h_intern(&lf[116],32, C_text("chicken.process#close-input-pipe"));
lf[117]=C_h_intern(&lf[117],33, C_text("chicken.process#close-output-pipe"));
lf[118]=C_h_intern(&lf[118],27, C_text("chicken.process#create-pipe"));
lf[119]=C_h_intern(&lf[119],31, C_text("chicken.process#open-input-pipe"));
lf[120]=C_h_intern(&lf[120],32, C_text("chicken.process#open-output-pipe"));
lf[121]=C_h_intern(&lf[121],36, C_text("chicken.process#with-input-from-pipe"));
lf[122]=C_h_intern(&lf[122],35, C_text("chicken.process#with-output-to-pipe"));
lf[123]=C_h_intern(&lf[123],23, C_text("chicken.process#process"));
lf[124]=C_h_intern(&lf[124],24, C_text("chicken.process#process*"));
lf[125]=C_h_intern(&lf[125],29, C_text("chicken.process#process-sleep"));
lf[126]=C_h_intern(&lf[126],24, C_text("chicken.process#process?"));
lf[127]=C_h_intern(&lf[127],35, C_text("chicken.process#process-exit-status"));
lf[128]=C_h_intern(&lf[128],42, C_text("chicken.process#process-returned-normally?"));
lf[129]=C_h_intern(&lf[129],34, C_text("chicken.process#process-input-port"));
lf[130]=C_h_intern(&lf[130],35, C_text("chicken.process#process-output-port"));
lf[131]=C_h_intern(&lf[131],34, C_text("chicken.process#process-error-port"));
lf[132]=C_h_intern(&lf[132],26, C_text("chicken.process#process-id"));
lf[133]=C_h_intern(&lf[133],24, C_text("chicken.process#pipe/buf"));
lf[134]=C_h_intern(&lf[134],29, C_text("chicken.process#spawn/overlay"));
lf[135]=C_h_intern(&lf[135],26, C_text("chicken.process#spawn/wait"));
lf[136]=C_h_intern(&lf[136],28, C_text("chicken.process#spawn/nowait"));
lf[137]=C_h_intern(&lf[137],29, C_text("chicken.process#spawn/nowaito"));
lf[138]=C_h_intern(&lf[138],28, C_text("chicken.process#spawn/detach"));
lf[139]=C_h_intern(&lf[139],23, C_text("chicken.process.signal#"));
lf[140]=C_h_intern(&lf[140],33, C_text("chicken.process.signal#set-alarm!"));
lf[141]=C_h_intern(&lf[141],42, C_text("chicken.process.signal#set-signal-handler!"));
lf[142]=C_h_intern(&lf[142],39, C_text("chicken.process.signal#set-signal-mask!"));
lf[143]=C_h_intern(&lf[143],37, C_text("chicken.process.signal#signal-handler"));
lf[144]=C_h_intern(&lf[144],42, C_text("chicken.process.signal#make-signal-handler"));
lf[145]=C_h_intern(&lf[145],36, C_text("chicken.process.signal#signal-ignore"));
lf[146]=C_h_intern(&lf[146],37, C_text("chicken.process.signal#signal-default"));
lf[147]=C_h_intern(&lf[147],34, C_text("chicken.process.signal#signal-mask"));
lf[148]=C_h_intern(&lf[148],35, C_text("chicken.process.signal#signal-mask!"));
lf[149]=C_h_intern(&lf[149],37, C_text("chicken.process.signal#signal-masked?"));
lf[150]=C_h_intern(&lf[150],37, C_text("chicken.process.signal#signal-unmask!"));
lf[151]=C_h_intern(&lf[151],34, C_text("chicken.process.signal#signal/abrt"));
lf[152]=C_h_intern(&lf[152],34, C_text("chicken.process.signal#signal/alrm"));
lf[153]=C_h_intern(&lf[153],35, C_text("chicken.process.signal#signal/break"));
lf[154]=C_h_intern(&lf[154],33, C_text("chicken.process.signal#signal/bus"));
lf[155]=C_h_intern(&lf[155],34, C_text("chicken.process.signal#signal/chld"));
lf[156]=C_h_intern(&lf[156],34, C_text("chicken.process.signal#signal/cont"));
lf[157]=C_h_intern(&lf[157],33, C_text("chicken.process.signal#signal/fpe"));
lf[158]=C_h_intern(&lf[158],33, C_text("chicken.process.signal#signal/hup"));
lf[159]=C_h_intern(&lf[159],33, C_text("chicken.process.signal#signal/ill"));
lf[160]=C_h_intern(&lf[160],33, C_text("chicken.process.signal#signal/int"));
lf[161]=C_h_intern(&lf[161],32, C_text("chicken.process.signal#signal/io"));
lf[162]=C_h_intern(&lf[162],34, C_text("chicken.process.signal#signal/kill"));
lf[163]=C_h_intern(&lf[163],34, C_text("chicken.process.signal#signal/pipe"));
lf[164]=C_h_intern(&lf[164],34, C_text("chicken.process.signal#signal/prof"));
lf[165]=C_h_intern(&lf[165],34, C_text("chicken.process.signal#signal/quit"));
lf[166]=C_h_intern(&lf[166],34, C_text("chicken.process.signal#signal/segv"));
lf[167]=C_h_intern(&lf[167],34, C_text("chicken.process.signal#signal/stop"));
lf[168]=C_h_intern(&lf[168],34, C_text("chicken.process.signal#signal/term"));
lf[169]=C_h_intern(&lf[169],34, C_text("chicken.process.signal#signal/trap"));
lf[170]=C_h_intern(&lf[170],34, C_text("chicken.process.signal#signal/tstp"));
lf[171]=C_h_intern(&lf[171],33, C_text("chicken.process.signal#signal/urg"));
lf[172]=C_h_intern(&lf[172],34, C_text("chicken.process.signal#signal/usr1"));
lf[173]=C_h_intern(&lf[173],34, C_text("chicken.process.signal#signal/usr2"));
lf[174]=C_h_intern(&lf[174],36, C_text("chicken.process.signal#signal/vtalrm"));
lf[175]=C_h_intern(&lf[175],35, C_text("chicken.process.signal#signal/winch"));
lf[176]=C_h_intern(&lf[176],34, C_text("chicken.process.signal#signal/xcpu"));
lf[177]=C_h_intern(&lf[177],34, C_text("chicken.process.signal#signal/xfsz"));
lf[178]=C_h_intern(&lf[178],35, C_text("chicken.process.signal#signals-list"));
lf[179]=C_h_intern(&lf[179],30, C_text("chicken.process-context.posix#"));
lf[180]=C_h_intern(&lf[180],47, C_text("chicken.process-context.posix#change-directory*"));
lf[181]=C_h_intern(&lf[181],49, C_text("chicken.process-context.posix#set-root-directory!"));
lf[182]=C_h_intern(&lf[182],56, C_text("chicken.process-context.posix#current-effective-group-id"));
lf[183]=C_h_intern(&lf[183],55, C_text("chicken.process-context.posix#current-effective-user-id"));
lf[184]=C_h_intern(&lf[184],46, C_text("chicken.process-context.posix#current-group-id"));
lf[185]=C_h_intern(&lf[185],45, C_text("chicken.process-context.posix#current-user-id"));
lf[186]=C_h_intern(&lf[186],48, C_text("chicken.process-context.posix#current-process-id"));
lf[187]=C_h_intern(&lf[187],47, C_text("chicken.process-context.posix#parent-process-id"));
lf[188]=C_h_intern(&lf[188],47, C_text("chicken.process-context.posix#current-user-name"));
lf[189]=C_h_intern(&lf[189],57, C_text("chicken.process-context.posix#current-effective-user-name"));
lf[190]=C_h_intern(&lf[190],44, C_text("chicken.process-context.posix#create-session"));
lf[191]=C_h_intern(&lf[191],46, C_text("chicken.process-context.posix#process-group-id"));
lf[192]=C_h_intern(&lf[192],46, C_text("chicken.process-context.posix#user-information"));
lf[193]=C_h_intern(&lf[193],14, C_text("chicken.posix#"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\055\040\000"));
lf[196]=C_h_intern(&lf[196],19, C_text("##sys#peek-c-string"));
lf[197]=C_h_intern(&lf[197],17, C_text("##sys#posix-error"));
lf[199]=C_h_intern_kw(&lf[199],10, C_text("file-error"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\143\141\156\156\157\164\040\141\143\143\145\163\163\040\146\151\154\145\000"));
lf[201]=C_h_intern(&lf[201],19, C_text("##sys#make-c-string"));
lf[202]=C_h_intern(&lf[202],17, C_text("##sys#signal-hook"));
lf[203]=C_h_intern_kw(&lf[203],10, C_text("type-error"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\146\151\170\156\165\155\054\040\160\157\162\164\040\157\162\040\163\164\162\151\156\147\000"));
lf[205]=C_h_intern(&lf[205],12, C_text("scheme#port?"));
lf[206]=C_h_intern(&lf[206],28, C_text("chicken.file.posix#file-stat"));
lf[207]=C_h_intern(&lf[207],9, C_text("file-stat"));
lf[208]=C_h_intern(&lf[208],40, C_text("chicken.file.posix#set-file-permissions!"));
lf[209]=C_h_intern(&lf[209],21, C_text("set-file-permissions!"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\143\141\156\156\157\164\040\143\150\141\156\147\145\040\146\151\154\145\040\160\145\162\155\151\163\163\151\157\156\163\000"));
lf[211]=C_h_intern(&lf[211],16, C_text("file-permissions"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\146\151\170\156\165\155\054\040\160\157\162\164\040\157\162\040\163\164\162\151\156\147\000"));
lf[213]=C_h_intern(&lf[213],41, C_text("chicken.file.posix#file-modification-time"));
lf[214]=C_h_intern(&lf[214],22, C_text("file-modification-time"));
lf[215]=C_h_intern(&lf[215],35, C_text("chicken.file.posix#file-access-time"));
lf[216]=C_h_intern(&lf[216],16, C_text("file-access-time"));
lf[217]=C_h_intern(&lf[217],35, C_text("chicken.file.posix#file-change-time"));
lf[218]=C_h_intern(&lf[218],16, C_text("file-change-time"));
lf[219]=C_h_intern(&lf[219],34, C_text("chicken.file.posix#set-file-times!"));
lf[220]=C_h_intern(&lf[220],15, C_text("set-file-times!"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\163\145\164\040\146\151\154\145\040\164\151\155\145\163\000"));
lf[222]=C_h_intern(&lf[222],25, C_text("##sys#check-exact-integer"));
lf[223]=C_h_intern(&lf[223],28, C_text("chicken.time#current-seconds"));
lf[224]=C_h_intern(&lf[224],28, C_text("chicken.file.posix#file-size"));
lf[225]=C_h_intern(&lf[225],9, C_text("file-size"));
lf[226]=C_h_intern(&lf[226],34, C_text("chicken.file.posix#set-file-owner!"));
lf[227]=C_h_intern(&lf[227],15, C_text("set-file-owner!"));
lf[228]=C_h_intern(&lf[228],5, C_text("chown"));
lf[229]=C_h_intern(&lf[229],34, C_text("chicken.file.posix#set-file-group!"));
lf[230]=C_h_intern(&lf[230],15, C_text("set-file-group!"));
lf[231]=C_h_intern(&lf[231],12, C_text("regular-file"));
lf[232]=C_h_intern(&lf[232],13, C_text("symbolic-link"));
lf[233]=C_h_intern(&lf[233],9, C_text("directory"));
lf[234]=C_h_intern(&lf[234],16, C_text("character-device"));
lf[235]=C_h_intern(&lf[235],12, C_text("block-device"));
lf[236]=C_h_intern(&lf[236],4, C_text("fifo"));
lf[237]=C_h_intern(&lf[237],6, C_text("socket"));
lf[238]=C_h_intern(&lf[238],9, C_text("file-type"));
lf[239]=C_h_intern(&lf[239],18, C_text("set-file-position!"));
lf[240]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\143\141\156\156\157\164\040\163\145\164\040\146\151\154\145\040\160\157\163\151\164\151\157\156\000"));
lf[241]=C_h_intern(&lf[241],6, C_text("stream"));
lf[242]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\151\156\166\141\154\151\144\040\146\151\154\145\000"));
lf[243]=C_h_intern_kw(&lf[243],6, C_text("append"));
lf[244]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\141\000"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\151\156\166\141\154\151\144\040\155\157\144\145\040\146\157\162\040\151\156\160\165\164\040\146\151\154\145\000"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\151\156\166\141\154\151\144\040\155\157\144\145\040\141\162\147\165\155\145\156\164\000"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\162\000"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\167\000"));
lf[249]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\143\141\156\156\157\164\040\157\160\145\156\040\146\151\154\145\000"));
lf[250]=C_h_intern(&lf[250],15, C_text("##sys#make-port"));
lf[251]=C_h_intern(&lf[251],23, C_text("##sys#stream-port-class"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\050\146\144\160\157\162\164\051\000"));
lf[253]=C_h_intern(&lf[253],5, C_text("utf-8"));
lf[254]=C_h_intern(&lf[254],16, C_text("open-input-file*"));
lf[255]=C_h_intern(&lf[255],17, C_text("open-output-file*"));
lf[256]=C_h_intern(&lf[256],12, C_text("port->fileno"));
lf[257]=C_h_intern(&lf[257],15, C_text("##sys#port-data"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\046\143\141\156\156\157\164\040\141\143\143\145\163\163\040\146\151\154\145\055\144\145\163\143\162\151\160\164\157\162\040\157\146\040\160\157\162\164\000"));
lf[259]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\160\157\162\164\040\150\141\163\040\156\157\040\141\164\164\141\143\150\145\144\040\146\151\154\145\000"));
lf[260]=C_h_intern(&lf[260],27, C_text("##sys#peek-unsigned-integer"));
lf[261]=C_h_intern(&lf[261],16, C_text("duplicate-fileno"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\143\141\156\156\157\164\040\144\165\160\154\151\143\141\164\145\040\146\151\154\145\055\144\145\163\143\162\151\160\164\157\162\000"));
lf[263]=C_h_intern(&lf[263],17, C_text("change-directory*"));
lf[264]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\143\141\156\156\157\164\040\143\150\141\156\147\145\040\143\165\162\162\145\156\164\040\144\151\162\145\143\164\157\162\171\000"));
lf[265]=C_h_intern(&lf[265],27, C_text("##sys#change-directory-hook"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\164\151\155\145\040\166\145\143\164\157\162\040\164\157\157\040\163\150\157\162\164\000"));
lf[269]=C_h_intern(&lf[269],19, C_text("seconds->local-time"));
lf[270]=C_h_intern(&lf[270],17, C_text("seconds->utc-time"));
lf[271]=C_h_intern(&lf[271],15, C_text("##sys#substring"));
lf[272]=C_h_intern(&lf[272],15, C_text("seconds->string"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\143\141\156\156\157\164\040\143\157\156\166\145\162\164\040\163\145\143\157\156\144\163\040\164\157\040\163\164\162\151\156\147\000"));
lf[274]=C_h_intern(&lf[274],19, C_text("local-time->seconds"));
lf[275]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\046\143\141\156\156\157\164\040\143\157\156\166\145\162\164\040\164\151\155\145\040\166\145\143\164\157\162\040\164\157\040\163\145\143\157\156\144\163\000"));
lf[276]=C_h_intern(&lf[276],21, C_text("##sys#make-bytevector"));
lf[277]=C_h_intern(&lf[277],12, C_text("time->string"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\164\151\155\145\040\146\157\162\155\141\164\164\151\156\147\040\157\166\145\162\146\154\157\167\163\040\142\165\146\146\145\162\000"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\143\141\156\156\157\164\040\143\157\156\166\145\162\164\040\164\151\155\145\040\166\145\143\164\157\162\040\164\157\040\163\164\162\151\156\147\000"));
lf[280]=C_h_intern(&lf[280],19, C_text("set-signal-handler!"));
lf[281]=C_h_intern(&lf[281],19, C_text("##sys#signal-vector"));
lf[282]=C_h_intern(&lf[282],19, C_text("make-signal-handler"));
lf[283]=C_h_intern(&lf[283],25, C_text("##sys#add-event-to-queue!"));
lf[284]=C_h_intern(&lf[284],20, C_text("##sys#get-next-event"));
lf[285]=C_h_intern(&lf[285],25, C_text("##sys#wait-for-next-event"));
lf[286]=C_h_intern(&lf[286],22, C_text("##sys#make-event-queue"));
lf[287]=C_h_intern(&lf[287],13, C_text("signal-ignore"));
lf[288]=C_h_intern(&lf[288],14, C_text("signal-default"));
lf[291]=C_h_intern(&lf[291],21, C_text("chicken.posix#process"));
lf[298]=C_h_intern(&lf[298],13, C_text("process-sleep"));
lf[299]=C_h_intern(&lf[299],12, C_text("process-wait"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\167\141\151\164\151\156\147\040\146\157\162\040\143\150\151\154\144\040\160\162\157\143\145\163\163\040\146\141\151\154\145\144\000"));
lf[301]=C_h_intern(&lf[301],16, C_text("##sys#block-set!"));
lf[303]=C_h_intern(&lf[303],24, C_text("chicken.condition#signal"));
lf[305]=C_h_intern(&lf[305],34, C_text("chicken.memory#pointer-vector-set!"));
lf[306]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\117\165\164\040\157\146\040\155\145\155\157\162\171\000"));
lf[307]=C_h_intern(&lf[307],40, C_text("chicken.condition#with-exception-handler"));
lf[308]=C_h_intern(&lf[308],37, C_text("scheme#call-with-current-continuation"));
lf[309]=C_h_intern(&lf[309],34, C_text("chicken.memory#make-pointer-vector"));
lf[310]=C_h_intern(&lf[310],19, C_text("chicken.memory#free"));
lf[311]=C_h_intern(&lf[311],33, C_text("chicken.memory#pointer-vector-ref"));
lf[312]=C_h_intern(&lf[312],36, C_text("chicken.memory#pointer-vector-length"));
lf[315]=C_h_intern(&lf[315],3, C_text("map"));
lf[316]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\075\000"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\143\141\156\156\157\164\040\157\160\145\156\040\160\151\160\145\000"));
lf[318]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\050\160\151\160\145\051\000"));
lf[319]=C_h_intern(&lf[319],15, C_text("open-input-pipe"));
lf[320]=C_h_intern_kw(&lf[320],4, C_text("text"));
lf[321]=C_h_intern_kw(&lf[321],6, C_text("binary"));
lf[322]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\151\154\154\145\147\141\154\040\151\156\160\165\164\057\157\165\164\160\165\164\040\155\157\144\145\040\163\160\145\143\151\146\151\145\162\000"));
lf[323]=C_h_intern(&lf[323],16, C_text("open-output-pipe"));
lf[324]=C_h_intern(&lf[324],16, C_text("close-input-pipe"));
lf[325]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\145\162\162\157\162\040\167\150\151\154\145\040\143\154\157\163\151\156\147\040\160\151\160\145\000"));
lf[326]=C_h_intern(&lf[326],17, C_text("close-output-pipe"));
lf[327]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\145\162\162\157\162\040\167\150\151\154\145\040\143\154\157\163\151\156\147\040\160\151\160\145\000"));
lf[328]=C_h_intern(&lf[328],20, C_text("##sys#standard-input"));
lf[329]=C_h_intern(&lf[329],13, C_text("scheme#values"));
lf[330]=C_h_intern(&lf[330],18, C_text("##sys#dynamic-wind"));
lf[331]=C_h_intern(&lf[331],21, C_text("##sys#standard-output"));
lf[332]=C_h_intern(&lf[332],9, C_text("file-open"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\143\141\156\156\157\164\040\157\160\145\156\040\146\151\154\145\000"));
lf[334]=C_h_intern(&lf[334],10, C_text("file-close"));
lf[335]=C_h_intern(&lf[335],24, C_text("##sys#dispatch-interrupt"));
lf[336]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\143\141\156\156\157\164\040\143\154\157\163\145\040\146\151\154\145\000"));
lf[337]=C_h_intern(&lf[337],9, C_text("file-read"));
lf[338]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\162\145\141\144\040\146\162\157\155\040\146\151\154\145\000"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\142\171\164\145\166\145\143\164\157\162\000"));
lf[340]=C_h_intern(&lf[340],10, C_text("file-write"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\143\141\156\156\157\164\040\167\162\151\164\145\040\164\157\040\146\151\154\145\000"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\057\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\163\164\162\151\156\147\040\157\162\040\142\171\164\145\166\145\143\164\157\162\000"));
lf[343]=C_h_intern(&lf[343],12, C_text("file-mkstemp"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\060\061\062\063\064\065\066\067\070\071\141\142\143\144\145\146\147\150\151\152\153\154\155\156\157\160\161\162\163\164\165\166\167\170\171\172\000"));
lf[345]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\143\141\156\156\157\164\040\143\162\145\141\164\145\040\164\145\155\160\157\162\141\162\171\040\146\151\154\145\000"));
lf[346]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\156\157\156\055\145\170\151\163\164\145\156\164\040\144\151\162\145\143\164\157\162\171\000"));
lf[347]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\151\156\166\141\154\151\144\040\164\145\155\160\154\141\164\145\000"));
lf[348]=C_h_intern(&lf[348],18, C_text("##sys#file-exists?"));
lf[349]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[350]=C_h_intern(&lf[350],35, C_text("chicken.pathname#pathname-directory"));
lf[351]=C_h_intern(&lf[351],18, C_text("scheme#string-copy"));
lf[352]=C_h_intern(&lf[352],11, C_text("create-pipe"));
lf[353]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\143\141\156\156\157\164\040\143\162\145\141\164\145\040\160\151\160\145\000"));
lf[355]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\143\141\156\156\157\164\040\144\165\160\154\151\143\141\164\145\040\146\151\154\145\040\144\145\163\143\162\151\160\164\157\162\000"));
lf[357]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\042\000"));
lf[358]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\042\000"));
lf[359]=C_h_intern(&lf[359],15, C_text("process-execute"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\143\141\156\156\157\164\040\145\170\145\143\165\164\145\040\160\162\157\143\145\163\163\000"));
lf[361]=C_h_intern(&lf[361],13, C_text("process-spawn"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\143\141\156\156\157\164\040\163\160\141\167\156\040\160\162\157\143\145\163\163\000"));
lf[364]=C_h_intern(&lf[364],17, C_text("##sys#error/errno"));
lf[365]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\143\141\156\156\157\164\040\162\145\164\162\151\145\166\145\040\163\171\163\164\145\155\040\144\151\162\145\143\164\157\162\171\000"));
lf[366]=C_h_intern(&lf[366],48, C_text("chicken.process-context#get-environment-variable"));
lf[367]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\117\115\123\120\105\103\000"));
lf[368]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\057\143\000"));
lf[369]=C_h_intern(&lf[369],11, C_text("process-run"));
lf[370]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\143\141\156\156\157\164\040\145\170\145\143\165\164\145\040\160\162\157\143\145\163\163\000"));
lf[371]=C_h_intern(&lf[371],19, C_text("##sys#make-locative"));
lf[372]=C_h_intern(&lf[372],8, C_text("location"));
lf[373]=C_h_intern(&lf[373],33, C_text("chicken.string#string-intersperse"));
lf[374]=C_h_intern(&lf[374],7, C_text("process"));
lf[375]=C_h_intern(&lf[375],8, C_text("process*"));
lf[376]=C_h_intern(&lf[376],17, C_text("current-user-name"));
lf[377]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\143\141\156\156\157\164\040\162\145\164\162\151\145\166\145\040\143\165\162\162\145\156\164\040\165\163\145\162\055\156\141\155\145\000"));
lf[378]=C_h_intern(&lf[378],33, C_text("chicken.file.posix#file-test-lock"));
lf[379]=C_h_intern(&lf[379],14, C_text("chicken.errno#"));
lf[380]=C_h_intern(&lf[380],19, C_text("chicken.errno#errno"));
lf[381]=C_h_intern(&lf[381],11, C_text("##sys#errno"));
lf[382]=C_h_intern(&lf[382],24, C_text("chicken.errno#errno/2big"));
lf[383]=C_h_intern(&lf[383],25, C_text("chicken.errno#errno/acces"));
lf[384]=C_h_intern(&lf[384],25, C_text("chicken.errno#errno/again"));
lf[385]=C_h_intern(&lf[385],24, C_text("chicken.errno#errno/badf"));
lf[386]=C_h_intern(&lf[386],24, C_text("chicken.errno#errno/busy"));
lf[387]=C_h_intern(&lf[387],25, C_text("chicken.errno#errno/child"));
lf[388]=C_h_intern(&lf[388],26, C_text("chicken.errno#errno/deadlk"));
lf[389]=C_h_intern(&lf[389],23, C_text("chicken.errno#errno/dom"));
lf[390]=C_h_intern(&lf[390],25, C_text("chicken.errno#errno/exist"));
lf[391]=C_h_intern(&lf[391],25, C_text("chicken.errno#errno/fault"));
lf[392]=C_h_intern(&lf[392],24, C_text("chicken.errno#errno/fbig"));
lf[393]=C_h_intern(&lf[393],25, C_text("chicken.errno#errno/ilseq"));
lf[394]=C_h_intern(&lf[394],24, C_text("chicken.errno#errno/intr"));
lf[395]=C_h_intern(&lf[395],25, C_text("chicken.errno#errno/inval"));
lf[396]=C_h_intern(&lf[396],22, C_text("chicken.errno#errno/io"));
lf[397]=C_h_intern(&lf[397],25, C_text("chicken.errno#errno/isdir"));
lf[398]=C_h_intern(&lf[398],25, C_text("chicken.errno#errno/mfile"));
lf[399]=C_h_intern(&lf[399],25, C_text("chicken.errno#errno/mlink"));
lf[400]=C_h_intern(&lf[400],31, C_text("chicken.errno#errno/nametoolong"));
lf[401]=C_h_intern(&lf[401],25, C_text("chicken.errno#errno/nfile"));
lf[402]=C_h_intern(&lf[402],25, C_text("chicken.errno#errno/nodev"));
lf[403]=C_h_intern(&lf[403],25, C_text("chicken.errno#errno/noent"));
lf[404]=C_h_intern(&lf[404],26, C_text("chicken.errno#errno/noexec"));
lf[405]=C_h_intern(&lf[405],25, C_text("chicken.errno#errno/nolck"));
lf[406]=C_h_intern(&lf[406],25, C_text("chicken.errno#errno/nomem"));
lf[407]=C_h_intern(&lf[407],25, C_text("chicken.errno#errno/nospc"));
lf[408]=C_h_intern(&lf[408],25, C_text("chicken.errno#errno/nosys"));
lf[409]=C_h_intern(&lf[409],26, C_text("chicken.errno#errno/notdir"));
lf[410]=C_h_intern(&lf[410],28, C_text("chicken.errno#errno/notempty"));
lf[411]=C_h_intern(&lf[411],25, C_text("chicken.errno#errno/notty"));
lf[412]=C_h_intern(&lf[412],24, C_text("chicken.errno#errno/nxio"));
lf[413]=C_h_intern(&lf[413],24, C_text("chicken.errno#errno/perm"));
lf[414]=C_h_intern(&lf[414],24, C_text("chicken.errno#errno/pipe"));
lf[415]=C_h_intern(&lf[415],25, C_text("chicken.errno#errno/range"));
lf[416]=C_h_intern(&lf[416],24, C_text("chicken.errno#errno/rofs"));
lf[417]=C_h_intern(&lf[417],25, C_text("chicken.errno#errno/spipe"));
lf[418]=C_h_intern(&lf[418],24, C_text("chicken.errno#errno/srch"));
lf[419]=C_h_intern(&lf[419],30, C_text("chicken.errno#errno/wouldblock"));
lf[420]=C_h_intern(&lf[420],24, C_text("chicken.errno#errno/xdev"));
lf[421]=C_h_intern(&lf[421],14, C_text("signal-handler"));
lf[422]=C_h_intern(&lf[422],31, C_text("chicken.base#getter-with-setter"));
lf[423]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\050\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\055\150\141\156\144\154\145\162\040\163\151\147\051\000"));
lf[424]=C_h_intern(&lf[424],18, C_text("file-creation-mode"));
lf[425]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\055\050\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\143\162\145\141\164\151\157\156\055\155\157\144\145\040\155\157\144\145\051\000"));
lf[426]=C_h_intern(&lf[426],13, C_text("file-position"));
lf[427]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\046\143\141\156\156\157\164\040\162\145\164\162\151\145\166\145\040\146\151\154\145\040\160\157\163\151\164\151\157\156\040\157\146\040\160\157\162\164\000"));
lf[428]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\151\156\166\141\154\151\144\040\146\151\154\145\000"));
lf[429]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\050\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\160\157\163\151\164\151\157\156\040\160\157\162\164\051\000"));
lf[430]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\050\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\160\145\162\155\151\163\163\151\157\156\163\040\146\051\000"));
lf[431]=C_h_intern(&lf[431],10, C_text("file-group"));
lf[432]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\050\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\147\162\157\165\160\040\146\051\000"));
lf[433]=C_h_intern(&lf[433],10, C_text("file-owner"));
lf[434]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\050\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\157\167\156\145\162\040\146\051\000"));
C_register_lf2(lf,435,create_ptable());{}
t2=C_mutate(&lf[0] /* (set! c1899 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2503,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_scheduler_toplevel(2,av2);}}

/* va6913 in k5052 in loop in k5039 in k5032 */
static void va6913(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,5)))){
C_save_and_reclaim_args((void *)trva6913,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_s_a_i_bitwise_ior(&a,2,t1,*((C_word*)lf[46]+1));
t4=C_fixnum_or(C_fix((C_word)S_IRUSR),C_fix((C_word)S_IWUSR));
t5=C_open(((C_word*)t2)[2],t3,t4);
t6=C_eqp(C_fix(-1),t5);
if(C_truep(t6)){
if(C_truep(C_fixnum_lessp(((C_word*)t2)[3],((C_word*)t2)[4]))){
/* posixwin.scm:623: loop */
t7=((C_word*)((C_word*)t2)[5])[1];
f_5046(t7,((C_word*)t2)[6],C_fixnum_plus(((C_word*)t2)[3],C_fix(1)));}
else{
/* posixwin.scm:624: posix-error */
t7=lf[194];{
C_word av2[6];
av2[0]=t7;
av2[1]=((C_word*)t2)[6];
av2[2]=lf[199];
av2[3]=lf[343];
av2[4]=lf[345];
av2[5]=((C_word*)t2)[7];
f_2838(6,av2);}}}
else{
/* posixwin.scm:625: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t2)[6];
av2[2]=t5;
av2[3]=((C_word*)t2)[8];
C_values(4,av2);}}}

/* va6921 in chicken.file.posix#file-mkstemp */
static void va6921(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,2)))){
C_save_and_reclaim_args((void *)trva6921,2,t0,t1);}
a=C_alloc(36);
t2=C_s_a_i_times(&a,2,t1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5034,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm:595: scheme#string-copy */
t5=C_fast_retrieve(lf[351]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* va6929 in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void va6929(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(184,0,8)))){
C_save_and_reclaim_args((void *)trva6929,2,t0,t1);}
a=C_alloc(184);
t2=C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IWOTH));
t3=C_mutate((C_word*)lf[21]+1 /* (set! chicken.file.posix#file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4851,a[2]=t2,a[3]=((C_word)li106),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[13]+1 /* (set! chicken.file.posix#file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4887,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[25]+1 /* (set! chicken.file.posix#file-read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4918,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[29]+1 /* (set! chicken.file.posix#file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4959,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[20]+1 /* (set! chicken.file.posix#file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5023,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[118]+1 /* (set! chicken.process#create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5176,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t9=C_set_block_item(lf[168] /* chicken.process.signal#signal/term */,0,C_fix((C_word)SIGTERM));
t10=C_set_block_item(lf[160] /* chicken.process.signal#signal/int */,0,C_fix((C_word)SIGINT));
t11=C_set_block_item(lf[157] /* chicken.process.signal#signal/fpe */,0,C_fix((C_word)SIGFPE));
t12=C_set_block_item(lf[159] /* chicken.process.signal#signal/ill */,0,C_fix((C_word)SIGILL));
t13=C_set_block_item(lf[166] /* chicken.process.signal#signal/segv */,0,C_fix((C_word)SIGSEGV));
t14=C_set_block_item(lf[151] /* chicken.process.signal#signal/abrt */,0,C_fix((C_word)SIGABRT));
t15=C_set_block_item(lf[153] /* chicken.process.signal#signal/break */,0,C_fix((C_word)SIGBREAK));
t16=C_set_block_item(lf[152] /* chicken.process.signal#signal/alrm */,0,C_fix(0));
t17=C_set_block_item(lf[154] /* chicken.process.signal#signal/bus */,0,C_fix(0));
t18=C_set_block_item(lf[155] /* chicken.process.signal#signal/chld */,0,C_fix(0));
t19=C_set_block_item(lf[156] /* chicken.process.signal#signal/cont */,0,C_fix(0));
t20=C_set_block_item(lf[158] /* chicken.process.signal#signal/hup */,0,C_fix(0));
t21=C_set_block_item(lf[161] /* chicken.process.signal#signal/io */,0,C_fix(0));
t22=C_set_block_item(lf[162] /* chicken.process.signal#signal/kill */,0,C_fix(0));
t23=C_set_block_item(lf[163] /* chicken.process.signal#signal/pipe */,0,C_fix(0));
t24=C_set_block_item(lf[164] /* chicken.process.signal#signal/prof */,0,C_fix(0));
t25=C_set_block_item(lf[165] /* chicken.process.signal#signal/quit */,0,C_fix(0));
t26=C_set_block_item(lf[167] /* chicken.process.signal#signal/stop */,0,C_fix(0));
t27=C_set_block_item(lf[169] /* chicken.process.signal#signal/trap */,0,C_fix(0));
t28=C_set_block_item(lf[170] /* chicken.process.signal#signal/tstp */,0,C_fix(0));
t29=C_set_block_item(lf[171] /* chicken.process.signal#signal/urg */,0,C_fix(0));
t30=C_set_block_item(lf[172] /* chicken.process.signal#signal/usr1 */,0,C_fix(0));
t31=C_set_block_item(lf[173] /* chicken.process.signal#signal/usr2 */,0,C_fix(0));
t32=C_set_block_item(lf[174] /* chicken.process.signal#signal/vtalrm */,0,C_fix(0));
t33=C_set_block_item(lf[175] /* chicken.process.signal#signal/winch */,0,C_fix(0));
t34=C_set_block_item(lf[176] /* chicken.process.signal#signal/xcpu */,0,C_fix(0));
t35=C_set_block_item(lf[177] /* chicken.process.signal#signal/xfsz */,0,C_fix(0));
t36=C_a_i_list7(&a,7,*((C_word*)lf[168]+1),*((C_word*)lf[160]+1),*((C_word*)lf[157]+1),*((C_word*)lf[159]+1),*((C_word*)lf[166]+1),*((C_word*)lf[151]+1),*((C_word*)lf[153]+1));
t37=C_mutate((C_word*)lf[178]+1 /* (set! chicken.process.signal#signals-list ...) */,t36);
t38=C_mutate(&lf[354] /* (set! chicken.posix#duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5239,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[87]+1 /* (set! chicken.time.posix#local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5270,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp));
t40=C_set_block_item(lf[134] /* chicken.process#spawn/overlay */,0,C_fix((C_word)P_OVERLAY));
t41=C_set_block_item(lf[135] /* chicken.process#spawn/wait */,0,C_fix((C_word)P_WAIT));
t42=C_set_block_item(lf[136] /* chicken.process#spawn/nowait */,0,C_fix((C_word)P_NOWAIT));
t43=C_set_block_item(lf[137] /* chicken.process#spawn/nowaito */,0,C_fix((C_word)P_NOWAITO));
t44=C_set_block_item(lf[138] /* chicken.process#spawn/detach */,0,C_fix((C_word)P_DETACH));
t45=C_mutate(&lf[356] /* (set! chicken.posix#quote-arg-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5323,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[108]+1 /* (set! chicken.process#process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5338,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[112]+1 /* (set! chicken.process#process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5418,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate(&lf[363] /* (set! chicken.posix#shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5504,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[110]+1 /* (set! chicken.process#process-run ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5532,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t50=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5740,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
t51=C_mutate((C_word*)lf[123]+1 /* (set! chicken.process#process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5806,a[2]=t50,a[3]=((C_word)li135),tmp=(C_word)a,a+=4,tmp));
t52=C_mutate((C_word*)lf[124]+1 /* (set! chicken.process#process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5884,a[2]=t50,a[3]=((C_word)li136),tmp=(C_word)a,a+=4,tmp));
t53=C_mutate((C_word*)lf[188]+1 /* (set! chicken.process-context.posix#current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5974,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[4]+1 /* (set! chicken.file.posix#create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5996,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[190]+1 /* (set! chicken.process-context.posix#create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6002,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[5]+1 /* (set! chicken.file.posix#create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6008,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[182]+1 /* (set! chicken.process-context.posix#current-effective-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6014,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[183]+1 /* (set! chicken.process-context.posix#current-effective-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6020,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[189]+1 /* (set! chicken.process-context.posix#current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6026,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[184]+1 /* (set! chicken.process-context.posix#current-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6032,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[185]+1 /* (set! chicken.process-context.posix#current-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6038,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[14]+1 /* (set! chicken.file.posix#file-control ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6044,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[17]+1 /* (set! chicken.file.posix#file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6050,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[18]+1 /* (set! chicken.file.posix#file-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6056,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[19]+1 /* (set! chicken.file.posix#file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6062,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[26]+1 /* (set! chicken.file.posix#file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6068,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[378]+1 /* (set! chicken.file.posix#file-test-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6074,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[27]+1 /* (set! chicken.file.posix#file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6080,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[28]+1 /* (set! chicken.file.posix#file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6086,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[187]+1 /* (set! chicken.process-context.posix#parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6092,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[109]+1 /* (set! chicken.process#process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6098,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[191]+1 /* (set! chicken.process-context.posix#process-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6104,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[111]+1 /* (set! chicken.process#process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6110,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t74=C_mutate((C_word*)lf[6]+1 /* (set! chicken.file.posix#read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6116,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[140]+1 /* (set! chicken.process.signal#set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6122,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[181]+1 /* (set! chicken.process-context.posix#set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6128,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t77=C_mutate((C_word*)lf[142]+1 /* (set! chicken.process.signal#set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6134,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t78=C_mutate((C_word*)lf[147]+1 /* (set! chicken.process.signal#signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6140,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t79=C_mutate((C_word*)lf[148]+1 /* (set! chicken.process.signal#signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6146,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t80=C_mutate((C_word*)lf[149]+1 /* (set! chicken.process.signal#signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6152,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t81=C_mutate((C_word*)lf[150]+1 /* (set! chicken.process.signal#signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6158,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t82=C_mutate((C_word*)lf[192]+1 /* (set! chicken.process-context.posix#user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6164,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t83=C_mutate((C_word*)lf[81]+1 /* (set! chicken.time.posix#utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6170,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t84=C_mutate((C_word*)lf[85]+1 /* (set! chicken.time.posix#string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6176,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t85=C_set_block_item(lf[8] /* chicken.file.posix#fcntl/dupfd */,0,C_fix(0));
t86=C_set_block_item(lf[9] /* chicken.file.posix#fcntl/getfd */,0,C_fix(0));
t87=C_set_block_item(lf[11] /* chicken.file.posix#fcntl/setfd */,0,C_fix(0));
t88=C_set_block_item(lf[10] /* chicken.file.posix#fcntl/getfl */,0,C_fix(0));
t89=C_set_block_item(lf[12] /* chicken.file.posix#fcntl/setfl */,0,C_fix(0));
t90=C_set_block_item(lf[48] /* chicken.file.posix#open/noctty */,0,C_fix(0));
t91=C_set_block_item(lf[50] /* chicken.file.posix#open/nonblock */,0,C_fix(0));
t92=C_set_block_item(lf[47] /* chicken.file.posix#open/fsync */,0,C_fix(0));
t93=C_set_block_item(lf[54] /* chicken.file.posix#open/sync */,0,C_fix(0));
t94=C_set_block_item(lf[65] /* chicken.file.posix#perm/isgid */,0,C_fix(0));
t95=C_set_block_item(lf[66] /* chicken.file.posix#perm/isuid */,0,C_fix(0));
t96=C_set_block_item(lf[67] /* chicken.file.posix#perm/isvtx */,0,C_fix(0));
t97=C_a_i_provide(&a,1,lf[379]);
t98=C_mutate((C_word*)lf[380]+1 /* (set! chicken.errno#errno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6194,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t99=C_set_block_item(lf[382] /* chicken.errno#errno/2big */,0,C_fix((C_word)E2BIG));
t100=C_set_block_item(lf[383] /* chicken.errno#errno/acces */,0,C_fix((C_word)EACCES));
t101=C_set_block_item(lf[384] /* chicken.errno#errno/again */,0,C_fix((C_word)EAGAIN));
t102=C_set_block_item(lf[385] /* chicken.errno#errno/badf */,0,C_fix((C_word)EBADF));
t103=C_set_block_item(lf[386] /* chicken.errno#errno/busy */,0,C_fix((C_word)EBUSY));
t104=C_set_block_item(lf[387] /* chicken.errno#errno/child */,0,C_fix((C_word)ECHILD));
t105=C_set_block_item(lf[388] /* chicken.errno#errno/deadlk */,0,C_fix((C_word)EDEADLK));
t106=C_set_block_item(lf[389] /* chicken.errno#errno/dom */,0,C_fix((C_word)EDOM));
t107=C_set_block_item(lf[390] /* chicken.errno#errno/exist */,0,C_fix((C_word)EEXIST));
t108=C_set_block_item(lf[391] /* chicken.errno#errno/fault */,0,C_fix((C_word)EFAULT));
t109=C_set_block_item(lf[392] /* chicken.errno#errno/fbig */,0,C_fix((C_word)EFBIG));
t110=C_set_block_item(lf[393] /* chicken.errno#errno/ilseq */,0,C_fix((C_word)EILSEQ));
t111=C_set_block_item(lf[394] /* chicken.errno#errno/intr */,0,C_fix((C_word)EINTR));
t112=C_set_block_item(lf[395] /* chicken.errno#errno/inval */,0,C_fix((C_word)EINVAL));
t113=C_set_block_item(lf[396] /* chicken.errno#errno/io */,0,C_fix((C_word)EIO));
t114=C_set_block_item(lf[397] /* chicken.errno#errno/isdir */,0,C_fix((C_word)EISDIR));
t115=C_set_block_item(lf[398] /* chicken.errno#errno/mfile */,0,C_fix((C_word)EMFILE));
t116=C_set_block_item(lf[399] /* chicken.errno#errno/mlink */,0,C_fix((C_word)EMLINK));
t117=C_set_block_item(lf[400] /* chicken.errno#errno/nametoolong */,0,C_fix((C_word)ENAMETOOLONG));
t118=C_set_block_item(lf[401] /* chicken.errno#errno/nfile */,0,C_fix((C_word)ENFILE));
t119=C_set_block_item(lf[402] /* chicken.errno#errno/nodev */,0,C_fix((C_word)ENODEV));
t120=C_set_block_item(lf[403] /* chicken.errno#errno/noent */,0,C_fix((C_word)ENOENT));
t121=C_set_block_item(lf[404] /* chicken.errno#errno/noexec */,0,C_fix((C_word)ENOEXEC));
t122=C_set_block_item(lf[405] /* chicken.errno#errno/nolck */,0,C_fix((C_word)ENOLCK));
t123=C_set_block_item(lf[406] /* chicken.errno#errno/nomem */,0,C_fix((C_word)ENOMEM));
t124=C_set_block_item(lf[407] /* chicken.errno#errno/nospc */,0,C_fix((C_word)ENOSPC));
t125=C_set_block_item(lf[408] /* chicken.errno#errno/nosys */,0,C_fix((C_word)ENOSYS));
t126=C_set_block_item(lf[409] /* chicken.errno#errno/notdir */,0,C_fix((C_word)ENOTDIR));
t127=C_set_block_item(lf[410] /* chicken.errno#errno/notempty */,0,C_fix((C_word)ENOTEMPTY));
t128=C_set_block_item(lf[411] /* chicken.errno#errno/notty */,0,C_fix((C_word)ENOTTY));
t129=C_set_block_item(lf[412] /* chicken.errno#errno/nxio */,0,C_fix((C_word)ENXIO));
t130=C_set_block_item(lf[413] /* chicken.errno#errno/perm */,0,C_fix((C_word)EPERM));
t131=C_set_block_item(lf[414] /* chicken.errno#errno/pipe */,0,C_fix((C_word)EPIPE));
t132=C_set_block_item(lf[415] /* chicken.errno#errno/range */,0,C_fix((C_word)ERANGE));
t133=C_set_block_item(lf[416] /* chicken.errno#errno/rofs */,0,C_fix((C_word)EROFS));
t134=C_set_block_item(lf[417] /* chicken.errno#errno/spipe */,0,C_fix((C_word)ESPIPE));
t135=C_set_block_item(lf[418] /* chicken.errno#errno/srch */,0,C_fix((C_word)ESRCH));
t136=C_set_block_item(lf[419] /* chicken.errno#errno/wouldblock */,0,C_fix((C_word)EWOULDBLOCK));
t137=C_set_block_item(lf[420] /* chicken.errno#errno/xdev */,0,C_fix((C_word)EXDEV));
t138=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t138;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t138+1)))(2,av2);}}

/* va6931 in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void va6931(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva6931,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va6929(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IROTH)));}

/* va6933 in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void va6933(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva6933,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va6931(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IWGRP)));}

/* va6935 in k3816 in k3581 in k3293 in k3076 in k3072 in k3068 in k2519 in k2516 in k2513 in k2510 in k2507 in k2504 in k2501 */
static void va6935(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,1)))){
C_save_and_reclaim_args((void *)trva6935,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
va6933(t2,C_s_a_i_bitwise_ior(&a,2,t1,C_fix((C_word)S_IRGRP)));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[351] = {
{C_text("f6940:posix_2escm"),(void*)f6940},
{C_text("f6944:posix_2escm"),(void*)f6944},
{C_text("f_2503:posix_2escm"),(void*)f_2503},
{C_text("f_2506:posix_2escm"),(void*)f_2506},
{C_text("f_2509:posix_2escm"),(void*)f_2509},
{C_text("f_2512:posix_2escm"),(void*)f_2512},
{C_text("f_2515:posix_2escm"),(void*)f_2515},
{C_text("f_2518:posix_2escm"),(void*)f_2518},
{C_text("f_2521:posix_2escm"),(void*)f_2521},
{C_text("f_2606:posix_2escm"),(void*)f_2606},
{C_text("f_2623:posix_2escm"),(void*)f_2623},
{C_text("f_2625:posix_2escm"),(void*)f_2625},
{C_text("f_2629:posix_2escm"),(void*)f_2629},
{C_text("f_2641:posix_2escm"),(void*)f_2641},
{C_text("f_2645:posix_2escm"),(void*)f_2645},
{C_text("f_2655:posix_2escm"),(void*)f_2655},
{C_text("f_2676:posix_2escm"),(void*)f_2676},
{C_text("f_2679:posix_2escm"),(void*)f_2679},
{C_text("f_2690:posix_2escm"),(void*)f_2690},
{C_text("f_2696:posix_2escm"),(void*)f_2696},
{C_text("f_2721:posix_2escm"),(void*)f_2721},
{C_text("f_2838:posix_2escm"),(void*)f_2838},
{C_text("f_2842:posix_2escm"),(void*)f_2842},
{C_text("f_2849:posix_2escm"),(void*)f_2849},
{C_text("f_2853:posix_2escm"),(void*)f_2853},
{C_text("f_2856:posix_2escm"),(void*)f_2856},
{C_text("f_2860:posix_2escm"),(void*)f_2860},
{C_text("f_2881:posix_2escm"),(void*)f_2881},
{C_text("f_2885:posix_2escm"),(void*)f_2885},
{C_text("f_2894:posix_2escm"),(void*)f_2894},
{C_text("f_2902:posix_2escm"),(void*)f_2902},
{C_text("f_2909:posix_2escm"),(void*)f_2909},
{C_text("f_2920:posix_2escm"),(void*)f_2920},
{C_text("f_2927:posix_2escm"),(void*)f_2927},
{C_text("f_2945:posix_2escm"),(void*)f_2945},
{C_text("f_2949:posix_2escm"),(void*)f_2949},
{C_text("f_2959:posix_2escm"),(void*)f_2959},
{C_text("f_2964:posix_2escm"),(void*)f_2964},
{C_text("f_2968:posix_2escm"),(void*)f_2968},
{C_text("f_2970:posix_2escm"),(void*)f_2970},
{C_text("f_2974:posix_2escm"),(void*)f_2974},
{C_text("f_2976:posix_2escm"),(void*)f_2976},
{C_text("f_2980:posix_2escm"),(void*)f_2980},
{C_text("f_2982:posix_2escm"),(void*)f_2982},
{C_text("f_2986:posix_2escm"),(void*)f_2986},
{C_text("f_2998:posix_2escm"),(void*)f_2998},
{C_text("f_3001:posix_2escm"),(void*)f_3001},
{C_text("f_3050:posix_2escm"),(void*)f_3050},
{C_text("f_3054:posix_2escm"),(void*)f_3054},
{C_text("f_3056:posix_2escm"),(void*)f_3056},
{C_text("f_3062:posix_2escm"),(void*)f_3062},
{C_text("f_3070:posix_2escm"),(void*)f_3070},
{C_text("f_3074:posix_2escm"),(void*)f_3074},
{C_text("f_3078:posix_2escm"),(void*)f_3078},
{C_text("f_3080:posix_2escm"),(void*)f_3080},
{C_text("f_3099:posix_2escm"),(void*)f_3099},
{C_text("f_3167:posix_2escm"),(void*)f_3167},
{C_text("f_3175:posix_2escm"),(void*)f_3175},
{C_text("f_3177:posix_2escm"),(void*)f_3177},
{C_text("f_3185:posix_2escm"),(void*)f_3185},
{C_text("f_3187:posix_2escm"),(void*)f_3187},
{C_text("f_3195:posix_2escm"),(void*)f_3195},
{C_text("f_3197:posix_2escm"),(void*)f_3197},
{C_text("f_3205:posix_2escm"),(void*)f_3205},
{C_text("f_3207:posix_2escm"),(void*)f_3207},
{C_text("f_3215:posix_2escm"),(void*)f_3215},
{C_text("f_3217:posix_2escm"),(void*)f_3217},
{C_text("f_3225:posix_2escm"),(void*)f_3225},
{C_text("f_3227:posix_2escm"),(void*)f_3227},
{C_text("f_3235:posix_2escm"),(void*)f_3235},
{C_text("f_3240:posix_2escm"),(void*)f_3240},
{C_text("f_3256:posix_2escm"),(void*)f_3256},
{C_text("f_3262:posix_2escm"),(void*)f_3262},
{C_text("f_3295:posix_2escm"),(void*)f_3295},
{C_text("f_3323:posix_2escm"),(void*)f_3323},
{C_text("f_3331:posix_2escm"),(void*)f_3331},
{C_text("f_3356:posix_2escm"),(void*)f_3356},
{C_text("f_3369:posix_2escm"),(void*)f_3369},
{C_text("f_3378:posix_2escm"),(void*)f_3378},
{C_text("f_3402:posix_2escm"),(void*)f_3402},
{C_text("f_3428:posix_2escm"),(void*)f_3428},
{C_text("f_3452:posix_2escm"),(void*)f_3452},
{C_text("f_3478:posix_2escm"),(void*)f_3478},
{C_text("f_3494:posix_2escm"),(void*)f_3494},
{C_text("f_3503:posix_2escm"),(void*)f_3503},
{C_text("f_3517:posix_2escm"),(void*)f_3517},
{C_text("f_3523:posix_2escm"),(void*)f_3523},
{C_text("f_3530:posix_2escm"),(void*)f_3530},
{C_text("f_3533:posix_2escm"),(void*)f_3533},
{C_text("f_3550:posix_2escm"),(void*)f_3550},
{C_text("f_3553:posix_2escm"),(void*)f_3553},
{C_text("f_3560:posix_2escm"),(void*)f_3560},
{C_text("f_3569:posix_2escm"),(void*)f_3569},
{C_text("f_3583:posix_2escm"),(void*)f_3583},
{C_text("f_3586:posix_2escm"),(void*)f_3586},
{C_text("f_3605:posix_2escm"),(void*)f_3605},
{C_text("f_3609:posix_2escm"),(void*)f_3609},
{C_text("f_3612:posix_2escm"),(void*)f_3612},
{C_text("f_3626:posix_2escm"),(void*)f_3626},
{C_text("f_3630:posix_2escm"),(void*)f_3630},
{C_text("f_3633:posix_2escm"),(void*)f_3633},
{C_text("f_3658:posix_2escm"),(void*)f_3658},
{C_text("f_3662:posix_2escm"),(void*)f_3662},
{C_text("f_3665:posix_2escm"),(void*)f_3665},
{C_text("f_3668:posix_2escm"),(void*)f_3668},
{C_text("f_3696:posix_2escm"),(void*)f_3696},
{C_text("f_3700:posix_2escm"),(void*)f_3700},
{C_text("f_3704:posix_2escm"),(void*)f_3704},
{C_text("f_3741:posix_2escm"),(void*)f_3741},
{C_text("f_3748:posix_2escm"),(void*)f_3748},
{C_text("f_3757:posix_2escm"),(void*)f_3757},
{C_text("f_3767:posix_2escm"),(void*)f_3767},
{C_text("f_3771:posix_2escm"),(void*)f_3771},
{C_text("f_3774:posix_2escm"),(void*)f_3774},
{C_text("f_3795:posix_2escm"),(void*)f_3795},
{C_text("f_3803:posix_2escm"),(void*)f_3803},
{C_text("f_3818:posix_2escm"),(void*)f_3818},
{C_text("f_3820:posix_2escm"),(void*)f_3820},
{C_text("f_3824:posix_2escm"),(void*)f_3824},
{C_text("f_3825:posix_2escm"),(void*)f_3825},
{C_text("f_3834:posix_2escm"),(void*)f_3834},
{C_text("f_3841:posix_2escm"),(void*)f_3841},
{C_text("f_3842:posix_2escm"),(void*)f_3842},
{C_text("f_3863:posix_2escm"),(void*)f_3863},
{C_text("f_3873:posix_2escm"),(void*)f_3873},
{C_text("f_3886:posix_2escm"),(void*)f_3886},
{C_text("f_3895:posix_2escm"),(void*)f_3895},
{C_text("f_3912:posix_2escm"),(void*)f_3912},
{C_text("f_3927:posix_2escm"),(void*)f_3927},
{C_text("f_3945:posix_2escm"),(void*)f_3945},
{C_text("f_3963:posix_2escm"),(void*)f_3963},
{C_text("f_3981:posix_2escm"),(void*)f_3981},
{C_text("f_3999:posix_2escm"),(void*)f_3999},
{C_text("f_4017:posix_2escm"),(void*)f_4017},
{C_text("f_4074:posix_2escm"),(void*)f_4074},
{C_text("f_4106:posix_2escm"),(void*)f_4106},
{C_text("f_4112:posix_2escm"),(void*)f_4112},
{C_text("f_4131:posix_2escm"),(void*)f_4131},
{C_text("f_4149:posix_2escm"),(void*)f_4149},
{C_text("f_4157:posix_2escm"),(void*)f_4157},
{C_text("f_4163:posix_2escm"),(void*)f_4163},
{C_text("f_4185:posix_2escm"),(void*)f_4185},
{C_text("f_4191:posix_2escm"),(void*)f_4191},
{C_text("f_4200:posix_2escm"),(void*)f_4200},
{C_text("f_4248:posix_2escm"),(void*)f_4248},
{C_text("f_4256:posix_2escm"),(void*)f_4256},
{C_text("f_4259:posix_2escm"),(void*)f_4259},
{C_text("f_4264:posix_2escm"),(void*)f_4264},
{C_text("f_4270:posix_2escm"),(void*)f_4270},
{C_text("f_4276:posix_2escm"),(void*)f_4276},
{C_text("f_4280:posix_2escm"),(void*)f_4280},
{C_text("f_4285:posix_2escm"),(void*)f_4285},
{C_text("f_4287:posix_2escm"),(void*)f_4287},
{C_text("f_4291:posix_2escm"),(void*)f_4291},
{C_text("f_4293:posix_2escm"),(void*)f_4293},
{C_text("f_4309:posix_2escm"),(void*)f_4309},
{C_text("f_4315:posix_2escm"),(void*)f_4315},
{C_text("f_4318:posix_2escm"),(void*)f_4318},
{C_text("f_4334:posix_2escm"),(void*)f_4334},
{C_text("f_4344:posix_2escm"),(void*)f_4344},
{C_text("f_4350:posix_2escm"),(void*)f_4350},
{C_text("f_4361:posix_2escm"),(void*)f_4361},
{C_text("f_4365:posix_2escm"),(void*)f_4365},
{C_text("f_4369:posix_2escm"),(void*)f_4369},
{C_text("f_4374:posix_2escm"),(void*)f_4374},
{C_text("f_4384:posix_2escm"),(void*)f_4384},
{C_text("f_4387:posix_2escm"),(void*)f_4387},
{C_text("f_4399:posix_2escm"),(void*)f_4399},
{C_text("f_4404:posix_2escm"),(void*)f_4404},
{C_text("f_4423:posix_2escm"),(void*)f_4423},
{C_text("f_4446:posix_2escm"),(void*)f_4446},
{C_text("f_4448:posix_2escm"),(void*)f_4448},
{C_text("f_4455:posix_2escm"),(void*)f_4455},
{C_text("f_4458:posix_2escm"),(void*)f_4458},
{C_text("f_4463:posix_2escm"),(void*)f_4463},
{C_text("f_4469:posix_2escm"),(void*)f_4469},
{C_text("f_4475:posix_2escm"),(void*)f_4475},
{C_text("f_4479:posix_2escm"),(void*)f_4479},
{C_text("f_4482:posix_2escm"),(void*)f_4482},
{C_text("f_4490:posix_2escm"),(void*)f_4490},
{C_text("f_4496:posix_2escm"),(void*)f_4496},
{C_text("f_4500:posix_2escm"),(void*)f_4500},
{C_text("f_4507:posix_2escm"),(void*)f_4507},
{C_text("f_4510:posix_2escm"),(void*)f_4510},
{C_text("f_4514:posix_2escm"),(void*)f_4514},
{C_text("f_4535:posix_2escm"),(void*)f_4535},
{C_text("f_4537:posix_2escm"),(void*)f_4537},
{C_text("f_4562:posix_2escm"),(void*)f_4562},
{C_text("f_4571:posix_2escm"),(void*)f_4571},
{C_text("f_4577:posix_2escm"),(void*)f_4577},
{C_text("f_4602:posix_2escm"),(void*)f_4602},
{C_text("f_4615:posix_2escm"),(void*)f_4615},
{C_text("f_4621:posix_2escm"),(void*)f_4621},
{C_text("f_4635:posix_2escm"),(void*)f_4635},
{C_text("f_4642:posix_2escm"),(void*)f_4642},
{C_text("f_4652:posix_2escm"),(void*)f_4652},
{C_text("f_4661:posix_2escm"),(void*)f_4661},
{C_text("f_4675:posix_2escm"),(void*)f_4675},
{C_text("f_4682:posix_2escm"),(void*)f_4682},
{C_text("f_4692:posix_2escm"),(void*)f_4692},
{C_text("f_4701:posix_2escm"),(void*)f_4701},
{C_text("f_4708:posix_2escm"),(void*)f_4708},
{C_text("f_4716:posix_2escm"),(void*)f_4716},
{C_text("f_4723:posix_2escm"),(void*)f_4723},
{C_text("f_4731:posix_2escm"),(void*)f_4731},
{C_text("f_4735:posix_2escm"),(void*)f_4735},
{C_text("f_4740:posix_2escm"),(void*)f_4740},
{C_text("f_4745:posix_2escm"),(void*)f_4745},
{C_text("f_4751:posix_2escm"),(void*)f_4751},
{C_text("f_4755:posix_2escm"),(void*)f_4755},
{C_text("f_4760:posix_2escm"),(void*)f_4760},
{C_text("f_4765:posix_2escm"),(void*)f_4765},
{C_text("f_4769:posix_2escm"),(void*)f_4769},
{C_text("f_4774:posix_2escm"),(void*)f_4774},
{C_text("f_4780:posix_2escm"),(void*)f_4780},
{C_text("f_4784:posix_2escm"),(void*)f_4784},
{C_text("f_4789:posix_2escm"),(void*)f_4789},
{C_text("f_4793:posix_2escm"),(void*)f_4793},
{C_text("f_4798:posix_2escm"),(void*)f_4798},
{C_text("f_4804:posix_2escm"),(void*)f_4804},
{C_text("f_4808:posix_2escm"),(void*)f_4808},
{C_text("f_4813:posix_2escm"),(void*)f_4813},
{C_text("f_4817:posix_2escm"),(void*)f_4817},
{C_text("f_4822:posix_2escm"),(void*)f_4822},
{C_text("f_4827:posix_2escm"),(void*)f_4827},
{C_text("f_4833:posix_2escm"),(void*)f_4833},
{C_text("f_4837:posix_2escm"),(void*)f_4837},
{C_text("f_4842:posix_2escm"),(void*)f_4842},
{C_text("f_4851:posix_2escm"),(void*)f_4851},
{C_text("f_4868:posix_2escm"),(void*)f_4868},
{C_text("f_4871:posix_2escm"),(void*)f_4871},
{C_text("f_4881:posix_2escm"),(void*)f_4881},
{C_text("f_4887:posix_2escm"),(void*)f_4887},
{C_text("f_4896:posix_2escm"),(void*)f_4896},
{C_text("f_4918:posix_2escm"),(void*)f_4918},
{C_text("f_4928:posix_2escm"),(void*)f_4928},
{C_text("f_4931:posix_2escm"),(void*)f_4931},
{C_text("f_4934:posix_2escm"),(void*)f_4934},
{C_text("f_4947:posix_2escm"),(void*)f_4947},
{C_text("f_4959:posix_2escm"),(void*)f_4959},
{C_text("f_4969:posix_2escm"),(void*)f_4969},
{C_text("f_4972:posix_2escm"),(void*)f_4972},
{C_text("f_4981:posix_2escm"),(void*)f_4981},
{C_text("f_4991:posix_2escm"),(void*)f_4991},
{C_text("f_5023:posix_2escm"),(void*)f_5023},
{C_text("f_5034:posix_2escm"),(void*)f_5034},
{C_text("f_5041:posix_2escm"),(void*)f_5041},
{C_text("f_5046:posix_2escm"),(void*)f_5046},
{C_text("f_5054:posix_2escm"),(void*)f_5054},
{C_text("f_5093:posix_2escm"),(void*)f_5093},
{C_text("f_5134:posix_2escm"),(void*)f_5134},
{C_text("f_5138:posix_2escm"),(void*)f_5138},
{C_text("f_5147:posix_2escm"),(void*)f_5147},
{C_text("f_5176:posix_2escm"),(void*)f_5176},
{C_text("f_5183:posix_2escm"),(void*)f_5183},
{C_text("f_5196:posix_2escm"),(void*)f_5196},
{C_text("f_5239:posix_2escm"),(void*)f_5239},
{C_text("f_5246:posix_2escm"),(void*)f_5246},
{C_text("f_5249:posix_2escm"),(void*)f_5249},
{C_text("f_5259:posix_2escm"),(void*)f_5259},
{C_text("f_5270:posix_2escm"),(void*)f_5270},
{C_text("f_5291:posix_2escm"),(void*)f_5291},
{C_text("f_5323:posix_2escm"),(void*)f_5323},
{C_text("f_5338:posix_2escm"),(void*)f_5338},
{C_text("f_5365:posix_2escm"),(void*)f_5365},
{C_text("f_5379:posix_2escm"),(void*)f_5379},
{C_text("f_5418:posix_2escm"),(void*)f_5418},
{C_text("f_5448:posix_2escm"),(void*)f_5448},
{C_text("f_5465:posix_2escm"),(void*)f_5465},
{C_text("f_5504:posix_2escm"),(void*)f_5504},
{C_text("f_5508:posix_2escm"),(void*)f_5508},
{C_text("f_5524:posix_2escm"),(void*)f_5524},
{C_text("f_5532:posix_2escm"),(void*)f_5532},
{C_text("f_5549:posix_2escm"),(void*)f_5549},
{C_text("f_5564:posix_2escm"),(void*)f_5564},
{C_text("f_5618:posix_2escm"),(void*)f_5618},
{C_text("f_5635:posix_2escm"),(void*)f_5635},
{C_text("f_5639:posix_2escm"),(void*)f_5639},
{C_text("f_5643:posix_2escm"),(void*)f_5643},
{C_text("f_5659:posix_2escm"),(void*)f_5659},
{C_text("f_5667:posix_2escm"),(void*)f_5667},
{C_text("f_5671:posix_2escm"),(void*)f_5671},
{C_text("f_5675:posix_2escm"),(void*)f_5675},
{C_text("f_5679:posix_2escm"),(void*)f_5679},
{C_text("f_5699:posix_2escm"),(void*)f_5699},
{C_text("f_5707:posix_2escm"),(void*)f_5707},
{C_text("f_5732:posix_2escm"),(void*)f_5732},
{C_text("f_5740:posix_2escm"),(void*)f_5740},
{C_text("f_5742:posix_2escm"),(void*)f_5742},
{C_text("f_5747:posix_2escm"),(void*)f_5747},
{C_text("f_5756:posix_2escm"),(void*)f_5756},
{C_text("f_5783:posix_2escm"),(void*)f_5783},
{C_text("f_5786:posix_2escm"),(void*)f_5786},
{C_text("f_5804:posix_2escm"),(void*)f_5804},
{C_text("f_5806:posix_2escm"),(void*)f_5806},
{C_text("f_5884:posix_2escm"),(void*)f_5884},
{C_text("f_5974:posix_2escm"),(void*)f_5974},
{C_text("f_5988:posix_2escm"),(void*)f_5988},
{C_text("f_5996:posix_2escm"),(void*)f_5996},
{C_text("f_6002:posix_2escm"),(void*)f_6002},
{C_text("f_6008:posix_2escm"),(void*)f_6008},
{C_text("f_6014:posix_2escm"),(void*)f_6014},
{C_text("f_6020:posix_2escm"),(void*)f_6020},
{C_text("f_6026:posix_2escm"),(void*)f_6026},
{C_text("f_6032:posix_2escm"),(void*)f_6032},
{C_text("f_6038:posix_2escm"),(void*)f_6038},
{C_text("f_6044:posix_2escm"),(void*)f_6044},
{C_text("f_6050:posix_2escm"),(void*)f_6050},
{C_text("f_6056:posix_2escm"),(void*)f_6056},
{C_text("f_6062:posix_2escm"),(void*)f_6062},
{C_text("f_6068:posix_2escm"),(void*)f_6068},
{C_text("f_6074:posix_2escm"),(void*)f_6074},
{C_text("f_6080:posix_2escm"),(void*)f_6080},
{C_text("f_6086:posix_2escm"),(void*)f_6086},
{C_text("f_6092:posix_2escm"),(void*)f_6092},
{C_text("f_6098:posix_2escm"),(void*)f_6098},
{C_text("f_6104:posix_2escm"),(void*)f_6104},
{C_text("f_6110:posix_2escm"),(void*)f_6110},
{C_text("f_6116:posix_2escm"),(void*)f_6116},
{C_text("f_6122:posix_2escm"),(void*)f_6122},
{C_text("f_6128:posix_2escm"),(void*)f_6128},
{C_text("f_6134:posix_2escm"),(void*)f_6134},
{C_text("f_6140:posix_2escm"),(void*)f_6140},
{C_text("f_6146:posix_2escm"),(void*)f_6146},
{C_text("f_6152:posix_2escm"),(void*)f_6152},
{C_text("f_6158:posix_2escm"),(void*)f_6158},
{C_text("f_6164:posix_2escm"),(void*)f_6164},
{C_text("f_6170:posix_2escm"),(void*)f_6170},
{C_text("f_6176:posix_2escm"),(void*)f_6176},
{C_text("f_6194:posix_2escm"),(void*)f_6194},
{C_text("f_6239:posix_2escm"),(void*)f_6239},
{C_text("f_6248:posix_2escm"),(void*)f_6248},
{C_text("f_6273:posix_2escm"),(void*)f_6273},
{C_text("f_6279:posix_2escm"),(void*)f_6279},
{C_text("f_6283:posix_2escm"),(void*)f_6283},
{C_text("f_6286:posix_2escm"),(void*)f_6286},
{C_text("f_6295:posix_2escm"),(void*)f_6295},
{C_text("f_6316:posix_2escm"),(void*)f_6316},
{C_text("f_6320:posix_2escm"),(void*)f_6320},
{C_text("f_6322:posix_2escm"),(void*)f_6322},
{C_text("f_6326:posix_2escm"),(void*)f_6326},
{C_text("f_6328:posix_2escm"),(void*)f_6328},
{C_text("f_6332:posix_2escm"),(void*)f_6332},
{C_text("toplevel:posix_2escm"),(void*)C_posix_toplevel},
{C_text("va6913:posix_2escm"),(void*)va6913},
{C_text("va6921:posix_2escm"),(void*)va6921},
{C_text("va6929:posix_2escm"),(void*)va6929},
{C_text("va6931:posix_2escm"),(void*)va6931},
{C_text("va6933:posix_2escm"),(void*)va6933},
{C_text("va6935:posix_2escm"),(void*)va6935},
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
o|hiding unexported module binding: chicken.posix#duplicate-fileno 
o|hiding unexported module binding: chicken.posix#quote-arg-string 
o|hiding unexported module binding: chicken.posix#c-string->allocated-pointer 
o|hiding unexported module binding: chicken.posix#shell-command 
o|hiding unexported module binding: chicken.posix#shell-command-arguments 
o|hiding unexported module binding: chicken.posix#process-impl 
o|hiding unexported module binding: chicken.posix#process-wait-impl 
o|hiding unexported module binding: chicken.posix#chown 
S|applied compiler syntax:
S|  scheme#for-each		3
S|  scheme#map		3
o|eliminated procedure checks: 75 
o|specializations:
o|  4 (##sys#foreign-fixnum-argument fixnum)
o|  1 (scheme#string-ref string fixnum)
o|  2 (scheme#string-length string)
o|  1 (##sys#check-output-port * * *)
o|  1 (##sys#check-input-port * * *)
o|  1 (##sys#call-with-values (procedure () *) *)
o|  1 (chicken.base#add1 fixnum)
o|  1 (##sys#length list)
o|  5 (scheme#cdr pair)
o|  1 (scheme#zero? *)
o|  1 (##sys#check-open-port * *)
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  6 (scheme#car pair)
o|  5 (##sys#check-list (or pair list) *)
o|  2 (scheme#char=? char char)
o|  1 (scheme#zero? integer)
(o e)|safe calls: 547 
(o e)|assignments to immediate values: 116 
o|dropping redundant toplevel assignment: chicken.file.posix#file-stat 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-permissions! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-modification-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-access-time 
o|dropping redundant toplevel assignment: chicken.file.posix#file-change-time 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-times! 
o|dropping redundant toplevel assignment: chicken.file.posix#file-size 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-owner! 
o|dropping redundant toplevel assignment: chicken.file.posix#set-file-group! 
o|dropping redundant toplevel assignment: chicken.process-context.posix#user-information 
o|safe globals: (chicken.file.posix#set-file-group! chicken.file.posix#set-file-owner! chicken.file.posix#file-size chicken.file.posix#set-file-times! chicken.file.posix#file-change-time chicken.file.posix#file-access-time chicken.file.posix#file-modification-time chicken.file.posix#set-file-permissions! chicken.file.posix#file-stat chicken.posix#stat ##sys#posix-error chicken.posix#posix-error chicken.process-context.posix#user-information chicken.process-context.posix#process-group-id chicken.process-context.posix#create-session chicken.process-context.posix#current-effective-user-name chicken.process-context.posix#current-user-name chicken.process-context.posix#parent-process-id chicken.process-context.posix#current-process-id chicken.process-context.posix#current-user-id chicken.process-context.posix#current-group-id chicken.process-context.posix#current-effective-user-id chicken.process-context.posix#current-effective-group-id chicken.process-context.posix#set-root-directory! chicken.process-context.posix#change-directory* chicken.process.signal#signals-list chicken.process.signal#signal/xfsz chicken.process.signal#signal/xcpu chicken.process.signal#signal/winch chicken.process.signal#signal/vtalrm chicken.process.signal#signal/usr2 chicken.process.signal#signal/usr1 chicken.process.signal#signal/urg chicken.process.signal#signal/tstp chicken.process.signal#signal/trap chicken.process.signal#signal/term chicken.process.signal#signal/stop chicken.process.signal#signal/segv chicken.process.signal#signal/quit chicken.process.signal#signal/prof chicken.process.signal#signal/pipe chicken.process.signal#signal/kill chicken.process.signal#signal/io chicken.process.signal#signal/int chicken.process.signal#signal/ill chicken.process.signal#signal/hup chicken.process.signal#signal/fpe chicken.process.signal#signal/cont chicken.process.signal#signal/chld chicken.process.signal#signal/bus chicken.process.signal#signal/break chicken.process.signal#signal/alrm chicken.process.signal#signal/abrt chicken.process.signal#signal-unmask! chicken.process.signal#signal-masked? chicken.process.signal#signal-mask! chicken.process.signal#signal-mask chicken.process.signal#signal-default chicken.process.signal#signal-ignore chicken.process.signal#make-signal-handler chicken.process.signal#signal-handler chicken.process.signal#set-signal-mask! chicken.process.signal#set-signal-handler! chicken.process.signal#set-alarm! chicken.process#spawn/detach chicken.process#spawn/nowaito chicken.process#spawn/nowait chicken.process#spawn/wait chicken.process#spawn/overlay chicken.process#pipe/buf chicken.process#process-id chicken.process#process-error-port chicken.process#process-output-port chicken.process#process-input-port chicken.process#process-returned-normally? chicken.process#process-exit-status chicken.process#process? chicken.process#process-sleep chicken.process#process* chicken.process#process chicken.process#with-output-to-pipe chicken.process#with-input-from-pipe chicken.process#open-output-pipe chicken.process#open-input-pipe chicken.process#create-pipe chicken.process#close-output-pipe chicken.process#close-input-pipe chicken.process#call-with-output-pipe chicken.process#call-with-input-pipe chicken.process#process-wait chicken.process#process-spawn chicken.process#process-signal chicken.process#process-run chicken.process#process-fork chicken.process#process-execute chicken.process#qs chicken.process#system* chicken.process#system chicken.time.posix#local-timezone-abbreviation chicken.time.posix#time->string chicken.time.posix#string->time chicken.time.posix#local-time->seconds chicken.time.posix#seconds->string chicken.time.posix#seconds->local-time chicken.time.posix#utc-time->seconds chicken.time.posix#seconds->utc-time chicken.file.posix#set-file-position! chicken.file.posix#seek/set chicken.file.posix#seek/end chicken.file.posix#seek/cur chicken.file.posix#port->fileno chicken.file.posix#perm/ixusr chicken.file.posix#perm/ixoth chicken.file.posix#perm/ixgrp chicken.file.posix#perm/iwusr chicken.file.posix#perm/iwoth chicken.file.posix#perm/iwgrp chicken.file.posix#perm/isvtx chicken.file.posix#perm/isuid chicken.file.posix#perm/isgid chicken.file.posix#perm/irwxu chicken.file.posix#perm/irwxo chicken.file.posix#perm/irwxg chicken.file.posix#perm/irusr chicken.file.posix#perm/iroth chicken.file.posix#perm/irgrp chicken.file.posix#open/wronly chicken.file.posix#open/write chicken.file.posix#open/trunc chicken.file.posix#open/text chicken.file.posix#open/sync chicken.file.posix#open/read chicken.file.posix#open/rdwr chicken.file.posix#open/rdonly chicken.file.posix#open/nonblock chicken.file.posix#open/noinherit chicken.file.posix#open/noctty chicken.file.posix#open/fsync chicken.file.posix#open/excl chicken.file.posix#open/creat chicken.file.posix#open/binary chicken.file.posix#open/append chicken.file.posix#open-output-file* chicken.file.posix#open-input-file* chicken.file.posix#fileno/stdout chicken.file.posix#fileno/stdin chicken.file.posix#fileno/stderr chicken.file.posix#symbolic-link? chicken.file.posix#socket? chicken.file.posix#regular-file? chicken.file.posix#fifo? chicken.file.posix#directory? chicken.file.posix#character-device? chicken.file.posix#block-device? chicken.file.posix#file-type chicken.file.posix#file-write chicken.file.posix#file-unlock chicken.file.posix#file-truncate chicken.file.posix#file-select chicken.file.posix#file-read chicken.file.posix#file-position chicken.file.posix#file-permissions chicken.file.posix#file-owner chicken.file.posix#file-open chicken.file.posix#file-mkstemp chicken.file.posix#file-lock/blocking chicken.file.posix#file-lock chicken.file.posix#file-link chicken.file.posix#file-group chicken.file.posix#file-creation-mode chicken.file.posix#file-control chicken.file.posix#file-close chicken.file.posix#fcntl/setfl chicken.file.posix#fcntl/setfd chicken.file.posix#fcntl/getfl chicken.file.posix#fcntl/getfd chicken.file.posix#fcntl/dupfd chicken.file.posix#duplicate-fileno chicken.file.posix#read-symbolic-link chicken.file.posix#create-symbolic-link chicken.file.posix#create-fifo c1899) 
o|inlining procedure: k2611 
o|inlining procedure: k2611 
o|inlining procedure: k2630 
o|inlining procedure: k2630 
o|inlining procedure: k2657 
o|inlining procedure: k2657 
o|substituted constant variable: a2667 
o|inlining procedure: k2698 
o|inlining procedure: k2698 
o|contracted procedure: "(posix-common.scm:201) strerror681" 
o|inlining procedure: k2861 
o|inlining procedure: k2861 
o|inlining procedure: k2876 
o|inlining procedure: k2876 
o|inlining procedure: k2895 
o|inlining procedure: k2895 
o|inlining procedure: k2928 
o|inlining procedure: k2928 
o|inlining procedure: k2940 
o|inlining procedure: k2940 
o|inlining procedure: k3007 
o|inlining procedure: k3007 
o|contracted procedure: "(posix-common.scm:301) g753754" 
o|consed rest parameter at call site: "(posix-common.scm:314) chicken.posix#chown" 1 
o|consed rest parameter at call site: "(posix-common.scm:318) chicken.posix#chown" 1 
o|inlining procedure: k3094 
o|inlining procedure: k3106 
o|inlining procedure: k3106 
o|inlining procedure: k3118 
o|inlining procedure: k3118 
o|inlining procedure: k3130 
o|inlining procedure: k3130 
o|inlining procedure: k3094 
o|inlining procedure: k3251 
o|inlining procedure: k3251 
o|inlining procedure: k3266 
o|inlining procedure: k3266 
o|inlining procedure: k3279 
o|inlining procedure: k3279 
o|inlining procedure: k3329 
o|inlining procedure: k3338 
o|inlining procedure: k3338 
o|substituted constant variable: a3351 
o|inlining procedure: k3329 
o|inlining procedure: k3358 
o|inlining procedure: k3358 
o|inlining procedure: k3374 
o|inlining procedure: k3374 
o|substituted constant variable: a3481 
o|inlining procedure: k3482 
o|inlining procedure: k3482 
o|inlining procedure: k3501 
o|inlining procedure: k3501 
o|inlining procedure: k3531 
o|inlining procedure: k3531 
o|inlining procedure: k3558 
o|inlining procedure: k3558 
o|inlining procedure: k3571 
o|propagated global variable: r35726393 chicken.process-context.posix#change-directory* 
o|inlining procedure: k3571 
o|inlining procedure: k3591 
o|inlining procedure: k3591 
o|inlining procedure: k3669 
o|inlining procedure: k3669 
o|contracted procedure: "(posix-common.scm:603) ctime957" 
o|inlining procedure: k3705 
o|inlining procedure: k3705 
o|inlining procedure: k3749 
o|contracted procedure: "(posix-common.scm:626) strftime982" 
o|inlining procedure: k3735 
o|inlining procedure: k3735 
o|inlining procedure: k3749 
o|contracted procedure: "(posix-common.scm:628) asctime981" 
o|inlining procedure: k3722 
o|inlining procedure: k3722 
o|inlining procedure: k3847 
o|inlining procedure: k3847 
o|inlining procedure: k3865 
o|inlining procedure: k3865 
o|removed side-effect free assignment to unused variable: chicken.posix#process 
o|removed side-effect free assignment to unused variable: chicken.posix#process-id-set! 
o|removed side-effect free assignment to unused variable: chicken.posix#process-input-port-set! 
o|removed side-effect free assignment to unused variable: chicken.posix#process-output-port-set! 
o|removed side-effect free assignment to unused variable: chicken.posix#process-error-port-set! 
o|inlining procedure: k4126 
o|inlining procedure: k4126 
o|contracted procedure: "(posix-common.scm:724) chicken.posix#process-wait-impl" 
o|inlining procedure: k5964 
o|inlining procedure: k5964 
o|inlining procedure: k4165 
o|inlining procedure: k4165 
o|contracted procedure: "(posix-common.scm:739) chicken.posix#process-exit-status-set!" 
o|contracted procedure: "(posix-common.scm:738) chicken.posix#process-returned-normally?-set!" 
o|inlining procedure: "(posix-common.scm:737) chicken.posix#process?" 
o|contracted procedure: "(posix-common.scm:736) chicken.posix#drop-child" 
o|inlining procedure: k4076 
o|inlining procedure: k4076 
o|inlining procedure: k4210 
o|inlining procedure: k4210 
o|inlining procedure: "(posix-common.scm:732) chicken.posix#process?" 
o|contracted procedure: "(posix-common.scm:722) chicken.posix#get-pid" 
o|inlining procedure: k4031 
o|inlining procedure: k4031 
o|inlining procedure: "(posix-common.scm:687) chicken.posix#process?" 
o|inlining procedure: "(posix-common.scm:718) chicken.posix#process?" 
o|inlining procedure: k4295 
o|inlining procedure: k4295 
o|contracted procedure: "(posix-common.scm:763) chicken.posix#c-string->allocated-pointer" 
o|merged explicitly consed rest parameter: args12011222 
o|consed rest parameter at call site: tmp22445 1 
o|inlining procedure: k4376 
o|inlining procedure: k4376 
o|inlining procedure: k4425 
o|inlining procedure: k4425 
o|inlining procedure: k4480 
o|inlining procedure: k4480 
o|inlining procedure: k4539 
o|contracted procedure: "(posix-common.scm:804) g12871296" 
o|inlining procedure: k4539 
o|inlining procedure: k4586 
o|inlining procedure: k4586 
o|inlining procedure: k4604 
o|inlining procedure: k4604 
o|inlining procedure: k4617 
o|inlining procedure: k4617 
o|inlining procedure: k4633 
o|inlining procedure: k4633 
o|inlining procedure: "(posix-common.scm:833) badmode1310" 
o|substituted constant variable: a4657 
o|substituted constant variable: a4659 
o|inlining procedure: k4673 
o|inlining procedure: k4673 
o|inlining procedure: "(posix-common.scm:844) badmode1310" 
o|substituted constant variable: a4697 
o|substituted constant variable: a4699 
o|substituted constant variable: a4704 
o|substituted constant variable: a4705 
o|inlining procedure: k4706 
o|inlining procedure: k4706 
o|substituted constant variable: a4719 
o|substituted constant variable: a4720 
o|inlining procedure: k4721 
o|inlining procedure: k4721 
o|inlining procedure: k4869 
o|inlining procedure: k4869 
o|inlining procedure: k4898 
o|inlining procedure: k4898 
o|inlining procedure: k4932 
o|inlining procedure: k4932 
o|inlining procedure: k4979 
o|inlining procedure: k4979 
o|inlining procedure: k5005 
o|inlining procedure: k5005 
o|inlining procedure: k5063 
o|inlining procedure: k5063 
o|inlining procedure: k5095 
o|inlining procedure: k5095 
o|inlining procedure: k5122 
o|inlining procedure: k5122 
o|inlining procedure: k5139 
o|inlining procedure: k5139 
o|inlining procedure: k5149 
o|inlining procedure: k5149 
o|inlining procedure: k5181 
o|inlining procedure: k5181 
o|inlining procedure: k5247 
o|inlining procedure: k5247 
o|inlining procedure: k5325 
o|inlining procedure: k5325 
o|contracted procedure: "(posixwin.scm:743) needs-quoting?1610" 
o|inlining procedure: k5293 
o|inlining procedure: k5293 
o|substituted constant variable: a5305 
o|inlining procedure: k5309 
o|inlining procedure: k5309 
o|inlining procedure: k5370 
o|inlining procedure: k5370 
o|inlining procedure: k5453 
o|inlining procedure: k5453 
o|contracted procedure: "(posixwin.scm:783) chicken.posix#register-pid" 
o|inlining procedure: k5509 
o|inlining procedure: k5509 
o|inlining procedure: k5537 
o|inlining procedure: k5537 
o|inlining procedure: "(posixwin.scm:806) chicken.posix#shell-command-arguments" 
o|removed unused formal parameters: (env1730 enc1735) 
o|substituted constant variable: g176417651772 
o|substituted constant variable: g176417651772 
o|substituted constant variable: g176417651772 
o|substituted constant variable: g176617671773 
o|substituted constant variable: g176617671773 
o|substituted constant variable: g176617671773 
o|substituted constant variable: g176817691774 
o|substituted constant variable: g176817691774 
o|substituted constant variable: g176817691774 
o|substituted constant variable: g177017711775 
o|substituted constant variable: g177017711775 
o|substituted constant variable: g177017711775 
o|inlining procedure: k5626 
o|inlining procedure: k5641 
o|inlining procedure: k5641 
o|inlining procedure: k5626 
o|contracted procedure: "(posixwin.scm:843) c-process1696" 
o|inlining procedure: k5693 
o|inlining procedure: k5693 
o|inlining procedure: k5697 
o|inlining procedure: k5697 
o|inlining procedure: k5709 
o|inlining procedure: k5709 
o|inlining procedure: k5758 
o|inlining procedure: k5758 
o|removed unused parameter to known procedure: env1730 "(posixwin.scm:875) chicken.posix#process-impl" 
o|removed unused parameter to known procedure: enc1735 "(posixwin.scm:875) chicken.posix#process-impl" 
o|inlining procedure: "(posixwin.scm:872) chicken.posix#shell-command-arguments" 
o|inlining procedure: k5976 
o|inlining procedure: k5976 
o|merged explicitly consed rest parameter: _18941898 
o|inlining procedure: k6260 
o|inlining procedure: k6260 
o|inlining procedure: k6284 
o|inlining procedure: k6284 
o|inlining procedure: k6296 
o|inlining procedure: k6296 
o|inlining procedure: k6306 
o|inlining procedure: k6306 
o|replaced variables: 855 
o|removed binding forms: 634 
o|substituted constant variable: r28626342 
o|inlining procedure: "(posix-common.scm:314) chicken.posix#chown" 
o|inlining procedure: "(posix-common.scm:318) chicken.posix#chown" 
o|substituted constant variable: r31076354 
o|substituted constant variable: r31196356 
o|substituted constant variable: r31316358 
o|substituted constant variable: r30956360 
o|substituted constant variable: r32676364 
o|inlining procedure: k3329 
o|substituted constant variable: r33396369 
o|inlining procedure: k3329 
o|inlining procedure: k3329 
o|substituted constant variable: r33756375 
o|substituted constant variable: r33756375 
o|substituted constant variable: r33756377 
o|substituted constant variable: r33756377 
o|propagated global variable: g9109116394 chicken.process-context.posix#change-directory* 
o|substituted constant variable: r37366413 
o|substituted constant variable: r37366413 
o|substituted constant variable: r37236420 
o|substituted constant variable: r37236420 
o|substituted constant variable: r40776438 
o|substituted constant variable: r45876479 
o|removed side-effect free assignment to unused variable: badmode1310 
o|substituted constant variable: r46186482 
o|substituted constant variable: r46186482 
o|substituted constant variable: r46186484 
o|substituted constant variable: r46186484 
o|inlining procedure: k4633 
o|inlining procedure: k4673 
o|substituted constant variable: r51406542 
o|substituted constant variable: r51406542 
o|substituted constant variable: r52946562 
o|removed side-effect free assignment to unused variable: chicken.posix#shell-command-arguments 
o|removed unused formal parameters: (enc1811) 
o|contracted procedure: "(posixwin.scm:875) chicken.posix#process-impl" 
o|substituted constant variable: r56426582 
o|substituted constant variable: r56426582 
o|substituted constant variable: c-pointer16991715 
o|substituted constant variable: c-pointer16991715 
o|substituted constant variable: r56946585 
o|substituted constant variable: r56946585 
o|substituted constant variable: r56946587 
o|substituted constant variable: r56946587 
o|removed unused parameter to known procedure: enc1811 "(posixwin.scm:878) %process1804" 
o|removed unused parameter to known procedure: enc1811 "(posixwin.scm:881) %process1804" 
o|removed unused formal parameters: (_18941898) 
o|substituted constant variable: r62976613 
o|replaced variables: 104 
o|removed binding forms: 727 
o|removed conditional forms: 1 
o|inlining procedure: k3809 
o|inlining procedure: k3809 
o|inlining procedure: k3844 
o|inlining procedure: "(posix-common.scm:721) chicken.posix#process-exit-status" 
o|inlining procedure: "(posix-common.scm:720) chicken.posix#process-returned-normally?" 
o|inlining procedure: "(posix-common.scm:719) chicken.posix#process-id" 
o|inlining procedure: k4189 
o|inlining procedure: "(posix-common.scm:687) chicken.posix#process-id" 
o|inlining procedure: "(posix-common.scm:718) chicken.posix#process-exit-status" 
o|inlining procedure: k4385 
o|inlining procedure: "(posix-common.scm:691) chicken.posix#make-process" 
o|inlining procedure: "(posixwin.scm:848) chicken.posix#make-process" 
o|inlining procedure: "(posixwin.scm:848) chicken.posix#make-process" 
o|substituted constant variable: stdoutf1731 
o|substituted constant variable: stdinf1732 
o|contracted procedure: k5566 
o|substituted constant variable: stdoutf1731 
o|substituted constant variable: stdinf1732 
o|inlining procedure: k5829 
o|inlining procedure: k5907 
o|removed side-effect free assignment to unused variable: chicken.posix#chown 
o|replaced variables: 8 
o|removed binding forms: 142 
o|removed conditional forms: 4 
o|contracted procedure: k3004 
o|substituted constant variable: r33306628 
o|substituted constant variable: r33306630 
o|substituted constant variable: r33306632 
o|substituted constant variable: r38106696 
o|substituted constant variable: r38456698 
o|removed side-effect free assignment to unused variable: chicken.posix#make-process 
o|contracted procedure: k4186 
o|contracted procedure: k4310 
o|substituted constant variable: returned-normally?10746753 
o|substituted constant variable: input-port10756754 
o|substituted constant variable: output-port10766755 
o|substituted constant variable: error-port10776756 
o|substituted constant variable: exit-status10786757 
o|contracted procedure: k5623 
o|substituted constant variable: r5567 
o|substituted constant variable: returned-normally?10746762 
o|substituted constant variable: exit-status10786766 
o|substituted constant variable: returned-normally?10746769 
o|substituted constant variable: error-port10776772 
o|substituted constant variable: exit-status10786773 
o|contracted procedure: k5685 
o|contracted procedure: k5689 
o|inlining procedure: k6257 
o|inlining procedure: k6257 
o|simplifications: ((let . 1)) 
o|replaced variables: 17 
o|removed binding forms: 19 
o|removed conditional forms: 1 
o|substituted constant variable: r5686 
o|substituted constant variable: r5690 
o|folded constant expression: (scheme#+ (quote 0) (quote 0) (quote 0)) 
o|substituted constant variable: r5686 
o|substituted constant variable: r5690 
o|folded constant expression: (scheme#+ (quote 0) (quote 0) (quote 4)) 
o|substituted constant variable: r62586809 
o|replaced variables: 1 
o|removed binding forms: 35 
o|removed binding forms: 4 
o|simplifications: ((let . 23) (if . 71) (##core#call . 409)) 
o|  call simplifications:
o|    scheme#<
o|    ##sys#foreign-string-argument
o|    ##sys#foreign-pointer-argument	4
o|    ##sys#make-structure	3
o|    scheme#char-whitespace?
o|    scheme#*
o|    chicken.fixnum#fx>=	2
o|    scheme#string-ref	3
o|    scheme#string-set!
o|    chicken.bitwise#bitwise-ior	2
o|    chicken.fixnum#fxior	2
o|    scheme#list	5
o|    scheme#call-with-values	4
o|    ##sys#check-pair
o|    ##sys#check-list	4
o|    ##sys#apply	2
o|    chicken.fixnum#fx+	6
o|    ##sys#call-with-values	2
o|    scheme#assq
o|    scheme#caar
o|    scheme#values	9
o|    ##sys#check-structure	13
o|    ##sys#block-ref	11
o|    ##sys#structure?	5
o|    scheme#vector-set!	5
o|    ##sys#foreign-block-argument	2
o|    scheme#=
o|    ##sys#foreign-ranged-integer-argument
o|    scheme#string-length	3
o|    chicken.fixnum#fx-	7
o|    ##sys#check-vector
o|    ##sys#size	3
o|    ##sys#null-pointer?	2
o|    scheme#not	3
o|    ##sys#setislot
o|    chicken.fixnum#fx=	17
o|    scheme#cdr	25
o|    ##sys#check-fixnum	27
o|    scheme#vector
o|    chicken.base#fixnum?	6
o|    scheme#string?	3
o|    ##sys#foreign-fixnum-argument	2
o|    scheme#null?	63
o|    scheme#car	39
o|    scheme#string->list
o|    scheme#pair?	11
o|    scheme#cons	10
o|    ##sys#setslot	4
o|    ##sys#slot	23
o|    scheme#apply	11
o|    scheme#char=?
o|    scheme#string	3
o|    scheme#eq?	26
o|    ##sys#check-string	11
o|    chicken.fixnum#fx<	11
o|contracted procedure: k2608 
o|contracted procedure: k2614 
o|contracted procedure: k2633 
o|contracted procedure: k2732 
o|contracted procedure: k2646 
o|contracted procedure: k2729 
o|contracted procedure: k2649 
o|contracted procedure: k2652 
o|contracted procedure: k2660 
o|contracted procedure: k2684 
o|contracted procedure: k2692 
o|contracted procedure: k2701 
o|contracted procedure: k2704 
o|contracted procedure: k2707 
o|contracted procedure: k2715 
o|contracted procedure: k2723 
o|contracted procedure: k2735 
o|contracted procedure: k2835 
o|contracted procedure: k2864 
o|contracted procedure: k2873 
o|contracted procedure: k2889 
o|contracted procedure: k2913 
o|contracted procedure: k2904 
o|contracted procedure: k2922 
o|contracted procedure: k2931 
o|contracted procedure: k2937 
o|contracted procedure: k2953 
o|contracted procedure: k3034 
o|contracted procedure: k2987 
o|contracted procedure: k3028 
o|contracted procedure: k2990 
o|contracted procedure: k3022 
o|contracted procedure: k2993 
o|contracted procedure: k3010 
o|contracted procedure: k3040 
o|contracted procedure: k3160 
o|contracted procedure: k3082 
o|contracted procedure: k3154 
o|contracted procedure: k3085 
o|contracted procedure: k3148 
o|contracted procedure: k3088 
o|contracted procedure: k3142 
o|contracted procedure: k3091 
o|contracted procedure: k3103 
o|contracted procedure: k3109 
o|contracted procedure: k3115 
o|contracted procedure: k3121 
o|contracted procedure: k3127 
o|contracted procedure: k3133 
o|contracted procedure: k3139 
o|contracted procedure: k3288 
o|contracted procedure: k3242 
o|contracted procedure: k3245 
o|contracted procedure: k3248 
o|contracted procedure: k3276 
o|contracted procedure: k3263 
o|contracted procedure: k3272 
o|contracted procedure: k3282 
o|contracted procedure: k3335 
o|contracted procedure: k3341 
o|contracted procedure: k3361 
o|contracted procedure: k3370 
o|contracted procedure: k3421 
o|contracted procedure: k3380 
o|contracted procedure: k3415 
o|contracted procedure: k3383 
o|contracted procedure: k3409 
o|contracted procedure: k3386 
o|contracted procedure: k3403 
o|contracted procedure: k3389 
o|contracted procedure: k3392 
o|contracted procedure: k3471 
o|contracted procedure: k3430 
o|contracted procedure: k3465 
o|contracted procedure: k3433 
o|contracted procedure: k3459 
o|contracted procedure: k3436 
o|contracted procedure: k3453 
o|contracted procedure: k3439 
o|contracted procedure: k3442 
o|contracted procedure: k3519 
o|contracted procedure: k3485 
o|contracted procedure: k3498 
o|contracted procedure: k3504 
o|contracted procedure: k3525 
o|contracted procedure: k3534 
o|contracted procedure: k3540 
o|contracted procedure: k3543 
o|contracted procedure: k3546 
o|contracted procedure: k3555 
o|contracted procedure: k3561 
o|contracted procedure: k3577 
o|contracted procedure: k3588 
o|contracted procedure: k3601 
o|contracted procedure: k3594 
o|contracted procedure: k3616 
o|inlining procedure: k3607 
o|contracted procedure: k3637 
o|inlining procedure: k3628 
o|contracted procedure: k3680 
o|contracted procedure: k3676 
o|contracted procedure: k3654 
o|contracted procedure: k3686 
o|contracted procedure: k3708 
o|contracted procedure: k3796 
o|contracted procedure: k3743 
o|contracted procedure: k3752 
o|contracted procedure: k3735 
o|contracted procedure: k3786 
o|contracted procedure: k3782 
o|contracted procedure: k3722 
o|contracted procedure: k3805 
o|contracted procedure: k3827 
o|contracted procedure: k3856 
o|contracted procedure: k3844 
o|contracted procedure: k3868 
o|contracted procedure: k3878 
o|contracted procedure: k3882 
o|contracted procedure: k3888 
o|contracted procedure: k3897 
o|contracted procedure: k3929 
o|contracted procedure: k3947 
o|contracted procedure: k3965 
o|contracted procedure: k3983 
o|contracted procedure: k4001 
o|contracted procedure: k4019 
o|contracted procedure: k4108 
o|contracted procedure: k4241 
o|contracted procedure: k4114 
o|contracted procedure: k4235 
o|contracted procedure: k4117 
o|contracted procedure: k4229 
o|contracted procedure: k4120 
o|contracted procedure: k4223 
o|contracted procedure: k4123 
o|contracted procedure: k39296715 
o|contracted procedure: k4136 
o|contracted procedure: k39476710 
o|contracted procedure: k4140 
o|contracted procedure: k40196705 
o|contracted procedure: k4144 
o|contracted procedure: k4150 
o|contracted procedure: k4168 
o|contracted procedure: k4177 
o|contracted procedure: k4195 
o|contracted procedure: k4010 
o|contracted procedure: k3938 
o|contracted procedure: k4079 
o|contracted procedure: k4095 
o|contracted procedure: k4085 
o|contracted procedure: k4204 
o|contracted procedure: k4207 
o|contracted procedure: k4214 
o|contracted procedure: k4046 
o|contracted procedure: k4028 
o|contracted procedure: k4034 
o|contracted procedure: k4040 
o|contracted procedure: k39296723 
o|contracted procedure: k4217 
o|contracted procedure: k40196728 
o|contracted procedure: k4250 
o|contracted procedure: k4298 
o|contracted procedure: k4301 
o|contracted procedure: k4338 
o|contracted procedure: k4304 
o|contracted procedure: k4325 
o|contracted procedure: k4379 
o|contracted procedure: k4392 
o|contracted procedure: k43926734 
o|contracted procedure: k4401 
o|contracted procedure: k4406 
o|contracted procedure: k4409 
o|contracted procedure: k4428 
o|contracted procedure: k4438 
o|contracted procedure: k4442 
o|contracted procedure: k4450 
o|contracted procedure: k4516 
o|contracted procedure: k4530 
o|contracted procedure: k4542 
o|contracted procedure: k4545 
o|contracted procedure: k4548 
o|contracted procedure: k4556 
o|contracted procedure: k4564 
o|contracted procedure: k4525 
o|contracted procedure: k4589 
o|contracted procedure: k4607 
o|contracted procedure: k4623 
o|contracted procedure: k4636 
o|contracted procedure: k4646 
o|contracted procedure: k4663 
o|contracted procedure: k4676 
o|contracted procedure: k4686 
o|contracted procedure: k4709 
o|contracted procedure: k4724 
o|contracted procedure: k4882 
o|contracted procedure: k4853 
o|contracted procedure: k4856 
o|contracted procedure: k4859 
o|contracted procedure: k4862 
o|contracted procedure: k4872 
o|contracted procedure: k4889 
o|contracted procedure: k4901 
o|contracted procedure: k4907 
o|contracted procedure: k4920 
o|contracted procedure: k4923 
o|contracted procedure: k4938 
o|contracted procedure: k4951 
o|contracted procedure: k5016 
o|contracted procedure: k4961 
o|contracted procedure: k4964 
o|contracted procedure: k4973 
o|contracted procedure: k4976 
o|contracted procedure: k4982 
o|contracted procedure: k4998 
o|contracted procedure: k5002 
o|contracted procedure: k5013 
o|contracted procedure: k5009 
o|contracted procedure: k5025 
o|contracted procedure: k5060 
o|contracted procedure: k5066 
o|contracted procedure: k5072 
o|contracted procedure: k5079 
o|contracted procedure: k5089 
o|contracted procedure: k5098 
o|contracted procedure: k5112 
o|contracted procedure: k5101 
o|contracted procedure: k5108 
o|contracted procedure: k5116 
o|contracted procedure: k5125 
o|contracted procedure: k5143 
o|contracted procedure: k5159 
o|contracted procedure: k5165 
o|contracted procedure: k5172 
o|contracted procedure: k5198 
o|contracted procedure: k5178 
o|contracted procedure: k5187 
o|contracted procedure: k5235 
o|contracted procedure: k5241 
o|contracted procedure: k5250 
o|contracted procedure: k5260 
o|contracted procedure: k5263 
o|contracted procedure: k5266 
o|contracted procedure: k5284 
o|contracted procedure: k5296 
o|contracted procedure: k5320 
o|contracted procedure: k5299 
o|contracted procedure: k5316 
o|contracted procedure: k5411 
o|contracted procedure: k5340 
o|contracted procedure: k5405 
o|contracted procedure: k5343 
o|contracted procedure: k5399 
o|contracted procedure: k5346 
o|contracted procedure: k5393 
o|contracted procedure: k5349 
o|contracted procedure: k5387 
o|contracted procedure: k5352 
o|contracted procedure: k5381 
o|contracted procedure: k5355 
o|contracted procedure: k5358 
o|contracted procedure: k5367 
o|contracted procedure: k5373 
o|contracted procedure: k5497 
o|contracted procedure: k5420 
o|contracted procedure: k5491 
o|contracted procedure: k5423 
o|contracted procedure: k5485 
o|contracted procedure: k5426 
o|contracted procedure: k5479 
o|contracted procedure: k5429 
o|contracted procedure: k5473 
o|contracted procedure: k5432 
o|contracted procedure: k5467 
o|contracted procedure: k5435 
o|contracted procedure: k5438 
o|contracted procedure: k5441 
o|contracted procedure: k5450 
o|contracted procedure: k5456 
o|contracted procedure: k4055 
o|contracted procedure: k4063 
o|contracted procedure: k4059 
o|contracted procedure: k5554 
o|contracted procedure: k5534 
o|contracted procedure: k5551 
o|contracted procedure: k5744 
o|contracted procedure: k5761 
o|contracted procedure: k5771 
o|contracted procedure: k5775 
o|contracted procedure: k5778 
o|contracted procedure: k5613 
o|contracted procedure: k5661 
o|contracted procedure: k5681 
o|contracted procedure: k5570 
o|contracted procedure: k5574 
o|contracted procedure: k5578 
o|contracted procedure: k5582 
o|contracted procedure: k5586 
o|contracted procedure: k5608 
o|contracted procedure: k5700 
o|contracted procedure: k5712 
o|contracted procedure: k5715 
o|contracted procedure: k5718 
o|contracted procedure: k5726 
o|contracted procedure: k5734 
o|contracted procedure: k5798 
o|contracted procedure: k5877 
o|contracted procedure: k5808 
o|contracted procedure: k5871 
o|contracted procedure: k5811 
o|contracted procedure: k5865 
o|contracted procedure: k5814 
o|contracted procedure: k5859 
o|contracted procedure: k5817 
o|contracted procedure: k5853 
o|contracted procedure: k5820 
o|contracted procedure: k5847 
o|contracted procedure: k5823 
o|contracted procedure: k5841 
o|contracted procedure: k5826 
o|contracted procedure: k5835 
o|contracted procedure: k5829 
o|contracted procedure: k5955 
o|contracted procedure: k5886 
o|contracted procedure: k5949 
o|contracted procedure: k5889 
o|contracted procedure: k5943 
o|contracted procedure: k5892 
o|contracted procedure: k5937 
o|contracted procedure: k5895 
o|contracted procedure: k5931 
o|contracted procedure: k5898 
o|contracted procedure: k5925 
o|contracted procedure: k5901 
o|contracted procedure: k5919 
o|contracted procedure: k5904 
o|contracted procedure: k5913 
o|contracted procedure: k5907 
o|contracted procedure: k6241 
o|contracted procedure: k6266 
o|contracted procedure: k6250 
o|contracted procedure: k6253 
o|contracted procedure: k6275 
o|contracted procedure: k6287 
o|contracted procedure: k6303 
o|contracted procedure: k6299 
o|contracted procedure: k6309 
o|simplifications: ((if . 1) (##core#call . 9) (let . 78)) 
o|  call simplifications:
o|    scheme#*	2
o|    chicken.bitwise#bitwise-ior	7
o|removed binding forms: 344 
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
o|contracted procedure: k4848 
(o x)|known list op on rest arg sublist: ##core#rest-car mode1511 0 
(o x)|known list op on rest arg sublist: ##core#rest-car buffer1528 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest15381541 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest15381541 0 
o|contracted procedure: k5029 
o|contracted procedure: k5056 
o|contracted procedure: k5152 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest15901591 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest15901591 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? new1600 0 
(o x)|known list op on rest arg sublist: ##core#rest-car new1600 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16361638 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest16361638 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16361638 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest16361638 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16611664 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest16611664 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16611664 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest16611664 0 
(o x)|known list op on rest arg sublist: ##core#rest-car args1693 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest18481850 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest18481850 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest18481850 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest18481850 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest18681870 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest18681870 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest18681870 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest18681870 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest915916 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest915916 0 
o|removed binding forms: 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3086 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3086 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3086 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3086 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3384 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3384 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3384 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3384 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3434 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3434 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3434 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3434 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4118 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r4118 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r4118 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r4118 1 
o|removed side-effect free assignment to unused variable: mode1309 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5344 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r5344 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5344 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5344 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5424 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r5424 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5424 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5424 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5812 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r5812 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5812 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5812 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5890 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r5890 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5890 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5890 1 
o|replaced variables: 6 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5350 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r5350 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5350 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5350 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5430 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r5430 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5430 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5430 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5818 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r5818 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5818 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5818 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5896 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r5896 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5896 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5896 2 
o|converted assignments to bindings: (check1311) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 18 
o|contracted procedure: k4626 
o|contracted procedure: k4666 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5824 3 
(o x)|known list op on rest arg sublist: ##core#rest-car r5824 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5824 3 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5824 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5902 3 
(o x)|known list op on rest arg sublist: ##core#rest-car r5902 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5902 3 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5902 3 
o|removed binding forms: 8 
o|removed binding forms: 4 
o|direct leaf routine/allocation: rec1159 0 
o|direct leaf routine/allocation: g12401247 0 
o|direct leaf routine/allocation: suffix-loop1578 0 
o|direct leaf routine/allocation: loop1565 0 
o|direct leaf routine/allocation: loop1613 0 
o|direct leaf routine/allocation: g18171824 0 
o|contracted procedure: k4070 
o|converted assignments to bindings: (rec1159) 
o|contracted procedure: "(posix-common.scm:779) k4431" 
o|contracted procedure: k5036 
o|contracted procedure: k5048 
o|converted assignments to bindings: (suffix-loop1578) 
o|converted assignments to bindings: (loop1565) 
o|contracted procedure: k5328 
o|converted assignments to bindings: (loop1613) 
o|contracted procedure: "(posixwin.scm:866) k5764" 
o|simplifications: ((let . 4)) 
o|removed binding forms: 6 
o|direct leaf routine/allocation: for-each-loop12391252 0 
o|direct leaf routine/allocation: for-each-loop18161834 0 
o|converted assignments to bindings: (for-each-loop12391252) 
o|converted assignments to bindings: (for-each-loop18161834) 
o|simplifications: ((let . 2)) 
x|eliminated type checks:
x|  C_i_check_structure:	1
o|customizable procedures: (va6935 va6933 va6931 va6929 %process1804 chkstrlst1812 map-loop17401757 chicken.posix#shell-command chicken.posix#call-with-exec-args k5244 va6921 va6913 loop1576 k4967 check1311 chicken.posix#check-environment-list map-loop12811299 chicken.posix#list->c-string-buffer k4498 doloop12271228 tmp12444 tmp22445 doloop12081209 chicken.posix#free-c-string-buffer k4129 k4147 k4183 g10341041 for-each-loop10331047 chicken.posix#check-time-vector k3528 mode829 check830 chicken.posix#stat g258267 map-loop252274) 
o|shared closure containers: 13 
o|shared closure users: 18 
o|calls to known targets: 124 
o|unused rest argument: rest239241 f_2641 
o|unused rest argument: rest717719 f_2902 
o|unused rest argument: rest781783 f_3080 
o|unused rest argument: rest854856 f_3378 
o|unused rest argument: rest871873 f_3428 
o|unused rest argument: new897 f_3523 
o|unused rest argument: rest938939 f_3605 
o|unused rest argument: rest949950 f_3626 
o|unused rest argument: rest967968 f_3658 
o|unused rest argument: rest10081010 f_3741 
o|unused rest argument: rest10551056 f_3842 
o|identified direct recursive calls: f_4074 1 
o|unused rest argument: args1168 f_4112 
o|identified direct recursive calls: f_4423 1 
o|unused rest argument: rest15381541 f_4959 
o|identified direct recursive calls: f_5147 1 
o|identified direct recursive calls: f_5093 1 
o|unused rest argument: rest15901591 f_5176 
o|unused rest argument: new1600 f_5239 
o|identified direct recursive calls: f_5291 1 
o|unused rest argument: rest16361638 f_5338 
o|unused rest argument: rest16611664 f_5418 
o|identified direct recursive calls: f_5756 1 
o|unused rest argument: rest18481850 f_5806 
o|unused rest argument: rest18681870 f_5884 
o|unused rest argument: _19021905 f_5996 
o|unused rest argument: _19081911 f_6002 
o|unused rest argument: _19141917 f_6008 
o|unused rest argument: _19201923 f_6014 
o|unused rest argument: _19261929 f_6020 
o|unused rest argument: _19321935 f_6026 
o|unused rest argument: _19381941 f_6032 
o|unused rest argument: _19441947 f_6038 
o|unused rest argument: _19561959 f_6044 
o|unused rest argument: _19621965 f_6050 
o|unused rest argument: _19681971 f_6056 
o|unused rest argument: _19741977 f_6062 
o|unused rest argument: _19801983 f_6068 
o|unused rest argument: _19861989 f_6074 
o|unused rest argument: _19921995 f_6080 
o|unused rest argument: _19982001 f_6086 
o|unused rest argument: _20042007 f_6092 
o|unused rest argument: _20102013 f_6098 
o|unused rest argument: _20162019 f_6104 
o|unused rest argument: _20222025 f_6110 
o|unused rest argument: _20282031 f_6116 
o|unused rest argument: _20342037 f_6122 
o|unused rest argument: _20402043 f_6128 
o|unused rest argument: _20462049 f_6134 
o|unused rest argument: _20522055 f_6140 
o|unused rest argument: _20582061 f_6146 
o|unused rest argument: _20642067 f_6152 
o|unused rest argument: _20702073 f_6158 
o|unused rest argument: _20762079 f_6164 
o|unused rest argument: _20822085 f_6170 
o|unused rest argument: _20882091 f_6176 
o|unused rest argument: rest915916 f_6248 
o|fast box initializations: 12 
o|fast global references: 93 
o|fast global assignments: 22 
o|dropping unused closure argument: f_2856 
o|dropping unused closure argument: f_3323 
o|dropping unused closure argument: f_3356 
o|dropping unused closure argument: f_3586 
o|dropping unused closure argument: f_4248 
o|dropping unused closure argument: f_4365 
o|dropping unused closure argument: f_4399 
o|dropping unused closure argument: f_4602 
o|dropping unused closure argument: f_5504 
o|dropping unused closure argument: f_5740 
*/
/* end of file */
