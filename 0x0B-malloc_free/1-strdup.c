#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string into a newly allocater memory
 * @str: pointer to the source string
 * Return: the duplicated string or NULL
*/

char *_strdup(char *str)
{
	char *str_dup;
	int len, i;
	
	if (*str == NULL)
	{
		return (NULL);
	}
	for (len = 0; *(str + len) != '\0'; len++)
	{
		len++;
	}
	str_dup = (char *)malloc((++len) * sizeof(*str));
	
	if (str_dup == NULL)
	{
		free(str_dup);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		*(str_dup + i) = *(str + i);
	}
	return (str_dup);
}
