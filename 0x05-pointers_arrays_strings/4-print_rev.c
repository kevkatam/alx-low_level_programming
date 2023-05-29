#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: input string
 * Return: no return
 */
void print_rev(char *s)
{
	int count = s['\0'];

	while (count < s['\0'])
	{
		_putchar(s[count]);
		count --;
	}
	_putchar('\n');
}
