#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string followed by a new line to stdout
 * @str: variable storing the string to be printed.
 */

void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
