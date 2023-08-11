#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings with a specific number of bytes
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		n++;

	str = malloc(sizeof(char) * (n + 1));

	if (str == NULL)
		return (NULL);

	for (j = 0; j < n; j++)
		if (j < i)
			str[j] = s1[j];
		else
			str[j] = s2[j - i];

	str[j] = '\0';

	return (str);
}
