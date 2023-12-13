#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted list of integers using
 * the Jump search algorithm.
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, k, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	i = 0;
	m = (size_t)sqrt((double)size);
	k = 0;

	do {
		prev = list;
		k++;
		i = k * m;

		while (list->next && 
