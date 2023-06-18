#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array of elements
 * @size: amount of bytes each element holds
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;

	a = malloc(nmemb * size);

	if (a == 0)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		a[i] = 0;
	}
	return (a);
}
