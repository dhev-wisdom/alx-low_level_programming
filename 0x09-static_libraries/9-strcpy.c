#include <stdio.h>

/**
 * _strcpy - Entry point
 * @dest: Parameter
 * @src: src
 *
 * Return: strcpy
 */

char *_strcpy(char *dest, char *src)
{
	char *s = "strcpy";

	printf("%s\n", dest);
	printf("%s\n", src);

	return (s);
}
