#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 *
 * @s: The string to be printed to stdout.
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
