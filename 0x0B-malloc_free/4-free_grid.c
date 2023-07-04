#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free the grid
 * @grid: pointer to the grid to be freed
 * @height: height of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
