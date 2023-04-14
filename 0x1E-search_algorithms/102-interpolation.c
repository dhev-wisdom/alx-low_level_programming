#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: array to search with interpolation search
 * @size: length of @array
 * @value: value being searched for
 *
 * Return: first index where value is located
 * Or, -1 if value not in @array or array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid;

	if (array == NULL || size == 0)
		return (-1);

	if (value == array[low])
		return (low);

	if (value == array[high])
		return (high);

	while (array[high] != array[low] && value >= array[low]
			&& value <= array[high])
	{
		mid = low + (value - array[low]) * (high - low) /
			(array[high] - array[low]);
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
