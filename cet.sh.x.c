#if 0
	shc Version 4.0.1, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f cet.sh -o cet 
#endif

static  char data [] = 
#define      date_z	1
#define      date	((&data[0]))
	"\135"
#define      opts_z	1
#define      opts	((&data[1]))
	"\365"
#define      msg1_z	65
#define      msg1	((&data[6]))
	"\322\065\336\316\103\030\314\324\146\324\066\151\350\326\156\007"
	"\016\310\107\076\141\100\126\006\317\240\202\070\037\015\241\155"
	"\275\206\277\316\065\056\125\376\240\165\214\000\313\174\216\060"
	"\175\262\123\105\057\155\227\013\275\342\247\272\272\226\143\220"
	"\204\215\247\022\151\212\073\324\374\203\016\077\105\073"
#define      chk1_z	22
#define      chk1	((&data[85]))
	"\126\337\171\234\053\336\130\375\203\072\027\054\032\171\116\020"
	"\102\023\223\172\132\143\164\241\062\201\274\130\116"
#define      tst2_z	19
#define      tst2	((&data[113]))
	"\155\305\200\136\024\127\034\166\251\137\124\036\115\011\111\077"
	"\371\202\061\125\002\270\174"
#define      text_z	622
#define      text	((&data[153]))
	"\322\064\212\170\344\030\206\065\212\357\150\327\170\030\356\122"
	"\251\333\105\224\032\023\057\207\060\226\154\122\241\250\073\210"
	"\235\166\275\160\076\341\163\350\137\267\171\246\046\345\200\002"
	"\365\136\012\317\377\334\165\174\206\077\164\150\105\070\263\057"
	"\167\014\176\361\241\136\036\263\204\262\373\112\201\220\153\306"
	"\236\067\226\364\334\076\321\230\047\202\206\237\170\115\220\350"
	"\203\347\160\210\277\112\374\377\302\344\156\376\271\063\203\076"
	"\346\275\251\171\361\066\234\076\142\305\106\046\271\053\074\121"
	"\201\246\105\362\043\172\377\104\025\042\256\365\236\122\250\123"
	"\175\344\204\264\317\236\373\045\117\120\210\204\013\367\077\010"
	"\267\201\036\237\065\134\141\355\202\363\240\227\106\150\076\062"
	"\045\177\125\264\163\242\232\106\042\025\375\023\053\337\210\343"
	"\073\211\117\152\176\122\370\261\265\061\361\146\254\244\160\277"
	"\343\051\123\342\202\276\161\105\345\110\144\305\165\233\352\365"
	"\215\276\075\060\030\262\207\027\130\167\246\356\357\353\052\200"
	"\065\057\116\066\174\263\107\364\210\277\004\340\053\057\360\170"
	"\142\235\234\176\345\221\015\301\324\036\044\345\352\100\160\277"
	"\233\347\047\242\347\075\043\147\117\055\051\073\206\360\155\133"
	"\266\274\107\167\373\161\124\303\060\166\061\020\306\065\035\346"
	"\266\257\041\100\001\102\144\004\015\054\074\365\143\161\141\212"
	"\167\143\236\102\245\230\117\062\346\064\146\100\156\132\152\132"
	"\032\242\265\203\035\253\263\201\252\325\334\116\347\264\214\013"
	"\201\144\116\271\273\142\246\113\135\171\240\337\250\262\072\164"
	"\350\021\125\266\306\275\107\244\204\175\217\274\307\136\022\320"
	"\156\301\350\004\202\156\032\054\201\263\153\054\050\141\356\012"
	"\023\371\034\017\145\117\211\100\077\174\203\113\366\105\340\127"
	"\302\206\147\065\232\002\371\324\306\327\362\140\015\007\245\202"
	"\260\003\073\042\304\025\204\323\366\233\200\213\164\245\022\053"
	"\265\321\125\332\071\004\166\240\070\176\041\114\130\323\351\164"
	"\030\114\101\303\063\164\176\023\364\232\303\271\367\010\272\056"
	"\327\250\115\143\106\275\216\267\170\202\020\067\253\373\050\127"
	"\351\161\300\267\173\240\102\313\324\072\173\061\153\026\127\044"
	"\104\032\205\373\206\213\222\114\153\361\372\015\304\323\201\276"
	"\162\016\052\166\021\366\051\327\162\024\124\051\264\332\102\337"
	"\110\315\222\262\333\141\071\016\162\110\161\136\376\226\313\366"
	"\153\340\312\143\244\002\262\112\103\305\314\254\011\242\226\354"
	"\305\361\062\027\206\357\014\300\046\225\120\373\343\072\130\002"
	"\004\322\126\215\300\315\061\310\127\077\342\344\322\225\276\003"
	"\067\146\232\153\165\322\254\345\315\211\107\060\251\103\250\177"
	"\056\205\152\032\065\121\031\222\311\362\374\235\031\206\151\000"
	"\015\007\152\056\300\055\040\153\175\202\220\247\112\232\111\204"
	"\011\250\347\135\326\352\064\212\131\014\067\237\000\262\357\030"
	"\347\141\202\021\166\345\315\131\134\244\033\026\335\174\255\221"
	"\277\024\013\250\025\112\011\362\032\325\221\037\003\244\310\260"
	"\237\314\321\237\213\015\224\313\377\207\035\263\225\376\365\055"
	"\251\232\126\324\220\341\234\206\174\126\075\176\224\354\061\223"
	"\275\016\020\067\376\273\032\330\322\031\265\333\015\052\022\362"
	"\301\333\000\001\216\367\156\322\054\054\050\066\304\120\256\070"
	"\060\223\176\013\264\076\042\116\245\044\010\342\075\123\377"
#define      pswd_z	256
#define      pswd	((&data[950]))
	"\340\340\221\012\354\021\361\062\207\124\112\114\014\170\366\001"
	"\133\302\077\060\221\063\002\155\265\013\224\370\255\147\250\267"
	"\176\067\175\225\075\164\173\105\134\323\320\366\034\377\104\237"
	"\137\214\341\051\176\315\376\341\126\000\127\036\122\250\266\204"
	"\054\243\336\230\322\155\067\036\060\002\251\010\036\133\352\217"
	"\101\360\050\051\211\147\163\225\354\333\034\277\310\343\273\235"
	"\272\151\152\311\354\112\242\265\114\021\016\173\247\027\221\347"
	"\147\120\043\264\263\153\257\330\373\130\253\112\123\340\007\210"
	"\334\335\064\314\275\042\244\340\016\372\114\121\162\152\362\315"
	"\351\063\213\274\175\064\004\206\007\044\022\047\315\100\222\165"
	"\127\104\351\022\151\016\233\026\325\270\373\136\257\023\111\022"
	"\335\057\272\067\060\201\327\221\141\267\017\201\111\132\333\356"
	"\024\337\112\214\277\205\144\011\163\060\131\072\164\025\164\357"
	"\261\114\300\212\377\360\242\257\344\027\054\154\033\176\126\233"
	"\216\360\001\054\057\313\137\205\345\156\321\375\024\260\277\015"
	"\066\170\205\076\255\266\100\125\164\064\264\246\107\362\050\215"
	"\133\256\276\332\217\360\276\234\045\156\100\264\306\341\105\050"
	"\312\100\210\075\300\055\122\237\125\061\131\140\325\125\246\064"
	"\271\227\157\374\222\067\171\055\365\326"
#define      shll_z	10
#define      shll	((&data[1213]))
	"\103\333\075\375\003\211\252\343\115\256"
#define      inlo_z	3
#define      inlo	((&data[1223]))
	"\176\101\266"
#define      chk2_z	19
#define      chk2	((&data[1229]))
	"\376\007\052\036\370\143\204\102\253\164\315\352\115\131\260\201"
	"\353\251\176\320\233\034\035"
#define      xecc_z	15
#define      xecc	((&data[1250]))
	"\270\055\324\202\260\272\261\310\267\214\263\147\014\211\321\155"
	"\172"
#define      lsto_z	1
#define      lsto	((&data[1266]))
	"\002"
#define      tst1_z	22
#define      tst1	((&data[1267]))
	"\254\330\041\313\350\336\227\230\030\201\020\270\052\170\236\314"
	"\072\254\123\102\361\362\261\032"
#define      msg2_z	19
#define      msg2	((&data[1294]))
	"\042\371\210\034\303\350\054\011\044\064\230\350\200\276\005\022"
	"\215\231\122\007\052\224\137\071\233"
#define      rlax_z	1
#define      rlax	((&data[1316]))
	"\117"/* End of data[] */;
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
