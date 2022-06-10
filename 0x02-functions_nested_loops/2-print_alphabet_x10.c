#include "main.h"


/**
 * print_alphabet_x10 - Print 10 times the alphabets in lowercase
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int l_a;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (l_a = 'a'; l_a <= 'z'; l_a++)
		{
			_putchar(l_a);
		}
		_putchar('\n');
	}
}
