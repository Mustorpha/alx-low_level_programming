#include <stdio.h>

/**
 * main - Print the alphabets in lower and upper case
 *
 * Description: the program uses the putchar function to
 * print the alphabetic letters in lower case and upper case
 * Return:0
 */

int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
			putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
