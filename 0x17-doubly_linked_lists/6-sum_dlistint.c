#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 *  linked list.
 *  @head: head of the doubly linked list
 *  Return: sum of all data n in dlistint_ or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int add;

	add = 0;
	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
