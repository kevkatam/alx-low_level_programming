#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: head of the list
 * Return: no return
 */
void free_list(list_t **head)
{
	list_t *temp;
	list_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - prints a linked list
 * @head: head of linked list
 * Return: number of noddes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	list_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = hptr;
		hptr = new;
		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&hptr);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_list(&hptr);
	return (nodes);
}
