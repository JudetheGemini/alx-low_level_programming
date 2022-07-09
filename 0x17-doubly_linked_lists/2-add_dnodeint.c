#include "lists.h"
/**
 * *add_dnodeint - add node to the front of list
 * @head: pointer to the head pointer
 * @n: data to be inserted in new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new;
	(*head) = new;

	return (new);
}
