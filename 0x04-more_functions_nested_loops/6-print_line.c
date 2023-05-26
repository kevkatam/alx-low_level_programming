#include "main.h"
/**
 * print_line -  draws a straight line in the terminal
 * @n: input integer
 * Return: no return
 */
void print_line(int n)
{
	int i;
	i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}

