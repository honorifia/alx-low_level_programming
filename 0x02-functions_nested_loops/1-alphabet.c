#include "main.h"

/**
 * main - print alphabet
 * Return: 0 on success
 */

void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
