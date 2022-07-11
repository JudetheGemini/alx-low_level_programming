#include "lists.h"
/**
 * sum_dlistint - sum all data contained in
 * each node in the list
 * @head: head of node
 * Return: sum of entire list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *current = head;

	if (current == NULL)
		return (sum);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
