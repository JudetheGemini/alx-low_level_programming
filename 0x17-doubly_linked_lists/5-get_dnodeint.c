#include "lists.h"
/**
 * get_dnodeint_at_index - get node at a particular position
 * @head: head of node
 * @index: desired index to be returned
 * Return: data at zero index position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	dlistint_t *node;
	unsigned int count = 0;

	if (temp == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (index == count)
			node = temp;
		count++;
		temp = temp->next;
	}
	return (node);
}
