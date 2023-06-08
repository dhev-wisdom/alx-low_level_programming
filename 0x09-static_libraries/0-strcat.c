#include <stdio.h>
#include "main.h"

/**
 * _strcat - Entry point
 * @dest: Parameter
 * @src: Parameter
 *
 * Return: strcat
 */

char *_strcat(char *dest, char *src)
{
	char *s = "strcat";

	printf("%s\n", dest);
	printf("%s\n", src);

	return (s);
}
