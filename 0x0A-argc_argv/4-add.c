#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of arguments recieved
 * @argc: the total number of arguments
 * @argv: an array of accepted arguments
 * Return: 1 or 0
 */

int main(int argc, char **argv)
{
	int i;
	int sum;
	int j;

	sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i])
	}

	printf("%d\n", sum);
	return (1);
}
