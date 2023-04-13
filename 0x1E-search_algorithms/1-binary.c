#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: parameter, array to search
 * @size: parameter, size of array
 * @value: parameter, value to search for
 * Return: index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int lower = 0;
	int upper = size - 1;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (; lower <= upper; )
	{
		int mid = (lower + upper) / 2;

		printf("Searching in array: ");
		for (i = lower; i < upper; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			upper = mid - 1;
		}
		else
		{
			lower = mid + 1;
		}
	}

	return (-1);
}

