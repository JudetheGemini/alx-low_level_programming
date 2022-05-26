#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int headNode;
	listint_t *h;
	listint_t *current_node;

	if (*head == NULL)
		return (0);

	current_node = *head;

	headNode = current_node->n;

	h = current_node->next;

	free(current_node);

	*head = h;

	return (headNode);
}
