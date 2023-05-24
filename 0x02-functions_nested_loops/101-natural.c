#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, a;

	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			a += i;
		}
		i++;
	}
	printf("%d\n", a);
	return (0);
}
