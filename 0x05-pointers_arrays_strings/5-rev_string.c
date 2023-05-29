#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: no return
 */
void rev_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
		
		count = count -1;
		while (count >= 0)
		{
			count--;
		}
	}
}
