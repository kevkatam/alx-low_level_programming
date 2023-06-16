#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_gridd - frees a 2 dimensional array
 * @grid: multidimensional array of char
 * @h: height of the array
 * Return: no return
 */
void free_gridd(char **grid, unsigned int h)
{
	if (grid != NULL && h != 0)
	{
		for (; h > 0; h--)
			free(grid[h]);
		free(grid[h]);
		free(grid);
	}
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	char **a;
	unsigned int c, h, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (c = h = 0; str[c] != '0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			h++;
	a = malloc((h + 1) * sizeof(char *));
	if (a == NULL || h == 0)
	{
		free(a);
		return (NULL);
	}
	for (i = a1 = 0; i < h; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				a[i] = malloc((c - a1 + 2) * sizeof(char));
				if (a[i] == NULL)
				{
					free_gridd(a, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			a[i][j] = str[a1];
		a[i][j] = '\0';
	}
	a[i] = NULL;
	return (a);
}
