#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabetic character 10 times
 *
 * Description: A functions that prints the whole alphabetic
 * character into the standard output
 * Return: 0
 */

void print_alphabet_x10(void)
{
int counter = 0;
while (counter < 10)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
counter++;
}
}
