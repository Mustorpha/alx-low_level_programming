#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * 
 * Return: Always 0
 */
int main(void)
{
	long int a;
	long int inf;
	long int b;

	a = 612852475143;
	inf = -1;

	while (a % 2 == 0)
	{
		inf = 2;
		a /= 2;
	}

	for (b = 3; b <= sqrt(n); b = b + 2)
	{
		while (a % b == 0)
		{
			inf = b;
			a = a / b;
		}
	}

	if (a > 2)
		inf = a;

	printf("%ld\n", inf);

	return (0);
}
