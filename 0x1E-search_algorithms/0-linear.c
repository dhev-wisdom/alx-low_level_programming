#include <stdio.h>
/*
 * function that searches for a value in an array of integers
 * using the Linear search algorithm
 * array -  pointer to the first element of the array to search in
 * size -  number of elements in array
 * value - the value to search for
 * Return: first index where value is located
 ** -1: If value is not present in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	int ss = size;
	int i;

	for (i = 0; i < ss; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
