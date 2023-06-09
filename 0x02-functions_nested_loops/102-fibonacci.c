#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int a = 1, b = 1, temp;

	for (i = 0; i < 50; i++)
	{
		printf("%ld", b);
		if (i != 49)
		{
			printf(", ");
		}
		temp = b;
		b = a + b;
		a = temp;
	}
	printf("\n");
	return (0);
}
