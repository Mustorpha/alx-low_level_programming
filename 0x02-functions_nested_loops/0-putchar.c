#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints _putchar to the standard output
 *
 * Description: A function that prints the string _putchar
 * to the standard output
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
