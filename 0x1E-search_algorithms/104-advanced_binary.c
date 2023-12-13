#include "search_algos.h"
/**
 * advanced_b - searches for a value in a sorted array of integers
 * using binary searhc algo
 * @array: array of numbers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if NULL
 */
int advanced_b(int *array, size_t size, int value)
{
	size_t i;
	size_t mid = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array:");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? "" : ",", array[i]);

	printf("\n");
	if (mid && size % 2 == 0)
		mid--;

	if (array[mid] == value)
	{
		if (mid > 0)
			return (advanced_b(array, mid + 1, value));
		return ((int)mid);
	}
	if (array[mid] > value)
		return (advanced_b(array, mid + 1, value));
	mid++;
	return (advanced_b(array + mid, size - mid, value) + mid);
}
/**
 * advanced_binary - function that searches for a value in a sorted
 * array of integers.
 * @array: pointer to the first element of the array to search in
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if null
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = advanced_b(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);
	return (i);
}
