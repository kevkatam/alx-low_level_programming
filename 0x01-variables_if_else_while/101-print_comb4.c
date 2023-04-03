#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 48;
	b = 48;
	c = 48;

	while (b < 58)
	{
		a = 48;
		while (a < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (a < b && b < a && a != b && b != c && c != a)
				{
					putchar(b);
					putchar(a);
					putchar(c);
				}
				if (b == 55 && a == 56 && c == 57)
				{
					break;
				}
				c++;
			}
			a++;
		}		
		b++;
	}
	putchar('n');
	return (0);
}
