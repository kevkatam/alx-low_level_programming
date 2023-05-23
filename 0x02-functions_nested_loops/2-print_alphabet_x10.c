#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lower case ten times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int a;
	a = 0;

	while (a <= 9)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	a++;
}
