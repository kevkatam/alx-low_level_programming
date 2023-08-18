#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of dlistint_t list
 * @index: index of the node to be returned
 * Return: nth node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;
	size_t i, j;

	if (head == NULL)
		return (NULL);
	h = head;
	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	if (index >= i)
		return (NULL);
	j = 0;
	while (head != NULL)
	{
		head = head->next;
		j++;
		if (j == index)
			break;
	}
	return (head);
}
