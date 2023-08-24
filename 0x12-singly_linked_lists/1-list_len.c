#include "lists.h"
#include <stdio.h>

/**
 * list_len -  returns the number of elements in a linked list.
 * @head: the linked list
 * Return: number of elements
 */

size_t list_len(const list_t *head)
{
	size_t elements = 0;
	const list_t *current = head;

	while (current != NULL)
	{
		current = current->next;
		element++;
	}
	return (element);
}
