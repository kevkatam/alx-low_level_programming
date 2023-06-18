#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes in memory
 * Return: pointer to allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, k, l;

	if (s1 == NULL)
	{
		s1 == "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
	{
		n = j;
	}
	k = i + n;

	a = malloc(k + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < k; l++)
	{
		if (l < i)
		{
			a[l] = s1[l];
		}
		else
		{
			a[l] = s2[l - i];
		}
	}
	a[l] = '\0';
	return (a);
}
