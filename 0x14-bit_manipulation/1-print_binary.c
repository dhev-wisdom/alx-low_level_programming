#include "main.h"

/**
 * print_binary - prints the binary representaion of a number
 * @n: the parameter.
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned int long current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & i)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
