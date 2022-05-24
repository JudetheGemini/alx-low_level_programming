#include "lists.h"
/**
 * list_len - function that returns number of elements in a linked list
 * @h: head node
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
