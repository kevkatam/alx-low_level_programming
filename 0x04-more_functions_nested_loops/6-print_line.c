#include "main.h"
/**
 * print_line -  draws a straight line in the terminal
 * @n: input integer
 * Return: no return
 */
void print_line(int n)
{
	int i;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(45);
		n++;
	}
	_putchar('\n');
}

