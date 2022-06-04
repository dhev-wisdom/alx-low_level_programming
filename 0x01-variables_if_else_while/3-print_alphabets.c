#include <stdio.h>
/**
 * main -Entry point
 *
 * Retrun: Always 0 (Success)
 */
int main(void)
{
	int x;

	int upperX;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	upperX = 'A';
	while (upperX <= 'Z')
	{
		putchar(upperX);
		upperX++;
	}
	putchar('\n');
	return (0);
}
