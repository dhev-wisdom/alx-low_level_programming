#include <stdio.h>

/**
 * _memcpy - Entry point
 * @dest: Parameter
 * @src: src
 * @n: n
 *
 * Return: 0 on Success, 1 on Failure
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *m = "memcpy";

	printf("%d\n", n);
	printf("%s\n", dest);
	printf("%s\n", src);

	return (m);
}
