#include "main.h"

/**
* print_number - prints an integer tothe stdout
* @n: number to be printed
* Return: the integer
*/

void print_number(int n)
{
	unsigned int temp = n;

	if (n < 0)
	{
		_putchar('-');
		temp = -temp;
	}

	if ((temp / 10) > 0)
		print_number(temp / 10);

	_putchar((temp % 10) + '0');
}

