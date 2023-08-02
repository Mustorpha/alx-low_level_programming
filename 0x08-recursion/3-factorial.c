#include "main.h"

/**
 * factorial - finds the factorial of a number using recursion
 * @n: input number
 * Return: factorial number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
