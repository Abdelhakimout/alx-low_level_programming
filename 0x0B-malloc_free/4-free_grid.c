#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: Pointer to the 2-dimensional grid.
 * @height: Number of rows in the grid.
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
