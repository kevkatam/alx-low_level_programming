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
	dlistint_t *h, *h1;
	unsigned int i;

	h = *head;
	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	i = 0;
	while (h != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h1->next = h->next;
				if (h->next != NULL)
					h->next->prev = h1;
			}
			free(h);
			return (1);
		}
		h1 = h;
		h = h->next;
		i++;
	}
	return (-1);
}
