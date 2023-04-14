#include <stdio.h>

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: array to be searched
 * @size: size of @array
 * @value: value whose index isto be found in @array
 *
 * Return: index of value if found, -1 if array is NULL
 */

int binary_search(int *array, int value, int left, int right);
int min(int a, int b);

int exponential_search(int *array, size_t size, int value)
{
	int bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	return (binary_search(array, value, bound / 2, min(bound + 1, size - 1)));
}

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: array to be searched
 * @value: value searched for
 * @left: search lower bound
 * @right: search upper bound
 *
 * Return: index of value or -1 if value not in array or array is NULL
 */

int binary_search(int *array, int value, int left, int right)
{
	int mid;
	int count;

	printf("Value found between indexes [%d] and [%d]\n", left, right);
	while (left <= right)
	{
		count = left;
		mid = (left + right) / 2;
		printf("Searching in array: ");
		while (count <= right)
		{
			printf("%d", array[count]);
			if (count < right)
				printf(", ");
			count++;
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * min - function to find the minimun of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: lesser number or first number if both are equal
 */

int min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}
