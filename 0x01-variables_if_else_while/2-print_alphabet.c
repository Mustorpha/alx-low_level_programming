#include <stdio.h>

/**
 * main - print all alphabet letters
 *
 * Description: the function prints all avaliable alphabetic
 * letters in a row and insert a newline after printing
 * Return:0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}

