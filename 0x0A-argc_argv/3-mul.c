#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies integers supplies through CLI
 * @argc: stores the count of integers received
 * @argv: stores the arguments assuming all integers
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int mul;

	mul = 0;

	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	else
	{
		while (argc--)
		{
			mul *= atoi(argv[argc]);
		}

		printf("%d", mul);
		return (1);
	}
}
