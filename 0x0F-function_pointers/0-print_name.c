#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a string
 * @name: the name to print
 * @f: a pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
