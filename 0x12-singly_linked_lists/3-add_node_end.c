#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: head of the linked list
 * @str: string to stor in the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *t;
	size_t ichar;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);

	for (ichar = 0; str[ichar]; ichar++)
		;
	n->len = ichar;
	n->next = NULL;
	t = *head;

	if (t == NULL)
	{
		*head = n;
	}
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = n;
	}
	return (*head);
}
