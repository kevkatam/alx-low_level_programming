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
		_putchar('\n');
		count++;
	}
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (i >=0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
