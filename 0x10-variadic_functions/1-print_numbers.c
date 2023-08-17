#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers arguments
 * @separator: the output separator
 * @n: total number of argument received
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list args_input;

	va_start(args_input, n);
	while (i)
	{
		printf("%d", va_arg(args_input, int));
		if (separator && (i - 1))
			printf("%s", separator);
		i--;
	}
	printf("\n");
}
