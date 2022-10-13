#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all the parameters
 * @n: n args
 * Return: Sum or if n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);

		for(i = 0; i < n; i++)
		{
			sum += va_arg(arguments, int);
		}
		
		va_end(arguments);
	}

	return (sum);
}
