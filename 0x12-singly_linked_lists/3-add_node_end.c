#include "lists.h"
/**
 * add_node_end - adds a node to the end
 * @head: head of the list
 * @str: string to store in the list
 * Return: address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	new->len = strlen(str);
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
