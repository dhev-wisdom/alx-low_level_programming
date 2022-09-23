#include "main.h"

/**
 * string_toupper - Change all lowercase letters of a string to uppercase
 *
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *)
{
	int index = 0;

	while (*[index])
	{
		if (*[index] >= 'a' && *[index] <= 'z')
			*[index] -= 32;

		index++;
	}

	return (*);
}
