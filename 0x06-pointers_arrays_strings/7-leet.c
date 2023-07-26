#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * 
 * Return: the enconded string.
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	int k;

	char a[] = "oOlLeEaAtT";
	char b[] = "0011334477";

	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				k = j;
				s[i] = b[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
