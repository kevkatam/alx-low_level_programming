#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: input string
 * Return: no return
 */
void print_rev(char *s)
{
	int count = _strlen(s);

	while (count >= 0 )
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
