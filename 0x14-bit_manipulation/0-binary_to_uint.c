#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an integer
 * @b: pointer to the binary digit
 * Return: decimal integer (success) 0 (failed)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0, b_pow = 1;
	int len = 0;

	if (!b)
		return (0);
	while (b[len])
		len++;
	len--;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		d += (b[len] - '0') * b_pow;
		b_pow *= 2;
		len -= 1;
	}

	return (d);
}
