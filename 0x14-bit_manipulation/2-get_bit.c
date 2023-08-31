#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the bit representation
 * @index: the position of the requested bit
 * Return: the bit value (success) -1 (failed)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
