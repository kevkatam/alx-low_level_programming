#include "main.h"
/**
 * print_number -  prints an integer
 * @n: input integer
 * Return: no return
 */
void print_number(int n)
{
	unsigned int a, b, count;

	if (n < 0)
	{
		_putchar('-');
		a = n * -1;
	}
	else
	{
		a = n;
	}
	b = a;
	count = 1;
	while (b > 9)
	{
		b = b /10;
		count = count * 10;
	}
	for(; count >= 1; count = count / 10)
	{
		_putchar(((a / count) % 10) + 48);
	}
}
