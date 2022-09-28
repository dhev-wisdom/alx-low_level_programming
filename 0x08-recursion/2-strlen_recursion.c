#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: The string to print its length
 *
 * Return: the length of the string @s
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
