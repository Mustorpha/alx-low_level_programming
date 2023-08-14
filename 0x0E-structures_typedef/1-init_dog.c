#include "dog.h"
#include "main.h"

/**
* init_dog - initializes a variable of type dog
* @d: the variable address
* @name: name of dog
* @age: age of dog
* @owner: owner's name
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
