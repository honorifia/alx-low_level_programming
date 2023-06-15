#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an arr of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the arr.
 * @max: The last value of the arr.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created arr.
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
