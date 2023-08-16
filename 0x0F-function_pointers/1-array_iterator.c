#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the target array
 * @size: size of the array
 * @action: the iterationg function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
