#include "3-calc.h"

/**
 * op_add - add two integers together
 * @a: first integer
 * @b: second integer
 * Return: the summation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers from each other
 * @a: first integer
 * @b: second integer
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integer together
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integer
 * @a: first integer
 * @b: second integer
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
