#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2D grid created by alloc_grid function.
 * @grid: the grid to free.
 * @height: the number of rows in the grid.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
