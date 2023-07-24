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

	l = _strlen(s);
	
	for (i = 0; i < l; i++)
	{

		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
