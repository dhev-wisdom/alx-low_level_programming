#include "main.h"

/**
 * _strchr - search for a character in a string
 * @s: the string to be checked
 * @c: The character to be returned
 *
 * Return: c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i), i++)
	{
		if (*(s + i) == c)
			break;
	}

	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
