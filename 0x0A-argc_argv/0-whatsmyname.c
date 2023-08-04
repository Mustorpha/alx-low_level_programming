#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the running program
 * @argc: the arguments count
 * @argv: pointer array of all pointers to the command line arguments
 * Return: 0
 */

int main(int __attribute__((__unused__))  argc, char **argv)
{
	printf("%s\n", *argv);


	return (0);
}
