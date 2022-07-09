/**
 * dlistint_len - prints number of
 * elements in a list
 * @h: head of node
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int num = 0;

	if (h == NULL)
		return (num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
