#include "main.h"

/**
 * print_number - prints integers using putchar
 * @n: integer to print
 * Return: void
 */

void print_number(int n)
{
	int pow;

	pow = base10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
		_putchar('0');

	else
	{
		while (n / pow == 0)
			pow /= 10;

		while (power >= 1)
		{
			_putchar((n / pow) + '0');
			n %= pow;
			pow /= 10;
		}
	}
}
