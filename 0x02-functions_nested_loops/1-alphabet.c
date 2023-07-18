#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lower case
 *
 * Description: A funtion that prints the known alphabets in
 * lower case using the while loop
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
