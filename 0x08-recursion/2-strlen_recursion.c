#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: The sy=tring to print its length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
