#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prubts the opcodes of its
 * own main function
 * @argc: total number of argument received
 * @argv: an array of pointers to arguments
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int i;
	char *ops;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ops = (char *)&main;

	while (i)
	{
		if (i == 1)
			printf("%.2hhx\n", *(ops));
		printf("%.2hhx ", *(ops));
		ops++;
		i--;
	}
	return (0);
}
