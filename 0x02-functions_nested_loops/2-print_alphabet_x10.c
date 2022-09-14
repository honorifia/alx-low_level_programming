#include "main.h"

/**
 * print_alphabet_x10- print alphabet
 * Prints alphabet
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{
	int n, i;

	i = 1;

	for (i = 1; i <= 10; i++)
	{
		for (n = 97; n < 123; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
