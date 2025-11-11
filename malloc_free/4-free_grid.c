#include "main.h"
#include <stdlib.h>

/**
 * free_grid - returns a 2D array of integers
 * @grid: the grid to be released
 * @height: number of lines
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
