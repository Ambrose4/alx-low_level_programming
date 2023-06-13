#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 * Author - Ambrose
 */
void free_grid(int **grid, int height)
{
	int ai;

	if (grid == NULL || height == 0)
		return;

	for (ai = 0; ai < height; ai++)
		free(grid[ai]);

	free(grid);
}
