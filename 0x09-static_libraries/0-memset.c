#include <stdio.h>
#include "main.h"

/**
 * _memset - Entry point
 * @s: Parameter
 * @b: Parameter
 * @n: Parameter
 * Return: 0 on Success, 1 on Failure
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *m = "memset";

	printf("%s\n", s);
	printf("%c\n", b);
	printf("%d\n", n);

	return (m);
}
