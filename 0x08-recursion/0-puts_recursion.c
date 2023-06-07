#include "main.h"
/**
 * _puts_recursion -  prints a string
 * @s: string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i;

	if (*(s + i) == 0)
		return (s);
	{
		_putchar(*(s + i));
		_puts_recursion(*(s + i - 1));
	i++;
	}
	_putchar('\n');
}

