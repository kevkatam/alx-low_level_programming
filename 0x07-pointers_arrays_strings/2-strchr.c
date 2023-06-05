#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character in s
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i, count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

