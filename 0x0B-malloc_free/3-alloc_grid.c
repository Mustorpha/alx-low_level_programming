#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2D array in a newly allocated memory
 * @width: the width of the array matrix
 * @height: the height of the array matrix
 * Return: a pointer array (success) or NULL (failure)
 */

char **alloc_grid(int width, int height)
{
    int **arr;
    int i;
    int j;

    if (width < 1 || height < 1)
    {
        return NULL;
    }

    arr = malloc(height * sizeof(int *));

    for (i = 0; i < height; i++)
    {
        arr[i] = calloc(width, sizeof(int));

        if (arr[i] == NULL)
        {
            for (i-1; i >= 0; i--)
            {
                free(arr[i]);
                return NULL;
            }
        }
    }

    return (arr);
}