#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter, lowercase or uppercase
 *
 * @c: the integer to print
 *
 * Return: Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c <= 65 && c >= 90))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
