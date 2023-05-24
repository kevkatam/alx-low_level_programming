#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: input integer
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	int a;

	a = i % 10;
	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}

