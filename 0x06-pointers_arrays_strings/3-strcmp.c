#include <string.h>
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
	int count, cmpVal;

	counter = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}

	cmpVal = s1[count] - s2[count];
	return (cmpVal);
}
