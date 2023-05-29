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
		_putchar(s[count]);
		count++;
	}
	_putchar('\n');
	count = count - 1;

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
