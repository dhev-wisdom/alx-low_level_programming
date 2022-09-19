#include "main.h"
#include <stdio.h>

/**
 * print_rev - print the string in reverse followed by a new line
 * @s: The string to be printed in reverse.
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
	{
		putchar(s[index]);
	}

	putchar('\n');
}
