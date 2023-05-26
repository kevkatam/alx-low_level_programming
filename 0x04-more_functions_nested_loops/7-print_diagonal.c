#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input integer
 * Return: no return
 */
void print_diagonal(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		_putchar(92);
		_putchar('\n');
		_putchar(32);
	}
	_putchar('\n');
}
