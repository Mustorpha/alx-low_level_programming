#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of arguments recieved
 * @argc: the total number of arguments
 * @argv: an array of accepted arguments
 * Return: 1 or 0
 */

int main(int argc, int argv)
{
	int i;
	int sum;

	sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (*(argv + i) >= "0" && *(argv + i) <= "9")
		{
			sum += *(argv + i);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (1);
}
