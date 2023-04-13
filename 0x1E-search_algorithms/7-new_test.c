#include <stdio.h>
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	unsigned int i, j;

	if (array == NULL || size < 1)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value >= array[i + jump])
		{
			printf("Value found between indexes [%d] and [%d]\n", i, i + jump);
			if (value == array[i + jump])
			{
				printf("Value checked array[%d] = [%d]\n", i + jump, array[i + jump]);
				return (i + jump);
			}
			if (value == array[i])
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				return (i);
			}
			for (j = i; j <= i + jump; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}

	return (-1);
}
