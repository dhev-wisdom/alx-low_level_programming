#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to the string params
 * Return: recursion.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: Pointer to the string
 * @l: Position
 * Return: boolena.
 */

int p1(char *s, char l)
{
	if(l < 1)
	{
		return (1);
	}

	if (*s == *(s + 1)
	{
		return (pl(s + 1, l -2));
	}

	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: Pointer to the string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pl(s, len - 1));
}
