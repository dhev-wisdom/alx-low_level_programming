#include "main.h"

/**
 * clear_bits - sets the value of a bit at a given index to 0
 * @nL parameter
 * @index: index
 *
 * Return: 1 if succesful, -1 if failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
