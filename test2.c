#include <stdio.h>
#include <stdint.h>

#include <sys/time.h> //rusage
#include <sys/resource.h> //rusage

int func();
int spacer(int s);
void funcend();

int main() {
	printf("main = %X\n", (unsigned int)((uintptr_t)main));
	printf("func = %X\n", (unsigned int)((uintptr_t)func));
	printf("spc  = %X\n", (unsigned int)((uintptr_t)spacer));
	printf("end  = %X\n", (unsigned int)((uintptr_t)funcend));

	struct rusage t;
	getrusage(RUSAGE_SELF, &t);
	double begintime = t.ru_utime.tv_sec + (double)(t.ru_utime.tv_usec*1e-6);
	long beginminflt = t.ru_minflt;
	long beginmajflt = t.ru_majflt;

	int i;
	for(i = 0; i < 1000000; ++i) {
		func();
	}

	getrusage(RUSAGE_SELF, &t);
	double endtime = t.ru_utime.tv_sec + (double)(t.ru_utime.tv_usec*1e-6);
	long endminflt = t.ru_minflt;
	long endmajflt = t.ru_majflt;
	printf("time   = %.6lf\n", (endtime-begintime));
	printf("minflt = %ld\n", (endminflt-beginminflt)); //minor page fault
	printf("majflt = %ld\n", (endmajflt-beginmajflt)); //major page fault
	
	return 0;
}

int func() {
	int s = 10000;
	if(s <= 0) {
		return 0;
	}
	else if(s == 1) {
		return 1;
	}
	int fib[s];
	fib[0] = 0;
	fib[1] = 1;

	int i;
	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	return fib[i-2];
}

int spacer(int s) {
	if(s <= 0) {
		return 0;
	}
	else if(s == 1) {
		return 1;
	}
	int fib[s];
	fib[0] = 0;
	fib[1] = 1;

	int i;
	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	fib[0] = 0;
	fib[1] = 1;

	for(i = 2; i < s; ++i) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	return fib[i-2];
}

void funcend() {
}

