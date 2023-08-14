#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - deallocate memory for a dog type
 * @d: pointer to the dog type
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
