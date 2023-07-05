#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head of the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *curr;
	listint_t *next;

	prev = NULL;
	curr = *head;
	next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
