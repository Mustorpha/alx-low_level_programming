#include "3-calc.h"

/**
 * op_add - adds two integer together
 * @a: the first integer
 * @b: the second integer
 * Return: the summation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integer form each other
 * @a: the first integer
 * @b: the second integer
 * Return: the result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: the dividend
 * @b: the divisor
 * Return: the floor division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the modulus of a number
 * @a: the number
 * @b: the module
 * Return: the modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
