#include "main.h"

/**
 * print_last_digit - Print last digit of a number.
 * @n: Thedigit to be printed.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	int r;
	
	r = (n % 10);

	if (r < 0)
		r *= -1;

	_putchar(r + '0');
	return (r);
}
