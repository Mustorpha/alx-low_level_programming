#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of a singly  linkedlist
 * @head: the linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *head)
{
	size_t nodes = 0;
	const list_t *current = head;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		nodes++;
	}
	return (nodes);
}
