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
	while (x <= '9')
	{
		if (x != '9')
		{
			putchar(x);
			putchar(',');
			putchar(' ');
			x++;
		}
		else
		{
			putchar(x);
			x++;
		}
	}
	return (0);
}
