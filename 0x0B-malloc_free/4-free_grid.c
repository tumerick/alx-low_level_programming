#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created
 * by the `alloc_grid` function.
 *
 * @grid: pointer to the 2D grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
