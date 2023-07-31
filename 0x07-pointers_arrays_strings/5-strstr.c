#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of located substring
*/

char *_strstr(char *haystack, char *needle)
{
	char *b;
	char *p;

	while (*haystack != '\0')
	{
		b = haystack;
		p = needle;

		while (*haystack != '\0' && *p != '\0' && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*pneedle)
			return (b);
		haystack = b + 1;
	}
	return (0);
}
