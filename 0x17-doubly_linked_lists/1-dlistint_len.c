#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of the doubly linked list
 * Return: number of elements in dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;

	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
