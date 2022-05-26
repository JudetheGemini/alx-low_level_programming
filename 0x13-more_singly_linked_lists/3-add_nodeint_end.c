#include "lists.h"
/**
 * add_nodeint_end - add a node to the end of a list
 * @head: node to append to end
 * @n: data in node
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *temp;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);

	tail->n = n;
	tail->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = tail;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = tail;
	}
	return (tail);
}
