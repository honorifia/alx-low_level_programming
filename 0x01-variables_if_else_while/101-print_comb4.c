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
	int alpha2;

	alpha2 = 0;
	alpha1 = 0;
	alpha = 0;
	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (alpha1 = 0; alpha1 <= 9; alpha1++)
		{
			for (alpha2 = 0; alpha2 <= 9; alpha2++)
			{
				if (alpha < alpha1 && alpha1 < alpha2)
				{
					putchar((alpha % 10) + '0');
					putchar((alpha1 % 10) + '0');
					putchar((alpha2 % 10) + '0');
					if (alpha != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
