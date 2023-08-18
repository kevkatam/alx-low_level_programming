#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the dlistint_t list
 * @n: value to be added at the end of the list
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	if (h == NULL)
	{
		*head = new;
	}
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	new->prev = h;
	return (new);
}
