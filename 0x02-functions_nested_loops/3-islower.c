#include "main.h"

/**
 * _islower- checks if lowercase
 *
 * Return: 0
 */
int _islower(int c)
{
	int n;

	n = c;

	if (n >= 97 && n <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
