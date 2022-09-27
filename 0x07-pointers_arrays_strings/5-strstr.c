#include "main.h"

/**
 * _strstr - Finds the first occurence of the substring @needle
 * in the string @haystack
 *
 * @haystack: The main string to be searched.
 * @needle: The substring
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (strlen(needle) == 0)
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == haystack[i])
			{
				if (needle[j + 1] == haystack[i + 1])
					return (needle + 1);
			}
		}
	}

	return (needle + 1);
}
