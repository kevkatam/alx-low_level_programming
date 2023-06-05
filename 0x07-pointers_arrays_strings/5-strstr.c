#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ihaystack;
	char *jneedle;

	while (*haystack != '\0')
	{
		ihaystack = haystack;
		jneedle = needle;

		while (*haystack != '\0' && *jneedle != '\0' && *haystack == *jneedle)
		{
			haystack++;
			jneedle++;
		}
		if (!*jneedle)
		{
			return (ihaystack);
		haystack = ihaystack + 1;
		}
	}
	return (0);
}
