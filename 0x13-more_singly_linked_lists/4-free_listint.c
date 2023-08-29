#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list allocated memory
 * @head: linked list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *h_copy;

	while (head)
	{
		h_copy = head->next;
		free(head);
		head = h_copy;
	}
}
