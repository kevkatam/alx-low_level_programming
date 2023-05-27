#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued fibonacci terms
 *
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, temp, sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum = sum + b;
		}
	temp = b;
	b = a + b;
	a = temp;
	}
	printf("%ld\n", sum);
	return (0);
}
