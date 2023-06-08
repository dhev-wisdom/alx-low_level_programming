#include <stdio.h>

/**
 * _strncat - Entry point
 * @n: Parameter
 * @dest: dest
 * @src: src
 *
 * Return: strncat
 */

char *_strncat(char *dest, char *src, int n)
{
	char *s = "strncat";

	printf("%d\n", n);
	printf("%s\n", dest);
	printf("%s\n", src);

	return (s);
}
