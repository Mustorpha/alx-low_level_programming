#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of characters in a
 * newly allocated memory space
 * @size: the size in bytes of the array
 * @c: the intializing character
 * Return: pointer array (success), NULL (failure)
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(c));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
