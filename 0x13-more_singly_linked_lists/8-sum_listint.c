#include "lists.h"

/**
 * sum_listint - sum up all the data in a linked list
 * @head: first node in the linked list
 * Return: the total
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
