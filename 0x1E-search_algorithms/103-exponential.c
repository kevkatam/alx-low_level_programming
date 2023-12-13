#include "search_algos.h"
/**
 * binary_s - recursive binary search algorithm
 * @array: pointer to the first element of the array to be searhced
 * @size: size of the array
 * @value: value to be searched
 * Return: index of value or -1 if NULL
 */
int binary_s(int *array, size_t size, int value)
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
		return ((int)mid);

	if (array[mid] > value)
		return (binary_s(array, mid, value));

	mid++;
	return (binary_s(array + mid, size - mid, value) + mid);
}
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched
 * Return: index of value or -1 if NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = binary_s(array, size, value);
	if (index >= 0 && array[index] != value)
		return (-1);
	return (index);
}
/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, bound;
	int r;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while (array[i] < value && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	if (i >= size)
		bound = size - 1;
	else
		bound = i;

	i /= 2;

	printf("Value found between indexes [%lu] and [%lu]\n", i, bound);
	r = binary_search(array + i, (bound + 1) - i, value);
	if (r >= 0)
		r += i;
	return (r);
}
