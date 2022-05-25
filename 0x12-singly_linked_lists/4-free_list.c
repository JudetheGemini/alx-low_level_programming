#include "lists.h"
/**
 * free_list - removes a node
 * @head: node to perfon deletion
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node;

	current_node = head;
	while ((head != NULL))
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
