#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to null
 * @head: head of the linked list
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (*head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			temp = temp->next;
			free(temp);
		}
		*head = NULL;
	}
}
