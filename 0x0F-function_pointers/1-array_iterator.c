#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute function on each element
 * @array: The given array.
 * @size: Size of the array
 * @action: Pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++
	}
}
