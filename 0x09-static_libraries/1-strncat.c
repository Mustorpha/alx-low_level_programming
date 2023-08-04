#include <string.h>
#include "main.h"

/**
 * _strncat - concantenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: termination position
 *
 * Return: the full string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
