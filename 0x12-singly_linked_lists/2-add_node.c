#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the linked list
 * @str: string to store the list
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	size_t ichar;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);

	for (ichar = 0; str[ichar]; ichar++)
		;
	n->len = ichar;
	n->next = *head;
	*head = n;
	return (*head);
}
