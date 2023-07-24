#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - changes the value of a varriable outside the function
 * @n: pointer to the variable
 *
 * Description: The function takes in a pointer to the variable
 * and changes the value from the function
 *
 * Return: void
 */

void reset_to_98(int *n);
{
	*n = 98;

}
