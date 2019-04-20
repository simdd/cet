#if 0
	shc Version 4.0.1, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f cet.sh -o cet 
#endif

static  char data [] = 
#define      rlax_z	1
#define      rlax	((&data[0]))
	"\200"
#define      inlo_z	3
#define      inlo	((&data[1]))
	"\375\034\021"
#define      opts_z	1
#define      opts	((&data[4]))
	"\154"
#define      xecc_z	15
#define      xecc	((&data[6]))
	"\060\004\304\307\063\006\125\012\344\031\373\043\027\160\172\274"
	"\236"
#define      chk2_z	19
#define      chk2	((&data[26]))
	"\061\342\002\274\045\100\356\346\371\041\343\230\214\266\112\002"
	"\003\156\231\142\243\236\326\165"
#define      pswd_z	256
#define      pswd	((&data[61]))
	"\237\235\342\020\305\032\103\024\343\126\270\374\376\325\266\122"
	"\315\334\156\031\304\372\256\224\355\276\273\076\025\174\052\255"
	"\072\143\031\316\276\051\126\317\372\153\237\032\253\250\246\361"
	"\234\303\202\030\233\351\272\076\320\252\367\336\005\046\052\314"
	"\025\317\303\064\363\215\343\163\072\334\057\225\063\353\025\303"
	"\315\041\027\177\156\122\072\325\302\325\245\074\173\213\302\043"
	"\221\141\356\372\304\046\275\034\065\054\272\154\160\302\147\166"
	"\336\176\043\373\333\257\367\362\140\354\122\170\356\037\236\035"
	"\307\332\025\017\150\350\313\352\277\154\031\250\161\225\066\060"
	"\030\243\347\052\365\310\153\153\076\101\052\030\122\014\256\052"
	"\375\267\370\016\236\227\123\061\367\172\301\360\143\375\312\215"
	"\126\362\325\275\042\323\220\322\074\254\121\147\271\351\332\351"
	"\272\362\002\317\142\343\007\304\063\015\112\066\116\204\302\044"
	"\161\260\257\166\123\210\272\333\176\057\140\166\210\022\262\267"
	"\065\176\257\115\323\117\174\015\131\046\212\214\276\275\075\017"
	"\103\330\072\055\042\132\257\016\063\007\017\006\275\127\355\337"
	"\052\224\176\244\134\315\022\134\050\202\241\365\124\351\317\050"
	"\040\000\334\363\115\246\307\261\247\300\206\341\075\157\265\322"
	"\075\050\052\053\142\101\021\171\045\240\166\102\015\076\335"
#define      msg1_z	65
#define      msg1	((&data[364]))
	"\375\024\045\357\313\360\062\365\221\311\330\131\157\245\062\346"
	"\243\354\315\210\023\340\076\276\312\011\363\263\034\104\160\001"
	"\025\121\006\117\243\165\033\026\266\011\125\052\032\146\110\117"
	"\376\205\137\221\115\212\054\177\227\054\222\106\147\010\132\135"
	"\126\161\023\064\200\021\204\360\227\342\335\246\222\145\272\335"
	"\045\120\044\277\224\002\262\032\234\373\251\015\054"
#define      text_z	622
#define      text	((&data[518]))
	"\346\264\256\250\044\300\156\031\364\104\353\231\277\121\360\237"
	"\025\140\121\377\220\207\131\242\116\060\126\336\351\163\172\253"
	"\237\030\173\372\047\160\133\171\071\162\272\164\257\342\242\314"
	"\240\132\357\174\147\263\043\021\222\240\334\102\051\124\001\006"
	"\343\012\003\245\370\352\144\256\370\111\123\153\061\262\267\160"
	"\203\227\053\262\237\264\024\122\044\135\355\272\372\044\063\014"
	"\306\215\065\115\204\314\313\124\222\302\046\243\025\340\373\071"
	"\225\360\032\140\245\204\372\175\064\067\031\166\013\115\343\356"
	"\274\313\147\300\350\045\004\150\233\030\270\033\063\364\226\233"
	"\217\267\353\351\307\315\371\331\053\340\032\154\164\261\026\274"
	"\126\347\117\261\324\176\171\247\124\023\127\022\156\175\042\253"
	"\025\210\341\143\155\103\327\056\331\116\220\200\121\050\252\115"
	"\247\257\230\050\267\160\344\117\076\040\343\144\226\213\053\376"
	"\303\035\355\066\001\145\237\106\175\070\063\307\041\277\352\337"
	"\207\245\301\341\342\304\071\362\352\041\126\344\115\062\174\126"
	"\175\042\120\061\147\253\356\323\315\025\213\065\031\206\345\230"
	"\176\223\026\307\055\127\172\247\131\266\110\005\075\176\371\023"
	"\141\257\243\042\104\161\202\130\337\070\030\324\011\074\360\214"
	"\302\202\155\136\233\214\063\141\310\311\074\326\216\131\305\324"
	"\352\205\161\341\030\066\163\327\335\201\331\301\340\176\062\264"
	"\030\174\133\122\235\112\020\363\277\112\207\107\366\007\106\030"
	"\221\300\267\272\104\210\344\153\027\270\063\342\140\260\264\345"
	"\276\177\277\363\276\113\327\163\005\101\315\006\265\161\234\364"
	"\360\137\210\246\317\352\061\300\111\354\276\027\102\112\151\166"
	"\320\044\240\067\244\176\215\033\174\220\230\333\227\000\123\146"
	"\126\051\224\135\013\230\157\255\143\362\250\173\014\362\033\342"
	"\327\056\315\123\342\125\326\247\252\315\074\334\057\173\156\202"
	"\267\163\300\136\346\353\055\227\307\213\370\331\045\330\327\253"
	"\356\150\266\371\056\053\107\362\164\304\060\144\354\253\105\275"
	"\267\255\105\014\073\303\135\100\273\305\320\210\115\163\031\036"
	"\233\344\332\347\012\141\157\114\135\255\122\164\210\370\374\264"
	"\056\032\351\376\142\130\227\152\116\251\110\375\250\316\125\135"
	"\076\222\253\100\267\051\175\301\235\123\325\177\063\315\173\125"
	"\055\334\150\132\044\224\313\371\057\064\177\066\270\040\306\252"
	"\305\041\127\160\241\061\027\103\314\261\040\202\164\226\341\312"
	"\024\104\353\127\111\377\161\200\173\357\364\374\004\133\032\347"
	"\004\052\024\164\270\005\171\216\052\073\334\020\237\312\227\266"
	"\043\006\123\144\231\206\370\151\127\274\120\121\257\212\163\006"
	"\333\357\173\031\173\105\210\040\007\053\214\174\110\115\245\323"
	"\247\131\012\320\303\254\316\032\222\020\321\022\362\365\300\355"
	"\070\205\213\202\035\003\124\225\201\243\153\046\037\065\020\111"
	"\043\376\240\074\330\034\071\157\356\045\003\022\042\302\077\136"
	"\134\245\015\221\274\017\064\154\235\103\002\234\322\234\306\200"
	"\373\075\237\016\067\322\267\351\035\272\014\315\071\074\256\151"
	"\306\227\060\330\077\210\172\275\175\113\322\061\225\013\365\233"
	"\267\350\214\156\030\046\167\226\231\202\332\144\063\314\135\350"
	"\323\376\300\053\374\376\072\306\057\237\375\163\133\245\366\001"
	"\134\003\336\155\052\013\345\256\131\250\335\003\202\117\366\270"
	"\136\353\043\015\123\221\272\056\233\056\040\066\052\044\352\045"
	"\211\361\077\104\317\145\024\146\272\007\324\110\072\353\172\224"
	"\215\310\341\167\226\327\254\045\260\272\074\304\226\254\077\070"
	"\165\030\211\045\316\247\130\220\206\131\226\010\016\150\224\247"
#define      tst2_z	19
#define      tst2	((&data[1275]))
	"\072\324\342\312\252\032\111\237\340\047\055\254\057\122\201\276"
	"\151\214\001\022\057\242\125\046"
#define      msg2_z	19
#define      msg2	((&data[1298]))
	"\333\311\267\204\063\321\106\354\172\004\066\057\255\114\313\326"
	"\146\217\157\077\066\124\004"
#define      date_z	1
#define      date	((&data[1321]))
	"\211"
#define      shll_z	10
#define      shll	((&data[1324]))
	"\246\231\337\133\165\300\253\220\326\146\361\310\331\221"
#define      lsto_z	1
#define      lsto	((&data[1336]))
	"\171"
#define      tst1_z	22
#define      tst1	((&data[1337]))
	"\117\171\217\021\110\163\134\314\014\077\165\072\104\315\007\045"
	"\244\040\267\222\072\336\064\002\212\034"
#define      chk1_z	22
#define      chk1	((&data[1365]))
	"\075\353\267\232\355\231\373\205\236\271\273\265\364\234\121\176"
	"\027\022\154\205\145\322\212\345\315\173\237\042"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define HARDENINGSP	0	/* Define as 1 to disable bash child process */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a processs */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;

    int lentmp = len;

#if HARDENINGSP
    //Start tracing to protect from dump & trace
    if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }

    //Decode Bash
    while (len > 0) {
        indx++;
        tmp = stte[indx];
        jndx += tmp;
        stte[indx] = stte[jndx];
        stte[jndx] = tmp;
        tmp += stte[indx];
        *ptr ^= stte[tmp];
        ptr++;
        len--;
    }

    //Exec bash script
    system(tmp2);

    //Empty script variable
    memcpy(tmp2, str, lentmp);

    //Sinal to detach ptrace
    ptrace(PTRACE_DETACH, 0, 0, 0);
    exit(0);

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
#endif /* HARDENINGSP Exit here anyway*/

    int pid, status;
    pid = fork();

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            printf("Operation not permitted\n");
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Exec bash script
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {
        wait(&status);
    }

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
} 
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
