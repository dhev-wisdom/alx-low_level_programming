#include "main.h"

/**
 * _strncat - Cancatenate two strings, @dest and @src
 * using at most @n bytes from @src
 * @dest: The string to be appended to.
 * @src: The string to append.
 * @n: Number of bytes from @src.
 *
 * Return: A pointer to the string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
