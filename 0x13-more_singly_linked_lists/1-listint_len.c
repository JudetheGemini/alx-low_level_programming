#include "lists.h"
/**
 * listint_len - return number of elements
 * @h: list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
