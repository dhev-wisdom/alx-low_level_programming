#include <stdio.h>

/**
 * advanced_binary -  searches for a value in a sorted array of integers
 * and returns index of first matching value even if value appear more than one
 * @array: array to search
 * @value: value searched for
 * @size: size of @array
 *
 * Return: index of value or -1 if array is NULL or size < 1
 */

int advanced_binary(int *array, size_t size, int value)
{
	int mid = (size - 1) / 2;
	int result, i;

	if (array == NULL || size == 0)
		return -1;

	printf("Searching in array: ");
	for (i = 0; i < (int)size; i++)
		printf("%d ", array[i]);
	printf("\n");

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
		{
			return mid;
		}
		else
		{
			return advanced_binary(array, mid, value);
		}
	}
	else if (array[mid] < value)
	{
		result = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (result == -1)
		{
			return (-1);
		}
		else
		{
			return result + mid + 1;
		}
	}
	else
	{
		return advanced_binary(array, mid, value);
	}
}
