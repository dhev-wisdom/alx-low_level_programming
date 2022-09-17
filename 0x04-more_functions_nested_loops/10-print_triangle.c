#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 */

void print_triangle(void)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 0; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index++)
			{
				_putchar(' ');
			}

			for (index = 0; index < hash; index++)
			{
				_putchar('#');
			}

			if (size == hash)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
