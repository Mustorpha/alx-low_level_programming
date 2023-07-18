#include "main.h"

/**
 * main - prints the string _putchar to the standard output
 * 
 * Description: A functions that prints a string using
 * function _putchar
 * Return: 0
 */

int main(void)
{
	char recur[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(recur[i]);
	}
	_putchar('\n');
	return (0);
}
