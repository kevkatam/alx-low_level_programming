#include "main.h"
#include <stdio.h>
/***
 * *_strcpy - that copies the string pointed to by src, to dest
 * @dest: buffer pointer
 * @src: input string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		{
		if (*(src + count) == '\0')
			break;
		count++;
		}
	}
	return (dest);
}
	

