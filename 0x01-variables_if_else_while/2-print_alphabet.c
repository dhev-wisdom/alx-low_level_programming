#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowLetter;

	lowLetter = 'a';
	while (lowLetter <= 'z')
	{
		putchar("%d\n", lowLetter);
		lowLetter++;
	}
	return (0);
}
