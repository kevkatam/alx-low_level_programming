#include "main.h"
/**
 * iterator - finds square root of a number
 * @i: iterator
 * @n: input number
 * Return: -1, or square root of number
 */
int iterator(int n, int i)
{
	if (i % (n % i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (iterator(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (iterator(n, 2));
}
