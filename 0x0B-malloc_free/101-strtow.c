#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - converts a string literal to words seperated with space
 * @str: the string literal
 * Return: an array of pointers
*/

char **strtow(char *str)
{
	int i = 0, j = 0, k = 0;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	arr = mem_alloc(str);

	if (arr == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		if (str[i] != ' ')
		{
			arr[k][j] = str[i];
			j++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				arr[k][j++] = '\0';
				k++;
				j = 0;
			}
		}
		i++;
	}
	arr[k] = NULL;
	return (arr);
}

/**
 * word_count - finds the total number of words in a given string literal
 * @s: the string literal
 * Return: the total number of words
*/

int word_count(char *s)
{
	int i = 0;
	int w_count = 0;

	while (s[i])
	{
		if ((s[i] != ' ') && ((s[i - 1] == ' ') || !(s[i - 1])))
		{
			w_count++;
		}
		i++;
	}
	return (w_count);
}

/**
 * mem_alloc - allocate memory space for an an array of pointers
 * @s: string literal
 * Return: pointer to array (success) or NULL (failure)
*/

char **mem_alloc(char *s)
{
	int i = 0, j = 0, w_count, c_count = 0;
	char **arr;

	w_count = word_count(s);

	if (w_count == 0)
		return (NULL);
	arr = malloc(sizeof(char *) * (w_count + 1));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	while (s[i])
	{
		if (s[i] != ' ')
		{
			c_count++;
			if (s[i + 1] == ' ' || s[i + 1] == '\0')
			{
				c_count++;
				arr[j] = malloc(sizeof(char) * c_count);

				if (arr[j] == NULL)
				{
					for (j--; j >= 0; j--)
					{
						free(arr[j]);
						return (NULL);
					}
					free(arr);
				}
				j++;
				c_count = 0;
			}
		}
		i++;
	}
	return (arr);
}
