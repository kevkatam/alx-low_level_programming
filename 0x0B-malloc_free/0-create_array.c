#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it with a
 *  specific char.
 *  @size: sie of the array 
 *  @c: specific char
 *  Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i;

	if (size == 0)
		return (NULL);
	j = malloc(sizeof(c) * size);

	if (j == NULL)
		return (NULL);

	for (i = 0; i < size; i ++)
		j[i] = c;
	return (j);
}
