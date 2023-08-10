#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory space
 * @b: memory size
 * Return: a pointer to the memory or exit program
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (!(mem))
	{
		exit(98);
	}

	return (mem);
}
