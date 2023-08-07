#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2D array in a newly allocated memory
 * @width: the width of the array matrix
 * @height: the height of the array matrix
 * Return: a pointer array (success) or NULL (failure)
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width *  sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr);
			for (i--; i >= 0; i--)
			{
				free(arr[i]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
