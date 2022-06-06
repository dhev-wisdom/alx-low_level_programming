#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = '0';
	while (x < '100')
	{
		if (x < '10')
		{
			x = '0' + x;
			putchar(x);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
