#include <limits.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory space
 * @b: memory size
 * Return: a pointer to the memory or exit program
 */

void *malloc_checked(unsigned int b)
{

	if (b >= INT_MAX)
	{
		exit(98);
	}
	void *mem = malloc(b);

	return (mem);
}
