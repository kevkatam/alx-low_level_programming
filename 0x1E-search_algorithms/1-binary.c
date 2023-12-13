#include "search_algos.h"
/**
 * binary_s - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if null
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
		return (mid);

	if (array[mid] > value)
		return (binary_s(array, mid, value));

	mid++;
	return (binary_s(array + mid, size - mid, value) + mid);
}
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index;

	index = binary_s(array, size, value);

	if (index < size && array[index] == value)
		return (index);

	return (-1);
}
