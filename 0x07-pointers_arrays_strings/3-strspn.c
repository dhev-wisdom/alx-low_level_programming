#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: The string
 * @accept: The prefix
 *
 * Return: The number of bytes of initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result++;
				break;
			}
		}
		if (s[j] == '\0')
			return (result);
	}

	return (result);
}
