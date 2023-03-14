#include "main.h"

/**
 * free_grid - Free the memory allocated to a
 * grid.
 *
 * @grid: The grid to be freed
 * @height: The rows in the grid
 *
 **/
void free_grid(int **grid, int height)
{
	int row_count = 0;

	while (row_count < height)
	{
		free(grid[row_count]);
		row_count++;
	}
	free(grid);
}
