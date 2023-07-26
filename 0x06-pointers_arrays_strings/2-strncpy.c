#include <string.h>
#include "main.h"

/**
 * _strncpy - concantenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: termination position
 *
 * Return: the full string
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i = 0;

        while (src[i] != '\0' && i < n)
        {
                dest[i] = src[i];
                i++;
        }

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

        return (dest);
}
