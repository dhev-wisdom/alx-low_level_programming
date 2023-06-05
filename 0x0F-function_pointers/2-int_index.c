#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array to be searched
 * @size: number of elements in array
 * @cmp: pointer to the fucntion used to compare values
 *
 * Return: index of the first element for which @cmp does not return 0
 * if no element matches - -1
 * if size <= 0 - -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
