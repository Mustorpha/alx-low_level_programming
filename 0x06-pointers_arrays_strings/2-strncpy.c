#include <string.h>
#include "main.h"

/**
 * _strcat - concantenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: termination position
 *
 * Description: The function takes in two strings pointers and merged
 * in the two string into the destination string and terminates if it
 * encounters a null character or contains n or more character
 *
 * Return: the full string
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i = 0;
        int j = 0;

        while (src[j] != '\0' && j < n)
        {
                dest[i] = src[j];

                i++;
                j++;
        }

	dest[j] = '\0';

        return dest;
}
