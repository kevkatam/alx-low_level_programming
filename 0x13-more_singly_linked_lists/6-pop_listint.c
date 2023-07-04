#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of a linked lists
 * Return:  returns the head node’s data (n), or zero if listint_t is empty
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *temp;
	listint_t *current;

	if (*head == NULL)
	{
		return (0);
	}

	current = *head;

	node = current->n;


	temp = current->next;

	free(current);
	*head = temp;
	return (node);
}
