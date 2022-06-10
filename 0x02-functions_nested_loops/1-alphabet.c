#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Entry point
 *
 * Return: ALways 0.
 */
void print_alphabet(int n)
{
	while(n <= 'z')
	{
		putchar(n);
		n++;
	}
	printf('\n');
	return (0);
}
