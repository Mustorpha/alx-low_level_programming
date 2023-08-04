#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: total number of arguments
 * @argv: array of arguments received
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int coin;
	int i;
	int change;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coin = atoi(argv[1]);
	change = 0;

	if (coin < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && coin >= 0; i++)
	{
		while (coin >= cent[j])
		{
			change++;
			coin -= cent[j];
		}
	}

	printf("%d\n", change);
	return (0);
}
