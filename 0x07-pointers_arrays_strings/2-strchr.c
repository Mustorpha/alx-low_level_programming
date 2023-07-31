#include "main.h"

/**
 * _strchr - locates a character in a stream of string
 * @s: string
 * @c: character
 * Return: the pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
