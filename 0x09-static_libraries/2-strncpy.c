#include <stdio.h>

/**
 * _strncpy - Entry point
 * @n: Parameter
 * @dest: dest
 * @src: src
 *
 * Return: strncpy
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *s = "strncat";

	printf("%d\n", n);
	printf("%s\n", dest);
	printf("%s\n", src);

	return (s);
}
