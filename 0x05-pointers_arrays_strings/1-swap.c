#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two variables
 * @a: the first variable
 * @b: the second variable
 *
 * Description: The function takes the pointer to the two
 * concerned variable and swaps their values
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
