#include "lists.h"
/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head of the dlistint_t list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}
	while ((cur = head) != NULL)
	{
		head = head->next;
		free(cur);
	}
}
