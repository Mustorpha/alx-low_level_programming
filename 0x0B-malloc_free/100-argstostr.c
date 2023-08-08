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
	int i, j, k, size = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);
	for (i = k  = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
