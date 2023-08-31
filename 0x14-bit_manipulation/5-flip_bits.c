#include "main.h"

/**
 * flip_bits - counts the number of bits to flip to
 * 		convert a binary digit to another
 * @n: the orginal bit representation
 * @m: the intended bit conversion
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ex_or = n ^ m, bits = 0;

	while (ex_or > 0)
	{
		bits += (ex_or & 1);
		ex_or >>= 1;
	}

	return (bits);
}
