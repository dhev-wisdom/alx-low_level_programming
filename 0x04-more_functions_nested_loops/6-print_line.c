#include "main.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: The number of characters to be printed.
 */

void print_line(int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
