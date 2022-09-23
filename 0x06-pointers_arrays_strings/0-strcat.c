#include "main.h"

/**
 * _strcat - Append the src string to the dest string
 * @src: The string to append
 * @dest: The string to be appended to
 *
 * Return: A pointer to the resulting string, @dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
