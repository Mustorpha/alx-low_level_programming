#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a singly linked list
 * @h: a pointer to the list
 * Return: number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *hCopy;
	unsigned int number_of_nodes = 0;

	hCopy = h;
	while (hCopy)
	{
		printf("%d\n", hCopy->n);
		number_of_nodes++;
		hCopy = hCopy->next;
	}
	return (number_of_nodes);
}
