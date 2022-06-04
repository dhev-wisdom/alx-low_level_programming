#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		putchar("\n");
		x++;
	}
	return (0);
}
