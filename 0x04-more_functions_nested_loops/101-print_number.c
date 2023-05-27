#include "main.h"
/**
 * print_number - prints an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int i, j, count;

	if (n < 0)
	{
		_putchar(45);
		j = n * -1;
	}
	else
	{
		j = n;
	}
	i = j;
	count = 1;
	
	while (i < 9)
	{
		i = i / 10;
		count = count *10;
	}

	for (; count >= 1; count = count /10)
	{
		_putchar(((j / count) % 10 + 48));
	}
}

