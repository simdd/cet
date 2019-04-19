#if 0
	shc Version 4.0.1, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f cet.sh -o cet 
#endif

static  char data [] = 
#define      msg1_z	65
#define      msg1	((&data[13]))
	"\345\051\044\004\203\105\100\246\216\135\375\176\106\372\055\177"
	"\321\306\321\150\103\171\220\233\115\341\153\115\207\070\301\274"
	"\223\126\064\204\201\060\377\175\260\301\131\111\270\314\154\335"
	"\247\266\062\022\315\115\061\057\030\304\065\124\140\326\134\054"
	"\332\154\140\360\020\075\377\175\305\213\026\024\261\363\137\256"
#define      date_z	1
#define      date	((&data[80]))
	"\115"
#define      shll_z	10
#define      shll	((&data[82]))
	"\170\117\145\075\362\021\304\126\021\234\201"
#define      tst2_z	19
#define      tst2	((&data[92]))
	"\230\033\166\043\017\257\065\145\142\070\015\257\073\210\072\051"
	"\216\225\045\305\174\125"
#define      opts_z	1
#define      opts	((&data[114]))
	"\073"
#define      chk2_z	19
#define      chk2	((&data[116]))
	"\077\331\237\043\023\075\353\151\112\022\056\326\365\261\201\066"
	"\351\025\322\241\063\132"
#define      msg2_z	19
#define      msg2	((&data[139]))
	"\242\333\217\253\102\347\267\332\103\124\262\112\323\064\146\352"
	"\172\063\360\213\270\101"
#define      pswd_z	256
#define      pswd	((&data[188]))
	"\356\222\124\022\123\253\366\141\047\316\253\042\116\061\004\267"
	"\224\277\247\104\266\235\000\335\172\023\313\353\224\003\163\030"
	"\347\035\277\207\051\334\335\032\277\042\271\303\051\225\252\064"
	"\147\060\222\337\056\053\201\325\150\041\011\362\070\136\357\143"
	"\262\042\054\364\002\301\135\031\160\041\361\026\171\261\030\272"
	"\274\075\150\257\272\374\272\102\177\324\071\202\072\357\273\041"
	"\217\060\210\216\210\204\071\357\302\242\257\171\062\216\225\155"
	"\127\116\174\352\364\311\020\051\336\136\330\017\301\344\001\324"
	"\120\065\126\373\304\202\100\215\352\020\243\102\356\061\173\257"
	"\277\044\247\027\057\123\201\271\172\167\220\222\356\161\005\003"
	"\324\340\146\130\152\074\234\133\150\172\153\323\227\171\270\246"
	"\327\247\036\052\133\351\223\137\127\262\361\227\321\307\274\064"
	"\062\331\274\377\325\353\124\274\063\347\064\054\022\315\002\251"
	"\226\046\353\334\324\264\324\324\217\165\061\211\034\111\062\024"
	"\346\177\235\127\367\132\353\052\266\132\363\356\355\337\337\300"
	"\257\242\340\232\272\223\301\165\075\151\371\261\075\234\023\056"
	"\032\245\210\045\234\373\044\053\073\070\027\203\217\346\335\215"
	"\102\041\301\214\364\014\172\374\235\367\352\335\155\351\025\307"
	"\110\302\313\207\326\354\013\237\220\066\124\233\324\160\377\042"
	"\325\033\332\132\330\160\177\053\116\363\105\232\011\272\347\024"
	"\377\006\210\242\375\260\147\163\250\075\032"
#define      lsto_z	1
#define      lsto	((&data[490]))
	"\372"
#define      inlo_z	3
#define      inlo	((&data[491]))
	"\342\341\041"
#define      tst1_z	22
#define      tst1	((&data[498]))
	"\072\225\241\031\301\045\125\362\114\365\226\174\322\013\323\010"
	"\212\231\137\175\154\244\320\235\335\055\375"
#define      xecc_z	15
#define      xecc	((&data[524]))
	"\166\240\173\123\055\354\306\206\166\332\066\027\134\337\162\070"
	"\103\036\175\306"
#define      chk1_z	22
#define      chk1	((&data[541]))
	"\332\170\260\251\251\213\022\003\161\231\334\176\112\251\044\147"
	"\323\117\064\277\120\341\272\363\041\264\176"
#define      rlax_z	1
#define      rlax	((&data[568]))
	"\171"
#define      text_z	402
#define      text	((&data[640]))
	"\032\164\170\061\122\031\214\250\144\253\230\211\055\270\316\077"
	"\135\221\001\023\324\221\332\033\152\261\371\035\215\263\226\307"
	"\156\370\154\331\210\101\125\201\002\240\266\117\136\103\107\142"
	"\343\306\251\317\202\052\007\036\145\071\206\027\061\173\104\160"
	"\004\371\223\121\114\137\270\372\253\245\017\172\235\246\324\273"
	"\170\140\020\132\304\065\342\014\301\335\377\246\065\223\325\235"
	"\377\106\013\007\035\116\210\035\241\360\120\136\250\265\077\302"
	"\366\077\046\065\063\322\002\074\146\130\205\051\215\162\000\155"
	"\137\365\251\366\233\031\351\360\177\366\161\034\161\240\156\140"
	"\046\231\235\337\120\364\222\137\316\022\347\103\200\052\174\136"
	"\215\357\234\113\057\344\220\361\222\060\331\056\133\024\220\167"
	"\101\007\077\351\160\175\335\021\145\101\202\157\350\154\067\231"
	"\041\317\364\135\322\255\023\053\055\066\256\334\213\311\336\273"
	"\017\260\046\003\053\332\240\214\045\275\367\313\034\321\047\005"
	"\063\062\331\102\154\142\031\343\360\004\036\274\173\251\256\063"
	"\170\177\214\265\106\375\363\343\330\147\063\104\170\071\106\124"
	"\276\224\007\107\111\227\366\314\336\253\167\227\232\302\301\211"
	"\377\010\067\023\257\357\245\275\300\045\331\133\135\373\211\363"
	"\134\251\342\165\334\247\070\073\223\364\205\015\131\171\112\154"
	"\352\037\376\004\267\140\230\255\112\262\031\260\075\315\355\041"
	"\307\321\035\272\111\226\032\165\364\175\310\030\020\240\041\341"
	"\041\221\013\254\271\212\136\207\310\166\357\312\011\003\227\355"
	"\224\124\155\177\262\325\063\157\153\041\077\114\241\155\246\267"
	"\371\242\040\354\203\102\353\050\167\040\017\010\165\233\325\376"
	"\320\343\016\001\035\265\056\005\164\032\240\317\131\334\276\074"
	"\213\157\124\047\177\257\152\155\167\224\147\174\355\223\110\004"
	"\351\217\022\116\263\105\113\373\121\145\343\314\071\117\222\105"
	"\000\167\234\322\111\064\002\016\265\023\167\104\276\212\162\216"
	"\140\010\332\035\265\144\150\102\166\070\276\341\254\134\215\112"
	"\005\070\325\102\115\315\265\016\172\273\311\171\356"/* End of data[] */;
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
