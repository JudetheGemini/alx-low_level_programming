#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: node to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node);
	}
}
