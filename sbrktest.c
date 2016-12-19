#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
	char *a = sbrk(100000);
	sbrk(-100000);
	if(a!=sbrk(100000)){
		printf(1, "error\n");
		exit();
	}
	a[500]++;
	printf(1, "%d\n", a[500]);

	exit();
}