#include "function_pointers.h"

/**
 * array_iteratot - execute function on each element
 * @array: The given array.
 * @size: Size of the array
 * @action: Pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
