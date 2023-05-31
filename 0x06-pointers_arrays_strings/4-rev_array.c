#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements in the array
 * Return: reverse array
 */
void reverse_array(int *a, int n)
{
	int i = n - 1, count = 0, temp;

	while (count < i)
	{
		temp = a[count];
		a[count] = a[i];
		a[i] = temp;
		count++;
		i--;
	}
}
