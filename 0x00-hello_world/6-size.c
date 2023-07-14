#include <stdio.h>

/**
 * main - A program that prints the size of each datatype
 *
 * Description: The program uses printf to output the byte
 * size of the variable type in C
 *
 * Return:0
*/

int main(void)
{

	/* printing the size of each datatype */
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);

}
