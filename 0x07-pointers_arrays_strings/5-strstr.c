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

	for (; haystack != '\0'; haystack++)
	{
		ihaystack = haystack;
		jneedle = needle;
		for (; *haystack != '\0' && jneedle != '\0' && *haystack == *jneedle; haystack++, jneedle++)
		{
		}
		if (!*jneedle)
			return (ihaystack);
	}
	return (0);
}
