#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * contrast - contrasts each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */
int contrast(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (contrast(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - hat returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if s a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (contrast(s, 0, _strlen(s) - 1));
}
