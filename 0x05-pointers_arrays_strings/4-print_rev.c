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

	for (l = _strlen(s); l < 0; --l;)
	{
		l--;

		_putchar(str[l]);
	}
	_putchar('\n');
}
