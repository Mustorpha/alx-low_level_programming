#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print anything of a specified format
 * @format: avaliable format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args_input;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char p_arg[] = "cifs";

	va_start(args_input, format);
	while (format && format[i])
	{
		j = 0;
		while (p_arg[j])
		{
			if (format[i] == p_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args_input, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(args_input, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(args_input, double)), c = 1;
			break;
		case 's':
			str = va_arg(args_input, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(args_input);
}
