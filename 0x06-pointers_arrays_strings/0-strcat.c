#include <stdio.h>
#include <string.h>

/**
 * _strcat - concantenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Description: The function takes in two strings pointers and merged
 * in the two string into the destination string
 *
 * Return: the full string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j])
	{
		dest[i] = src[j];

		i++;
		j++;
	}

	return dest;
}
