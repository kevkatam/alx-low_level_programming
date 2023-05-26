#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * replacing multiples of 3 with Fizz. and multiples of 5 with buzz
 * and multiples of both with fizzbuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i ++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
}
