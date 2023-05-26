#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: no return
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 48; j <= (57 + 53); j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
