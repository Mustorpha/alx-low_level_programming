#include "main.h"

/**
 * _abs - prints the ablsolute the value of a character
 * @n: the character to evaluated
 *
 * Description: A function that prints the absolute value of a
 * character
 * Return: the absolute value of the interger
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
