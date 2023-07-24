#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: the concerned string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int l;

	int i;
	
	for (l = _strlen(s); l<0; --l)
	{
		l--;

		_putchar(s[l]);
	}
	_putchar('\n');
}

/**
 * _strlen - analyse the total numbr of character in a string
 * @s: a pointer to the string
 *
 * Description: the function takes a pointer to the string
 * as parameter and loop through the number of character
 * detected while ignoring the end of char \0
 *
 * Return: the number of chracter
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
