#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
 * init_dog - initializes a struct dog type with given values
 * @d: a pointer to the dog type
 * @name: the name value
 * @age: the age value
 * @owner: the owner value
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = *name;
	d->age = *age;
	d->owner = *owner;
}
