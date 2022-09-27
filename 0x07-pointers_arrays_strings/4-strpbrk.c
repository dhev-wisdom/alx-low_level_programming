#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 *
 * @s: The string to be searched
 * @accept: The string to look out for
 *
 * Return: A pointer to the byte in @s that matches one of the bytes in @accept
 * or NULL if no such byte if found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (s + 1);
}
