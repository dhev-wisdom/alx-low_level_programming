#include "main.h"

/**
 * print_most_numbers - Prints the numbers 1 - 14 ten times
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
