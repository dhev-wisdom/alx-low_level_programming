#include "main.h"

/**
 * factorial - Finds the factorial of a number @n
 * @n: The number to find the factorial
 *
 * Return: The factorial of @n.
 */

int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else
		return (-1);
}
