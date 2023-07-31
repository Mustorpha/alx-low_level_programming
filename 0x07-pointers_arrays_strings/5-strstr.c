#include "main.h"

/**
* _strstr - function locate the first occurence of a string
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *i = haystack, 
	char *j = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (i);
		}
		needle = j;
		i++;
		haystack = i;
	}
	return (0);
}
