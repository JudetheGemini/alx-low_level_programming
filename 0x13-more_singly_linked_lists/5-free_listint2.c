#include "lists.h"
/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: node to free
 * Return: void
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *current;

	if (head != NULL)
	{
	while ((temp = curr) != NULL)
	{
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
	}
}
