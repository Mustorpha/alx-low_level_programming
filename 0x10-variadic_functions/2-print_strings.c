#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings and a new line
 * @separator: the string separator
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_input;
	unsigned int i;
	char *str;

	va_start(args_input, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args_input, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(args_input);
}
