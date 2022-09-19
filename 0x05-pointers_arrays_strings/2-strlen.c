#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @str: The string to return the length.
 *
 * Return: The length of @str
 */

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
	{
		length++;
	}

	return (length);
}
