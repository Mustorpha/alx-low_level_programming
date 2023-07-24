#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string to the standard output
 * @str: pointer to the string
 *
 * Return: void
 */


void _puts(char *str)
{
	int j;

	for (j=0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
