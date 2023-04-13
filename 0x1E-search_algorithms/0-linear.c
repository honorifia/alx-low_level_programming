#include "search_algos.h"

/**
 * linear_search - a function that searches for an element
 * @array: parameter, array to search
 * @size: parameter, size of array
 * @value: parameter, value to search for
 * Return: index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

