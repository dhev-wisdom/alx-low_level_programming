#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 *
 * @s: The string to be printed to stdout.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;

	_putchar(s[i]);
	_puts_recursion(s + 1);
	_putchar('\n');
}
