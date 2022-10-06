#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integera with each element initialized to 0
 * @width: The width of the 2-dimensional array
 * @height: The height of the 2-dimensional array
 *
 * Return: if width <= 0, height <= 0, or the function fails - NULL.
 * Otherwise, a pointer to the 2-dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **twoD;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		twoD[h_index] = malloc(sizeof(int ) * width);

		if (twoD[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(twoD[h_index]);

			free(twoD);
			return (NULL);
		}
	}

	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			twoD[h_index][w_index] = 0;
	}

	return (twoD);
}
