#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: no return
 */
void rev_string(char *s)
{
	int i, count = 0;

	while (s[count] != '\0')
	{
		_putchar(s[count]);	
		count++;
	}
	_putchar('\n');
	i = count - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
