#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
	int count = 0;

	if (str[count] == '\0')
	{
		_putchar('\n');
	}
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
		_putchar('\n');
	}
}
