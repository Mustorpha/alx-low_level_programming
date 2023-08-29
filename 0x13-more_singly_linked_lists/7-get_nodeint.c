#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the requested node (success), NUL (failure)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h_copy = head;

	while (h_copy && i < index)
	{
		h_copy = h_copy->next;
		i++;
	}

	return (h_copy ? h_copy : NULL);
}
