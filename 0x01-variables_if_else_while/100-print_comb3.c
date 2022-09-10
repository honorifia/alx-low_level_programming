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
	int alpha1;

	alpha1 = 0;
	alpha = 0;
	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (alpha1 = 0; alpha1 <= 9; alpha1++)
		{
			if (alpha < alpha1)
			{
				putchar((alpha % 10) + '0');
				putchar((alpha1 % 10) + '0');
				if(alpha != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
