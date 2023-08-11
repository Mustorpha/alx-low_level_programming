#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory for a memory space
 * @ptr: pointer to the memory previously allocated
 * @old_size: size allocated previously for ptr
 * @new_size: new size to allocate for ptr
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
