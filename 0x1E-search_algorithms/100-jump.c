#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * Jump Search Algorithm
 *
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: length of @array
 * @value: value being searched for
 *
 * Return: index of value;
 * OR NULL if array id empty or null or value not in array
 */

int jump_search(int *array, size_t size, int value)
{
	int jump_size = sqrt(size);
	int i, ss = size, j;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < ss; i += jump_size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (i + jump_size >= ss || array[i + jump_size] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, i + jump_size);
			for (j = i; j <= i + jump_size && j < ss; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
	}

	return (-1);

}
