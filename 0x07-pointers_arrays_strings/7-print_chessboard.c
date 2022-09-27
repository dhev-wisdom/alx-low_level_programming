#include "main.h"

/**
 * print_chessboard - Function that prints cheeseboard
 * @a: The array of cheeseboard characters.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 7; j++)
		{
			_putchar(a[i][j];
		}
		_putchar('\n');
	}
}
