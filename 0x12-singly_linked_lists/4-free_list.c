#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head of the linked list
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *c;

	while ((c = head) != NULL)
	{
		head = head->next;
		free(c->str);
		free(c);
	}
}
