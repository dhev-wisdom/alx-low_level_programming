#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char str[] = "Expext the best. Prepare for the worst";
	char *p;

	p = leet(str);
	printf("%s", p);
	printf("%s", str);
	return (0);
}
