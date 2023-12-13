#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high, low;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;

	while (size)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			       * (value - array[low]));
		if(pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		}
		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high)
			break;
	}
	return (-1);
}
