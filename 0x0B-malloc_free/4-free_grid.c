#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - deallocate a previously allocated 2D array memory
 * @grid: an array pointer to the array of pointer
 * @height: total number of seperate array pointer in grid
 * Return: void (success)
*/

void free_grid (int **grid, int height)
{
    int i;

    if (grid && height)
    {
        for (i = 0; i < height; i++)
        {
            free(grid[i]);
        }
        free(grid);
    }
}
