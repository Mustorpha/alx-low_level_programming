#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		arr[j] = i;

	return (arr);
}
