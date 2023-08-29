#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head of the linked list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *h_copy;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	h_copy = (*head)->next;
	free(*head);
	*head = h_copy;

	return (data);
}
