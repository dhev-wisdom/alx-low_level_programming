#include "variadi_functions.h"
#include <stdio.h>
#include <stdarh.h>

/**
 * print_strings - Prints strings followed by a new line
 * @seperator: The string seperator
 * @n: The quantity of numbers
 * @...: The list of numbers
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *p;

	va_start(va_list, n);

	for (i = 0; i < n; i++)
	{
		if (seperator != NULL && i != 0)
		{
			printf("%s", seperator);
			p = va_arg(valist, char *);
			printf("%s", (p == NULL) ? "(nil)" : p);
		}
		putchar('\n');
		va_end(valist);

	}
}
