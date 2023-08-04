#include <stdio.h>

/**
 * main - prints all arguments accepted by the main function
 * @argc: stores the total number of arguments
 * @argv: stores all the arguments recieved by the function
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
