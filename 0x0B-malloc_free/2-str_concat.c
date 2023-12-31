#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two string int a newly allocated memory
 * @s1: first source string
 * @s2: second source string
 * Return: concatenated string (success) or NULL (failure)
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len = 0, i, j = 0, k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		k++;
	}
	str = malloc((len + k + 1) * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		str[i] = s1[i];
	}
	while (j <= k)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
