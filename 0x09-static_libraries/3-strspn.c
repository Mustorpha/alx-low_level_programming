#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: the number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, flag;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		flag = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	return (i);
}
