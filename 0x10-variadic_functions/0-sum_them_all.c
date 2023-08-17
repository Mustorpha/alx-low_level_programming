#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum up all argument received
 * @n: the argument count
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args_input;

	if (n == 0)
		return (0);
	va_start(args_input, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args_input, int);
	}
	va_end(args_input);

	return (sum);
}
