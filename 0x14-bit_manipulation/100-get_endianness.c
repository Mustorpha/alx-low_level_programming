#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 (big endian) 1 (little endian)
 */
int get_endianness(void)
{
	int bit = 1;
	char *endian = (char *)&bit;

	if (*endian == 1)
		return (1);

	return (0);
}
