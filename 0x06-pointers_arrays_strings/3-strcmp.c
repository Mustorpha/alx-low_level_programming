#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: the first string
 * @s2: the second string
 * 
 * Return: the value from comparism
 */

int _strcmp(char *s1, char *s2)
{
	int val = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		val = *s1 - *s2;

	return (val);
}
