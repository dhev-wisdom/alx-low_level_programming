#include <stdio.h>
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array to be saerched
 * @size: size/length of @array
 * @value: value being searched for
 *
 * Return: -1 if value not in array or array is NULL, else index of value
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int middle, i;

	while (low <= high)
	{
		printf("Searching in array: ");
		while (array[i])
		{
			printf("%d", array[i]);
			i++;
		}
		printf("\n");
		middle = (low + high) / 2;
		if (array[middle] == value)
			return (array[middle]);
		if (array[middle] < value)
		{
			low = middle + 1;
		}
		else if (array[middle] > value)
			high = middle - 1;
		else
			return (array[middle]);
	}

	return (-1);
}
