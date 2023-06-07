#include "main.h"
/**
 * prime - finds prime number
 * @n: number
 * @i: iterator
 * Return: 0 or 1
 */
int prime(int n, int i)
{

	if (n <= 0)
		return (0);
	if (n % i == 0)
		return (1);
	else
		return(prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *  otherwise return 0.
 *  @n: input number
 *  Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
