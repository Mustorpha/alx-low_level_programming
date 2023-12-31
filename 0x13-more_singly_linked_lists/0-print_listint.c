#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a singly linked list
 * @h: pointer to a list
 * Return: number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *h_copy;
	unsigned int number_of_nodes = 0;

	h_copy = h;
	while (h_copy)
	{
		printf("%d\n", h_copy->n);
		number_of_nodes++;
		h_copy = h_copy->next;
	}
	return (number_of_nodes);
}
