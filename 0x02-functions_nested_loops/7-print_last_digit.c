#include "main.h"

/**
 * print_last_digit - prints the last digit of a collection of integers
 * @n: the set of integers to be slice
 *
 * Description: A functions that prints the last digit of a set of integers
 * into the standard output
 * Return: the last digit of a
 */

int print_last_digit(int n)
{
int a;
if (n < 0)
n = -n;
a = n % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}
