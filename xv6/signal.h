#ifndef XV6_SIGNAL
#define XV6_SIGNAL

#define SIGKILL	0
#define SIGFPE	1
#define SIGSEGV	14 // the same as T_PGFLT

typedef void (*sighandler_t)(int);

typedef struct
{
	uint addr; // Should be an address
	uint type; // Should be a protection level
} siginfo_t;

#endif
