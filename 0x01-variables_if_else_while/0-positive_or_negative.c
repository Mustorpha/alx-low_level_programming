#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine the sign of a given interger
 *
 * Description - The function prints the sign of a certain integer
 * either positive or negative and return zero if the integer
 * equals 0
 *
 * Return: 0
 * 
 */

int main(void)
{
		int n;
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n ==0)
		{
			printf("%d is zer0\n", n);
		}
		else if (n < 0)
		{
			printf("%d is negative\n", n);
		return (0);
}
