#include "main.h"
#include <stdio.h>

int main(void)
{
	int r;
	r = wildcmp("main.c", "*.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "ma********************************c");
	printf("%d\n", r);

	return (0);
}
