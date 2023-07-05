#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a
 *  listint_t linked list.
 *  @head: head of the linked list
 *  @index: index of the node to be deleted
 *  Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *del;

	temp = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
	}
	if (temp == NULL || (temp->next == NULL && index != 0))
	{
		return (-1);
	}
	del = temp->next;

	if (index != 0)
	{
		temp->next = del->next;
		free(del);
	}
	else
	{
		free(temp);
		*head = del;
	}
	return (1);
}
