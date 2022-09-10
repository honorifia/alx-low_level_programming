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

	alpha = 'z';
	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		if (alpha != 'q' || alpha != 'e')
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
