#include <stdarg.h>
#include "main.h"

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
		sum += a_args(args_input, int);
	}
	var_end(args_input);

	return (sum);
}
