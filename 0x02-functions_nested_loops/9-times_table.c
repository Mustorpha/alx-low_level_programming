#include "main.h"

/**
 * time_table - prints the nine timetable
 *
 * Description: A function that prints the 9 timetable
 * starting from 0
 * Return: nothing
 */
void times_table(void)
{
	int  x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (y == 0)
				_putchar(z + '0');
			else
			{
				if (x < 10)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(z + '0');
				}
				else
				{
					_putchar(',');
					_putchar(32);
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
