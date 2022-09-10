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
	char alpha;

	alpha = 'a';
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
