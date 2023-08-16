#include "function_headers.h"

/**
 * int_index - searches for an integer
 * @array: the integer array
 * @size: the size of the array
 * @cmp: the comparing funtion
 * Return: the result index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}

	return (-1);
}
