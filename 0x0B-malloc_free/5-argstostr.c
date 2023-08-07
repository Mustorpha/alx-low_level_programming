#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all string arugements passed into the program
 * @ac: the total number of arguments supplied
 * @av: a pointer array containing pointers to the arguments
 * Return: concatenated string (success) or NULL (failure)
 */

char *argstostr(int ac, char **av)
{
    char *str;
    
    if (ac == 0 || av == NULL)
    {
        return NULL;
    }
}