#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: The number of bytes to be allocated
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allocated_mem = malloc(b);

	if (allocated_mem == NULL)
		exit(98);
	else
		return (allocated_mem);

}
