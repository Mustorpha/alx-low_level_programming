#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two string int a newly allocated memory
 * @s1: first source string
 * @s2: second source string
 * Return: concatenated string (success) or NULL (failure)
*/

char *str_concat(char *s1, char *s2)
{
    int len, i, j;

    if (s1 == NULL)
    {
        *s1 = "";
    }
    else
    {
        for (i = 0; s1[i] != '\0'; i++)
        {
            len++;
        }
    }
    if (s2 == NULL)
    {
        *s2 = "";
    }
    else
    {
        for (i = 0; s2[i] != '\0'; i++)
        {
            len++;
        }
    }
    char *str = (char *)malloc((++len) * sizeof(char));
    
    if (str == NULL)
    {
        free(str);
        return NULL;
    }
    i = 0;
    j = 0;

    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }

    while(s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }

    return (str);
}