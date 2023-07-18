#include "main.h"

/**
 * print_alphabet - print the alphabets into the standard output
 *
 * Description: A function that prints the whole alphabetic character
 * into the standard output
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar (c);
		c++;

	}
	_putchar ('\n');
}
