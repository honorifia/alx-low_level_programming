#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry
 * code
 * Return: return 0 success
 */
int main(void)
{
	int alpha;

	alpha = 0;
	for (alpha = 0; alpha <= 9; alpha++)
	{
		putchar((alpha % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
