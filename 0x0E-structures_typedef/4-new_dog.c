#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog and initializes it
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 * Return: the dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie;
	int name_len = 0, own_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		own_len = _strlen(owner) + 1;
		cutie = malloc(sizeof(dog_t));

		if (cutie == NULL)
			return (NULL);

		cutie->name = malloc(sizeof(char) * name_len);

		if (cutie->name == NULL)
		{
			free(cutie);
			return (NULL);
		}

		cutie->owner = malloc(sizeof(char) * own_len);

		if (cutie->owner == NULL)
		{
			free(cutie->name);
			free(cutie);
			return (NULL);
		}

		cutie->name = _strcpy(cutie->name, name);
		cutie->owner = _strcpy(cutie->owner, owner);
		cutie->age = age;
	}

	return (cutie);
}

/**
 * _strlen - counts the number of character in a string
 * @s: pointer to the string
 * Return: string length
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - copies a string
 * @dest: Destination variable
 * @src: Source variable
 * Return: the pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
