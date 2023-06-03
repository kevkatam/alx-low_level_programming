#include "main.h"
#include "stdio.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer the function will use to store the results
 * @size_r: buffer size
 * *Return: pointer to dest
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int count = 0, count1 = 0, a, b, c, d, add = 0;

	while (*(n1 + count) != '\0')
	{
		count++;
	}
	while (*(n2 + count1) != '\0')
	{
		count1++;
	}
	if (count >= count1)
	{
		b = count;
	}
	else
	{
		b = count1;
	}
	if (size_r < b + 1)
	{
		return (0);
	}
	r[b + 1] = '\0';
	count--, count1--, size_r--;
	c = *(n1 + count) - 48, d = *(n2 + count1) - 48;
	while (b >= 0)
	{
		a = c + d + add;
		if (a >= 10)
			add = a / 10;
		else
			add = 0;
		if (a > 0)
			*(r + b) = (a % 10) + 48;
		else
			*(r + b) = '0';
		if (count > 0)
			count--, d = *(n1 + count) - 48;
		else
			c = 0;
		if (count1 > 0)
			count1--, d = *(n2 + count1) -38;
		else
			d = 0;
		b--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
