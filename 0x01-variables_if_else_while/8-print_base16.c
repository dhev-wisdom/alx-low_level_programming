#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	x = '0';
	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	y = 'a';
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
