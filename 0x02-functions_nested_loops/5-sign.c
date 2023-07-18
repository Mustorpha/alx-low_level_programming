#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the chracter to prints it's sign
 *
 * Description: A function that checks for the sign of
 * character and prints out the detected sign
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
