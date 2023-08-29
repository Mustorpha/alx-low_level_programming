#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the linked list to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *h_copy;

	if (head == NULL)
		return;

	while (*head)
	{
		h_copy = (*head)->next;
		free(*head);
		*head = h_copy;
	}

	*head = NULL;
}
