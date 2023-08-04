#include "main.h"

/**
 * _islower - checks for a lower case character
 * @c: the character to check for lower case
 *
 * Description: A function that checks if a character
 * is lower case or not
 * Return: 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
