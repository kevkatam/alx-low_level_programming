#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 *  linked list.
 *  @head: head of the list
 *  @index: index node to be deleted
 *  Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	int i, j;

	h = *head;
	if (h == NULL)
		return (-1);
	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	if (index >= i)
		return (-1);
	j = 0;
	while (h != NULL)
	{
		if (j == index)
			break;
		h = h->next;
		free(h);
	}
	return (1);
}
