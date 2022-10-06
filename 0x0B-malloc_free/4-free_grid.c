#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees two dimensional arrays of integers
 * @grid: The 2-dimensional array to be freed
 * @height: The height of te grid.
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
