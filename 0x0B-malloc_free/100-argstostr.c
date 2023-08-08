#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all string arugements passed into the program
 * @ac: the total number of arguments supplied
 * @av: a pointer array containing pointers to the arguments
 * Return: concatenated string (success) or NULL (failure)
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; 1 < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		size += sizeof(a[i]) - 1;
	}
	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		if (i % 2)
		{
			*(str + 1) = '\n';
		}
		else
		{
			*(str + 1) = *av[(i / 2) + 1];
		}
	}
	str[ac] = '\0';

	return (str);
}
